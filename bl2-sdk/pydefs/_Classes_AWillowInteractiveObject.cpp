#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowInteractiveObject(py::module &m)
{
    py::class_< AWillowInteractiveObject,  AActor   >(m, "AWillowInteractiveObject")
        .def_readwrite("VfTable_IITimerBehavior", &AWillowInteractiveObject::VfTable_IITimerBehavior)
        .def_readwrite("VfTable_IICustomEvent", &AWillowInteractiveObject::VfTable_IICustomEvent)
        .def_readwrite("VfTable_IIKilledBehavior", &AWillowInteractiveObject::VfTable_IIKilledBehavior)
        .def_readwrite("VfTable_IIInstanceData", &AWillowInteractiveObject::VfTable_IIInstanceData)
        .def_readwrite("VfTable_IIStatusEffectTarget", &AWillowInteractiveObject::VfTable_IIStatusEffectTarget)
        .def_readwrite("VfTable_IITargetable", &AWillowInteractiveObject::VfTable_IITargetable)
        .def_readwrite("VfTable_ISpecialMoveInterface", &AWillowInteractiveObject::VfTable_ISpecialMoveInterface)
        .def_readwrite("VfTable_IIDynamicObstacle", &AWillowInteractiveObject::VfTable_IIDynamicObstacle)
        .def_readwrite("VfTable_IIMapDisplayInfo", &AWillowInteractiveObject::VfTable_IIMapDisplayInfo)
        .def_readwrite("VfTable_IIDesignerAttributeProvider", &AWillowInteractiveObject::VfTable_IIDesignerAttributeProvider)
        .def_readwrite("VfTable_IIDamageSurface", &AWillowInteractiveObject::VfTable_IIDamageSurface)
        .def_readwrite("VfTable_IIUsable", &AWillowInteractiveObject::VfTable_IIUsable)
        .def_readwrite("VfTable_IIBalancedActor", &AWillowInteractiveObject::VfTable_IIBalancedActor)
        .def_readwrite("VfTable_IIMissionDirector", &AWillowInteractiveObject::VfTable_IIMissionDirector)
        .def_readwrite("VfTable_IIMissionObjective", &AWillowInteractiveObject::VfTable_IIMissionObjective)
        .def_readwrite("VfTable_IIGFxActorMovie", &AWillowInteractiveObject::VfTable_IIGFxActorMovie)
        .def_readwrite("VfTable_IILootable", &AWillowInteractiveObject::VfTable_IILootable)
        .def_readwrite("VfTable_IIDamageable", &AWillowInteractiveObject::VfTable_IIDamageable)
        .def_readwrite("VfTable_IIBehaviorConsumer", &AWillowInteractiveObject::VfTable_IIBehaviorConsumer)
        .def_readwrite("VfTable_IIBodyCompositionInstance", &AWillowInteractiveObject::VfTable_IIBodyCompositionInstance)
        .def_readwrite("VfTable_IIFocusable", &AWillowInteractiveObject::VfTable_IIFocusable)
        .def_readwrite("VfTable_IIHitRegionConsumer", &AWillowInteractiveObject::VfTable_IIHitRegionConsumer)
        .def_readwrite("VfTable_IISimpleAnimPlayer", &AWillowInteractiveObject::VfTable_IISimpleAnimPlayer)
        .def_readwrite("VfTable_IGearboxDialogInterface", &AWillowInteractiveObject::VfTable_IGearboxDialogInterface)
        .def_readwrite("VfTable_IILevelChallengeObject", &AWillowInteractiveObject::VfTable_IILevelChallengeObject)
        .def_readwrite("InteractiveObjectDefinition", &AWillowInteractiveObject::InteractiveObjectDefinition)
        .def_readwrite("Allegiance", &AWillowInteractiveObject::Allegiance)
        .def_readwrite("EnabledBehaviorSets", &AWillowInteractiveObject::EnabledBehaviorSets)
        .def_readwrite("CylinderComponent", &AWillowInteractiveObject::CylinderComponent)
        .def_readwrite("ObjectMesh", &AWillowInteractiveObject::ObjectMesh)
        .def_readwrite("CompassIcon", &AWillowInteractiveObject::CompassIcon)
        .def_readwrite("NumberInChallengeGroup", &AWillowInteractiveObject::NumberInChallengeGroup)
        .def_readwrite("WarriorFade", &AWillowInteractiveObject::WarriorFade)
        .def_readwrite("LightEnvironment", &AWillowInteractiveObject::LightEnvironment)
        .def_readwrite("AllegianceParent", &AWillowInteractiveObject::AllegianceParent)
        .def_readwrite("AllegianceChildren", &AWillowInteractiveObject::AllegianceChildren)
        .def_readwrite("NumAICurrentlyTargeting", &AWillowInteractiveObject::NumAICurrentlyTargeting)
        .def_readwrite("ReplicatedState", &AWillowInteractiveObject::ReplicatedState)
        .def_readwrite("ConsumerHandle", &AWillowInteractiveObject::ConsumerHandle)
        .def_readwrite("ReplicatedBehaviorEvent", &AWillowInteractiveObject::ReplicatedBehaviorEvent)
        .def_readwrite("InstanceState", &AWillowInteractiveObject::InstanceState)
        .def_readwrite("ReplicatedCFX", &AWillowInteractiveObject::ReplicatedCFX)
        .def_readwrite("ManuallyBalanceToRegionDef", &AWillowInteractiveObject::ManuallyBalanceToRegionDef)
        .def_readwrite("ExpLevel", &AWillowInteractiveObject::ExpLevel)
        .def_readwrite("GameStage", &AWillowInteractiveObject::GameStage)
        .def_readwrite("AwesomeLevel", &AWillowInteractiveObject::AwesomeLevel)
        .def_readwrite("BalanceDefinitionState", &AWillowInteractiveObject::BalanceDefinitionState)
        .def_readwrite("InteractiveObjectTimers", &AWillowInteractiveObject::InteractiveObjectTimers)
        .def_readwrite("LastMaxHealth", &AWillowInteractiveObject::LastMaxHealth)
        .def_readwrite("LastHealth", &AWillowInteractiveObject::LastHealth)
        .def_readwrite("MaxHealth", &AWillowInteractiveObject::MaxHealth)
        .def_readwrite("MaxHealthBaseValue", &AWillowInteractiveObject::MaxHealthBaseValue)
        .def_readwrite("MaxHealthModifierStack", &AWillowInteractiveObject::MaxHealthModifierStack)
        .def_readwrite("Health", &AWillowInteractiveObject::Health)
        .def_readwrite("AttributeStartingValues", &AWillowInteractiveObject::AttributeStartingValues)
        .def_readwrite("DesignerAttributes", &AWillowInteractiveObject::DesignerAttributes)
        .def_readwrite("AlwaysRelevantDistanceSquared", &AWillowInteractiveObject::AlwaysRelevantDistanceSquared)
        .def_readwrite("StatusEffectComp", &AWillowInteractiveObject::StatusEffectComp)
        .def_readwrite("Directives", &AWillowInteractiveObject::Directives)
        .def_readwrite("MissionDirectorParticle", &AWillowInteractiveObject::MissionDirectorParticle)
        .def_readwrite("ObjectiveBit", &AWillowInteractiveObject::ObjectiveBit)
        .def_readwrite("AnnouncedMissions", &AWillowInteractiveObject::AnnouncedMissions)
        .def_readwrite("AssociatedStationDefinitionName", &AWillowInteractiveObject::AssociatedStationDefinitionName)
        .def_readwrite("Loot", &AWillowInteractiveObject::Loot)
        .def_readwrite("MaxDrawDistanceOverride", &AWillowInteractiveObject::MaxDrawDistanceOverride)
        .def_readwrite("LastDamagedByController", &AWillowInteractiveObject::LastDamagedByController)
        .def_readwrite("HitRegionHealthScaleAttribute", &AWillowInteractiveObject::HitRegionHealthScaleAttribute)
        .def_readwrite("HitRegionHealthScaleAttributeBaseValue", &AWillowInteractiveObject::HitRegionHealthScaleAttributeBaseValue)
        .def_readwrite("HitRegionHealthScaleAttributeModifierStack", &AWillowInteractiveObject::HitRegionHealthScaleAttributeModifierStack)
        .def_readwrite("MyHitRegionHelper", &AWillowInteractiveObject::MyHitRegionHelper)
        .def_readwrite("SMComponent", &AWillowInteractiveObject::SMComponent)
        .def_readwrite("ReplicatedSMData", &AWillowInteractiveObject::ReplicatedSMData)
        .def_readwrite("SimpleAnimState", &AWillowInteractiveObject::SimpleAnimState)
        .def_readwrite("RepSimpleAnimState", &AWillowInteractiveObject::RepSimpleAnimState)
        .def_readwrite("SimpleAnimInfo", &AWillowInteractiveObject::SimpleAnimInfo)
        .def_readwrite("LightProjMgr", &AWillowInteractiveObject::LightProjMgr)
        .def_readwrite("SoundGroup", &AWillowInteractiveObject::SoundGroup)
        .def_readwrite("TargetPatsy", &AWillowInteractiveObject::TargetPatsy)
        .def_readwrite("DialogComponent", &AWillowInteractiveObject::DialogComponent)
        .def_readwrite("DialogReplicatedData", &AWillowInteractiveObject::DialogReplicatedData)
        .def_readwrite("CurrentNameTag", &AWillowInteractiveObject::CurrentNameTag)
        .def_readwrite("LastUsedComponent", &AWillowInteractiveObject::LastUsedComponent)
        .def_readwrite("SkelUpdateTime", &AWillowInteractiveObject::SkelUpdateTime)
        .def_readwrite("LastThrottleCheck", &AWillowInteractiveObject::LastThrottleCheck)
        .def_readwrite("AssociatedChallenge", &AWillowInteractiveObject::AssociatedChallenge)
        .def_readwrite("RepObjectMeshScale", &AWillowInteractiveObject::RepObjectMeshScale)
        .def("OnPlayerClosedMissionUI", &AWillowInteractiveObject::OnPlayerClosedMissionUI)
        .def("OnPlayerOpenedMissionUI", &AWillowInteractiveObject::OnPlayerOpenedMissionUI)
        .def("eventGetMapDisplayName", &AWillowInteractiveObject::eventGetMapDisplayName)
        .def("eventGetMapDisplayHeader", &AWillowInteractiveObject::eventGetMapDisplayHeader)
        .def("GetObstacleInfo", &AWillowInteractiveObject::GetObstacleInfo)
        .def("GetObstacleActor", &AWillowInteractiveObject::GetObstacleActor, py::return_value_policy::reference)
        .def("GetMagnetData", &AWillowInteractiveObject::GetMagnetData)
        .def("SetObstacleVelocity", &AWillowInteractiveObject::SetObstacleVelocity)
        .def("CanAvoidObstacle", &AWillowInteractiveObject::CanAvoidObstacle)
        .def("CanAvoidObstacles", &AWillowInteractiveObject::CanAvoidObstacles)
        .def("SetObstacleActive", &AWillowInteractiveObject::SetObstacleActive)
        .def("IsObstacleActive", &AWillowInteractiveObject::IsObstacleActive)
        .def("SetDialogNameTag", &AWillowInteractiveObject::SetDialogNameTag)
        .def("eventServerDialog_TriggerEvent", &AWillowInteractiveObject::eventServerDialog_TriggerEvent)
        .def("GetReplicatedDialogData", &AWillowInteractiveObject::GetReplicatedDialogData)
        .def("SetReplicatedDialogData", &AWillowInteractiveObject::SetReplicatedDialogData)
        .def("GetDialogGroups", &AWillowInteractiveObject::GetDialogGroups)
        .def("GetDialogComponent", &AWillowInteractiveObject::GetDialogComponent, py::return_value_policy::reference)
        .def("GetDialogNameTag", &AWillowInteractiveObject::GetDialogNameTag, py::return_value_policy::reference)
        .def("CanTalk", &AWillowInteractiveObject::CanTalk)
        .def("TouchDenied", &AWillowInteractiveObject::TouchDenied)
        .def("SetPatsy", &AWillowInteractiveObject::SetPatsy)
        .def("GetPatsy", &AWillowInteractiveObject::GetPatsy, py::return_value_policy::reference)
        .def("IsBeingHealed", &AWillowInteractiveObject::IsBeingHealed)
        .def("SetBeingHealed", &AWillowInteractiveObject::SetBeingHealed)
        .def("GetControllerResponsibleForDamage", &AWillowInteractiveObject::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &AWillowInteractiveObject::GetInstigator, py::return_value_policy::reference)
        .def("SetInteractionIcon", &AWillowInteractiveObject::SetInteractionIcon)
        .def("HasAnyMissionsForPlayer", &AWillowInteractiveObject::HasAnyMissionsForPlayer)
        .def("GetMissionDirectorLocation", &AWillowInteractiveObject::GetMissionDirectorLocation)
        .def("GetAllDirectorData", &AWillowInteractiveObject::GetAllDirectorData)
        .def("GetLightProjMgrFor", &AWillowInteractiveObject::GetLightProjMgrFor, py::return_value_policy::reference)
        .def("NotifyTakeHit", &AWillowInteractiveObject::NotifyTakeHit)
        .def("eventServerSpecialMove_StopAny", &AWillowInteractiveObject::eventServerSpecialMove_StopAny)
        .def("eventServerSpecialMove_Stop", &AWillowInteractiveObject::eventServerSpecialMove_Stop)
        .def("eventServerSpecialMove_Queue", &AWillowInteractiveObject::eventServerSpecialMove_Queue)
        .def("eventServerSpecialMove_Play", &AWillowInteractiveObject::eventServerSpecialMove_Play)
        .def("SetReplicatedSMData", &AWillowInteractiveObject::SetReplicatedSMData)
        .def("GetDefaultRootMotionRotationMode", &AWillowInteractiveObject::GetDefaultRootMotionRotationMode)
        .def("GetDefaultRootMotionMode", &AWillowInteractiveObject::GetDefaultRootMotionMode)
        .def("GetSkelMesh", &AWillowInteractiveObject::GetSkelMesh, py::return_value_policy::reference)
        .def("GetSMComponent", &AWillowInteractiveObject::GetSMComponent, py::return_value_policy::reference)
        .def("GetActor", &AWillowInteractiveObject::GetActor, py::return_value_policy::reference)
        .def("GetFocusScreenOffset", &AWillowInteractiveObject::GetFocusScreenOffset)
        .def("GetFocusRadius", &AWillowInteractiveObject::GetFocusRadius)
        .def("GetFocusLocation", &AWillowInteractiveObject::GetFocusLocation)
        .def("EndFocus", &AWillowInteractiveObject::EndFocus)
        .def("BeginFocus", &AWillowInteractiveObject::BeginFocus)
        .def("ShieldAbsorbedAmmo", [](AWillowInteractiveObject &self , class UClass* DamageSource, class UWillowDamageTypeDefinition* DamageTypeDef) { float* pyDamagePercentToAbsorb = (float*)malloc(sizeof(float)) ;  bool ret =  self.ShieldAbsorbedAmmo(DamageSource, DamageTypeDef, pyDamagePercentToAbsorb); return py::make_tuple(ret, *pyDamagePercentToAbsorb); })
        .def("GetIntrinsicArmor", &AWillowInteractiveObject::GetIntrinsicArmor)
        .def("OnShieldDepleted", &AWillowInteractiveObject::OnShieldDepleted)
        .def("SetShieldStrength", &AWillowInteractiveObject::SetShieldStrength)
        .def("GetMaxShieldStrength", &AWillowInteractiveObject::GetMaxShieldStrength)
        .def("GetShieldStrength", &AWillowInteractiveObject::GetShieldStrength)
        .def("NotifyDamageTaken", &AWillowInteractiveObject::NotifyDamageTaken)
        .def("WillLootableBeResetOnLevelLoad", &AWillowInteractiveObject::WillLootableBeResetOnLevelLoad)
        .def("PlayHit", &AWillowInteractiveObject::PlayHit)
        .def("ResetHitRegionHealth", &AWillowInteractiveObject::ResetHitRegionHealth)
        .def("PlayHealingReaction", &AWillowInteractiveObject::PlayHealingReaction)
        .def("HealDamageOnHitRegion", &AWillowInteractiveObject::HealDamageOnHitRegion)
        .def("PlayDamageReaction", &AWillowInteractiveObject::PlayDamageReaction)
        .def("ReplicateDamageEffect", &AWillowInteractiveObject::ReplicateDamageEffect)
        .def("GetMaxHealth", &AWillowInteractiveObject::GetMaxHealth)
        .def("GetHealth", &AWillowInteractiveObject::GetHealth)
        .def("AddDamageToHitRegion", &AWillowInteractiveObject::AddDamageToHitRegion)
        .def("GetHitRegionHealthValues", [](AWillowInteractiveObject &self , class UBodyHitRegionDefinition* HitRegion) { float* pyoutHealth = (float*)malloc(sizeof(float)) ; float* pyoutMaxHealth = (float*)malloc(sizeof(float)) ;   self.GetHitRegionHealthValues(HitRegion, pyoutHealth, pyoutMaxHealth); return py::make_tuple(*pyoutHealth, *pyoutMaxHealth); })
        .def("GetHitRegionForTakenDamage", &AWillowInteractiveObject::GetHitRegionForTakenDamage, py::return_value_policy::reference)
        .def("AddMissionLoot", &AWillowInteractiveObject::AddMissionLoot)
        .def("GetDroppedLoot", &AWillowInteractiveObject::GetDroppedLoot)
        .def("GetAttachedLoot", &AWillowInteractiveObject::GetAttachedLoot)
        .def("ServerClearStatusEffects", &AWillowInteractiveObject::ServerClearStatusEffects)
        .def("Behavior_ClearStatusEffects", &AWillowInteractiveObject::Behavior_ClearStatusEffects)
        .def("SetMorphNodeWeight", &AWillowInteractiveObject::SetMorphNodeWeight)
        .def("UpdateTargetableState", &AWillowInteractiveObject::UpdateTargetableState)
        .def("Behavior_RegisterTargetable", &AWillowInteractiveObject::Behavior_RegisterTargetable)
        .def("GetHumanReadableName", &AWillowInteractiveObject::GetHumanReadableName)
        .def("eventGetTargetName", &AWillowInteractiveObject::eventGetTargetName)
        .def("GetAutoAimProfile", &AWillowInteractiveObject::GetAutoAimProfile)
        .def("GetMagnetismRange", &AWillowInteractiveObject::GetMagnetismRange)
        .def("GetMagnetismOrigin", &AWillowInteractiveObject::GetMagnetismOrigin)
        .def("IsAutoAimTarget", &AWillowInteractiveObject::IsAutoAimTarget)
        .def("GetTargetingModifier", &AWillowInteractiveObject::GetTargetingModifier)
        .def("HasHomingTargetComponents", &AWillowInteractiveObject::HasHomingTargetComponents)
        .def("IsValidHomingTarget", &AWillowInteractiveObject::IsValidHomingTarget)
        .def("Behavior_SetCanTarget", &AWillowInteractiveObject::Behavior_SetCanTarget)
        .def("ShowSelfAsTarget", &AWillowInteractiveObject::ShowSelfAsTarget)
        .def("GetTargetableIsHidden", &AWillowInteractiveObject::GetTargetableIsHidden)
        .def("GetTargetableLocation", &AWillowInteractiveObject::GetTargetableLocation)
        .def("CanSnapZoom", &AWillowInteractiveObject::CanSnapZoom)
        .def("GetSnapLocation", &AWillowInteractiveObject::GetSnapLocation)
        .def("IsTargetableProxy", &AWillowInteractiveObject::IsTargetableProxy)
        .def("IsTargetable", &AWillowInteractiveObject::IsTargetable)
        .def("GetOpinion", &AWillowInteractiveObject::GetOpinion)
        .def("SetAllegiance", &AWillowInteractiveObject::SetAllegiance)
        .def("GetDefaultAllegiance", &AWillowInteractiveObject::GetDefaultAllegiance, py::return_value_policy::reference)
        .def("GetObjectAllegiance", &AWillowInteractiveObject::GetObjectAllegiance, py::return_value_policy::reference)
        .def("IsSameAllegiance", &AWillowInteractiveObject::IsSameAllegiance)
        .def("IsNeutral", &AWillowInteractiveObject::IsNeutral)
        .def("IsFriendly", &AWillowInteractiveObject::IsFriendly)
        .def("IsEnemy", &AWillowInteractiveObject::IsEnemy)
        .def("GFx_NotifyMovieDestroy", &AWillowInteractiveObject::GFx_NotifyMovieDestroy)
        .def("GFx_NotifyMovieCreate", &AWillowInteractiveObject::GFx_NotifyMovieCreate)
        .def("GFx_GetMovieActor", &AWillowInteractiveObject::GFx_GetMovieActor, py::return_value_policy::reference)
        .def("GetReplicatedInstanceDataState", &AWillowInteractiveObject::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &AWillowInteractiveObject::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &AWillowInteractiveObject::DestroyOwnedInstanceData)
        .def("eventDestroyed", &AWillowInteractiveObject::eventDestroyed)
        .def("CleanupKilledInteractiveObject", &AWillowInteractiveObject::CleanupKilledInteractiveObject)
        .def("eventGetObjectiveBit", &AWillowInteractiveObject::eventGetObjectiveBit)
        .def("eventDeactivateMissionDirectorParticle", &AWillowInteractiveObject::eventDeactivateMissionDirectorParticle)
        .def("eventSetMissionDirectorParticle", &AWillowInteractiveObject::eventSetMissionDirectorParticle)
        .def("eventMissionStatusChanged", &AWillowInteractiveObject::eventMissionStatusChanged)
        .def("SetMissionDirectivesUsability", &AWillowInteractiveObject::SetMissionDirectivesUsability)
        .def("OnPlayerTurnedInMission", &AWillowInteractiveObject::OnPlayerTurnedInMission)
        .def("OnPlayerAcceptedMission", &AWillowInteractiveObject::OnPlayerAcceptedMission)
        .def("GetInProgressMissions", &AWillowInteractiveObject::GetInProgressMissions)
        .def("GetRedeemableMissions", &AWillowInteractiveObject::GetRedeemableMissions)
        .def("GetEligibleMissions", &AWillowInteractiveObject::GetEligibleMissions)
        .def("eventAddMissionDirective", &AWillowInteractiveObject::eventAddMissionDirective)
        .def("RegisterMissionDirector", &AWillowInteractiveObject::RegisterMissionDirector)
        .def("NotifyUserCouldNotAffordAttemptedUse", &AWillowInteractiveObject::NotifyUserCouldNotAffordAttemptedUse)
        .def("UseObject", &AWillowInteractiveObject::UseObject)
        .def("eventGetInstanceData", &AWillowInteractiveObject::eventGetInstanceData)
        .def("eventRemoveInstanceDataObject", &AWillowInteractiveObject::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &AWillowInteractiveObject::eventRemoveInstanceData)
        .def("SetInstanceData", &AWillowInteractiveObject::SetInstanceData)
        .def("eventGetInstancedDesignerAttribute", &AWillowInteractiveObject::eventGetInstancedDesignerAttribute, py::return_value_policy::reference)
        .def("CreateDesignerAttribute", &AWillowInteractiveObject::CreateDesignerAttribute, py::return_value_policy::reference)
        .def("InitializeAttributeStartingValues", &AWillowInteractiveObject::InitializeAttributeStartingValues)
        .def("Behavior_ChangeUsabilityCost", &AWillowInteractiveObject::Behavior_ChangeUsabilityCost)
        .def("eventGetUsability", &AWillowInteractiveObject::eventGetUsability)
        .def("SetUsabilityForComponent", &AWillowInteractiveObject::SetUsabilityForComponent)
        .def("eventSetUsability", &AWillowInteractiveObject::eventSetUsability)
        .def("Behavior_ChangeUsability", &AWillowInteractiveObject::Behavior_ChangeUsability)
        .def("Behavior_Killed", &AWillowInteractiveObject::Behavior_Killed)
        .def("Behavior_CauseRadiusDamage", &AWillowInteractiveObject::Behavior_CauseRadiusDamage)
        .def("Behavior_CauseDamage", &AWillowInteractiveObject::Behavior_CauseDamage)
        .def("TakeRadiusDamage", &AWillowInteractiveObject::TakeRadiusDamage)
        .def("DeadInteractiveObjectCleanup", &AWillowInteractiveObject::DeadInteractiveObjectCleanup)
        .def("StartDeadInteractiveObjectCleanupTimer", &AWillowInteractiveObject::StartDeadInteractiveObjectCleanupTimer)
        .def("KilledBy", &AWillowInteractiveObject::KilledBy)
        .def("eventHandleHealthDepleted", &AWillowInteractiveObject::eventHandleHealthDepleted)
        .def("IsFullyArmored", &AWillowInteractiveObject::IsFullyArmored)
        .def("GetDamageSurfaceTypeFromHit", &AWillowInteractiveObject::GetDamageSurfaceTypeFromHit)
        .def("GetDefaultDamageSurfaceType", &AWillowInteractiveObject::GetDefaultDamageSurfaceType)
        .def("AdjustMomentumForSurfaceType", &AWillowInteractiveObject::AdjustMomentumForSurfaceType)
        .def("ReduceInteractiveObjectDamage", [](AWillowInteractiveObject &self , class AController* InstigatedBy) { float* pyDamage = (float*)malloc(sizeof(float)) ;   self.ReduceInteractiveObjectDamage(InstigatedBy, pyDamage); return py::make_tuple(*pyDamage); })
        .def("GetLastDamagedByController", &AWillowInteractiveObject::GetLastDamagedByController, py::return_value_policy::reference)
        .def("eventTakeDamage", &AWillowInteractiveObject::eventTakeDamage)
        .def("GetNonCheatGodMode", &AWillowInteractiveObject::GetNonCheatGodMode)
        .def("SetNonCheatGodMode", &AWillowInteractiveObject::SetNonCheatGodMode)
        .def("eventRunCustomEvent", &AWillowInteractiveObject::eventRunCustomEvent)
        .def("eventOnTimerEvent", &AWillowInteractiveObject::eventOnTimerEvent)
        .def("SetTimerState", &AWillowInteractiveObject::SetTimerState)
        .def("GetTimerState", &AWillowInteractiveObject::GetTimerState)
        .def("GetTimeSeconds", &AWillowInteractiveObject::GetTimeSeconds)
        .def("EvaluateAttributeInitialization", &AWillowInteractiveObject::EvaluateAttributeInitialization)
        .def("GetMesh", &AWillowInteractiveObject::GetMesh, py::return_value_policy::reference)
        .def("FindAnimNode", &AWillowInteractiveObject::FindAnimNode, py::return_value_policy::reference)
        .def("SetRotationRate", &AWillowInteractiveObject::SetRotationRate)
        .def("GetCollisionRadius", &AWillowInteractiveObject::GetCollisionRadius)
        .def("ConditionalReactToUse", &AWillowInteractiveObject::ConditionalReactToUse)
        .def("UsedBy", &AWillowInteractiveObject::UsedBy)
        .def("IsComponentUsable", &AWillowInteractiveObject::IsComponentUsable)
        .def("eventUnTouch", &AWillowInteractiveObject::eventUnTouch)
        .def("eventTouch", &AWillowInteractiveObject::eventTouch)
        .def("InitializeRelevanceDistance", &AWillowInteractiveObject::InitializeRelevanceDistance)
        .def("InitializeTickGroup", &AWillowInteractiveObject::InitializeTickGroup)
        .def("InitializeFromDefinition", &AWillowInteractiveObject::InitializeFromDefinition)
        .def("ClearBodyCompositionInstance", &AWillowInteractiveObject::ClearBodyCompositionInstance)
        .def("GetBodyInfoProvider", &AWillowInteractiveObject::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("ApplyPreviewBodyComposition", &AWillowInteractiveObject::ApplyPreviewBodyComposition)
        .def("ChangeInstanceDataSwitch", &AWillowInteractiveObject::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &AWillowInteractiveObject::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &AWillowInteractiveObject::PreRemoveBodyComposition)
        .def("InitializeRBPhys", &AWillowInteractiveObject::InitializeRBPhys)
        .def("TerminateRBPhys", &AWillowInteractiveObject::TerminateRBPhys)
        .def("SetCompassIcon", &AWillowInteractiveObject::SetCompassIcon)
        .def("ConditionalAddToCompass", &AWillowInteractiveObject::ConditionalAddToCompass)
        .def("eventTornOff", &AWillowInteractiveObject::eventTornOff)
        .def("ApplyBalanceDefinitionCustomizations", &AWillowInteractiveObject::ApplyBalanceDefinitionCustomizations)
        .def("InitializeBalanceDefinitionState", &AWillowInteractiveObject::InitializeBalanceDefinitionState)
        .def("eventReplicatedEvent", &AWillowInteractiveObject::eventReplicatedEvent)
        .def("ReceiveDefinition", &AWillowInteractiveObject::ReceiveDefinition)
        .def("ResendDefinition", &AWillowInteractiveObject::ResendDefinition)
        .def("CanResendDefinition", &AWillowInteractiveObject::CanResendDefinition)
        .def("TryAddToPostRenderedActorsList", &AWillowInteractiveObject::TryAddToPostRenderedActorsList)
        .def("PostBeginPlay", &AWillowInteractiveObject::PostBeginPlay)
        .def("SetOverrideProgressNumber", &AWillowInteractiveObject::SetOverrideProgressNumber)
        .def("SetOverrideAssociatedChallenge", &AWillowInteractiveObject::SetOverrideAssociatedChallenge)
        .def("GetProgressNumber", &AWillowInteractiveObject::GetProgressNumber)
        .def("GetAssociatedChallenge", &AWillowInteractiveObject::GetAssociatedChallenge, py::return_value_policy::reference)
        .def("ApplyMaxDrawDistanceOverride", &AWillowInteractiveObject::ApplyMaxDrawDistanceOverride)
        .def("SetMaxDrawDistanceOverride", &AWillowInteractiveObject::SetMaxDrawDistanceOverride)
        .def("UpdateCollideAsEncroacher", &AWillowInteractiveObject::UpdateCollideAsEncroacher)
        .def("SetCollisionOnComponentFromCollisionType", &AWillowInteractiveObject::SetCollisionOnComponentFromCollisionType)
        .def("SetCollisionFromCollisionType", &AWillowInteractiveObject::SetCollisionFromCollisionType)
        .def("GetBehaviorConsumerHandle", &AWillowInteractiveObject::GetBehaviorConsumerHandle)
        .def("ProcessBehaviorSetsFlags", &AWillowInteractiveObject::ProcessBehaviorSetsFlags)
        .def("GetBalancedActorTypeIdentifier", &AWillowInteractiveObject::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &AWillowInteractiveObject::SetExpLevel)
        .def("SetAwesomeLevel", &AWillowInteractiveObject::SetAwesomeLevel)
        .def("SetGameStage", &AWillowInteractiveObject::SetGameStage)
        .def("GetExpLevelForEquip", &AWillowInteractiveObject::GetExpLevelForEquip)
        .def("GetExpLevel", &AWillowInteractiveObject::GetExpLevel)
        .def("GetAwesomeLevel", &AWillowInteractiveObject::GetAwesomeLevel)
        .def("GetGameStage", &AWillowInteractiveObject::GetGameStage)
        .def("CanReceiveStatusEffects", &AWillowInteractiveObject::CanReceiveStatusEffects)
        .def("ReactToPrimaryStatusEffect", &AWillowInteractiveObject::ReactToPrimaryStatusEffect)
        .def("GetAttributeContextSource", &AWillowInteractiveObject::GetAttributeContextSource, py::return_value_policy::reference)
        .def("GetBoundingSphereRadius", &AWillowInteractiveObject::GetBoundingSphereRadius)
        .def("GetHitRegions", [](AWillowInteractiveObject &self , TArray< class UBodyHitRegionDefinition* >* Regions) { class UBodyHitRegionDefinition** pyDefaultRegion = 0 ;   self.GetHitRegions(Regions, pyDefaultRegion); return py::make_tuple(*pyDefaultRegion); })
        .def("AttachEmitter", &AWillowInteractiveObject::AttachEmitter)
        .def("GetDefaultStatusEffectsParticleSystemTemplate", &AWillowInteractiveObject::GetDefaultStatusEffectsParticleSystemTemplate, py::return_value_policy::reference)
        .def("GetDefaultStatusEffectSockets", &AWillowInteractiveObject::GetDefaultStatusEffectSockets)
        .def("GetStatusEffectsComponent", &AWillowInteractiveObject::GetStatusEffectsComponent, py::return_value_policy::reference)
        .def("SetInfoBarVisibility", &AWillowInteractiveObject::SetInfoBarVisibility)
        .def("HideTargetInfoOnHud", &AWillowInteractiveObject::HideTargetInfoOnHud)
        .def("HackHealthDisplay", &AWillowInteractiveObject::HackHealthDisplay)
        .def("IsChampion", &AWillowInteractiveObject::IsChampion)
        .def("IsBoss", &AWillowInteractiveObject::IsBoss)
        .def("DoesTargetableTakeDamage", &AWillowInteractiveObject::DoesTargetableTakeDamage)
        .def("DisplayParentInfo", &AWillowInteractiveObject::DisplayParentInfo)
        .def("GetAllBarInfo", &AWillowInteractiveObject::GetAllBarInfo)
        .def("GetExpInfo", [](AWillowInteractiveObject &self ) { int* pyExpLevelValue = (int*)malloc(sizeof(int)) ;   self.GetExpInfo(pyExpLevelValue); return py::make_tuple(*pyExpLevelValue); })
        .def("GetTargetableActor", &AWillowInteractiveObject::GetTargetableActor, py::return_value_policy::reference)
          ;
}