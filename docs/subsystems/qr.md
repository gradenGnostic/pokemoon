# QR

- `0x003CD8A4`: `NetApp::QR::QRUtility::AnalyzeQRBinaryForApp`.
- `0x0043DA80`: `Savedata::QRReaderSaveData::BatteryQuery`; charge byte at
  `this+0x0A`, timestamp at `+0x168`.
- `0x004A7008`: `Savedata::QRReaderSaveData::IsRegisteredData`; checks up to ten
  32-byte registered hashes starting at `this+0x18`.
- `0x00358E40`: `gfl2::math::Crc::Crc16`.
- `0x003CD558`: validated decryption-related function, deliberately kept as a
  behavior anchor because `DecryptQRCode` is a researcher semantic name.
