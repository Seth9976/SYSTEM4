/* Copyright (C) 2025 (INSERT YOUR NAME)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://gnu.org/licenses/>.
 */

#include "hll.h"

//bool IbisInputEngine_Mouse_GetPos(int *pX, int *pY);
//bool IbisInputEngine_Mouse_MovePosImmediately(int X, int Y);
//bool IbisInputEngine_Mouse_HideCursorByGame(bool Hide);
//bool IbisInputEngine_Mouse_IsHideCursorByGame(void);
//void IbisInputEngine_Mouse_HideByStepMessage(void);
//void IbisInputEngine_MouseWheel_ClearCount(void);
//void IbisInputEngine_MouseWheel_GetCount(int *pForward, int *pBack);
//bool IbisInputEngine_Key_IsDown(int KeyCode);
//void IbisInputEngine_Joystick_ClearCaptureFlag(void);
//int IbisInputEngine_Joystick_GetNumofDevice(void);
//bool IbisInputEngine_Joystick_IsKeyDown(int DeviceNumber, int JoystickCode);
//float IbisInputEngine_Joystick_GetAxis(int DeviceNumber, int AxisType);

HLL_LIBRARY(IbisInputEngine,
	    HLL_TODO_EXPORT(Mouse_GetPos, IbisInputEngine_Mouse_GetPos),
	    HLL_TODO_EXPORT(Mouse_MovePosImmediately, IbisInputEngine_Mouse_MovePosImmediately),
	    HLL_TODO_EXPORT(Mouse_HideCursorByGame, IbisInputEngine_Mouse_HideCursorByGame),
	    HLL_TODO_EXPORT(Mouse_IsHideCursorByGame, IbisInputEngine_Mouse_IsHideCursorByGame),
	    HLL_TODO_EXPORT(Mouse_HideByStepMessage, IbisInputEngine_Mouse_HideByStepMessage),
	    HLL_TODO_EXPORT(MouseWheel_ClearCount, IbisInputEngine_MouseWheel_ClearCount),
	    HLL_TODO_EXPORT(MouseWheel_GetCount, IbisInputEngine_MouseWheel_GetCount),
	    HLL_TODO_EXPORT(Key_IsDown, IbisInputEngine_Key_IsDown),
	    HLL_TODO_EXPORT(Joystick_ClearCaptureFlag, IbisInputEngine_Joystick_ClearCaptureFlag),
	    HLL_TODO_EXPORT(Joystick_GetNumofDevice, IbisInputEngine_Joystick_GetNumofDevice),
	    HLL_TODO_EXPORT(Joystick_IsKeyDown, IbisInputEngine_Joystick_IsKeyDown),
	    HLL_TODO_EXPORT(Joystick_GetAxis, IbisInputEngine_Joystick_GetAxis)
	    );
