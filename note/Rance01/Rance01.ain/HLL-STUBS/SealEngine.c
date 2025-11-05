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

//int SealEngine_CreatePlugin(void);
//bool SealEngine_ReleasePlugin(int nHandle);
//int SealEngine_GetNumofPlugin(void);
//bool SealEngine_IsExistPlugin(int PluginNumber);
//bool SealEngine_BindPlugin(int nHandle, int nSprite);
//bool SealEngine_UnbindPlugin(int nHandle);
//bool SealEngine_BuildModel(int nPlugin, int nPassTime);
//int SealEngine_CreateInstance(int nPlugin);
//bool SealEngine_ReleaseInstance(int nPlugin, int nInstance);
//bool SealEngine_LoadInstance(int nPlugin, int nInstance, struct string *pIName);
//bool SealEngine_SaveInstance(int PluginNumber, int InstanceNumber, struct string *FileName);
//bool SealEngine_IsExistInstanceData(int PluginNumber, int InstanceNumber, struct string *FileName);
//bool SealEngine_GetInstanceName(int PluginNumber, int InstanceNumber, struct string **pIName);
//bool SealEngine_SetInstanceType(int nPlugin, int nInstance, int nType);
//bool SealEngine_SetInstancePos(int nPlugin, int nInstance, float fX, float fY, float fZ);
//bool SealEngine_GetInstancePos(int PluginNumber, int InstanceNumber, float *pX, float *pY, float *pZ);
//bool SealEngine_SetInstanceVector(int nPlugin, int nInstance, float fX, float fY, float fZ);
//bool SealEngine_SetInstanceAngle(int nPlugin, int nInstance, float fAngle);
//bool SealEngine_SetInstanceAngleP(int nPlugin, int nInstance, float fAngleP);
//bool SealEngine_SetInstanceAngleB(int nPlugin, int nInstance, float fAngleB);
//bool SealEngine_GetInstanceAngle(int PluginNumber, int InstanceNumber, float *pAngle);
//bool SealEngine_GetInstanceAngleP(int PluginNumber, int InstanceNumber, float *pAngleP);
//bool SealEngine_GetInstanceAngleB(int PluginNumber, int InstanceNumber, float *pAngleB);
//float SealEngine_GetInstanceScaleX(int nPlugin, int nInstance);
//float SealEngine_GetInstanceScaleY(int nPlugin, int nInstance);
//float SealEngine_GetInstanceScaleZ(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceScaleX(int nPlugin, int nInstance, float fScaleX);
//bool SealEngine_SetInstanceScaleY(int nPlugin, int nInstance, float fScaleY);
//bool SealEngine_SetInstanceScaleZ(int nPlugin, int nInstance, float fScaleZ);
//bool SealEngine_SetInstanceZBias(int nPlugin, int nInstance, float fZBias);
//float SealEngine_GetInstanceZBias(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceVertexPos(int nPlugin, int nInstance, int nIndex, float fX, float fY, float fZ);
//bool SealEngine_SetInstanceVertexUV(int PluginNumber, int InstanceNumber, int Index, float U, float V);
//bool SealEngine_SetInstanceDiffuse(int nPlugin, int nInstance, float fR, float fG, float fB);
//bool SealEngine_GetInstanceDiffuse(int PluginNumber, int InstanceNumber, float *pR, float *pG, float *pB);
//bool SealEngine_SetInstanceAmbient(int nPlugin, int nInstance, float fR, float fG, float fB);
//bool SealEngine_GetInstanceAmbient(int PluginNumber, int InstanceNumber, float *pR, float *pG, float *pB);
//bool SealEngine_SetInstanceGlobeDiffuse(int nPlugin, int nInstance, float fR, float fG, float fB);
//bool SealEngine_SetInstanceSpecular(int nPlugin, int nInstance, float fSpecular);
//bool SealEngine_SetInstanceAlpha(int nPlugin, int nInstance, float fAlpha);
//bool SealEngine_GetInstanceAlpha(int PluginNumber, int InstanceNumber, float *Alpha);
//bool SealEngine_SetInstanceGrayscaleRate(int PluginNumber, int InstanceNumber, float GrayscaleRate);
//bool SealEngine_GetInstanceGrayscaleRate(int PluginNumber, int InstanceNumber, float *GrayscaleRate);
//bool SealEngine_SetInstanceAttenuationNear(int nPlugin, int nInstance, float fNear);
//bool SealEngine_SetInstanceAttenuationFar(int nPlugin, int nInstance, float fFar);
//bool SealEngine_SetInstanceDraw(int nPlugin, int nInstance, bool bFlag);
//bool SealEngine_SetInstanceDrawShadow(int nPlugin, int nInstance, bool bFlag);
//bool SealEngine_SetInstanceDrawBackShadow(int nPlugin, int nInstance, bool bFlag);
//bool SealEngine_SetInstanceDrawMakeShadow(int nPlugin, int nInstance, bool bFlag);
//bool SealEngine_SetInstanceDrawBump(int nPlugin, int nInstance, bool bFlag);
//bool SealEngine_GetInstanceDraw(int nPlugin, int nInstance);
//bool SealEngine_GetInstanceDrawShadow(int nPlugin, int nInstance);
//bool SealEngine_GetInstanceDrawBackShadow(int nPlugin, int nInstance);
//bool SealEngine_GetInstanceDrawMakeShadow(int nPlugin, int nInstance);
//bool SealEngine_GetInstanceDrawBump(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceDrawParam(int PluginNumber, int InstanceNumber, int DrawParam, int Value);
//bool SealEngine_GetInstanceDrawParam(int PluginNumber, int InstanceNumber, int DrawParam, int *Value);
//bool SealEngine_LoadInstanceMotion(int nPlugin, int nInstance, struct string *Name);
//int SealEngine_GetInstanceMotionState(int nPlugin, int nInstance);
//float SealEngine_GetInstanceMotionFrame(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceMotionState(int nPlugin, int nInstance, int nState);
//bool SealEngine_SetInstanceMotionFrame(int nPlugin, int nInstance, float fFrame);
//bool SealEngine_SetInstanceMotionFrameRange(int nPlugin, int nInstance, float fBeginFrame, float fEndFrame);
//bool SealEngine_SetInstanceMotionLoopFrameRange(int nPlugin, int nInstance, float fBeginFrame, float fEndFrame);
//bool SealEngine_LoadInstanceNextMotion(int nPlugin, int nInstance, struct string *Name);
//bool SealEngine_SetInstanceNextMotionState(int nPlugin, int nInstance, int nState);
//bool SealEngine_SetInstanceNextMotionFrame(int nPlugin, int nInstance, float fFrame);
//bool SealEngine_SetInstanceNextMotionFrameRange(int nPlugin, int nInstance, float fBeginFrame, float fEndFrame);
//bool SealEngine_SetInstanceNextMotionLoopFrameRange(int nPlugin, int nInstance, float fBeginFrame, float fEndFrame);
//bool SealEngine_SetInstanceMotionBlendRate(int nPlugin, int nInstance, float fRate);
//bool SealEngine_SetInstanceMotionBlend(int nPlugin, int nInstance, bool bMotionBlend);
//bool SealEngine_IsInstanceMotionBlend(int nPlugin, int nInstance);
//bool SealEngine_GetInstanceMotionBlendPutTime(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceMotionBlendPutTime(int nPlugin, int nInstance, bool bFlag);
//bool SealEngine_SwapInstanceMotion(int nPlugin, int nInstance);
//bool SealEngine_FreeInstanceNextMotion(int nPlugin, int nInstance);
//int SealEngine_GetInstanceNumofMaterial(int nPlugin, int nInstance);
//bool SealEngine_GetInstanceMaterialName(int nPlugin, int nInstance, int nNum, struct string **pIName);
//float SealEngine_GetInstanceMaterialParam(int nPlugin, int nInstance, int nMaterial, int nType);
//bool SealEngine_SetInstanceMaterialParam(int nPlugin, int nInstance, int nMaterial, int nType, float fParam);
//bool SealEngine_SaveInstanceAddMaterialData(int nPlugin, int nInstance);
//bool SealEngine_SetInstancePointPos(int nPlugin, int nInstance, int nIndex, float fX, float fY, float fZ);
//bool SealEngine_GetInstancePointPos(int nPlugin, int nInstance, int nIndex, float *pfX, float *pfY, float *pfZ);
//bool SealEngine_GetInstanceColumnPos(int nPlugin, int nInstance, float *fX, float *fY, float *fZ);
//float SealEngine_GetInstanceColumnHeight(int nPlugin, int nInstance);
//float SealEngine_GetInstanceColumnRadius(int nPlugin, int nInstance);
//float SealEngine_GetInstanceColumnAngle(int nPlugin, int nInstance);
//float SealEngine_GetInstanceColumnAngleP(int nPlugin, int nInstance);
//float SealEngine_GetInstanceColumnAngleB(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceColumnPos(int nPlugin, int nInstance, float fX, float fY, float fZ);
//bool SealEngine_SetInstanceColumnHeight(int nPlugin, int nInstance, float fHeight);
//bool SealEngine_SetInstanceColumnRadius(int nPlugin, int nInstance, float fRadius);
//bool SealEngine_SetInstanceColumnAngle(int nPlugin, int nInstance, float fAngle);
//bool SealEngine_SetInstanceColumnAngleP(int nPlugin, int nInstance, float fAngleP);
//bool SealEngine_SetInstanceColumnAngleB(int nPlugin, int nInstance, float fAngleB);
//bool SealEngine_GetInstanceDrawColumn(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceDrawColumn(int nPlugin, int nInstance, bool bDraw);
//bool SealEngine_SetInstanceTarget(int nPlugin, int nInstance, int nIndex, int nTarget);
//int SealEngine_GetInstanceTarget(int nPlugin, int nInstance, int nIndex);
//float SealEngine_GetInstanceFPS(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceFPS(int nPlugin, int nInstance, float fFPS);
//int SealEngine_GetInstanceNumofBone(int PluginNumber, int InstanceNumber);
//bool SealEngine_GetInstanceBoneName(int PluginNumber, int InstanceNumber, int BoneIndex, struct string **pIName);
//bool SealEngine_GetInstanceBoneParentIndex(int PluginNumber, int InstanceNumber, int BoneIndex, int *pParentBoneIndex);
//int SealEngine_GetInstanceBoneIndex(int nPlugin, int nInstance, struct string *pIName);
//bool SealEngine_TransInstanceLocalPosToWorldPosByBone(int nPlugin, int nInstance, int nBone, float fOffsetX, float fOffsetY, float fOffsetZ, float *pfX, float *pfY, float *pfZ);
//bool SealEngine_SaveBoneFile(int PluginNumber, int InstanceNumber);
//bool SealEngine_IsBoneCanIK(int PluginNumber, int InstanceNumber, int BoneIndex);
//bool SealEngine_SetBoneCanIK(int PluginNumber, int InstanceNumber, int BoneIndex, bool CanIK);
//bool SealEngine_GetBoneEulerAngle(int PluginNumber, int InstanceNumber, int BoneIndex, float *pEulerAngleP, float *pEulerAngleH, float *pEulerAngleB);
//bool SealEngine_GetBoneMinEulerAngle(int PluginNumber, int InstanceNumber, int BoneIndex, float *pEulerAngleP, float *pEulerAngleH, float *pEulerAngleB);
//bool SealEngine_GetBoneMaxEulerAngle(int PluginNumber, int InstanceNumber, int BoneIndex, float *pEulerAngleP, float *pEulerAngleH, float *pEulerAngleB);
//bool SealEngine_SetBoneMinEulerAngle(int PluginNumber, int InstanceNumber, int BoneIndex, float EulerAngleP, float EulerAngleH, float EulerAngleB);
//bool SealEngine_SetBoneMaxEulerAngle(int PluginNumber, int InstanceNumber, int BoneIndex, float EulerAngleP, float EulerAngleH, float EulerAngleB);
//bool SealEngine_SetBoneMass(int PluginNumber, int InstanceNumber, int BoneIndex, float Mass);
//bool SealEngine_SetBoneAirResistance(int PluginNumber, int InstanceNumber, int BoneIndex, float AirResistance);
//bool SealEngine_SetBoneRestitutionCoefficient(int PluginNumber, int InstanceNumber, int BoneIndex, float RestitutionCoefficient);
//float SealEngine_GetBoneMass(int PluginNumber, int InstanceNumber, int BoneIndex);
//float SealEngine_GetBoneAirResistance(int PluginNumber, int InstanceNumber, int BoneIndex);
//float SealEngine_GetBoneRestitutionCoefficient(int PluginNumber, int InstanceNumber, int BoneIndex);
//int SealEngine_GetNumofBoneCollisionShapeList(int PluginNumber, int InstanceNumber);
//int SealEngine_GetBoneCollisionShapeType(int PluginNumber, int InstanceNumber, int Index);
//bool SealEngine_GetBoneCollisionShapePoint(int PluginNumber, int InstanceNumber, int Index, float *pX, float *pY, float *pZ);
//bool SealEngine_GetBoneCollisionShapePoint2(int PluginNumber, int InstanceNumber, int Index, float *pX, float *pY, float *pZ);
//float SealEngine_GetBoneCollisionShapeRadius(int PluginNumber, int InstanceNumber, int Index);
//int SealEngine_GetBoneCollisionShapeLinkedBoneIndex(int PluginNumber, int InstanceNumber, int Index);
//bool SealEngine_SetBoneCollisionShapeType(int PluginNumber, int InstanceNumber, int Index, int Type);
//bool SealEngine_SetBoneCollisionShapePoint(int PluginNumber, int InstanceNumber, int Index, float X, float Y, float Z);
//bool SealEngine_SetBoneCollisionShapePoint2(int PluginNumber, int InstanceNumber, int Index, float X, float Y, float Z);
//bool SealEngine_SetBoneCollisionShapeRadius(int PluginNumber, int InstanceNumber, int Index, float Radius);
//bool SealEngine_SetBoneCollisionShapeLinkedBoneIndex(int PluginNumber, int InstanceNumber, int Index, int BoneIndex);
//bool SealEngine_AddBoneCollisionShape(int PluginNumber, int InstanceNumber);
//bool SealEngine_EraseBoneCollisionShape(int PluginNumber, int InstanceNumber, int Index);
//int SealEngine_GetInstanceNumofPolygon(int nPlugin, int nInstance);
//int SealEngine_GetInstanceNumofVertex(int PluginNumber, int InstanceNumber);
//int SealEngine_GetInstanceNumofNormal(int PluginNumber, int InstanceNumber);
//int SealEngine_GetInstanceNumofMesh(int PluginNumber, int InstanceNumber);
//bool SealEngine_GetInstanceMeshName(int PluginNumber, int InstanceNumber, int MeshNumber, struct string **pIName);
//int SealEngine_GetInstanceMeshMaterialIndex(int PluginNumber, int InstanceNumber, int MeshNumber);
//int SealEngine_GetInstanceMeshMaterialID(int PluginNumber, int InstanceNumber, int MeshNumber);
//int SealEngine_GetInstanceMeshNumofPolygon(int PluginNumber, int InstanceNumber, int MeshNumber);
//bool SealEngine_IsInstanceMeshAlphaBlending(int PluginNumber, int InstanceNumber, int MeshNumber);
//int SealEngine_GetInstanceTextureMemorySize(int nPlugin, int nInstance);
//void SealEngine_GetInstanceInfoText(int nPlugin, int nInstance, struct string **pIText);
//void SealEngine_GetInstanceMaterialInfoText(int nPlugin, int nInstance, struct string **pIText);
//bool SealEngine_CalcInstanceHeightDetection(int nPlugin, int nInstance, float fX, float fZ, float *Height);
//float SealEngine_CalcInstance2DDetectionHeight(int PluginNumber, int InstanceNumber, float X, float Z);
//bool SealEngine_CalcInstance2DDetection(int PluginNumber, int InstanceNumber, float X0, float Y0, float Z0, float X1, float Y1, float Z1, float *X2, float *Y2, float *Z2, float Radius);
//bool SealEngine_FindInstancePath(int PluginNumber, int InstanceNumber, float StartX, float StartY, float StartZ, float GoalX, float GoalY, float GoalZ);
//bool SealEngine_CalcPathFinderIntersectEyeVec(int nPlugin, int nInstance, int nMouseX, int nMouseY, float *pfX, float *pfY, float *pfZ);
//bool SealEngine_OptimizeInstancePathLine(int PluginNumber, int InstanceNumber);
//bool SealEngine_GetInstancePathLine(int PluginNumber, int InstanceNumber, struct page **pIXArray, struct page **pIYArray, struct page **pIZArray);
//bool SealEngine_CreateInstancePathLineList(int PluginNumber, int InstanceNumber, int PathInstanceNumber);
//bool SealEngine_ClearLineList(int PluginNumber, int InstanceNumber);
//bool SealEngine_AddLineList(int PluginNumber, int InstanceNumber, float X0, float Y0, float Z0, int Color0, float X1, float Y1, float Z1, int Color1);
//float SealEngine_GetInstanceSoftFogEdgeLength(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceSoftFogEdgeLength(int nPlugin, int nInstance, float fLength);
//float SealEngine_GetInstanceShadowVolumeBoneRadius(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceShadowVolumeBoneRadius(int nPlugin, int nInstance, float fRadius);
//bool SealEngine_SetInstanceMeshShow(int PluginNumber, int InstanceNumber, struct string *pIMeshName, bool Show);
//bool SealEngine_LoadInstanceLightParam(int PluginNumber, int InstanceNumber);
//bool SealEngine_StoreInstanceLightParam(int PluginNumber, int InstanceNumber);
//bool SealEngine_GetInstanceDebugDrawShadowVolume(int nPlugin, int nInstance);
//bool SealEngine_SetInstanceDebugDrawShadowVolume(int nPlugin, int nInstance, bool bFlag);
//bool SealEngine_CreateInstanceDebugBoneList(int PluginNumber, int InstanceNumber, int BoneInstanceNumber, int OnCursorIndex, int SelectedIndex);
//bool SealEngine_CreateInstanceDebugBoneCollision(int PluginNumber, int InstanceNumber, int BoneInstanceNumber, int OnCursorIndex, int SelectedIndex);
//bool SealEngine_SaveEffect(int nPlugin, int nInstance);
//bool SealEngine_GetEffectFrameRange(int nPlugin, int nInstance, int *pnBeginFrame, int *pnEndFrame);
//bool SealEngine_SetCameraPos(int nPlugin, float fX, float fY, float fZ);
//bool SealEngine_SetCameraAngle(int nPlugin, float fAngle);
//bool SealEngine_SetCameraAngleP(int nPlugin, float fAngleP);
//bool SealEngine_SetCameraAngleB(int nPlugin, float fAngleB);
//bool SealEngine_GetCameraPos(int PluginNumber, float *X, float *Y, float *Z);
//bool SealEngine_GetCameraAngle(int PluginNumber, float *Angle);
//bool SealEngine_GetCameraAngleP(int PluginNumber, float *AngleP);
//bool SealEngine_GetCameraAngleB(int PluginNumber, float *AngleB);
//bool SealEngine_GetCameraXVector(int PluginNumber, float *X, float *Y, float *Z);
//bool SealEngine_GetCameraYVector(int PluginNumber, float *X, float *Y, float *Z);
//bool SealEngine_GetCameraZVector(int PluginNumber, float *X, float *Y, float *Z);
//bool SealEngine_SetDrawDOF(int PluginNumber, bool DrawDOF);
//bool SealEngine_SetDOF_L(int PluginNumber, float DOF_L);
//bool SealEngine_SetDOF_F(int PluginNumber, float DOF_F);
//bool SealEngine_SetDOF_f(int PluginNumber, float DOF_f);
//bool SealEngine_GetDrawDOF(int PluginNumber, bool *DrawDOF);
//bool SealEngine_GetDOF_L(int PluginNumber, float *DOF_L);
//bool SealEngine_GetDOF_F(int PluginNumber, float *DOF_F);
//bool SealEngine_GetDOF_f(int PluginNumber, float *DOF_f);
//float SealEngine_GetShadowBias(int nPlugin, int nNum);
//float SealEngine_GetShadowTargetDistance(int nPlugin, int nNum);
//int SealEngine_GetShadowMapResolutionLevel(int nPlugin);
//float SealEngine_GetShadowSplitDepth(int nPlugin, int nNum);
//bool SealEngine_SetShadowMapType(int nPlugin, int nType);
//bool SealEngine_SetShadowMapLightLookPos(int nPlugin, float fX, float fY, float fZ);
//bool SealEngine_SetShadowMapLightDir(int nPlugin, float fX, float fY, float fZ);
//bool SealEngine_SetShadowBox(int nPlugin, float fX, float fY, float fZ, float fSizeX, float fSizeY, float fSizeZ);
//bool SealEngine_SetShadowBias(int nPlugin, int nNum, float fShadowBias);
//bool SealEngine_SetShadowSlopeBias(int nPlugin, float fShadowSlopeBias);
//bool SealEngine_SetShadowFilterMag(int nPlugin, float fShadowFilterMag);
//bool SealEngine_SetShadowTargetDistance(int nPlugin, int nNum, float fDistance);
//bool SealEngine_SetShadowMapResolutionLevel(int nPlugin, int nLevel);
//bool SealEngine_SetShadowSplitDepth(int nPlugin, int nNum, float fDepth);
//bool SealEngine_SetFogType(int nPlugin, int nType);
//bool SealEngine_SetFogNear(int nPlugin, float fNear);
//bool SealEngine_SetFogFar(int nPlugin, float fFar);
//bool SealEngine_SetFogColor(int nPlugin, float fR, float fG, float fB);
//int SealEngine_GetFogType(int nPlugin);
//float SealEngine_GetFogNear(int nPlugin);
//float SealEngine_GetFogFar(int nPlugin);
//void SealEngine_GetFogColor(int nPlugin, float *pfR, float *pfG, float *pfB);
//bool SealEngine_SetDrawTextureFog(int nPlugin, bool bDraw);
//bool SealEngine_GetDrawTextureFog(int nPlugin);
//bool SealEngine_SetViewport(int nPlugin, int nX, int nY, int nWidth, int nHeight);
//bool SealEngine_SetProjection(int nPlugin, float fWidth, float fHeight, float fNear, float fFar, float fDeg);
//float SealEngine_GetBrightness(int nPlugin);
//bool SealEngine_SetBrightness(int nPlugin, float fBrightness);
//bool SealEngine_SetRenderMode(int nPlugin, int nMode);
//int SealEngine_GetRenderMode(int nPlugin);
//bool SealEngine_SetDrawOption(int PluginNumber, int DrawOption, int Param);
//int SealEngine_GetDrawOption(int PluginNumber, int DrawOption);
//bool SealEngine_SetShadowMode(int nPlugin, int nMode);
//bool SealEngine_SetBumpMode(int nPlugin, int nMode);
//bool SealEngine_SetHDRMode(int nPlugin, int nMode);
//bool SealEngine_SetVertexBlendMode(int nPlugin, int nMode);
//bool SealEngine_SetFogMode(int nPlugin, int nMode);
//bool SealEngine_SetSpecularMode(int nPlugin, int nMode);
//bool SealEngine_SetLightMapMode(int nPlugin, int nMode);
//bool SealEngine_SetSoftFogEdgeMode(int nPlugin, int nMode);
//bool SealEngine_SetSSAOMode(int nPlugin, int nMode);
//bool SealEngine_SetShaderPrecisionMode(int nPlugin, int nMode);
//bool SealEngine_SetShaderDebugMode(int nPlugin, int nMode);
//int SealEngine_GetShadowMode(int nPlugin);
//int SealEngine_GetBumpMode(int nPlugin);
//int SealEngine_GetHDRMode(int nPlugin);
//int SealEngine_GetVertexBlendMode(int nPlugin);
//int SealEngine_GetFogMode(int nPlugin);
//int SealEngine_GetSpecularMode(int nPlugin);
//int SealEngine_GetLightMapMode(int nPlugin);
//int SealEngine_GetSoftFogEdgeMode(int nPlugin);
//int SealEngine_GetSSAOMode(int nPlugin);
//int SealEngine_GetShaderPrecisionMode(int nPlugin);
//int SealEngine_GetShaderDebugMode(int nPlugin);
//bool SealEngine_SetDebugMode(int Plugin, int DebugModeType, int Mode);
//int SealEngine_GetDebugMode(int Plugin, int DebugModeType);
//int SealEngine_GetTextureResolutionLevel(int nPlugin);
//int SealEngine_GetTextureFilterMode(int nPlugin);
//bool SealEngine_SetTextureResolutionLevel(int nPlugin, int nLevel);
//bool SealEngine_SetTextureFilterMode(int nPlugin, int nMode);
//bool SealEngine_GetUsePower2Texture(int nPlugin);
//bool SealEngine_SetUsePower2Texture(int nPlugin, bool bUse);
//bool SealEngine_GetGlobalAmbient(int nPlugin, float *pfR, float *pfG, float *pfB);
//bool SealEngine_SetGlobalAmbient(int nPlugin, float fR, float fG, float fB);
//int SealEngine_GetBloomMode(int nPlugin);
//bool SealEngine_SetBloomMode(int nPlugin, int nMode);
//int SealEngine_GetGlareMode(int nPlugin);
//bool SealEngine_SetGlareMode(int nPlugin, int nMode);
//float SealEngine_GetPostEffectFilterY(int nPlugin);
//float SealEngine_GetPostEffectFilterCb(int nPlugin);
//float SealEngine_GetPostEffectFilterCr(int nPlugin);
//bool SealEngine_SetPostEffectFilterY(int nPlugin, float fY);
//bool SealEngine_SetPostEffectFilterCb(int nPlugin, float fCb);
//bool SealEngine_SetPostEffectFilterCr(int nPlugin, float fCr);
//bool SealEngine_GetBackCGName(int nPlugin, int nNum, struct string **pICGName);
//int SealEngine_GetBackCGNum(int nPlugin, int nNum);
//float SealEngine_GetBackCGBlendRate(int nPlugin, int nNum);
//float SealEngine_GetBackCGDestPosX(int nPlugin, int nNum);
//float SealEngine_GetBackCGDestPosY(int nPlugin, int nNum);
//float SealEngine_GetBackCGMag(int nPlugin, int nNum);
//float SealEngine_GetBackCGQuakeMag(int nPlugin, int nNum);
//bool SealEngine_GetBackCGShow(int nPlugin, int nNum);
//bool SealEngine_SetBackCGName(int nPlugin, int nNum, struct string *pICGName);
//bool SealEngine_SetBackCGNum(int nPlugin, int nNum, int nCGNum);
//bool SealEngine_SetBackCGBlendRate(int nPlugin, int nNum, float fBlendRate);
//bool SealEngine_SetBackCGDestPos(int nPlugin, int nNum, float fX, float fY);
//bool SealEngine_SetBackCGMag(int nPlugin, int nNum, float fMag);
//bool SealEngine_SetBackCGQuakeMag(int nPlugin, int nNum, float fQuakeMag);
//bool SealEngine_SetBackCGShow(int nPlugin, int nNum, bool bShow);
//float SealEngine_GetGlareBrightnessParam(int nPlugin, int nIndex);
//bool SealEngine_SetGlareBrightnessParam(int nPlugin, int nIndex, float fParam);
//float SealEngine_GetSSAOParam(int nPlugin, int nType);
//bool SealEngine_SetSSAOParam(int nPlugin, int nType, float fParam);
//bool SealEngine_CalcIntersectEyeVec(int nPlugin, int nInstance, int nMouseX, int nMouseY, float *pfX, float *pfY, float *pfZ);
//bool SealEngine_TransformPosToViewPos(int PluginNumber, float X, float Y, float Z, int *ViewX, int *ViewY);
//bool SealEngine_IsLoading(int nPlugin);
//int SealEngine_GetDebugInfoMode(int nPlugin);
//bool SealEngine_SetDebugInfoMode(int nPlugin, int nMode);
//bool SealEngine_SetInstanceSpecularReflectRate(int nPlugin, int nInstance, float fRate);
//bool SealEngine_SetInstanceFresnelReflectRate(int nPlugin, int nInstance, float fRate);
//float SealEngine_GetInstanceSpecularReflectRate(int nPlugin, int nInstance);
//float SealEngine_GetInstanceFresnelReflectRate(int nPlugin, int nInstance);
//float SealEngine_StringToFloat(struct string *pIText);
//bool SealEngine_ResetLightParam(int PluginNumber);
//bool SealEngine_SetLightParam(int PluginNumber, int Type, float Value);
//float SealEngine_GetLightParam(int PluginNumber, int Type);
//bool SealEngine_SetThreadLoadingMode(int PluginNumber, bool ThreadLoadingMode);
//bool SealEngine_IsThreadLoadingMode(int PluginNumber);
//bool SealEngine_ClearCache(int PluginNumber);
//bool SealEngine_Suspend(int PluginNumber);
//bool SealEngine_IsSuspend(int PluginNumber);
//bool SealEngine_Resume(int PluginNumber);
//bool SealEngine_GetHistogram(int PluginNumber, struct page **HistogramList);
//bool SealEngine_DrawToMainSurface(int nPlugin);
//int SealEngine_GetNumofInstance(int PluginNumber);

HLL_LIBRARY(SealEngine,
	    HLL_TODO_EXPORT(CreatePlugin, SealEngine_CreatePlugin),
	    HLL_TODO_EXPORT(ReleasePlugin, SealEngine_ReleasePlugin),
	    HLL_TODO_EXPORT(GetNumofPlugin, SealEngine_GetNumofPlugin),
	    HLL_TODO_EXPORT(IsExistPlugin, SealEngine_IsExistPlugin),
	    HLL_TODO_EXPORT(BindPlugin, SealEngine_BindPlugin),
	    HLL_TODO_EXPORT(UnbindPlugin, SealEngine_UnbindPlugin),
	    HLL_TODO_EXPORT(BuildModel, SealEngine_BuildModel),
	    HLL_TODO_EXPORT(CreateInstance, SealEngine_CreateInstance),
	    HLL_TODO_EXPORT(ReleaseInstance, SealEngine_ReleaseInstance),
	    HLL_TODO_EXPORT(LoadInstance, SealEngine_LoadInstance),
	    HLL_TODO_EXPORT(SaveInstance, SealEngine_SaveInstance),
	    HLL_TODO_EXPORT(IsExistInstanceData, SealEngine_IsExistInstanceData),
	    HLL_TODO_EXPORT(GetInstanceName, SealEngine_GetInstanceName),
	    HLL_TODO_EXPORT(SetInstanceType, SealEngine_SetInstanceType),
	    HLL_TODO_EXPORT(SetInstancePos, SealEngine_SetInstancePos),
	    HLL_TODO_EXPORT(GetInstancePos, SealEngine_GetInstancePos),
	    HLL_TODO_EXPORT(SetInstanceVector, SealEngine_SetInstanceVector),
	    HLL_TODO_EXPORT(SetInstanceAngle, SealEngine_SetInstanceAngle),
	    HLL_TODO_EXPORT(SetInstanceAngleP, SealEngine_SetInstanceAngleP),
	    HLL_TODO_EXPORT(SetInstanceAngleB, SealEngine_SetInstanceAngleB),
	    HLL_TODO_EXPORT(GetInstanceAngle, SealEngine_GetInstanceAngle),
	    HLL_TODO_EXPORT(GetInstanceAngleP, SealEngine_GetInstanceAngleP),
	    HLL_TODO_EXPORT(GetInstanceAngleB, SealEngine_GetInstanceAngleB),
	    HLL_TODO_EXPORT(GetInstanceScaleX, SealEngine_GetInstanceScaleX),
	    HLL_TODO_EXPORT(GetInstanceScaleY, SealEngine_GetInstanceScaleY),
	    HLL_TODO_EXPORT(GetInstanceScaleZ, SealEngine_GetInstanceScaleZ),
	    HLL_TODO_EXPORT(SetInstanceScaleX, SealEngine_SetInstanceScaleX),
	    HLL_TODO_EXPORT(SetInstanceScaleY, SealEngine_SetInstanceScaleY),
	    HLL_TODO_EXPORT(SetInstanceScaleZ, SealEngine_SetInstanceScaleZ),
	    HLL_TODO_EXPORT(SetInstanceZBias, SealEngine_SetInstanceZBias),
	    HLL_TODO_EXPORT(GetInstanceZBias, SealEngine_GetInstanceZBias),
	    HLL_TODO_EXPORT(SetInstanceVertexPos, SealEngine_SetInstanceVertexPos),
	    HLL_TODO_EXPORT(SetInstanceVertexUV, SealEngine_SetInstanceVertexUV),
	    HLL_TODO_EXPORT(SetInstanceDiffuse, SealEngine_SetInstanceDiffuse),
	    HLL_TODO_EXPORT(GetInstanceDiffuse, SealEngine_GetInstanceDiffuse),
	    HLL_TODO_EXPORT(SetInstanceAmbient, SealEngine_SetInstanceAmbient),
	    HLL_TODO_EXPORT(GetInstanceAmbient, SealEngine_GetInstanceAmbient),
	    HLL_TODO_EXPORT(SetInstanceGlobeDiffuse, SealEngine_SetInstanceGlobeDiffuse),
	    HLL_TODO_EXPORT(SetInstanceSpecular, SealEngine_SetInstanceSpecular),
	    HLL_TODO_EXPORT(SetInstanceAlpha, SealEngine_SetInstanceAlpha),
	    HLL_TODO_EXPORT(GetInstanceAlpha, SealEngine_GetInstanceAlpha),
	    HLL_TODO_EXPORT(SetInstanceGrayscaleRate, SealEngine_SetInstanceGrayscaleRate),
	    HLL_TODO_EXPORT(GetInstanceGrayscaleRate, SealEngine_GetInstanceGrayscaleRate),
	    HLL_TODO_EXPORT(SetInstanceAttenuationNear, SealEngine_SetInstanceAttenuationNear),
	    HLL_TODO_EXPORT(SetInstanceAttenuationFar, SealEngine_SetInstanceAttenuationFar),
	    HLL_TODO_EXPORT(SetInstanceDraw, SealEngine_SetInstanceDraw),
	    HLL_TODO_EXPORT(SetInstanceDrawShadow, SealEngine_SetInstanceDrawShadow),
	    HLL_TODO_EXPORT(SetInstanceDrawBackShadow, SealEngine_SetInstanceDrawBackShadow),
	    HLL_TODO_EXPORT(SetInstanceDrawMakeShadow, SealEngine_SetInstanceDrawMakeShadow),
	    HLL_TODO_EXPORT(SetInstanceDrawBump, SealEngine_SetInstanceDrawBump),
	    HLL_TODO_EXPORT(GetInstanceDraw, SealEngine_GetInstanceDraw),
	    HLL_TODO_EXPORT(GetInstanceDrawShadow, SealEngine_GetInstanceDrawShadow),
	    HLL_TODO_EXPORT(GetInstanceDrawBackShadow, SealEngine_GetInstanceDrawBackShadow),
	    HLL_TODO_EXPORT(GetInstanceDrawMakeShadow, SealEngine_GetInstanceDrawMakeShadow),
	    HLL_TODO_EXPORT(GetInstanceDrawBump, SealEngine_GetInstanceDrawBump),
	    HLL_TODO_EXPORT(SetInstanceDrawParam, SealEngine_SetInstanceDrawParam),
	    HLL_TODO_EXPORT(GetInstanceDrawParam, SealEngine_GetInstanceDrawParam),
	    HLL_TODO_EXPORT(LoadInstanceMotion, SealEngine_LoadInstanceMotion),
	    HLL_TODO_EXPORT(GetInstanceMotionState, SealEngine_GetInstanceMotionState),
	    HLL_TODO_EXPORT(GetInstanceMotionFrame, SealEngine_GetInstanceMotionFrame),
	    HLL_TODO_EXPORT(SetInstanceMotionState, SealEngine_SetInstanceMotionState),
	    HLL_TODO_EXPORT(SetInstanceMotionFrame, SealEngine_SetInstanceMotionFrame),
	    HLL_TODO_EXPORT(SetInstanceMotionFrameRange, SealEngine_SetInstanceMotionFrameRange),
	    HLL_TODO_EXPORT(SetInstanceMotionLoopFrameRange, SealEngine_SetInstanceMotionLoopFrameRange),
	    HLL_TODO_EXPORT(LoadInstanceNextMotion, SealEngine_LoadInstanceNextMotion),
	    HLL_TODO_EXPORT(SetInstanceNextMotionState, SealEngine_SetInstanceNextMotionState),
	    HLL_TODO_EXPORT(SetInstanceNextMotionFrame, SealEngine_SetInstanceNextMotionFrame),
	    HLL_TODO_EXPORT(SetInstanceNextMotionFrameRange, SealEngine_SetInstanceNextMotionFrameRange),
	    HLL_TODO_EXPORT(SetInstanceNextMotionLoopFrameRange, SealEngine_SetInstanceNextMotionLoopFrameRange),
	    HLL_TODO_EXPORT(SetInstanceMotionBlendRate, SealEngine_SetInstanceMotionBlendRate),
	    HLL_TODO_EXPORT(SetInstanceMotionBlend, SealEngine_SetInstanceMotionBlend),
	    HLL_TODO_EXPORT(IsInstanceMotionBlend, SealEngine_IsInstanceMotionBlend),
	    HLL_TODO_EXPORT(GetInstanceMotionBlendPutTime, SealEngine_GetInstanceMotionBlendPutTime),
	    HLL_TODO_EXPORT(SetInstanceMotionBlendPutTime, SealEngine_SetInstanceMotionBlendPutTime),
	    HLL_TODO_EXPORT(SwapInstanceMotion, SealEngine_SwapInstanceMotion),
	    HLL_TODO_EXPORT(FreeInstanceNextMotion, SealEngine_FreeInstanceNextMotion),
	    HLL_TODO_EXPORT(GetInstanceNumofMaterial, SealEngine_GetInstanceNumofMaterial),
	    HLL_TODO_EXPORT(GetInstanceMaterialName, SealEngine_GetInstanceMaterialName),
	    HLL_TODO_EXPORT(GetInstanceMaterialParam, SealEngine_GetInstanceMaterialParam),
	    HLL_TODO_EXPORT(SetInstanceMaterialParam, SealEngine_SetInstanceMaterialParam),
	    HLL_TODO_EXPORT(SaveInstanceAddMaterialData, SealEngine_SaveInstanceAddMaterialData),
	    HLL_TODO_EXPORT(SetInstancePointPos, SealEngine_SetInstancePointPos),
	    HLL_TODO_EXPORT(GetInstancePointPos, SealEngine_GetInstancePointPos),
	    HLL_TODO_EXPORT(GetInstanceColumnPos, SealEngine_GetInstanceColumnPos),
	    HLL_TODO_EXPORT(GetInstanceColumnHeight, SealEngine_GetInstanceColumnHeight),
	    HLL_TODO_EXPORT(GetInstanceColumnRadius, SealEngine_GetInstanceColumnRadius),
	    HLL_TODO_EXPORT(GetInstanceColumnAngle, SealEngine_GetInstanceColumnAngle),
	    HLL_TODO_EXPORT(GetInstanceColumnAngleP, SealEngine_GetInstanceColumnAngleP),
	    HLL_TODO_EXPORT(GetInstanceColumnAngleB, SealEngine_GetInstanceColumnAngleB),
	    HLL_TODO_EXPORT(SetInstanceColumnPos, SealEngine_SetInstanceColumnPos),
	    HLL_TODO_EXPORT(SetInstanceColumnHeight, SealEngine_SetInstanceColumnHeight),
	    HLL_TODO_EXPORT(SetInstanceColumnRadius, SealEngine_SetInstanceColumnRadius),
	    HLL_TODO_EXPORT(SetInstanceColumnAngle, SealEngine_SetInstanceColumnAngle),
	    HLL_TODO_EXPORT(SetInstanceColumnAngleP, SealEngine_SetInstanceColumnAngleP),
	    HLL_TODO_EXPORT(SetInstanceColumnAngleB, SealEngine_SetInstanceColumnAngleB),
	    HLL_TODO_EXPORT(GetInstanceDrawColumn, SealEngine_GetInstanceDrawColumn),
	    HLL_TODO_EXPORT(SetInstanceDrawColumn, SealEngine_SetInstanceDrawColumn),
	    HLL_TODO_EXPORT(SetInstanceTarget, SealEngine_SetInstanceTarget),
	    HLL_TODO_EXPORT(GetInstanceTarget, SealEngine_GetInstanceTarget),
	    HLL_TODO_EXPORT(GetInstanceFPS, SealEngine_GetInstanceFPS),
	    HLL_TODO_EXPORT(SetInstanceFPS, SealEngine_SetInstanceFPS),
	    HLL_TODO_EXPORT(GetInstanceNumofBone, SealEngine_GetInstanceNumofBone),
	    HLL_TODO_EXPORT(GetInstanceBoneName, SealEngine_GetInstanceBoneName),
	    HLL_TODO_EXPORT(GetInstanceBoneParentIndex, SealEngine_GetInstanceBoneParentIndex),
	    HLL_TODO_EXPORT(GetInstanceBoneIndex, SealEngine_GetInstanceBoneIndex),
	    HLL_TODO_EXPORT(TransInstanceLocalPosToWorldPosByBone, SealEngine_TransInstanceLocalPosToWorldPosByBone),
	    HLL_TODO_EXPORT(SaveBoneFile, SealEngine_SaveBoneFile),
	    HLL_TODO_EXPORT(IsBoneCanIK, SealEngine_IsBoneCanIK),
	    HLL_TODO_EXPORT(SetBoneCanIK, SealEngine_SetBoneCanIK),
	    HLL_TODO_EXPORT(GetBoneEulerAngle, SealEngine_GetBoneEulerAngle),
	    HLL_TODO_EXPORT(GetBoneMinEulerAngle, SealEngine_GetBoneMinEulerAngle),
	    HLL_TODO_EXPORT(GetBoneMaxEulerAngle, SealEngine_GetBoneMaxEulerAngle),
	    HLL_TODO_EXPORT(SetBoneMinEulerAngle, SealEngine_SetBoneMinEulerAngle),
	    HLL_TODO_EXPORT(SetBoneMaxEulerAngle, SealEngine_SetBoneMaxEulerAngle),
	    HLL_TODO_EXPORT(SetBoneMass, SealEngine_SetBoneMass),
	    HLL_TODO_EXPORT(SetBoneAirResistance, SealEngine_SetBoneAirResistance),
	    HLL_TODO_EXPORT(SetBoneRestitutionCoefficient, SealEngine_SetBoneRestitutionCoefficient),
	    HLL_TODO_EXPORT(GetBoneMass, SealEngine_GetBoneMass),
	    HLL_TODO_EXPORT(GetBoneAirResistance, SealEngine_GetBoneAirResistance),
	    HLL_TODO_EXPORT(GetBoneRestitutionCoefficient, SealEngine_GetBoneRestitutionCoefficient),
	    HLL_TODO_EXPORT(GetNumofBoneCollisionShapeList, SealEngine_GetNumofBoneCollisionShapeList),
	    HLL_TODO_EXPORT(GetBoneCollisionShapeType, SealEngine_GetBoneCollisionShapeType),
	    HLL_TODO_EXPORT(GetBoneCollisionShapePoint, SealEngine_GetBoneCollisionShapePoint),
	    HLL_TODO_EXPORT(GetBoneCollisionShapePoint2, SealEngine_GetBoneCollisionShapePoint2),
	    HLL_TODO_EXPORT(GetBoneCollisionShapeRadius, SealEngine_GetBoneCollisionShapeRadius),
	    HLL_TODO_EXPORT(GetBoneCollisionShapeLinkedBoneIndex, SealEngine_GetBoneCollisionShapeLinkedBoneIndex),
	    HLL_TODO_EXPORT(SetBoneCollisionShapeType, SealEngine_SetBoneCollisionShapeType),
	    HLL_TODO_EXPORT(SetBoneCollisionShapePoint, SealEngine_SetBoneCollisionShapePoint),
	    HLL_TODO_EXPORT(SetBoneCollisionShapePoint2, SealEngine_SetBoneCollisionShapePoint2),
	    HLL_TODO_EXPORT(SetBoneCollisionShapeRadius, SealEngine_SetBoneCollisionShapeRadius),
	    HLL_TODO_EXPORT(SetBoneCollisionShapeLinkedBoneIndex, SealEngine_SetBoneCollisionShapeLinkedBoneIndex),
	    HLL_TODO_EXPORT(AddBoneCollisionShape, SealEngine_AddBoneCollisionShape),
	    HLL_TODO_EXPORT(EraseBoneCollisionShape, SealEngine_EraseBoneCollisionShape),
	    HLL_TODO_EXPORT(GetInstanceNumofPolygon, SealEngine_GetInstanceNumofPolygon),
	    HLL_TODO_EXPORT(GetInstanceNumofVertex, SealEngine_GetInstanceNumofVertex),
	    HLL_TODO_EXPORT(GetInstanceNumofNormal, SealEngine_GetInstanceNumofNormal),
	    HLL_TODO_EXPORT(GetInstanceNumofMesh, SealEngine_GetInstanceNumofMesh),
	    HLL_TODO_EXPORT(GetInstanceMeshName, SealEngine_GetInstanceMeshName),
	    HLL_TODO_EXPORT(GetInstanceMeshMaterialIndex, SealEngine_GetInstanceMeshMaterialIndex),
	    HLL_TODO_EXPORT(GetInstanceMeshMaterialID, SealEngine_GetInstanceMeshMaterialID),
	    HLL_TODO_EXPORT(GetInstanceMeshNumofPolygon, SealEngine_GetInstanceMeshNumofPolygon),
	    HLL_TODO_EXPORT(IsInstanceMeshAlphaBlending, SealEngine_IsInstanceMeshAlphaBlending),
	    HLL_TODO_EXPORT(GetInstanceTextureMemorySize, SealEngine_GetInstanceTextureMemorySize),
	    HLL_TODO_EXPORT(GetInstanceInfoText, SealEngine_GetInstanceInfoText),
	    HLL_TODO_EXPORT(GetInstanceMaterialInfoText, SealEngine_GetInstanceMaterialInfoText),
	    HLL_TODO_EXPORT(CalcInstanceHeightDetection, SealEngine_CalcInstanceHeightDetection),
	    HLL_TODO_EXPORT(CalcInstance2DDetectionHeight, SealEngine_CalcInstance2DDetectionHeight),
	    HLL_TODO_EXPORT(CalcInstance2DDetection, SealEngine_CalcInstance2DDetection),
	    HLL_TODO_EXPORT(FindInstancePath, SealEngine_FindInstancePath),
	    HLL_TODO_EXPORT(CalcPathFinderIntersectEyeVec, SealEngine_CalcPathFinderIntersectEyeVec),
	    HLL_TODO_EXPORT(OptimizeInstancePathLine, SealEngine_OptimizeInstancePathLine),
	    HLL_TODO_EXPORT(GetInstancePathLine, SealEngine_GetInstancePathLine),
	    HLL_TODO_EXPORT(CreateInstancePathLineList, SealEngine_CreateInstancePathLineList),
	    HLL_TODO_EXPORT(ClearLineList, SealEngine_ClearLineList),
	    HLL_TODO_EXPORT(AddLineList, SealEngine_AddLineList),
	    HLL_TODO_EXPORT(GetInstanceSoftFogEdgeLength, SealEngine_GetInstanceSoftFogEdgeLength),
	    HLL_TODO_EXPORT(SetInstanceSoftFogEdgeLength, SealEngine_SetInstanceSoftFogEdgeLength),
	    HLL_TODO_EXPORT(GetInstanceShadowVolumeBoneRadius, SealEngine_GetInstanceShadowVolumeBoneRadius),
	    HLL_TODO_EXPORT(SetInstanceShadowVolumeBoneRadius, SealEngine_SetInstanceShadowVolumeBoneRadius),
	    HLL_TODO_EXPORT(SetInstanceMeshShow, SealEngine_SetInstanceMeshShow),
	    HLL_TODO_EXPORT(LoadInstanceLightParam, SealEngine_LoadInstanceLightParam),
	    HLL_TODO_EXPORT(StoreInstanceLightParam, SealEngine_StoreInstanceLightParam),
	    HLL_TODO_EXPORT(GetInstanceDebugDrawShadowVolume, SealEngine_GetInstanceDebugDrawShadowVolume),
	    HLL_TODO_EXPORT(SetInstanceDebugDrawShadowVolume, SealEngine_SetInstanceDebugDrawShadowVolume),
	    HLL_TODO_EXPORT(CreateInstanceDebugBoneList, SealEngine_CreateInstanceDebugBoneList),
	    HLL_TODO_EXPORT(CreateInstanceDebugBoneCollision, SealEngine_CreateInstanceDebugBoneCollision),
	    HLL_TODO_EXPORT(SaveEffect, SealEngine_SaveEffect),
	    HLL_TODO_EXPORT(GetEffectFrameRange, SealEngine_GetEffectFrameRange),
	    HLL_TODO_EXPORT(SetCameraPos, SealEngine_SetCameraPos),
	    HLL_TODO_EXPORT(SetCameraAngle, SealEngine_SetCameraAngle),
	    HLL_TODO_EXPORT(SetCameraAngleP, SealEngine_SetCameraAngleP),
	    HLL_TODO_EXPORT(SetCameraAngleB, SealEngine_SetCameraAngleB),
	    HLL_TODO_EXPORT(GetCameraPos, SealEngine_GetCameraPos),
	    HLL_TODO_EXPORT(GetCameraAngle, SealEngine_GetCameraAngle),
	    HLL_TODO_EXPORT(GetCameraAngleP, SealEngine_GetCameraAngleP),
	    HLL_TODO_EXPORT(GetCameraAngleB, SealEngine_GetCameraAngleB),
	    HLL_TODO_EXPORT(GetCameraXVector, SealEngine_GetCameraXVector),
	    HLL_TODO_EXPORT(GetCameraYVector, SealEngine_GetCameraYVector),
	    HLL_TODO_EXPORT(GetCameraZVector, SealEngine_GetCameraZVector),
	    HLL_TODO_EXPORT(SetDrawDOF, SealEngine_SetDrawDOF),
	    HLL_TODO_EXPORT(SetDOF_L, SealEngine_SetDOF_L),
	    HLL_TODO_EXPORT(SetDOF_F, SealEngine_SetDOF_F),
	    HLL_TODO_EXPORT(SetDOF_f, SealEngine_SetDOF_f),
	    HLL_TODO_EXPORT(GetDrawDOF, SealEngine_GetDrawDOF),
	    HLL_TODO_EXPORT(GetDOF_L, SealEngine_GetDOF_L),
	    HLL_TODO_EXPORT(GetDOF_F, SealEngine_GetDOF_F),
	    HLL_TODO_EXPORT(GetDOF_f, SealEngine_GetDOF_f),
	    HLL_TODO_EXPORT(GetShadowBias, SealEngine_GetShadowBias),
	    HLL_TODO_EXPORT(GetShadowTargetDistance, SealEngine_GetShadowTargetDistance),
	    HLL_TODO_EXPORT(GetShadowMapResolutionLevel, SealEngine_GetShadowMapResolutionLevel),
	    HLL_TODO_EXPORT(GetShadowSplitDepth, SealEngine_GetShadowSplitDepth),
	    HLL_TODO_EXPORT(SetShadowMapType, SealEngine_SetShadowMapType),
	    HLL_TODO_EXPORT(SetShadowMapLightLookPos, SealEngine_SetShadowMapLightLookPos),
	    HLL_TODO_EXPORT(SetShadowMapLightDir, SealEngine_SetShadowMapLightDir),
	    HLL_TODO_EXPORT(SetShadowBox, SealEngine_SetShadowBox),
	    HLL_TODO_EXPORT(SetShadowBias, SealEngine_SetShadowBias),
	    HLL_TODO_EXPORT(SetShadowSlopeBias, SealEngine_SetShadowSlopeBias),
	    HLL_TODO_EXPORT(SetShadowFilterMag, SealEngine_SetShadowFilterMag),
	    HLL_TODO_EXPORT(SetShadowTargetDistance, SealEngine_SetShadowTargetDistance),
	    HLL_TODO_EXPORT(SetShadowMapResolutionLevel, SealEngine_SetShadowMapResolutionLevel),
	    HLL_TODO_EXPORT(SetShadowSplitDepth, SealEngine_SetShadowSplitDepth),
	    HLL_TODO_EXPORT(SetFogType, SealEngine_SetFogType),
	    HLL_TODO_EXPORT(SetFogNear, SealEngine_SetFogNear),
	    HLL_TODO_EXPORT(SetFogFar, SealEngine_SetFogFar),
	    HLL_TODO_EXPORT(SetFogColor, SealEngine_SetFogColor),
	    HLL_TODO_EXPORT(GetFogType, SealEngine_GetFogType),
	    HLL_TODO_EXPORT(GetFogNear, SealEngine_GetFogNear),
	    HLL_TODO_EXPORT(GetFogFar, SealEngine_GetFogFar),
	    HLL_TODO_EXPORT(GetFogColor, SealEngine_GetFogColor),
	    HLL_TODO_EXPORT(SetDrawTextureFog, SealEngine_SetDrawTextureFog),
	    HLL_TODO_EXPORT(GetDrawTextureFog, SealEngine_GetDrawTextureFog),
	    HLL_TODO_EXPORT(SetViewport, SealEngine_SetViewport),
	    HLL_TODO_EXPORT(SetProjection, SealEngine_SetProjection),
	    HLL_TODO_EXPORT(GetBrightness, SealEngine_GetBrightness),
	    HLL_TODO_EXPORT(SetBrightness, SealEngine_SetBrightness),
	    HLL_TODO_EXPORT(SetRenderMode, SealEngine_SetRenderMode),
	    HLL_TODO_EXPORT(GetRenderMode, SealEngine_GetRenderMode),
	    HLL_TODO_EXPORT(SetDrawOption, SealEngine_SetDrawOption),
	    HLL_TODO_EXPORT(GetDrawOption, SealEngine_GetDrawOption),
	    HLL_TODO_EXPORT(SetShadowMode, SealEngine_SetShadowMode),
	    HLL_TODO_EXPORT(SetBumpMode, SealEngine_SetBumpMode),
	    HLL_TODO_EXPORT(SetHDRMode, SealEngine_SetHDRMode),
	    HLL_TODO_EXPORT(SetVertexBlendMode, SealEngine_SetVertexBlendMode),
	    HLL_TODO_EXPORT(SetFogMode, SealEngine_SetFogMode),
	    HLL_TODO_EXPORT(SetSpecularMode, SealEngine_SetSpecularMode),
	    HLL_TODO_EXPORT(SetLightMapMode, SealEngine_SetLightMapMode),
	    HLL_TODO_EXPORT(SetSoftFogEdgeMode, SealEngine_SetSoftFogEdgeMode),
	    HLL_TODO_EXPORT(SetSSAOMode, SealEngine_SetSSAOMode),
	    HLL_TODO_EXPORT(SetShaderPrecisionMode, SealEngine_SetShaderPrecisionMode),
	    HLL_TODO_EXPORT(SetShaderDebugMode, SealEngine_SetShaderDebugMode),
	    HLL_TODO_EXPORT(GetShadowMode, SealEngine_GetShadowMode),
	    HLL_TODO_EXPORT(GetBumpMode, SealEngine_GetBumpMode),
	    HLL_TODO_EXPORT(GetHDRMode, SealEngine_GetHDRMode),
	    HLL_TODO_EXPORT(GetVertexBlendMode, SealEngine_GetVertexBlendMode),
	    HLL_TODO_EXPORT(GetFogMode, SealEngine_GetFogMode),
	    HLL_TODO_EXPORT(GetSpecularMode, SealEngine_GetSpecularMode),
	    HLL_TODO_EXPORT(GetLightMapMode, SealEngine_GetLightMapMode),
	    HLL_TODO_EXPORT(GetSoftFogEdgeMode, SealEngine_GetSoftFogEdgeMode),
	    HLL_TODO_EXPORT(GetSSAOMode, SealEngine_GetSSAOMode),
	    HLL_TODO_EXPORT(GetShaderPrecisionMode, SealEngine_GetShaderPrecisionMode),
	    HLL_TODO_EXPORT(GetShaderDebugMode, SealEngine_GetShaderDebugMode),
	    HLL_TODO_EXPORT(SetDebugMode, SealEngine_SetDebugMode),
	    HLL_TODO_EXPORT(GetDebugMode, SealEngine_GetDebugMode),
	    HLL_TODO_EXPORT(GetTextureResolutionLevel, SealEngine_GetTextureResolutionLevel),
	    HLL_TODO_EXPORT(GetTextureFilterMode, SealEngine_GetTextureFilterMode),
	    HLL_TODO_EXPORT(SetTextureResolutionLevel, SealEngine_SetTextureResolutionLevel),
	    HLL_TODO_EXPORT(SetTextureFilterMode, SealEngine_SetTextureFilterMode),
	    HLL_TODO_EXPORT(GetUsePower2Texture, SealEngine_GetUsePower2Texture),
	    HLL_TODO_EXPORT(SetUsePower2Texture, SealEngine_SetUsePower2Texture),
	    HLL_TODO_EXPORT(GetGlobalAmbient, SealEngine_GetGlobalAmbient),
	    HLL_TODO_EXPORT(SetGlobalAmbient, SealEngine_SetGlobalAmbient),
	    HLL_TODO_EXPORT(GetBloomMode, SealEngine_GetBloomMode),
	    HLL_TODO_EXPORT(SetBloomMode, SealEngine_SetBloomMode),
	    HLL_TODO_EXPORT(GetGlareMode, SealEngine_GetGlareMode),
	    HLL_TODO_EXPORT(SetGlareMode, SealEngine_SetGlareMode),
	    HLL_TODO_EXPORT(GetPostEffectFilterY, SealEngine_GetPostEffectFilterY),
	    HLL_TODO_EXPORT(GetPostEffectFilterCb, SealEngine_GetPostEffectFilterCb),
	    HLL_TODO_EXPORT(GetPostEffectFilterCr, SealEngine_GetPostEffectFilterCr),
	    HLL_TODO_EXPORT(SetPostEffectFilterY, SealEngine_SetPostEffectFilterY),
	    HLL_TODO_EXPORT(SetPostEffectFilterCb, SealEngine_SetPostEffectFilterCb),
	    HLL_TODO_EXPORT(SetPostEffectFilterCr, SealEngine_SetPostEffectFilterCr),
	    HLL_TODO_EXPORT(GetBackCGName, SealEngine_GetBackCGName),
	    HLL_TODO_EXPORT(GetBackCGNum, SealEngine_GetBackCGNum),
	    HLL_TODO_EXPORT(GetBackCGBlendRate, SealEngine_GetBackCGBlendRate),
	    HLL_TODO_EXPORT(GetBackCGDestPosX, SealEngine_GetBackCGDestPosX),
	    HLL_TODO_EXPORT(GetBackCGDestPosY, SealEngine_GetBackCGDestPosY),
	    HLL_TODO_EXPORT(GetBackCGMag, SealEngine_GetBackCGMag),
	    HLL_TODO_EXPORT(GetBackCGQuakeMag, SealEngine_GetBackCGQuakeMag),
	    HLL_TODO_EXPORT(GetBackCGShow, SealEngine_GetBackCGShow),
	    HLL_TODO_EXPORT(SetBackCGName, SealEngine_SetBackCGName),
	    HLL_TODO_EXPORT(SetBackCGNum, SealEngine_SetBackCGNum),
	    HLL_TODO_EXPORT(SetBackCGBlendRate, SealEngine_SetBackCGBlendRate),
	    HLL_TODO_EXPORT(SetBackCGDestPos, SealEngine_SetBackCGDestPos),
	    HLL_TODO_EXPORT(SetBackCGMag, SealEngine_SetBackCGMag),
	    HLL_TODO_EXPORT(SetBackCGQuakeMag, SealEngine_SetBackCGQuakeMag),
	    HLL_TODO_EXPORT(SetBackCGShow, SealEngine_SetBackCGShow),
	    HLL_TODO_EXPORT(GetGlareBrightnessParam, SealEngine_GetGlareBrightnessParam),
	    HLL_TODO_EXPORT(SetGlareBrightnessParam, SealEngine_SetGlareBrightnessParam),
	    HLL_TODO_EXPORT(GetSSAOParam, SealEngine_GetSSAOParam),
	    HLL_TODO_EXPORT(SetSSAOParam, SealEngine_SetSSAOParam),
	    HLL_TODO_EXPORT(CalcIntersectEyeVec, SealEngine_CalcIntersectEyeVec),
	    HLL_TODO_EXPORT(TransformPosToViewPos, SealEngine_TransformPosToViewPos),
	    HLL_TODO_EXPORT(IsLoading, SealEngine_IsLoading),
	    HLL_TODO_EXPORT(GetDebugInfoMode, SealEngine_GetDebugInfoMode),
	    HLL_TODO_EXPORT(SetDebugInfoMode, SealEngine_SetDebugInfoMode),
	    HLL_TODO_EXPORT(SetInstanceSpecularReflectRate, SealEngine_SetInstanceSpecularReflectRate),
	    HLL_TODO_EXPORT(SetInstanceFresnelReflectRate, SealEngine_SetInstanceFresnelReflectRate),
	    HLL_TODO_EXPORT(GetInstanceSpecularReflectRate, SealEngine_GetInstanceSpecularReflectRate),
	    HLL_TODO_EXPORT(GetInstanceFresnelReflectRate, SealEngine_GetInstanceFresnelReflectRate),
	    HLL_TODO_EXPORT(StringToFloat, SealEngine_StringToFloat),
	    HLL_TODO_EXPORT(ResetLightParam, SealEngine_ResetLightParam),
	    HLL_TODO_EXPORT(SetLightParam, SealEngine_SetLightParam),
	    HLL_TODO_EXPORT(GetLightParam, SealEngine_GetLightParam),
	    HLL_TODO_EXPORT(SetThreadLoadingMode, SealEngine_SetThreadLoadingMode),
	    HLL_TODO_EXPORT(IsThreadLoadingMode, SealEngine_IsThreadLoadingMode),
	    HLL_TODO_EXPORT(ClearCache, SealEngine_ClearCache),
	    HLL_TODO_EXPORT(Suspend, SealEngine_Suspend),
	    HLL_TODO_EXPORT(IsSuspend, SealEngine_IsSuspend),
	    HLL_TODO_EXPORT(Resume, SealEngine_Resume),
	    HLL_TODO_EXPORT(GetHistogram, SealEngine_GetHistogram),
	    HLL_TODO_EXPORT(DrawToMainSurface, SealEngine_DrawToMainSurface),
	    HLL_TODO_EXPORT(GetNumofInstance, SealEngine_GetNumofInstance)
	    );
