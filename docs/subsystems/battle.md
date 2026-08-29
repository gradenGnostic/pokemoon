# Battle

- Main battle behavior is largely modular (`Battle.cro`, 1.3 MiB) and should be
  imported/link-analyzed separately before typing capture internals.
- Static anchors include `RequestFieldCapture` (`0x00397684`),
  `OpenPokemonCapture` (`0x003C42A0`), and `ClosePokemonCapture`
  (`0x003C4394`).
- AlolanCTRPluginFramework battle names are semantic plugin labels unless a CTR
  export independently confirms them.
