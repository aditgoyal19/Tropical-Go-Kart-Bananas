/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

// Destruction specific product patches applied to release 710.
// This file is #included by hkdPatches_710.cpp

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdGraphicsBody", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdGraphicsShape", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("type", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("numChildTransforms", TYPE_INT, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdConvexDecompositionAction", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkdAction")
	HK_PATCH_MEMBER_ADDED_BYTE("method", 0)
	HK_PATCH_MEMBER_ADDED_REAL("tolerance", 0.010000f)
	HK_PATCH_MEMBER_ADDED_BYTE("reduce", 0)
	HK_PATCH_MEMBER_ADDED_BYTE("self", 1)
	HK_PATCH_MEMBER_ADDED_BYTE("recurse", 1)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdAction", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDebugLinesDebugLine", 0)
	HK_PATCH_MEMBER_ADDED("start", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("end", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("color", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdInfo", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceInfo", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkdInfo")
	HK_PATCH_MEMBER_ADDED_BYTE("enableDecorations", 1)
	HK_PATCH_MEMBER_ADDED_INT("priority", 1)
	HK_PATCH_MEMBER_ADDED("decorations", TYPE_STRUCT, "hkdDecorateFractureFaceActionFractureFaceInfo", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionFractureFaceInfo", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdInfo", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdGlueFixedPiecesAction", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkdAction")
	HK_PATCH_MEMBER_ADDED_REAL("allowedVolumeIncrease", 0.050000f)
	HK_PATCH_MEMBER_ADDED_REAL("minEdgeLength", 0.005000f)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdAction", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDebugLines", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("lines", TYPE_ARRAY_STRUCT, "hkdDebugLinesDebugLine", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdDebugLinesDebugLine", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionForwarder", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkdAction")
	HK_PATCH_MEMBER_ADDED("child", TYPE_OBJECT, "hkdDecorateFractureFaceAction", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceAction", 2)
	HK_PATCH_DEPENDS("hkdAction", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionFractureFaceInfo2", 0, "hkdDecorateFractureFaceActionFractureFaceInfo2", 1)
	HK_PATCH_MEMBER_REMOVED("maxSlope", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceAction", 2, "hkdDecorateFractureFaceAction", 3)
	HK_PATCH_MEMBER_ADDED_REAL("maxProtrusion", 0.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("fixupDistance", 0.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("borderOverlap", 0.000000f)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionFractureFaceInfo", 0, "hkdDecorateFractureFaceActionFractureFaceInfo", 1)
	HK_PATCH_MEMBER_ADDED_REAL("spinAngle", 0.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("xShift", 0.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("xRandomShift", 0.000000f)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdCutOutFracture", 0, "hkdCutOutFracture", 1)
	HK_PATCH_MEMBER_REMOVED("cutoutShapes", TYPE_ARRAY_OBJECT, "hkpEntity", 0)
	HK_PATCH_MEMBER_ADDED("cutoutShapes", TYPE_OBJECT, "hkdBreakableShape", 0)
	HK_PATCH_MEMBER_ADDED_BOOL("setFrameShapeFixed", true)
	HK_PATCH_MEMBER_ADDED_REAL("minPhysicsThickness", 0.01f)
	HK_PATCH_MEMBER_ADDED_VEC_16_IDENTITY("cutoutShapesTransform")
	HK_PATCH_MEMBER_ADDED_BOOL("copyDataFromCutouts", true)
	HK_PATCH_MEMBER_ADDED_BYTE("splitType", 0)
	HK_PATCH_DEPENDS("hkpEntity", 2)
	HK_PATCH_DEPENDS("hkpWorldObject", 0)
	HK_PATCH_DEPENDS("hkdBreakableShape", 3)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdVoronoiFracture", 2, "hkdVoronoiFracture", 3)
	HK_PATCH_MEMBER_ADDED_BYTE("fixupOverlaps", 0)
	HK_PATCH_MEMBER_ADDED("voronoiSiteShapes", TYPE_OBJECT, "hkdBreakableShape", 0)
	HK_PATCH_MEMBER_ADDED_VEC_16_IDENTITY("voronoiSiteShapesTransform")
	HK_PATCH_MEMBER_ADDED_BOOL("copyDataFromSites", true)
	HK_PATCH_MEMBER_RENAMED("numPointsToGenerate", "numSitesToGenerate")
	HK_PATCH_DEPENDS("hkdBreakableShape", 3)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdBreakableBody", 3, "hkdBreakableBody", 4)
	HK_PATCH_MEMBER_ADDED("objectProperties", TYPE_STRUCT, "hkdObjectProperties", 0)
	HK_PATCH_DEPENDS("hkdObjectProperties", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdSetRigidBodyPropertiesAction", 1, "hkdSetRigidBodyPropertiesAction", 2)
	HK_PATCH_MEMBER_ADDED_REAL("inertiaFactor", 1.0f)
	HK_PATCH_MEMBER_ADDED_BYTE("setMass", 0)
	HK_PATCH_MEMBER_ADDED_REAL("mass", 0.000000f)
	HK_PATCH_MEMBER_ADDED_BYTE("setFriction", 0)
	HK_PATCH_MEMBER_ADDED_BYTE("setRestitution", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdShapeInstanceInfo", 1, "hkdShapeInstanceInfo", 2)
	HK_PATCH_MEMBER_ADDED("flags", TYPE_BYTE, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdFlexibleJointControllerWatchConstraintAction", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkpBinaryAction")
	HK_PATCH_DEPENDS("hkpAction", 0)
	HK_PATCH_DEPENDS("hkpBinaryAction", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdConvexDecompositionAction", 0, "hkdConvexDecompositionAction", 1)
	HK_PATCH_MEMBER_ADDED_BYTE("hollow", 0)
	HK_PATCH_MEMBER_ADDED_BYTE("refine", 0)
	HK_PATCH_MEMBER_ADDED_BYTE("moppThreshold", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionControlShape", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("controlBreakableShape", TYPE_STRUCT, "hkdShapeInstanceInfo", 0)
	HK_PATCH_MEMBER_ADDED("fractureInfo", TYPE_OBJECT, "hkdDecorateFractureFaceInfo", 0)
	HK_PATCH_MEMBER_ADDED("decorations", TYPE_ARRAY_STRUCT, "hkdShapeInstanceInfo", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdShapeInstanceInfo", 2)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceInfo", 0)
	HK_PATCH_DEPENDS("hkdInfo", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionControlShapes", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("rootPhysicsShape", TYPE_OBJECT, "hkpShape", 0)
	HK_PATCH_MEMBER_ADDED("rootControlShape", TYPE_OBJECT, "hkdBreakableShape", 0)
	HK_PATCH_MEMBER_ADDED("rootControlShapeTransform", TYPE_VEC_16, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("controlShapes", TYPE_ARRAY_OBJECT, "hkdDecorateFractureFaceActionControlShape", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkpShape", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionControlShape", 0)
	HK_PATCH_DEPENDS("hkdBreakableShape", 3)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionControlShapesCache", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("controlShapes", TYPE_ARRAY_OBJECT, "hkdDecorateFractureFaceActionControlShapes", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionControlShapes", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionConnections", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("connections", TYPE_ARRAY_STRUCT, "hkdBreakableShapeConnection", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdBreakableShapeConnection", 1)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecalMapActionDecalMap", 0)
	HK_PATCH_MEMBER_ADDED("textureW", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("textureH", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("type", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("data", TYPE_ARRAY_BYTE, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecalMapActionDecalMapData", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("decals", TYPE_ARRAY_OBJECT, "hkdDecalMapActionDecalMap", 0)
	HK_PATCH_MEMBER_ADDED("decors", TYPE_ARRAY_OBJECT, "hkdDecalMapActionDecalMap", 0)
	HK_PATCH_MEMBER_ADDED("decorInfo", TYPE_ARRAY_OBJECT, "hkdDecalMapActionDecorMapInfo", 0)
	HK_PATCH_MEMBER_ADDED("decorMapBaseIndex", TYPE_INT, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdDecalMapActionDecalMap", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdDecalMapActionDecorMapInfo", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecalMapActionDecorMapInfo", 0)
	HK_PATCH_MEMBER_ADDED("intersectingMaps", TYPE_ARRAY_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecalMapAction", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkdAction")
	HK_PATCH_MEMBER_ADDED_INT("xResolution", 64)
	HK_PATCH_MEMBER_ADDED_INT("yResolution", 64)
	HK_PATCH_MEMBER_ADDED_INT("uvChannel", 0)
	HK_PATCH_MEMBER_ADDED_REAL("extraRadius", 0.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("softRadius", 1.000000f)
	HK_PATCH_MEMBER_ADDED("decorationShape", TYPE_OBJECT, "hkdBreakableShape", 0)
	HK_PATCH_MEMBER_ADDED("decorationShapeTransform", TYPE_VEC_16, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED_INT("xResolutionDecoration", 64)
	HK_PATCH_MEMBER_ADDED_INT("yResolutionDecoration", 64)
	HK_PATCH_MEMBER_ADDED_INT("uvChannelDecoration", 0)
	HK_PATCH_MEMBER_ADDED_REAL("extraRadiusDecoration", 0.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("softRadiusDecoration", 1.000000f)
	HK_PATCH_MEMBER_ADDED_BYTE("enableDebugBitmapGeneration", 1)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdAction", 0)
	HK_PATCH_DEPENDS("hkdBreakableShape", 3)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDebugLinesDebugText", 0)
        HK_PATCH_MEMBER_ADDED("pos", TYPE_VEC_4, HK_NULL, 0)
        HK_PATCH_MEMBER_ADDED("string", TYPE_CSTRING, HK_NULL, 0)
        HK_PATCH_MEMBER_ADDED("color", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDebugLines", 0, "hkdDebugLines", 1)
	HK_PATCH_MEMBER_ADDED("texts", TYPE_ARRAY_STRUCT, "hkdDebugLinesDebugText", 0)
	HK_PATCH_DEPENDS("hkdDebugLinesDebugText", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdShape", 2, "hkdShape", 3)
	HK_PATCH_MEMBER_REMOVED("integrityType", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("tensionLength", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdBreakableShape", 3, "hkdBreakableShape", 4)
	HK_PATCH_MEMBER_REMOVED("integrityType", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("tensionLength", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDeformableBreakableShape", 1, "hkdDeformableBreakableShape", 2)
	HK_PATCH_MEMBER_ADDED("origChildTransformRotations", TYPE_ARRAY_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("origChildTransformTranslations", TYPE_ARRAY_VEC_4, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkdDeformableBreakableShape_1_to_2)
	HK_PATCH_MEMBER_REMOVED("origChildTransforms", TYPE_ARRAY_VEC_16, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdShapeInstanceInfo", 2, "hkdShapeInstanceInfo", 3)
	HK_PATCH_MEMBER_ADDED("translation", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("rotation", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkdShapeInstanceInfo_2_to_3)
	HK_PATCH_MEMBER_REMOVED("transform", TYPE_VEC_16, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdBreakableShapeConnectionList", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("connections", TYPE_ARRAY_STRUCT, "hkdBreakableShapeConnection", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdBreakableShapeConnection", 1)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdBreakableShapeActionList", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("actions", TYPE_ARRAY_OBJECT, "hkdAction", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdAction", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdPropertyFlagSet", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("properties", TYPE_STRUCT, "hkdProperties", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdProperties", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdStringObject", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("string", TYPE_CSTRING, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdBreakableShape", 4, "hkdBreakableShape", 5)
	HK_PATCH_MEMBER_ADDED_VEC_4("comAndMass", 0.000000f,0.000000f,0.000000f,1.000000f)
	HK_PATCH_MEMBER_ADDED_BYTE("typeAndFlags", 0)
	HK_PATCH_MEMBER_ADDED("inertiaAndValues", TYPE_STRUCT, "hkHalf8", 0)
	HK_PATCH_MEMBER_ADDED("majorAxisSpace", TYPE_INT, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkdBreakableShape_4_to_5)
	HK_PATCH_MEMBER_REMOVED("connections", TYPE_ARRAY_STRUCT, "hkdBreakableShapeConnection", 0)
	HK_PATCH_MEMBER_REMOVED("actions", TYPE_ARRAY_OBJECT, "hkdAction", 0)
	HK_PATCH_MEMBER_REMOVED("dynamicFracture", TYPE_OBJECT, "hkdFracture", 0)
	HK_PATCH_MEMBER_REMOVED("massProps", TYPE_STRUCT, "hkpMassProperties", 0)
	HK_PATCH_MEMBER_REMOVED("properties", TYPE_STRUCT, "hkdProperties", 0)
	HK_PATCH_MEMBER_REMOVED("graphicsShapeName", TYPE_CSTRING, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("flags", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("relativeSubpieceStrength", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("referenceShapeVolume", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("minDestructionRadius", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("breakingPropagationRate", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkHalf8", 0)
	HK_PATCH_DEPENDS("hkdBreakableShapeConnectionList", 0)
	HK_PATCH_DEPENDS("hkdBreakableShapeActionList", 0)
	HK_PATCH_DEPENDS("hkpMassProperties", 0)
	HK_PATCH_DEPENDS("hkdBreakableShapeConnection", 1)
	HK_PATCH_DEPENDS("hkdAction", 0)
	HK_PATCH_DEPENDS("hkdFracture", 2)
	HK_PATCH_DEPENDS("hkdProperties", 0)
	HK_PATCH_DEPENDS("hkdObjectProperties", 0)
	HK_PATCH_DEPENDS("hkdStringObject", 0)
	HK_PATCH_DEPENDS("hkdPropertyFlagSet", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdBreakableBodyShapeKeyToChildMap", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("shapeKeyToChild", TYPE_ARRAY_OBJECT, "hkdBreakableBodyShapeKeyToChild", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdBreakableBodyShapeKeyToChild", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdBreakableBody", 4, "hkdBreakableBody", 5)
	HK_PATCH_MEMBER_ADDED_BYTE("bodyTypeAndFlags", 0)
	HK_PATCH_FUNCTION(hkdBreakableBody_4_to_5)
	HK_PATCH_MEMBER_REMOVED("attachToNearbyObjects", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("ancesterIntegrityUid", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("bodyType", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("properties", TYPE_STRUCT, "hkdProperties", 0)
	HK_PATCH_MEMBER_REMOVED("shapeKeyToChild", TYPE_ARRAY_OBJECT, "hkdBreakableBodyShapeKeyToChild", 0)
	HK_PATCH_DEPENDS("hkdBreakableBodyShapeKeyToChild", 0)
	HK_PATCH_DEPENDS("hkdBreakableBodyShapeKeyToChildMap", 0)
	HK_PATCH_DEPENDS("hkdProperties", 0)
	HK_PATCH_DEPENDS("hkdObjectProperties", 0)
	HK_PATCH_DEPENDS("hkdPropertyFlagSet", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionCornerDecorationInfo", 0)
	HK_PATCH_MEMBER_ADDED("decorations", TYPE_OBJECT, "hkdBreakableShape", 0)
	HK_PATCH_MEMBER_ADDED_REAL("density", 1.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("minimumDistance", 0.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("maximumVerticalShift", 0.000010f)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdBreakableShape", 3)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateCornerInfo", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkdInfo")
	HK_PATCH_MEMBER_ADDED_BYTE("enableCornerDecorations", 1)
	HK_PATCH_MEMBER_ADDED("cornerTemplates", TYPE_STRUCT, "hkdDecorateFractureFaceActionCornerDecorationInfo", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionCornerDecorationInfo", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdInfo", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateCornerInfoContainer", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("infos", TYPE_ARRAY_OBJECT, "hkdDecorateCornerInfo", 0)
	HK_PATCH_DEPENDS("hkdDecorateCornerInfo", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdInfo", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionControlShape", 0, "hkdDecorateFractureFaceActionControlShape", 1)
	HK_PATCH_MEMBER_ADDED("cornerInfos", TYPE_OBJECT, "hkdDecorateCornerInfoContainer", 0)
	HK_PATCH_DEPENDS("hkdDecorateCornerInfoContainer", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionCompressedDecorationPlacement", 0)
	HK_PATCH_MEMBER_ADDED("graphicsIdx", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("pos", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("rot", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionConnections", 0, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_PARENT_SET("hkReferencedObject", HK_NULL)
	HK_PATCH_MEMBER_REMOVED("connections", TYPE_ARRAY_STRUCT, "hkdBreakableShapeConnection", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdBreakableShapeConnection", 1)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionControlShape", 1, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_PARENT_SET("hkReferencedObject", HK_NULL)
	HK_PATCH_MEMBER_REMOVED("controlBreakableShape", TYPE_STRUCT, "hkdShapeInstanceInfo", 0)
	HK_PATCH_MEMBER_REMOVED("fractureInfo", TYPE_OBJECT, "hkdDecorateFractureFaceInfo", 0)
	HK_PATCH_MEMBER_REMOVED("decorations", TYPE_ARRAY_STRUCT, "hkdShapeInstanceInfo", 0)
	HK_PATCH_MEMBER_REMOVED("cornerInfos", TYPE_OBJECT, "hkdDecorateCornerInfoContainer", 0)
	HK_PATCH_DEPENDS("hkdDecorateCornerInfoContainer", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdShapeInstanceInfo", 2)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceInfo", 0)
	HK_PATCH_DEPENDS("hkdInfo", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionControlShapes", 0, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_PARENT_SET("hkReferencedObject", HK_NULL)
	HK_PATCH_MEMBER_REMOVED("rootPhysicsShape", TYPE_OBJECT, "hkpShape", 0)
	HK_PATCH_MEMBER_REMOVED("rootControlShape", TYPE_OBJECT, "hkdBreakableShape", 0)
	HK_PATCH_MEMBER_REMOVED("rootControlShapeTransform", TYPE_VEC_16, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("controlShapes", TYPE_ARRAY_OBJECT, "hkdDecorateFractureFaceActionControlShape", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkpShape", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionControlShape", 1)
	HK_PATCH_DEPENDS("hkdBreakableShape", 4)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionControlShapesCache", 0, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_PARENT_SET("hkReferencedObject", HK_NULL)
	HK_PATCH_MEMBER_REMOVED("controlShapes", TYPE_ARRAY_OBJECT, "hkdDecorateFractureFaceActionControlShapes", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionControlShapes", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkdDecorateFractureFaceActionGlobalDecorationData", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_MEMBER_ADDED("templates", TYPE_ARRAY_OBJECT, "hkdBreakableShape", 0)
	HK_PATCH_MEMBER_ADDED("boundingBoxes", TYPE_ARRAY_VEC_4, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkdBreakableShape", 4)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionDecorationPlacement", 0, "hkdDecorateFractureFaceActionDecorationPlacement", 1)
	HK_PATCH_MEMBER_ADDED("rot", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkdDecorateFractureFaceActionDecorationPlacement_0_to_1)
	HK_PATCH_MEMBER_RENAMED("position", "pos")
	HK_PATCH_MEMBER_REMOVED("rotation", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("graphicsSource", TYPE_OBJECT, "hkdBreakableShape", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionConnectionDecorationInfo", 0, "hkdDecorateFractureFaceActionConnectionDecorationInfo", 1)
	HK_PATCH_MEMBER_ADDED("boxIndices", TYPE_ARRAY_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("compressedPlacements", TYPE_ARRAY_STRUCT, "hkdDecorateFractureFaceActionCompressedDecorationPlacement", 0)
	HK_PATCH_MEMBER_RENAMED("decorations", "placements")
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionCompressedDecorationPlacement", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionDecorationPlacement", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceActionShapeDecorationInfo", 0, "hkdDecorateFractureFaceActionShapeDecorationInfo", 1)
	HK_PATCH_MEMBER_ADDED("sharedData", TYPE_OBJECT, "hkdDecorateFractureFaceActionGlobalDecorationData", 0)
	HK_PATCH_FUNCTION(hkdDecorateFractureFaceActionShapeDecorationInfo_0_to_1)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionGlobalDecorationData", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionConnectionDecorationInfo", 1)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionDecorationPlacement", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkdDecorateFractureFaceAction", 3, "hkdDecorateFractureFaceAction", 4)
	HK_PATCH_MEMBER_ADDED("corner", TYPE_STRUCT, "hkdDecorateFractureFaceActionCornerDecorationInfo", 0)
	HK_PATCH_MEMBER_ADDED_BYTE("equalizeGaps", 1)
	HK_PATCH_MEMBER_ADDED_BYTE("protrusionTest", 0)
	HK_PATCH_MEMBER_ADDED_BYTE("compressDecorations", 1)
	HK_PATCH_FUNCTION(hkdDecorateFractureFaceAction_3_to_4)
	HK_PATCH_MEMBER_REMOVED("frontDirection", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("frontDirPolicy", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionCornerDecorationInfo", 0)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionShapeDecorationInfo", 1)
	HK_PATCH_DEPENDS("hkdDecorateFractureFaceActionDecorationPlacement", 1)
HK_PATCH_END()

/*
 * Havok SDK - NO SOURCE PC DOWNLOAD, BUILD(#20130718)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2013
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available at www.havok.com/tryhavok.
 * 
 */