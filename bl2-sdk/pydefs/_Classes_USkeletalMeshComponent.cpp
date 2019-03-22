#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkeletalMeshComponent(py::module &m)
{
    py::class_< USkeletalMeshComponent,  UMeshComponent   >(m, "USkeletalMeshComponent")
        .def_readwrite("VfTable_IIAnimBehavior", &USkeletalMeshComponent::VfTable_IIAnimBehavior)
        .def_readwrite("SkeletalMesh", &USkeletalMeshComponent::SkeletalMesh)
        .def_readwrite("AttachedToSkelComponent", &USkeletalMeshComponent::AttachedToSkelComponent)
        .def_readwrite("GestaltData", &USkeletalMeshComponent::GestaltData)
        .def_readwrite("AnimTreeTemplate", &USkeletalMeshComponent::AnimTreeTemplate)
        .def_readwrite("Animations", &USkeletalMeshComponent::Animations)
        .def_readwrite("AnimTickArray", &USkeletalMeshComponent::AnimTickArray)
        .def_readwrite("AnimAlwaysTickArray", &USkeletalMeshComponent::AnimAlwaysTickArray)
        .def_readwrite("AnimTickRelevancyArray", &USkeletalMeshComponent::AnimTickRelevancyArray)
        .def_readwrite("AnimTickWeightsArray", &USkeletalMeshComponent::AnimTickWeightsArray)
        .def_readwrite("SkelControlTickArray", &USkeletalMeshComponent::SkelControlTickArray)
        .def_readwrite("PhysicsAsset", &USkeletalMeshComponent::PhysicsAsset)
        .def_readwrite("PhysicsAssetInstance", &USkeletalMeshComponent::PhysicsAssetInstance)
        .def_readwrite("ApexClothing", &USkeletalMeshComponent::ApexClothing)
        .def_readwrite("PhysicsWeight", &USkeletalMeshComponent::PhysicsWeight)
        .def_readwrite("GlobalAnimRateScale", &USkeletalMeshComponent::GlobalAnimRateScale)
        .def_readwrite("StreamingDistanceMultiplier", &USkeletalMeshComponent::StreamingDistanceMultiplier)
        .def_readwrite("MeshObject", &USkeletalMeshComponent::MeshObject)
        .def_readwrite("SpaceBases", &USkeletalMeshComponent::SpaceBases)
        .def_readwrite("LocalAtoms", &USkeletalMeshComponent::LocalAtoms)
        .def_readwrite("CachedLocalAtoms", &USkeletalMeshComponent::CachedLocalAtoms)
        .def_readwrite("CachedSpaceBases", &USkeletalMeshComponent::CachedSpaceBases)
        .def_readwrite("LowUpdateFrameRate", &USkeletalMeshComponent::LowUpdateFrameRate)
        .def_readwrite("RequiredBones", &USkeletalMeshComponent::RequiredBones)
        .def_readwrite("ComposeOrderedRequiredBones", &USkeletalMeshComponent::ComposeOrderedRequiredBones)
        .def_readwrite("ParentAnimComponent", &USkeletalMeshComponent::ParentAnimComponent)
        .def_readwrite("ParentBoneMap", &USkeletalMeshComponent::ParentBoneMap)
        .def_readwrite("AnimSets", &USkeletalMeshComponent::AnimSets)
        .def_readwrite("TemporarySavedAnimSets", &USkeletalMeshComponent::TemporarySavedAnimSets)
        .def_readwrite("MorphSets", &USkeletalMeshComponent::MorphSets)
        .def_readwrite("ActiveMorphs", &USkeletalMeshComponent::ActiveMorphs)
        .def_readwrite("ActiveCurveMorphs", &USkeletalMeshComponent::ActiveCurveMorphs)
        .def_readwrite("Attachments", &USkeletalMeshComponent::Attachments)
        .def_readwrite("SkelControlIndex", &USkeletalMeshComponent::SkelControlIndex)
        .def_readwrite("PostPhysSkelControlIndex", &USkeletalMeshComponent::PostPhysSkelControlIndex)
        .def_readwrite("ForcedLodModel", &USkeletalMeshComponent::ForcedLodModel)
        .def_readwrite("MinLodModel", &USkeletalMeshComponent::MinLodModel)
        .def_readwrite("PredictedLODLevel", &USkeletalMeshComponent::PredictedLODLevel)
        .def_readwrite("OldPredictedLODLevel", &USkeletalMeshComponent::OldPredictedLODLevel)
        .def_readwrite("AnimationLODDistanceFactor", &USkeletalMeshComponent::AnimationLODDistanceFactor)
        .def_readwrite("AnimationLODFrameRate", &USkeletalMeshComponent::AnimationLODFrameRate)
        .def_readwrite("MaxDistanceFactor", &USkeletalMeshComponent::MaxDistanceFactor)
        .def_readwrite("bForceWireframe", &USkeletalMeshComponent::bForceWireframe)
        .def_readwrite("bForceRefpose", &USkeletalMeshComponent::bForceRefpose)
        .def_readwrite("bOldForceRefPose", &USkeletalMeshComponent::bOldForceRefPose)
        .def_readwrite("bDisplayBones", &USkeletalMeshComponent::bDisplayBones)
        .def_readwrite("bShowPrePhysBones", &USkeletalMeshComponent::bShowPrePhysBones)
        .def_readwrite("bHideSkin", &USkeletalMeshComponent::bHideSkin)
        .def_readwrite("bForceRawOffset", &USkeletalMeshComponent::bForceRawOffset)
        .def_readwrite("bIgnoreControllers", &USkeletalMeshComponent::bIgnoreControllers)
        .def_readwrite("bTransformFromAnimParent", &USkeletalMeshComponent::bTransformFromAnimParent)
        .def_readwrite("TickTag", &USkeletalMeshComponent::TickTag)
        .def_readwrite("InitTag", &USkeletalMeshComponent::InitTag)
        .def_readwrite("CachedAtomsTag", &USkeletalMeshComponent::CachedAtomsTag)
        .def_readwrite("bUseSingleBodyPhysics", &USkeletalMeshComponent::bUseSingleBodyPhysics)
        .def_readwrite("bRequiredBonesUpToDate", &USkeletalMeshComponent::bRequiredBonesUpToDate)
        .def_readwrite("MinDistFactorForKinematicUpdate", &USkeletalMeshComponent::MinDistFactorForKinematicUpdate)
        .def_readwrite("FramesPhysicsAsleep", &USkeletalMeshComponent::FramesPhysicsAsleep)
        .def_readwrite("LineCheckBoundsScale", &USkeletalMeshComponent::LineCheckBoundsScale)
        .def_readwrite("InstanceVertexWeightBones", &USkeletalMeshComponent::InstanceVertexWeightBones)
        .def_readwrite("LODInfo", &USkeletalMeshComponent::LODInfo)
        .def_readwrite("FrozenLocalToWorldPos", &USkeletalMeshComponent::FrozenLocalToWorldPos)
        .def_readwrite("FrozenLocalToWorldRot", &USkeletalMeshComponent::FrozenLocalToWorldRot)
        .def_readwrite("ClothExternalForce", &USkeletalMeshComponent::ClothExternalForce)
        .def_readwrite("ClothWind", &USkeletalMeshComponent::ClothWind)
        .def_readwrite("ClothBaseVelClampRange", &USkeletalMeshComponent::ClothBaseVelClampRange)
        .def_readwrite("ClothBlendWeight", &USkeletalMeshComponent::ClothBlendWeight)
        .def_readwrite("ClothDynamicBlendWeight", &USkeletalMeshComponent::ClothDynamicBlendWeight)
        .def_readwrite("ClothBlendMinDistanceFactor", &USkeletalMeshComponent::ClothBlendMinDistanceFactor)
        .def_readwrite("ClothBlendMaxDistanceFactor", &USkeletalMeshComponent::ClothBlendMaxDistanceFactor)
        .def_readwrite("MinPosDampRange", &USkeletalMeshComponent::MinPosDampRange)
        .def_readwrite("MaxPosDampRange", &USkeletalMeshComponent::MaxPosDampRange)
        .def_readwrite("MinPosDampScale", &USkeletalMeshComponent::MinPosDampScale)
        .def_readwrite("MaxPosDampScale", &USkeletalMeshComponent::MaxPosDampScale)
        .def_readwrite("ClothSim", &USkeletalMeshComponent::ClothSim)
        .def_readwrite("SceneIndex", &USkeletalMeshComponent::SceneIndex)
        .def_readwrite("ClothMeshPosData", &USkeletalMeshComponent::ClothMeshPosData)
        .def_readwrite("ClothMeshNormalData", &USkeletalMeshComponent::ClothMeshNormalData)
        .def_readwrite("ClothMeshIndexData", &USkeletalMeshComponent::ClothMeshIndexData)
        .def_readwrite("NumClothMeshVerts", &USkeletalMeshComponent::NumClothMeshVerts)
        .def_readwrite("NumClothMeshIndices", &USkeletalMeshComponent::NumClothMeshIndices)
        .def_readwrite("ClothMeshParentData", &USkeletalMeshComponent::ClothMeshParentData)
        .def_readwrite("NumClothMeshParentIndices", &USkeletalMeshComponent::NumClothMeshParentIndices)
        .def_readwrite("LastClothHitVertexId", &USkeletalMeshComponent::LastClothHitVertexId)
        .def_readwrite("ClothMeshWeldedPosData", &USkeletalMeshComponent::ClothMeshWeldedPosData)
        .def_readwrite("ClothMeshWeldedNormalData", &USkeletalMeshComponent::ClothMeshWeldedNormalData)
        .def_readwrite("ClothMeshWeldedIndexData", &USkeletalMeshComponent::ClothMeshWeldedIndexData)
        .def_readwrite("ClothDirtyBufferFlag", &USkeletalMeshComponent::ClothDirtyBufferFlag)
        .def_readwrite("ClothRBChannel", &USkeletalMeshComponent::ClothRBChannel)
        .def_readwrite("ClothRBCollideWithChannels", &USkeletalMeshComponent::ClothRBCollideWithChannels)
        .def_readwrite("ClothForceScale", &USkeletalMeshComponent::ClothForceScale)
        .def_readwrite("ClothImpulseScale", &USkeletalMeshComponent::ClothImpulseScale)
        .def_readwrite("ClothAttachmentTearFactor", &USkeletalMeshComponent::ClothAttachmentTearFactor)
        .def_readwrite("MinDistanceForClothReset", &USkeletalMeshComponent::MinDistanceForClothReset)
        .def_readwrite("LastClothLocation", &USkeletalMeshComponent::LastClothLocation)
        .def_readwrite("ApexClothingRBChannel", &USkeletalMeshComponent::ApexClothingRBChannel)
        .def_readwrite("ApexClothingRBCollideWithChannels", &USkeletalMeshComponent::ApexClothingRBCollideWithChannels)
        .def_readwrite("ApexClothingCollisionRBChannel", &USkeletalMeshComponent::ApexClothingCollisionRBChannel)
        .def_readwrite("WindVelocity", &USkeletalMeshComponent::WindVelocity)
        .def_readwrite("WindVelocityBlendTime", &USkeletalMeshComponent::WindVelocityBlendTime)
        .def_readwrite("SoftBodySim", &USkeletalMeshComponent::SoftBodySim)
        .def_readwrite("SoftBodySceneIndex", &USkeletalMeshComponent::SoftBodySceneIndex)
        .def_readwrite("SoftBodyTetraPosData", &USkeletalMeshComponent::SoftBodyTetraPosData)
        .def_readwrite("SoftBodyTetraIndexData", &USkeletalMeshComponent::SoftBodyTetraIndexData)
        .def_readwrite("NumSoftBodyTetraVerts", &USkeletalMeshComponent::NumSoftBodyTetraVerts)
        .def_readwrite("NumSoftBodyTetraIndices", &USkeletalMeshComponent::NumSoftBodyTetraIndices)
        .def_readwrite("SoftBodyImpulseScale", &USkeletalMeshComponent::SoftBodyImpulseScale)
        .def_readwrite("SoftBodyRBChannel", &USkeletalMeshComponent::SoftBodyRBChannel)
        .def_readwrite("SoftBodyRBCollideWithChannels", &USkeletalMeshComponent::SoftBodyRBCollideWithChannels)
        .def_readwrite("SoftBodyASVPlane", &USkeletalMeshComponent::SoftBodyASVPlane)
        .def_readwrite("LimitMaterial", &USkeletalMeshComponent::LimitMaterial)
        .def_readwrite("RootMotionDelta", &USkeletalMeshComponent::RootMotionDelta)
        .def_readwrite("RootMotionVelocity", &USkeletalMeshComponent::RootMotionVelocity)
        .def_readwrite("RootBoneTranslation", &USkeletalMeshComponent::RootBoneTranslation)
        .def_readwrite("RootMotionAccelScale", &USkeletalMeshComponent::RootMotionAccelScale)
        .def_readwrite("RootMotionMode", &USkeletalMeshComponent::RootMotionMode)
        .def_readwrite("PreviousRMM", &USkeletalMeshComponent::PreviousRMM)
        .def_readwrite("PendingRMM", &USkeletalMeshComponent::PendingRMM)
        .def_readwrite("OldPendingRMM", &USkeletalMeshComponent::OldPendingRMM)
        .def_readwrite("bRMMOneFrameDelay", &USkeletalMeshComponent::bRMMOneFrameDelay)
        .def_readwrite("RootMotionRotationMode", &USkeletalMeshComponent::RootMotionRotationMode)
        .def_readwrite("AnimRotationOnly", &USkeletalMeshComponent::AnimRotationOnly)
        .def_readwrite("bRemoveRootBoneScale", &USkeletalMeshComponent::bRemoveRootBoneScale)
        .def_readwrite("RootMotionSpace", &USkeletalMeshComponent::RootMotionSpace)
        .def_readwrite("FaceFXBlendMode", &USkeletalMeshComponent::FaceFXBlendMode)
        .def_readwrite("FaceFXActorInstance", &USkeletalMeshComponent::FaceFXActorInstance)
        .def_readwrite("CachedFaceFXAudioComp", &USkeletalMeshComponent::CachedFaceFXAudioComp)
        .def_readwrite("BoneVisibilityStates", &USkeletalMeshComponent::BoneVisibilityStates)
        .def_readwrite("CachedFaceFxAkEvent", &USkeletalMeshComponent::CachedFaceFxAkEvent)
        .def_readwrite("FaceFXPlayTime", &USkeletalMeshComponent::FaceFXPlayTime)
        .def_readwrite("CachedPlayingInfo", &USkeletalMeshComponent::CachedPlayingInfo)
        .def_readwrite("PlayingFXAnimSet", &USkeletalMeshComponent::PlayingFXAnimSet)
        .def_readwrite("LocalToWorldBoneAtom", &USkeletalMeshComponent::LocalToWorldBoneAtom)
        .def_readwrite("ProgressiveDrawingFraction", &USkeletalMeshComponent::ProgressiveDrawingFraction)
        .def_readwrite("CustomSortAlternateIndexMode", &USkeletalMeshComponent::CustomSortAlternateIndexMode)
        .def_readwrite("ViewZeroOffset", &USkeletalMeshComponent::ViewZeroOffset)
        .def_readwrite("ViewOneOffset", &USkeletalMeshComponent::ViewOneOffset)
        .def_readwrite("BlendMorphNode", &USkeletalMeshComponent::BlendMorphNode)
        .def_readwrite("MorphWeightTarget", &USkeletalMeshComponent::MorphWeightTarget)
        .def_readwrite("MorphWeightStart", &USkeletalMeshComponent::MorphWeightStart)
        .def_readwrite("MorphBlendTime", &USkeletalMeshComponent::MorphBlendTime)
        .def_readwrite("MorphBlendCurr", &USkeletalMeshComponent::MorphBlendCurr)
        .def("Behavior_ChangeBoneVisibility", &USkeletalMeshComponent::Behavior_ChangeBoneVisibility)
        .def("Behavior_ToggleBoneVisibility", &USkeletalMeshComponent::Behavior_ToggleBoneVisibility)
        .def("Behavior_InstanceVertexWeight", &USkeletalMeshComponent::Behavior_InstanceVertexWeight)
        .def("SetViewportMaterialOffsets", &USkeletalMeshComponent::SetViewportMaterialOffsets)
        .def("SetForceDiscardRootMotion", &USkeletalMeshComponent::SetForceDiscardRootMotion)
        .def("Behavior_SetMorphNodeWeight", &USkeletalMeshComponent::Behavior_SetMorphNodeWeight)
        .def("SetRootMotionSpaceOverride", &USkeletalMeshComponent::SetRootMotionSpaceOverride)
        .def("SetRemoveRootBoneScale", &USkeletalMeshComponent::SetRemoveRootBoneScale)
        .def("GetAnimTreeNodes", &USkeletalMeshComponent::GetAnimTreeNodes)
        .def("Behavior_SetSkelControlStrength", &USkeletalMeshComponent::Behavior_SetSkelControlStrength)
        .def("GetRotation", &USkeletalMeshComponent::GetRotation)
        .def("GetPosition", &USkeletalMeshComponent::GetPosition)
        .def("BreakConstraint", &USkeletalMeshComponent::BreakConstraint)
        .def("SkelMeshCompOnParticleSystemFinished", &USkeletalMeshComponent::SkelMeshCompOnParticleSystemFinished)
        .def("eventPlayParticleEffect", &USkeletalMeshComponent::eventPlayParticleEffect)
        .def("eventCreateForceField", &USkeletalMeshComponent::eventCreateForceField)
        .def("StopAnim", &USkeletalMeshComponent::StopAnim)
        .def("PlayAnim", &USkeletalMeshComponent::PlayAnim)
        .def("Blink", &USkeletalMeshComponent::Blink)
        .def("ShowMaterialSection", &USkeletalMeshComponent::ShowMaterialSection)
        .def("UpdateMeshForBrokenConstraints", &USkeletalMeshComponent::UpdateMeshForBrokenConstraints)
        .def("InitBoneVisibilityStates", &USkeletalMeshComponent::InitBoneVisibilityStates)
        .def("UnHideBoneByName", &USkeletalMeshComponent::UnHideBoneByName)
        .def("HideBoneByName", &USkeletalMeshComponent::HideBoneByName)
        .def("IsBoneHidden", &USkeletalMeshComponent::IsBoneHidden)
        .def("UnHideBone", &USkeletalMeshComponent::UnHideBone)
        .def("HideBone", &USkeletalMeshComponent::HideBone)
        .def("SetFaceFXRegisterEx", &USkeletalMeshComponent::SetFaceFXRegisterEx)
        .def("SetFaceFXRegister", &USkeletalMeshComponent::SetFaceFXRegister)
        .def("GetFaceFXRegister", &USkeletalMeshComponent::GetFaceFXRegister)
        .def("DeclareFaceFXRegister", &USkeletalMeshComponent::DeclareFaceFXRegister)
        .def("IsPlayingFaceFXAnim", &USkeletalMeshComponent::IsPlayingFaceFXAnim)
        .def("StopFaceFXAnim", &USkeletalMeshComponent::StopFaceFXAnim)
        .def("PlayFaceFXAnim", &USkeletalMeshComponent::PlayFaceFXAnim)
        .def("ToggleInstanceVertexWeights", &USkeletalMeshComponent::ToggleInstanceVertexWeights)
        .def("UpdateInstanceVertexWeightBones", &USkeletalMeshComponent::UpdateInstanceVertexWeightBones)
        .def("FindInstanceVertexweightBonePair", &USkeletalMeshComponent::FindInstanceVertexweightBonePair)
        .def("RemoveInstanceVertexWeightBoneParented", &USkeletalMeshComponent::RemoveInstanceVertexWeightBoneParented)
        .def("AddInstanceVertexWeightBoneParented", &USkeletalMeshComponent::AddInstanceVertexWeightBoneParented)
        .def("GetBonesWithinRadius", &USkeletalMeshComponent::GetBonesWithinRadius)
        .def("UpdateAnimations", &USkeletalMeshComponent::UpdateAnimations)
        .def("ForceSkelUpdate", &USkeletalMeshComponent::ForceSkelUpdate)
        .def("UpdateRBBonesFromSpaceBases", &USkeletalMeshComponent::UpdateRBBonesFromSpaceBases)
        .def("SetHasPhysicsAssetInstance", &USkeletalMeshComponent::SetHasPhysicsAssetInstance)
        .def("FindBodyInstanceNamed", &USkeletalMeshComponent::FindBodyInstanceNamed, py::return_value_policy::reference)
        .def("FindConstraintBoneName", &USkeletalMeshComponent::FindConstraintBoneName)
        .def("FindConstraintIndex", &USkeletalMeshComponent::FindConstraintIndex)
        .def("InitMorphTargets", &USkeletalMeshComponent::InitMorphTargets)
        .def("InitSkelControls", &USkeletalMeshComponent::InitSkelControls)
        .def("UpdateParentBoneMap", &USkeletalMeshComponent::UpdateParentBoneMap)
        .def("SetParentAnimComponent", &USkeletalMeshComponent::SetParentAnimComponent)
        .def("SetAnimTreeTemplate", &USkeletalMeshComponent::SetAnimTreeTemplate)
        .def("GetClosestCollidingBoneLocation", &USkeletalMeshComponent::GetClosestCollidingBoneLocation)
        .def("FindClosestBone", &USkeletalMeshComponent::FindClosestBone)
        .def("TransformFromBoneSpace", &USkeletalMeshComponent::TransformFromBoneSpace)
        .def("TransformToBoneSpace", &USkeletalMeshComponent::TransformToBoneSpace)
        .def("GetBoneAxis", &USkeletalMeshComponent::GetBoneAxis)
        .def("GetRefPosePosition", &USkeletalMeshComponent::GetRefPosePosition)
        .def("BoneIsChildOf", &USkeletalMeshComponent::BoneIsChildOf)
        .def("GetBoneNames", &USkeletalMeshComponent::GetBoneNames)
        .def("GetParentBone", &USkeletalMeshComponent::GetParentBone)
        .def("GetBoneMatrix", &USkeletalMeshComponent::GetBoneMatrix)
        .def("GetBoneName", &USkeletalMeshComponent::GetBoneName)
        .def("MatchRefBone", &USkeletalMeshComponent::MatchRefBone)
        .def("GetBoneRotation", &USkeletalMeshComponent::GetBoneRotation)
        .def("GetBoneLocationEx", [](USkeletalMeshComponent &self , struct FName BoneName, int Space) { unsigned char* pyFound = (unsigned char*)malloc(sizeof(unsigned char)) ;  struct FVector ret =  self.GetBoneLocationEx(BoneName, Space, pyFound); return py::make_tuple(ret, *pyFound); })
        .def("GetBoneLocation", &USkeletalMeshComponent::GetBoneLocation)
        .def("GetBoneQuaternion", &USkeletalMeshComponent::GetBoneQuaternion)
        .def("DrawAnimDebug", &USkeletalMeshComponent::DrawAnimDebug)
        .def("FindMorphNode", &USkeletalMeshComponent::FindMorphNode, py::return_value_policy::reference)
        .def("FindSkelControl", &USkeletalMeshComponent::FindSkelControl, py::return_value_policy::reference)
        .def("AllAnimNodes", [](USkeletalMeshComponent &self , class UClass* BaseClass) { class UAnimNode** pyNode = 0 ;   self.AllAnimNodes(BaseClass, pyNode); return py::make_tuple(*pyNode); })
        .def("FindAnimNode", &USkeletalMeshComponent::FindAnimNode, py::return_value_policy::reference)
        .def("FindMorphTarget", &USkeletalMeshComponent::FindMorphTarget, py::return_value_policy::reference)
        .def("GetAnimLength", &USkeletalMeshComponent::GetAnimLength)
        .def("GetAnimRateByDuration", &USkeletalMeshComponent::GetAnimRateByDuration)
        .def("RestoreSavedAnimSets", &USkeletalMeshComponent::RestoreSavedAnimSets)
        .def("SaveAnimSets", &USkeletalMeshComponent::SaveAnimSets)
        .def("FindAnimSequence", &USkeletalMeshComponent::FindAnimSequence, py::return_value_policy::reference)
        .def("WakeSoftBody", &USkeletalMeshComponent::WakeSoftBody)
        .def("SetSoftBodyFrozen", &USkeletalMeshComponent::SetSoftBodyFrozen)
        .def("UpdateSoftBodyParams", &USkeletalMeshComponent::UpdateSoftBodyParams)
        .def("SetClothValidBounds", &USkeletalMeshComponent::SetClothValidBounds)
        .def("EnableClothValidBounds", &USkeletalMeshComponent::EnableClothValidBounds)
        .def("AttachClothToCollidingShapes", &USkeletalMeshComponent::AttachClothToCollidingShapes)
        .def("SetClothVelocity", &USkeletalMeshComponent::SetClothVelocity)
        .def("SetClothPosition", &USkeletalMeshComponent::SetClothPosition)
        .def("SetClothSleep", &USkeletalMeshComponent::SetClothSleep)
        .def("SetClothThickness", &USkeletalMeshComponent::SetClothThickness)
        .def("SetClothTearFactor", &USkeletalMeshComponent::SetClothTearFactor)
        .def("SetClothStretchingStiffness", &USkeletalMeshComponent::SetClothStretchingStiffness)
        .def("SetClothSolverIterations", &USkeletalMeshComponent::SetClothSolverIterations)
        .def("SetClothSleepLinearVelocity", &USkeletalMeshComponent::SetClothSleepLinearVelocity)
        .def("SetClothPressure", &USkeletalMeshComponent::SetClothPressure)
        .def("SetClothFriction", &USkeletalMeshComponent::SetClothFriction)
        .def("SetClothFlags", &USkeletalMeshComponent::SetClothFlags)
        .def("SetClothDampingCoefficient", &USkeletalMeshComponent::SetClothDampingCoefficient)
        .def("SetClothCollisionResponseCoefficient", &USkeletalMeshComponent::SetClothCollisionResponseCoefficient)
        .def("SetClothBendingStiffness", &USkeletalMeshComponent::SetClothBendingStiffness)
        .def("SetClothAttachmentTearFactor", &USkeletalMeshComponent::SetClothAttachmentTearFactor)
        .def("SetClothAttachmentResponseCoefficient", &USkeletalMeshComponent::SetClothAttachmentResponseCoefficient)
        .def("GetClothThickness", &USkeletalMeshComponent::GetClothThickness)
        .def("GetClothTearFactor", &USkeletalMeshComponent::GetClothTearFactor)
        .def("GetClothStretchingStiffness", &USkeletalMeshComponent::GetClothStretchingStiffness)
        .def("GetClothSolverIterations", &USkeletalMeshComponent::GetClothSolverIterations)
        .def("GetClothSleepLinearVelocity", &USkeletalMeshComponent::GetClothSleepLinearVelocity)
        .def("GetClothPressure", &USkeletalMeshComponent::GetClothPressure)
        .def("GetClothFriction", &USkeletalMeshComponent::GetClothFriction)
        .def("GetClothFlags", &USkeletalMeshComponent::GetClothFlags)
        .def("GetClothDampingCoefficient", &USkeletalMeshComponent::GetClothDampingCoefficient)
        .def("GetClothCollisionResponseCoefficient", &USkeletalMeshComponent::GetClothCollisionResponseCoefficient)
        .def("GetClothBendingStiffness", &USkeletalMeshComponent::GetClothBendingStiffness)
        .def("GetClothAttachmentTearFactor", &USkeletalMeshComponent::GetClothAttachmentTearFactor)
        .def("GetClothAttachmentResponseCoefficient", &USkeletalMeshComponent::GetClothAttachmentResponseCoefficient)
        .def("ForceApexClothingTeleport", &USkeletalMeshComponent::ForceApexClothingTeleport)
        .def("ForceApexClothingTeleportAndReset", &USkeletalMeshComponent::ForceApexClothingTeleportAndReset)
        .def("AddImpulseAtClothPos", &USkeletalMeshComponent::AddImpulseAtClothPos)
        .def("ResetClothVertsToRefPose", &USkeletalMeshComponent::ResetClothVertsToRefPose)
        .def("SetAttachClothVertsToBaseBody", &USkeletalMeshComponent::SetAttachClothVertsToBaseBody)
        .def("SetClothExternalForce", &USkeletalMeshComponent::SetClothExternalForce)
        .def("UpdateClothParams", &USkeletalMeshComponent::UpdateClothParams)
        .def("SetEnableClothingSimulation", &USkeletalMeshComponent::SetEnableClothingSimulation)
        .def("SetClothFrozen", &USkeletalMeshComponent::SetClothFrozen)
        .def("SetEnableClothSimulation", &USkeletalMeshComponent::SetEnableClothSimulation)
        .def("SetForceRefPose", &USkeletalMeshComponent::SetForceRefPose)
        .def("SetPhysicsAsset", &USkeletalMeshComponent::SetPhysicsAsset)
        .def("InitGestaltMeshDataFromOther", &USkeletalMeshComponent::InitGestaltMeshDataFromOther)
        .def("SetSkeletalMesh", &USkeletalMeshComponent::SetSkeletalMesh)
        .def("GetTransformMatrix", &USkeletalMeshComponent::GetTransformMatrix)
        .def("AttachedComponents", [](USkeletalMeshComponent &self , class UClass* BaseClass) { class UActorComponent** pyOutComponent = 0 ;   self.AttachedComponents(BaseClass, pyOutComponent); return py::make_tuple(*pyOutComponent); })
        .def("IsComponentAttached", &USkeletalMeshComponent::IsComponentAttached)
        .def("FindComponentAttachedToBone", &USkeletalMeshComponent::FindComponentAttachedToBone, py::return_value_policy::reference)
        .def("GetSocketBoneName", &USkeletalMeshComponent::GetSocketBoneName)
        .def("GetSocketByName", &USkeletalMeshComponent::GetSocketByName, py::return_value_policy::reference)
        .def("GetBoneOrSocketMeshDeltaTransform", &USkeletalMeshComponent::GetBoneOrSocketMeshDeltaTransform)
        .def("GetBoneOrSocketMeshTransformAtTime", &USkeletalMeshComponent::GetBoneOrSocketMeshTransformAtTime)
        .def("GetSocketWorldLocationAndRotation", &USkeletalMeshComponent::GetSocketWorldLocationAndRotation)
        .def("AttachComponentToSocket", &USkeletalMeshComponent::AttachComponentToSocket)
        .def("DetachComponent", &USkeletalMeshComponent::DetachComponent)
        .def("AttachComponent", &USkeletalMeshComponent::AttachComponent)
          ;
}