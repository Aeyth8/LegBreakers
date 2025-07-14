# QA

## What is LegBreakers?

LegBreakers is just *another* game revival project for **Byte Breakers**, a multiplayer 2D platform battle-royale, with the gameplay core assimilating the similarity of **Super Smash Bros**.

The goal is to restore the game to its original form and preserve it, allowing fans and the like to play the game as if it were still being officially supported.

## How does this project restore the game?

**Simple Explanation:** 

I reverse engineer the game, my code hacks the game which doesn't work anymore, my code fixes the broken bits and controls it to work how I see fit.

**Technical Explanation:**

The program is a proxy DLL, which is directly sideloaded <sub><sup>*("injected")*</sup></sub> into the game- by the game. 

*It's like a Trojan but used for good.*

The DLL itself has the SDK dumped from the game, where it can communicate via blueprint functions/etc and do most of the normal logic.

However a lot of things still need to be modified from outside of the SDK, *(for example SnapNet)* which is where decompiling the game binaries and hooking come into place.

Hooking is memory manipulation, essentially changing the original function call to ``jmp`` to our own custom logic, where we may return back to the original function if desired. <sub><sup>**;Trampoline (computing)**</sub></sup>

By hooking any/all functions that affect the game being playable and replacing it with my custom logic I can fully restore the game to its original form.

## I don't have the game anymore/I never downloaded it

No problem! I have uploaded the game build to [Archive.org](https://archive.org/details/bytebreakers)

## Is the project finished/ready for use?

No. I have been working on this project on the occasion, but due to the overwhelming amount of projects that are from the fault of my own; In addition to the learning curve I am still facing, it will take time.

### (3/28/2025) 
The game is currently playable in practice mode with the latest release for offline, the DLL currently doesn't do much besides hook some native Unreal Engine functions and hook a ~~worthless~~ bool function which is called in ``SnapNetCore.dll``. 

The function originates from a proprietary software library (SnapNet) the developers used which checks for a license, *(that has since expired)* preventing the game from starting even the practice room.

Multiplayer is possible from starting a listen server through various workarounds (since the game clearly has a passion for crashing) however doing so will not currently benefit the player, as the replication is local.

* The players cannot see each other, only the server player is visible.
* The server cannot visibly see the players, although the playercontrollers are replicated.
* The clients are not initialized to a valid team, they are set to team 0, which is where I suspect lies the root of the problem.
* NPCs are also locally replicated, with only server-spawned NPCs being visible globally. (They cannot be attacked by a client)    
