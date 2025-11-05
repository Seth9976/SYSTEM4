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

//bool ADVEngine_Load(struct string *FunctionName);
//void ADVEngine_Release(void);
//int ADVEngine_NumofFunctionName(void);
//void ADVEngine_GetFunctionName(struct string **FunctionName, int Index);
//bool ADVEngine_AnalyseIf(struct string *FunctionName);
//int ADVEngine_NumofIf(struct string *FunctionName);
//void ADVEngine_GetIf(struct string **If, struct string *FunctionName, int Index);
//bool ADVEngine_AnalyseFunction(struct string *FunctionName, struct string *IfData);
//int ADVEngine_NumofStep(struct string *FunctionName);
//void ADVEngine_GetStepText(struct string **Text, struct string *FunctionName, int Step);
//void ADVEngine_OpenFunctionFile(struct string *FunctionName, int Step);
//int ADVEngine_GetCodeType(struct string *FunctionName, int Step);
//void ADVEngine_GetMessage(struct string **Message, struct string *FunctionName, int Step);
//bool ADVEngine_BindFunction(struct string *FunctionName, int Step);
//void ADVEngine_GetFuncName(struct string **FuncName, struct string *FunctionName, int Step);
//int ADVEngine_CreateDelegateObjectID(struct string *FunctionName, int Step);
//bool ADVEngine_GetArgumentValue_int(int *Value, struct string *FunctionName, int Step, int Index);
//bool ADVEngine_GetArgumentValue_float(float *Value, struct string *FunctionName, int Step, int Index);
//bool ADVEngine_GetArgumentValue_bool(int *Value, struct string *FunctionName, int Step, int Index);
//bool ADVEngine_GetArgumentValue_string(struct string **Value, struct string *FunctionName, int Step, int Index);

HLL_LIBRARY(ADVEngine,
	    HLL_TODO_EXPORT(Load, ADVEngine_Load),
	    HLL_TODO_EXPORT(Release, ADVEngine_Release),
	    HLL_TODO_EXPORT(NumofFunctionName, ADVEngine_NumofFunctionName),
	    HLL_TODO_EXPORT(GetFunctionName, ADVEngine_GetFunctionName),
	    HLL_TODO_EXPORT(AnalyseIf, ADVEngine_AnalyseIf),
	    HLL_TODO_EXPORT(NumofIf, ADVEngine_NumofIf),
	    HLL_TODO_EXPORT(GetIf, ADVEngine_GetIf),
	    HLL_TODO_EXPORT(AnalyseFunction, ADVEngine_AnalyseFunction),
	    HLL_TODO_EXPORT(NumofStep, ADVEngine_NumofStep),
	    HLL_TODO_EXPORT(GetStepText, ADVEngine_GetStepText),
	    HLL_TODO_EXPORT(OpenFunctionFile, ADVEngine_OpenFunctionFile),
	    HLL_TODO_EXPORT(GetCodeType, ADVEngine_GetCodeType),
	    HLL_TODO_EXPORT(GetMessage, ADVEngine_GetMessage),
	    HLL_TODO_EXPORT(BindFunction, ADVEngine_BindFunction),
	    HLL_TODO_EXPORT(GetFuncName, ADVEngine_GetFuncName),
	    HLL_TODO_EXPORT(CreateDelegateObjectID, ADVEngine_CreateDelegateObjectID),
	    HLL_TODO_EXPORT(GetArgumentValue_int, ADVEngine_GetArgumentValue_int),
	    HLL_TODO_EXPORT(GetArgumentValue_float, ADVEngine_GetArgumentValue_float),
	    HLL_TODO_EXPORT(GetArgumentValue_bool, ADVEngine_GetArgumentValue_bool),
	    HLL_TODO_EXPORT(GetArgumentValue_string, ADVEngine_GetArgumentValue_string)
	    );
