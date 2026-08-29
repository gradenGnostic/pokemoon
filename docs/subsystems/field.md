# Field and Movement

- Validated patch sites: `0x0039D140` and `0x0039D274`.
- Both original instructions are BL calls to `0x004170E4`, recovered as
  `poke_3d::model::BaseModel::SetPosition`.
- This confirms movement/position behavior, not a collision-manager identity.
- Relevant recovered names include `CollisionModel` at `0x0036CE0C` and
  `GetMotionCollision` at `0x00435540`; no relationship is yet proven.
