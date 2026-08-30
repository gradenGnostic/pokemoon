# Platform dependencies

Phase 3 records portability boundaries but does not implement a PC port.

| Category | Current status | Evidence policy |
|---|---|---|
| Filesystem | Inventory pending | Tag confirmed `nn::fs` and gfl2 filesystem calls |
| Threads | Inventory pending | Tag confirmed thread creation and lifecycle calls |
| Synchronization | Inventory pending | Tag mutex, event, semaphore, and critical-section calls |
| Input | Inventory pending | Tag HID and game-input adapters |
| Graphics | Inventory pending | Tag `nngx`, rendering-engine, and display calls |
| Audio | Inventory pending | Tag sound archive, mixer, and device calls |
| Networking | Inventory pending | Tag SOC, NEX, local wireless, and HTTP calls |
| Camera | Inventory pending | Tag camera service and QR capture calls |
| 3DS services | Inventory pending | Tag direct service and SVC dependencies |
| Memory allocation | Partially identified | Runtime allocator and operator wrappers are classified as `RUNTIME` |

`analysis/functions.csv` supplies the initial `SDK`, `GFL2`, `RUNTIME`, `GAME`,
and `UNKNOWN` function-family tags. These lexical tags are scheduling aids and
must be confirmed from calls and raw ARM before they become port requirements.
