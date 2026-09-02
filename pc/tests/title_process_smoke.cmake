if(NOT DEFINED POKEMOON_PROGRAM)
    message(FATAL_ERROR "POKEMOON_PROGRAM is required")
endif()

execute_process(
    COMMAND "${POKEMOON_PROGRAM}" --frames 120 --no-sleep --headless
    RESULT_VARIABLE result
    OUTPUT_VARIABLE output
    ERROR_VARIABLE error
)

set(log "${output}${error}")
if(NOT result EQUAL 0)
    message(FATAL_ERROR "Title process smoke failed (${result}):\n${log}")
endif()

set(previous_position -1)
foreach(marker
        "TITLE_PROCESS_SELECTED"
        "TITLE_INIT_ENTER"
        "TITLE_RESOURCE_REQUEST=TitleMenu.cro"
        "TITLE_INIT_READY"
        "TITLE_MAIN_ENTER"
        "TITLE_DRAW_REACHED"
        "TITLE_FRAME=120"
        "host update frames: 120")
    string(FIND "${log}" "${marker}" marker_position)
    if(marker_position EQUAL -1)
        message(FATAL_ERROR "Missing ${marker}:\n${log}")
    endif()
    if(marker_position LESS_EQUAL previous_position)
        message(FATAL_ERROR "Marker out of order: ${marker}")
    endif()
    set(previous_position ${marker_position})
endforeach()

set(previous_frame_position -1)
foreach(frame RANGE 1 120)
    string(FIND "${log}" "TITLE_FRAME=${frame}" frame_position)
    if(frame_position LESS_EQUAL previous_frame_position)
        message(FATAL_ERROR "Missing or non-monotonic TITLE_FRAME=${frame}")
    endif()
    set(previous_frame_position ${frame_position})
endforeach()

string(REGEX MATCHALL "TITLE_PROCESS_SELECTED" selected_markers "${log}")
list(LENGTH selected_markers selected_count)
if(NOT selected_count EQUAL 1)
    message(FATAL_ERROR "TITLE_PROCESS_SELECTED appeared ${selected_count} times")
endif()
