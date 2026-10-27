# About `poke-jf`

This is my personal repository for my solo ROMhack project. Currently in the process of importing progress over from a less maintained version of the project, to be cleaned up for properly maintaining this long-term alongside pret and rh-hideout's development progress. More details to come!

# Release Information

```
 [rh-hideout/pokeemerald-expansion]
 ⠀⠀        ⠀⠀⠀⠀⠀│
 ⠀⠀        ⠀⠀⠀ master
 ⠀⠀        ⠀⠀⠀⠀⠀│
 ⠀⠀        ⠀⠀⠀⠀base
 ⠀        ⠀⠀⠀⠀⠀⠀├────────┬──────────────┐
 ⠀⠀⠀        ⠀⠀⠀⠀│⠀⠀⠀⠀feature/X⠀⠀⠀⠀asset/Y
 ⠀⠀        ⠀⠀⠀⠀⠀│
 ⠀⠀⠀        ⠀⠀⠀main
 ⠀⠀⠀        ⠀⠀⠀⠀│
 ⠀⠀⠀        ⠀release/x.y.z
 ⠀⠀        ⠀⠀⠀⠀⠀├───────────┐
 ⠀⠀⠀        ⠀⠀x.y.z/X⠀⠀⠀x.y.z/Y
 ```
 
> - __**master**__: direct fork, local snapshot of `rh-hideout/pokeemerald-expansion` used for updating
> - __**base**__: branched off `master`, mainly a vanilla emerald expansion ROM with additional custom assets and scripts
> - __**feature/xx**__ and __**asset/xx**__: development branches on individual baseline changes on top of the base ROM
> - __**main**__: Contains the most up-to-date development version of the ROM, with all game content (story, gameplay, etc.) altered from the original Emerald ROM
> - __**release/x.y.z**__: stable release "versions" just to track changes or break up a release logically. Major `x` versions reserved for "demo" releases, while minor `y` versions contain significant changes within a release.

# ROM base - `pokeemerald-expansion`

![Gif that shows debugging functionality that is unique to pokeemerald-expansion such as rerolling Trainer ID, Cheat Start, PC from Debug Menu, Debug PC Fill, Pokémon Sprite Visualizer, Debug Warp to Map, and Battle Debug Menu](https://github.com/user-attachments/assets/cf9dfbee-4c6b-4bca-8e0a-07f116ef891c) ![Gif that shows overworld functionality that is unique to pokeemerald-expansion such as indoor running, BW2 style map popups, overworld followers, DNA Splicers, Gen 1 style fishing, OW Item descriptions, Quick Run from Battle, Use Last Ball, Wild Double Battles, and Catch from EXP](https://github.com/user-attachments/assets/383af243-0904-4d41-bced-721492fbc48e) ![Gif that shows off a number of modern Pokémon battle mechanics happening in the pokeemerald-expansion engine: 2 vs 1 battles, modern Pokémon, items, moves, abilities, fully customizable opponents and partners, Trainer Slides, and generational gimmicks](https://github.com/user-attachments/assets/50c576bc-415e-4d66-a38f-ad712f3316be)

<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokeemerald-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. **`pokeemerald-expansion`** is built on top of [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project. [**More detailed information on its features, as well as contributors for added assets and scripting, can be found in the main repository.**](https://github.com/rh-hideout/pokeemerald-expansion)