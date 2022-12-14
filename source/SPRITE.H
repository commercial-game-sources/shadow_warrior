//-------------------------------------------------------------------------
/*
Copyright (C) 1997, 2005 - 3D Realms Entertainment

This file is part of Shadow Warrior version 1.2

Shadow Warrior is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Original Source: 1997 - Frank Maddin and Jim Norwood
Prepared for public release: 03/28/2005 - Charlie Wiederhold, 3D Realms
*/
//-------------------------------------------------------------------------

#ifndef SPRITE_H

#define SPRITE_H

VOID KillSprite(SHORT SpriteNum);
SHORT SpawnSprite(short stat, short id, STATEp state, short sectnum, int x, int y, int z, int ang, int vel);
VOID SpriteSetup(VOID);
int move_actor(short SpriteNum, long xchange, long ychange, long zchange);
short GetSpriteDir(short sn);
short GetDirToPlayer(short sn);
short PlayerInVision(short sn, short view_deg);
short PlayerVisible(short sn);
short SpriteLookSector(short SpriteNum, short range);
short SpriteCanGoForward(short SpriteNum, short range);
void  SpriteFindNewDirection(short SpriteNum, short range);
int DoWalk(short SpriteNum);
int DoBody(short SpriteNum);
BOOL CanMoveHere(SHORT spritenum);
BOOL SpriteOverlap(SHORT spritenum_a, SHORT spritenum_b);
int DoActorDie(short SpriteNum, short weapon);
int DoGet(short SpriteNum);
VOID SpriteControl(VOID);

#endif