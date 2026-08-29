# Game Manager

- `0x001048B4`: `gfl2::base::SingletonAccessor<GameSys::GameManager>::GetInstance`.
- `0x003F3B30`: `GameSys::GameProc::GetGameManager`, returning
  `*(this->field_1C + 0x14)`.
- Patch research traverses singleton `+0x24 -> +0x04`; validate this object
  graph before defining a `GameManager` structure.
