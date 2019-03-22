#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPlayerPawn(py::module &m)
{
    py::class_< AWillowPlayerPawn,  AWillowPawn   >(m, "AWillowPlayerPawn")
        .def_readwrite("VfTable_IIProtectionTimer", &AWillowPlayerPawn::VfTable_IIProtectionTimer)
        .def_readwrite("VfTable_IIWeatherBehavior", &AWillowPlayerPawn::VfTable_IIWeatherBehavior)
        .def_readwrite("VfTable_IIGFxActorMovie", &AWillowPlayerPawn::VfTable_IIGFxActorMovie)
        .def_readwrite("VfTable_IICustomizable", &AWillowPlayerPawn::VfTable_IICustomizable)
        .def_readwrite("LastCombatActionTime", &AWillowPlayerPawn::LastCombatActionTime)
        .def_readwrite("Arms", &AWillowPlayerPawn::Arms)
        .def_readwrite("ArmsMaterialInstance", &AWillowPlayerPawn::ArmsMaterialInstance)
        .def_readwrite("TeamColorForMeshMaterialInstances", &AWillowPlayerPawn::TeamColorForMeshMaterialInstances)
        .def_readwrite("IronsightsTranslation", &AWillowPlayerPawn::IronsightsTranslation)
        .def_readwrite("IronsightsRotation", &AWillowPlayerPawn::IronsightsRotation)
        .def_readwrite("LastAnimSetsArmsCount", &AWillowPlayerPawn::LastAnimSetsArmsCount)
        .def_readwrite("CustomizationHeadMaterialInstance", &AWillowPlayerPawn::CustomizationHeadMaterialInstance)
        .def_readwrite("CustomizationBodyMaterialInstance", &AWillowPlayerPawn::CustomizationBodyMaterialInstance)
        .def_readwrite("CustomizationArmsMaterialInstance", &AWillowPlayerPawn::CustomizationArmsMaterialInstance)
        .def_readwrite("HeadCustomizationData", &AWillowPlayerPawn::HeadCustomizationData)
        .def_readwrite("SkinCustomizationData", &AWillowPlayerPawn::SkinCustomizationData)
        .def_readwrite("InjuredStartTime", &AWillowPlayerPawn::InjuredStartTime)
        .def_readwrite("InjuredDeadCameraStartTime", &AWillowPlayerPawn::InjuredDeadCameraStartTime)
        .def_readwrite("InjuredDeadCameraEndTime", &AWillowPlayerPawn::InjuredDeadCameraEndTime)
        .def_readwrite("InjuredDeadRotation", &AWillowPlayerPawn::InjuredDeadRotation)
        .def_readwrite("InjuredDeadCameraLoc", &AWillowPlayerPawn::InjuredDeadCameraLoc)
        .def_readwrite("InjuredDeadCameraOffset", &AWillowPlayerPawn::InjuredDeadCameraOffset)
        .def_readwrite("InjuredViewDropCycleTime", &AWillowPlayerPawn::InjuredViewDropCycleTime)
        .def_readwrite("InjuredViewDropStrength", &AWillowPlayerPawn::InjuredViewDropStrength)
        .def_readwrite("InjuredMouseSensitivityMultiplier", &AWillowPlayerPawn::InjuredMouseSensitivityMultiplier)
        .def_readwrite("HitByVehicleTime", &AWillowPlayerPawn::HitByVehicleTime)
        .def_readwrite("TransitionLandmarkOffset", &AWillowPlayerPawn::TransitionLandmarkOffset)
        .def_readwrite("ArmsDynamicLightEnvironment", &AWillowPlayerPawn::ArmsDynamicLightEnvironment)
        .def_readwrite("LastKillTime", &AWillowPlayerPawn::LastKillTime)
        .def_readwrite("KillStreakScore", &AWillowPlayerPawn::KillStreakScore)
        .def_readwrite("ExtraMuzzleEffect_LastShot", &AWillowPlayerPawn::ExtraMuzzleEffect_LastShot)
        .def_readwrite("ShouldGetResurrected", &AWillowPlayerPawn::ShouldGetResurrected)
        .def_readwrite("ShouldGetResurrectedBaseValue", &AWillowPlayerPawn::ShouldGetResurrectedBaseValue)
        .def_readwrite("ShouldGetResurrectedModifierStack", &AWillowPlayerPawn::ShouldGetResurrectedModifierStack)
        .def_readwrite("PlayerFallDuration", &AWillowPlayerPawn::PlayerFallDuration)
        .def_readwrite("AttachedMeleeWeaponMesh", &AWillowPlayerPawn::AttachedMeleeWeaponMesh)
        .def_readwrite("MinimumHealthMaintainedByProtectionTimer", &AWillowPlayerPawn::MinimumHealthMaintainedByProtectionTimer)
        .def_readwrite("LocationFellFrom", &AWillowPlayerPawn::LocationFellFrom)
        .def_readwrite("SprintExhaustion", &AWillowPlayerPawn::SprintExhaustion)
        .def_readwrite("FriendlyFireDamageAccepted", &AWillowPlayerPawn::FriendlyFireDamageAccepted)
        .def_readwrite("FriendlyFireDamageAcceptedBaseValue", &AWillowPlayerPawn::FriendlyFireDamageAcceptedBaseValue)
        .def_readwrite("FriendlyFireDamageAcceptedModifierStack", &AWillowPlayerPawn::FriendlyFireDamageAcceptedModifierStack)
        .def_readwrite("FriendlyFireDamageMultiplier", &AWillowPlayerPawn::FriendlyFireDamageMultiplier)
        .def_readwrite("FriendlyFireDamageMultiplierBaseValue", &AWillowPlayerPawn::FriendlyFireDamageMultiplierBaseValue)
        .def_readwrite("FriendlyFireDamageMultiplierModifierStack", &AWillowPlayerPawn::FriendlyFireDamageMultiplierModifierStack)
        .def_readwrite("SpeedTravelInfo", &AWillowPlayerPawn::SpeedTravelInfo)
        .def_readwrite("NumWarningZones", &AWillowPlayerPawn::NumWarningZones)
        .def_readwrite("ArmUpdateLocation", &AWillowPlayerPawn::ArmUpdateLocation)
        .def_readwrite("ArmUpdateRotation", &AWillowPlayerPawn::ArmUpdateRotation)
        .def_readwrite("NextArmsLeadingRotationIndex", &AWillowPlayerPawn::NextArmsLeadingRotationIndex)
        .def_readwrite("LastResurrectReason", &AWillowPlayerPawn::LastResurrectReason)
        .def_readwrite("InjuredPreDeathState", &AWillowPlayerPawn::InjuredPreDeathState)
        .def_readwrite("LastArmsLeadingOffset", &AWillowPlayerPawn::LastArmsLeadingOffset)
        .def_readwrite("LastPlayerDiedPRI", &AWillowPlayerPawn::LastPlayerDiedPRI)
        .def_readwrite("ZoomTimeModifier", &AWillowPlayerPawn::ZoomTimeModifier)
        .def_readwrite("ZoomTimeModifierBaseValue", &AWillowPlayerPawn::ZoomTimeModifierBaseValue)
        .def_readwrite("ZoomTimeModifierModifierStack", &AWillowPlayerPawn::ZoomTimeModifierModifierStack)
        .def_readwrite("ArmsTranslationOffsetForFocusCam", &AWillowPlayerPawn::ArmsTranslationOffsetForFocusCam)
        .def_readwrite("ArmsRotationOffsetForFocusCam", &AWillowPlayerPawn::ArmsRotationOffsetForFocusCam)
        .def_readwrite("ArmsTranslationOffsetForCameraAnim", &AWillowPlayerPawn::ArmsTranslationOffsetForCameraAnim)
        .def_readwrite("ArmsRotationOffsetForCameraAnim", &AWillowPlayerPawn::ArmsRotationOffsetForCameraAnim)
        .def_readwrite("CameraAnimEyeHeight", &AWillowPlayerPawn::CameraAnimEyeHeight)
        .def_readwrite("MenuInstanceDataState", &AWillowPlayerPawn::MenuInstanceDataState)
        .def_readwrite("WeatherSystem", &AWillowPlayerPawn::WeatherSystem)
        .def_readwrite("TradeInteractionProxy", &AWillowPlayerPawn::TradeInteractionProxy)
        .def_readwrite("ResurrectStation", &AWillowPlayerPawn::ResurrectStation)
        .def_readwrite("ResurrectLocationActor", &AWillowPlayerPawn::ResurrectLocationActor)
        .def_readwrite("AwaitingRespawnTravelStation", &AWillowPlayerPawn::AwaitingRespawnTravelStation)
        .def_readwrite("AwaitingRespawnResurrectLocation", &AWillowPlayerPawn::AwaitingRespawnResurrectLocation)
        .def_readwrite("AwaitingRespawnNozzleIndex", &AWillowPlayerPawn::AwaitingRespawnNozzleIndex)
        .def_readwrite("AwaitingRespawnStartTime", &AWillowPlayerPawn::AwaitingRespawnStartTime)
        .def_readwrite("AwaitingRespawnLerpTime", &AWillowPlayerPawn::AwaitingRespawnLerpTime)
        .def_readwrite("AwaitingRespawnStartCameraLoc", &AWillowPlayerPawn::AwaitingRespawnStartCameraLoc)
        .def_readwrite("AwaitingRespawnStartCameraRot", &AWillowPlayerPawn::AwaitingRespawnStartCameraRot)
        .def_readwrite("AwaitingRespawnEndCameraLoc", &AWillowPlayerPawn::AwaitingRespawnEndCameraLoc)
        .def_readwrite("AwaitingRespawnEndCameraRot", &AWillowPlayerPawn::AwaitingRespawnEndCameraRot)
        .def_readwrite("AwaitingRespawnUnHidePlayerTime", &AWillowPlayerPawn::AwaitingRespawnUnHidePlayerTime)
        .def_readwrite("AwaitingRespawnZoomStartTime", &AWillowPlayerPawn::AwaitingRespawnZoomStartTime)
        .def_readwrite("AwaitingRespawnStartZoomIn", &AWillowPlayerPawn::AwaitingRespawnStartZoomIn)
        .def_readwrite("AwaitingRespawnHeadLoc", &AWillowPlayerPawn::AwaitingRespawnHeadLoc)
        .def_readwrite("LinkedOnDemandPackage", &AWillowPlayerPawn::LinkedOnDemandPackage)
        .def_readwrite("TemporaryNonBlockedBy", &AWillowPlayerPawn::TemporaryNonBlockedBy)
        .def_readwrite("AttachedToData", &AWillowPlayerPawn::AttachedToData)
        .def_readwrite("UseInjuredDefinitionOverride", &AWillowPlayerPawn::UseInjuredDefinitionOverride)
        .def_readwrite("MaxHealthClipModifier", &AWillowPlayerPawn::MaxHealthClipModifier)
        .def("UpdateInjuredOverrideAnimNode", &AWillowPlayerPawn::UpdateInjuredOverrideAnimNode)
        .def("ShouldCrouch", &AWillowPlayerPawn::ShouldCrouch)
        .def("eventOnAttachPlayerPawnToBase", &AWillowPlayerPawn::eventOnAttachPlayerPawnToBase)
        .def("DoAttachPlayerToBase", &AWillowPlayerPawn::DoAttachPlayerToBase)
        .def("SpawnDefaultController", &AWillowPlayerPawn::SpawnDefaultController)
        .def("SetExtraMuzzleEffect", &AWillowPlayerPawn::SetExtraMuzzleEffect)
        .def("eventUnTouch", &AWillowPlayerPawn::eventUnTouch)
        .def("GetAimDirection", &AWillowPlayerPawn::GetAimDirection)
        .def("ServerPlayerEndUseNPC", &AWillowPlayerPawn::ServerPlayerEndUseNPC)
        .def("ServerPlayerBeginUseNPC", &AWillowPlayerPawn::ServerPlayerBeginUseNPC)
        .def("Behavior_Destroy", &AWillowPlayerPawn::Behavior_Destroy)
        .def("eventStartCrouch", &AWillowPlayerPawn::eventStartCrouch)
        .def("PlayPostEnvironmentTransitionAnimation", &AWillowPlayerPawn::PlayPostEnvironmentTransitionAnimation)
        .def("PlayPreEnvironmentTransitionAnimation", &AWillowPlayerPawn::PlayPreEnvironmentTransitionAnimation)
        .def("Behavior_Killed", &AWillowPlayerPawn::Behavior_Killed)
        .def("SetDefaultStance", &AWillowPlayerPawn::SetDefaultStance)
        .def("SetRevivePct", &AWillowPlayerPawn::SetRevivePct)
        .def("GetRevivePct", &AWillowPlayerPawn::GetRevivePct)
        .def("PlayInjured", &AWillowPlayerPawn::PlayInjured)
        .def("SetUpTradeInteraction", &AWillowPlayerPawn::SetUpTradeInteraction)
        .def("DestroyTradeInteraction", &AWillowPlayerPawn::DestroyTradeInteraction)
        .def("ServerSetViewingThirdPersonMenu", &AWillowPlayerPawn::ServerSetViewingThirdPersonMenu)
        .def("OnSetViewingStatusMenu", &AWillowPlayerPawn::OnSetViewingStatusMenu)
        .def("SetViewingThirdPersonMenu", &AWillowPlayerPawn::SetViewingThirdPersonMenu)
        .def("eventGetInstanceData", &AWillowPlayerPawn::eventGetInstanceData)
        .def("PostInitBodyComposition", &AWillowPlayerPawn::PostInitBodyComposition)
        .def("DestroyWeatherSystem", &AWillowPlayerPawn::DestroyWeatherSystem)
        .def("CreateWeatherSystem", &AWillowPlayerPawn::CreateWeatherSystem)
        .def("GFx_NotifyMovieDestroy", &AWillowPlayerPawn::GFx_NotifyMovieDestroy)
        .def("GFx_NotifyMovieCreate", &AWillowPlayerPawn::GFx_NotifyMovieCreate)
        .def("GFx_GetMovieActor", &AWillowPlayerPawn::GFx_GetMovieActor, py::return_value_policy::reference)
        .def("ResetShieldPrimeCachedValues", &AWillowPlayerPawn::ResetShieldPrimeCachedValues)
        .def("eventShieldTriggered", &AWillowPlayerPawn::eventShieldTriggered)
        .def("eventPostInitAnimTree", &AWillowPlayerPawn::eventPostInitAnimTree)
        .def("ClimbLadder", &AWillowPlayerPawn::ClimbLadder)
        .def("EndClimbLadder", &AWillowPlayerPawn::EndClimbLadder)
        .def("CanGrabLadder", &AWillowPlayerPawn::CanGrabLadder)
        .def("GetThirdPersonMovie", &AWillowPlayerPawn::GetThirdPersonMovie, py::return_value_policy::reference)
        .def("SetMenuMeshVisibility", &AWillowPlayerPawn::SetMenuMeshVisibility)
        .def("SetInstanceDataMenuState", &AWillowPlayerPawn::SetInstanceDataMenuState)
        .def("InitializePawnMeshes", &AWillowPlayerPawn::InitializePawnMeshes)
        .def("GetPetActors", &AWillowPlayerPawn::GetPetActors)
        .def("PlayUIAkEvent", &AWillowPlayerPawn::PlayUIAkEvent)
        .def("SetAllegiance", &AWillowPlayerPawn::SetAllegiance)
        .def("Died", &AWillowPlayerPawn::Died)
        .def("FaceRotation", &AWillowPlayerPawn::FaceRotation)
        .def("GetMinimumHealthMaintainedByProtectionTimer", &AWillowPlayerPawn::GetMinimumHealthMaintainedByProtectionTimer)
        .def("EnableProtectionTimer", &AWillowPlayerPawn::EnableProtectionTimer)
        .def("IsProtectionTimerActive", &AWillowPlayerPawn::IsProtectionTimerActive)
        .def("CheckPhaseWalkExit", &AWillowPlayerPawn::CheckPhaseWalkExit)
        .def("GetPlayerController", &AWillowPlayerPawn::GetPlayerController, py::return_value_policy::reference)
        .def("ServerIncrementEnterVehicleStat", &AWillowPlayerPawn::ServerIncrementEnterVehicleStat)
        .def("IncrementEnterVehicleStat", &AWillowPlayerPawn::IncrementEnterVehicleStat)
        .def("eventStartDriving", &AWillowPlayerPawn::eventStartDriving)
        .def("eventGetTargetName", &AWillowPlayerPawn::eventGetTargetName)
        .def("UpdatePreferredColors", &AWillowPlayerPawn::UpdatePreferredColors)
        .def("DumpAnimSets", &AWillowPlayerPawn::DumpAnimSets)
        .def("PlayLanded", &AWillowPlayerPawn::PlayLanded)
        .def("OnPlayArmAnimation", &AWillowPlayerPawn::OnPlayArmAnimation)
        .def("StopWeaponRecoilAnim", &AWillowPlayerPawn::StopWeaponRecoilAnim)
        .def("StopFirstPersonAnimations", &AWillowPlayerPawn::StopFirstPersonAnimations)
        .def("StopFirstPersonWeaponSMD", &AWillowPlayerPawn::StopFirstPersonWeaponSMD)
        .def("PlayFirstPersonWeaponSMD", [](AWillowPlayerPawn &self , unsigned char ActionType, float PlayRateScale, float Duration, class AWeapon* TheWeapon) { class USpecialMoveDefinition** pyPlayedSMD = 0 ;  float ret =  self.PlayFirstPersonWeaponSMD(ActionType, PlayRateScale, Duration, TheWeapon, pyPlayedSMD); return py::make_tuple(ret, *pyPlayedSMD); })
        .def("GetFirstPersonBodyWeaponSMD", &AWillowPlayerPawn::GetFirstPersonBodyWeaponSMD, py::return_value_policy::reference)
        .def("PlayArmAnimation", &AWillowPlayerPawn::PlayArmAnimation)
        .def("WeaponChanged", &AWillowPlayerPawn::WeaponChanged)
        .def("ComputeIronsightsTransformOffset", &AWillowPlayerPawn::ComputeIronsightsTransformOffset)
        .def("ResetArmsLeadingRotationHistory", &AWillowPlayerPawn::ResetArmsLeadingRotationHistory)
        .def("UpdateAnimSets", &AWillowPlayerPawn::UpdateAnimSets)
        .def("eventRestoreAnimSetsToDefault", &AWillowPlayerPawn::eventRestoreAnimSetsToDefault)
        .def("TurnOffBoundaryWarning", &AWillowPlayerPawn::TurnOffBoundaryWarning)
        .def("TurnOnBoundaryWarning", &AWillowPlayerPawn::TurnOnBoundaryWarning)
        .def("ToggleBoundaryWarningOnHUD", &AWillowPlayerPawn::ToggleBoundaryWarningOnHUD)
        .def("OnMarkExitedRegion", &AWillowPlayerPawn::OnMarkExitedRegion)
        .def("ServerTellPassengersToUnlockAchievement", &AWillowPlayerPawn::ServerTellPassengersToUnlockAchievement)
        .def("OnMarkEnteredRegion", &AWillowPlayerPawn::OnMarkEnteredRegion)
        .def("ProcessFallDistance", &AWillowPlayerPawn::ProcessFallDistance)
        .def("eventFalling", &AWillowPlayerPawn::eventFalling)
        .def("eventLanded", &AWillowPlayerPawn::eventLanded)
        .def("ProtectionTimerElapsed", &AWillowPlayerPawn::ProtectionTimerElapsed)
        .def("DoJump", &AWillowPlayerPawn::DoJump)
        .def("CanJump", &AWillowPlayerPawn::CanJump)
        .def("CanContinueSprinting", &AWillowPlayerPawn::CanContinueSprinting)
        .def("IsOnGroundOrShortFall", &AWillowPlayerPawn::IsOnGroundOrShortFall)
        .def("CanSprint", &AWillowPlayerPawn::CanSprint)
        .def("DoSprint", &AWillowPlayerPawn::DoSprint)
        .def("CanStuckJump", &AWillowPlayerPawn::CanStuckJump)
        .def("HideTargetInfoOnHud", &AWillowPlayerPawn::HideTargetInfoOnHud)
        .def("GetTargetableIsHidden", &AWillowPlayerPawn::GetTargetableIsHidden)
        .def("DetachMeleeWeaponMesh", &AWillowPlayerPawn::DetachMeleeWeaponMesh)
        .def("AttachMeleeWeaponMesh", &AWillowPlayerPawn::AttachMeleeWeaponMesh)
        .def("SetWeaponSnagFailsafeTimer", &AWillowPlayerPawn::SetWeaponSnagFailsafeTimer)
        .def("OnWeaponSnag", &AWillowPlayerPawn::OnWeaponSnag)
        .def("SetBaseEyeheight", &AWillowPlayerPawn::SetBaseEyeheight)
        .def("AdjustCameraAnimByEyeHeight", &AWillowPlayerPawn::AdjustCameraAnimByEyeHeight)
        .def("GetCameraInfoFromViewModel", &AWillowPlayerPawn::GetCameraInfoFromViewModel)
        .def("CalcThirdPersonMenuCam", [](AWillowPlayerPawn &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.CalcThirdPersonMenuCam(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("CalcCamera", [](AWillowPlayerPawn &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.CalcCamera(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("TraceCameraLocation", &AWillowPlayerPawn::TraceCameraLocation)
        .def("eventCalcInjuredPreDeathRecoveryCamera", [](AWillowPlayerPawn &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.eventCalcInjuredPreDeathRecoveryCamera(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("eventCalcInjuredPreDeathCamera", [](AWillowPlayerPawn &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.eventCalcInjuredPreDeathCamera(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("eventCalcInjuredDeadCamera", [](AWillowPlayerPawn &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.eventCalcInjuredDeadCamera(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("GetInjuredDeadCameraValues", [](AWillowPlayerPawn &self , unsigned long bPreDeath, struct FVector* ViewLocation) { float* pyCameraDistance = (float*)malloc(sizeof(float)) ; float* pyDigistructDelay = (float*)malloc(sizeof(float)) ;   self.GetInjuredDeadCameraValues(bPreDeath, ViewLocation, pyCameraDistance, pyDigistructDelay); return py::make_tuple(*pyCameraDistance, *pyDigistructDelay); })
        .def("eventCalcInjuredCamera", [](AWillowPlayerPawn &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.eventCalcInjuredCamera(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("ShowDuelClip", &AWillowPlayerPawn::ShowDuelClip)
        .def("OutOfDuelBounds", &AWillowPlayerPawn::OutOfDuelBounds)
        .def("AcceptDuelChallenge", &AWillowPlayerPawn::AcceptDuelChallenge)
        .def("IssueDuelChallenge", &AWillowPlayerPawn::IssueDuelChallenge)
        .def("HasBeenIssuedDuelChallenge", [](AWillowPlayerPawn &self , class AWillowPlayerPawn* Challenger) { class AWillowVersusDuelInfo** pyDuelInfo = 0 ;  bool ret =  self.HasBeenIssuedDuelChallenge(Challenger, pyDuelInfo); return py::make_tuple(ret, *pyDuelInfo); })
        .def("HasChallengeCoolDown", &AWillowPlayerPawn::HasChallengeCoolDown)
        .def("HasActiveDuel", [](AWillowPlayerPawn &self ) { class AWillowVersusDuelInfo** pyDuelInfo = 0 ;  bool ret =  self.HasActiveDuel(pyDuelInfo); return py::make_tuple(ret, *pyDuelInfo); })
        .def("IsDuelingEnabled", &AWillowPlayerPawn::IsDuelingEnabled)
        .def("CanChallengeToDuel", &AWillowPlayerPawn::CanChallengeToDuel)
        .def("ReceiveLocalizedMessage", &AWillowPlayerPawn::ReceiveLocalizedMessage)
        .def("GetLinearColor", &AWillowPlayerPawn::GetLinearColor)
        .def("SetTeamColorForMesh", &AWillowPlayerPawn::SetTeamColorForMesh)
        .def("SetTeamColor", &AWillowPlayerPawn::SetTeamColor)
        .def("GetAWillowPlayerPawn", &AWillowPlayerPawn::GetAWillowPlayerPawn, py::return_value_policy::reference)
        .def("eventCheckLowHealthState", &AWillowPlayerPawn::eventCheckLowHealthState)
        .def("SetArmPosition", &AWillowPlayerPawn::SetArmPosition)
        .def("eventShowAndUnlockFirstPerson", &AWillowPlayerPawn::eventShowAndUnlockFirstPerson)
        .def("HideAndLockFirstPerson", &AWillowPlayerPawn::HideAndLockFirstPerson)
        .def("RaiseFirstPersonHands", &AWillowPlayerPawn::RaiseFirstPersonHands)
        .def("LowerFirstPersonHands", &AWillowPlayerPawn::LowerFirstPersonHands)
        .def("ToggleFirstPersonWeaponVisibility", &AWillowPlayerPawn::ToggleFirstPersonWeaponVisibility)
        .def("SetFirstPersonVisibility", &AWillowPlayerPawn::SetFirstPersonVisibility)
        .def("eventSetWeaponVisibility", &AWillowPlayerPawn::eventSetWeaponVisibility)
        .def("SetOwnerVisibility", &AWillowPlayerPawn::SetOwnerVisibility)
        .def("OnNativeApplyBodyClassStartingValuesHook", &AWillowPlayerPawn::OnNativeApplyBodyClassStartingValuesHook)
        .def("ApplyBodyClassStartingValues", &AWillowPlayerPawn::ApplyBodyClassStartingValues)
        .def("PlayDamageCameraShake", &AWillowPlayerPawn::PlayDamageCameraShake)
        .def("ClientSetAwaitingRespawnValues", &AWillowPlayerPawn::ClientSetAwaitingRespawnValues)
        .def("AwaitingRespawnBeginState", &AWillowPlayerPawn::AwaitingRespawnBeginState)
        .def("DeRezzedGearFinished", &AWillowPlayerPawn::DeRezzedGearFinished)
        .def("DeRezGear", &AWillowPlayerPawn::DeRezGear)
        .def("RezGear", &AWillowPlayerPawn::RezGear)
        .def("eventCalcAwaitingRespawnCam", [](AWillowPlayerPawn &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.eventCalcAwaitingRespawnCam(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("AwaitingRespawnSetFirstPerson", &AWillowPlayerPawn::AwaitingRespawnSetFirstPerson)
        .def("AwaitingRespawnSetBehindView", &AWillowPlayerPawn::AwaitingRespawnSetBehindView)
        .def("AwaitingRespawnDisplayRespawnCost", &AWillowPlayerPawn::AwaitingRespawnDisplayRespawnCost)
        .def("AwaitingRespawnActivateNozzle", &AWillowPlayerPawn::AwaitingRespawnActivateNozzle)
        .def("PreDeathRecoveryDone", &AWillowPlayerPawn::PreDeathRecoveryDone)
        .def("StartPreDeathRecovery", &AWillowPlayerPawn::StartPreDeathRecovery)
        .def("PreDeathAnimDone", &AWillowPlayerPawn::PreDeathAnimDone)
        .def("ForceInjuredDeadState", &AWillowPlayerPawn::ForceInjuredDeadState)
        .def("InjuredDeadTermRagdoll", &AWillowPlayerPawn::InjuredDeadTermRagdoll)
        .def("InjuredDeadInitRagdoll", &AWillowPlayerPawn::InjuredDeadInitRagdoll)
        .def("StartInjuredDeathSequence", &AWillowPlayerPawn::StartInjuredDeathSequence)
        .def("StartInjuredPreDeathSequence", &AWillowPlayerPawn::StartInjuredPreDeathSequence)
        .def("GetInjuredDeadCameraView", &AWillowPlayerPawn::GetInjuredDeadCameraView)
        .def("eventEndInjuredDeadCamera", &AWillowPlayerPawn::eventEndInjuredDeadCamera)
        .def("EndInjuredCamera", &AWillowPlayerPawn::EndInjuredCamera)
        .def("SetShadowCasting", &AWillowPlayerPawn::SetShadowCasting)
        .def("CheckShouldBeAutoRevived", &AWillowPlayerPawn::CheckShouldBeAutoRevived)
        .def("ServerNotifyIWentDown", &AWillowPlayerPawn::ServerNotifyIWentDown)
        .def("SetInjuredDeadState", &AWillowPlayerPawn::SetInjuredDeadState)
        .def("SetInjuredState", &AWillowPlayerPawn::SetInjuredState)
        .def("AddKillStreakScore", &AWillowPlayerPawn::AddKillStreakScore)
        .def("KilledEnemy", &AWillowPlayerPawn::KilledEnemy)
        .def("ProcessInjuredViewRotation", &AWillowPlayerPawn::ProcessInjuredViewRotation)
        .def("ClearPlayerInjuredState", &AWillowPlayerPawn::ClearPlayerInjuredState)
        .def("SetupPlayerInjuredState", &AWillowPlayerPawn::SetupPlayerInjuredState)
        .def("SpawnTeleportEffect", &AWillowPlayerPawn::SpawnTeleportEffect)
        .def("SpawnTeleportEffectAtCurrentLocation", &AWillowPlayerPawn::SpawnTeleportEffectAtCurrentLocation)
        .def("ClientShowRespawnDialog", &AWillowPlayerPawn::ClientShowRespawnDialog)
        .def("ShowRespawnDialog", &AWillowPlayerPawn::ShowRespawnDialog)
        .def("NotifyTeleported", &AWillowPlayerPawn::NotifyTeleported)
        .def("MarkClientDLEsForUpdate", &AWillowPlayerPawn::MarkClientDLEsForUpdate)
        .def("MarkDLEsForUpdate", &AWillowPlayerPawn::MarkDLEsForUpdate)
        .def("ResurrectAtLocation", &AWillowPlayerPawn::ResurrectAtLocation)
        .def("HitByVehicle", &AWillowPlayerPawn::HitByVehicle)
        .def("eventOutsideWorldBounds", &AWillowPlayerPawn::eventOutsideWorldBounds)
        .def("eventFellOutOfWorld", &AWillowPlayerPawn::eventFellOutOfWorld)
        .def("PlacePlayerInLevel", &AWillowPlayerPawn::PlacePlayerInLevel)
        .def("ResurrectPlayer", &AWillowPlayerPawn::ResurrectPlayer)
        .def("GetBestPlayerStartPoint", &AWillowPlayerPawn::GetBestPlayerStartPoint, py::return_value_policy::reference)
        .def("GetBestPlayerPlacementPoint", &AWillowPlayerPawn::GetBestPlayerPlacementPoint, py::return_value_policy::reference)
        .def("CrushedByActor", &AWillowPlayerPawn::CrushedByActor)
        .def("CrushedBy", &AWillowPlayerPawn::CrushedBy)
        .def("ConditionalEndDuelOnHealthDepleted", &AWillowPlayerPawn::ConditionalEndDuelOnHealthDepleted)
        .def("eventHandleHealthDepleted", &AWillowPlayerPawn::eventHandleHealthDepleted)
        .def("ProcessDamageTakenSkillEvents", &AWillowPlayerPawn::ProcessDamageTakenSkillEvents)
        .def("ProcessDamageDealtSkillEvents", &AWillowPlayerPawn::ProcessDamageDealtSkillEvents)
        .def("AdjustDamage", [](AWillowPlayerPawn &self , class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class UIDamageCauser* DamageCauser, class UDamagePipeline* Pipeline, struct FVector* Momentum, struct FTraceHitInfo* HitInfo) { float* pyInDamage = (float*)malloc(sizeof(float)) ; float* pyDamageSeverityPercent = (float*)malloc(sizeof(float)) ;   self.AdjustDamage(InstigatedBy, HitLocation, DamageType, DamageCauser, Pipeline, pyInDamage, pyDamageSeverityPercent, Momentum, HitInfo); return py::make_tuple(*pyInDamage, *pyDamageSeverityPercent); })
        .def("eventTakeDamage", &AWillowPlayerPawn::eventTakeDamage)
        .def("IsDemigodMode", &AWillowPlayerPawn::IsDemigodMode)
        .def("eventReplicatedEvent", &AWillowPlayerPawn::eventReplicatedEvent)
        .def("GetNextExpLevelPoints", &AWillowPlayerPawn::GetNextExpLevelPoints)
        .def("IsVulnerableToFriendlyFire", &AWillowPlayerPawn::IsVulnerableToFriendlyFire)
        .def("AllowFallbackToDefaultCustomizations", &AWillowPlayerPawn::AllowFallbackToDefaultCustomizations)
        .def("RefreshCustomizationsOnInstanceData", &AWillowPlayerPawn::RefreshCustomizationsOnInstanceData)
        .def("GetCustomizableName", &AWillowPlayerPawn::GetCustomizableName)
        .def("GetCustomizableInstanceDataSets", &AWillowPlayerPawn::GetCustomizableInstanceDataSets)
        .def("GetDesiredCustomizationOfType", &AWillowPlayerPawn::GetDesiredCustomizationOfType, py::return_value_policy::reference)
        .def("CustomizationApplied", &AWillowPlayerPawn::CustomizationApplied)
        .def("CanReceiveStatusEffects", &AWillowPlayerPawn::CanReceiveStatusEffects)
        .def("ReactToPrimaryStatusEffect", &AWillowPlayerPawn::ReactToPrimaryStatusEffect)
        .def("ShieldAbsorbedAmmo", [](AWillowPlayerPawn &self , class UClass* DamageSource, class UWillowDamageTypeDefinition* DamageTypeDef) { float* pyDamagePercentToAbsorb = (float*)malloc(sizeof(float)) ;  bool ret =  self.ShieldAbsorbedAmmo(DamageSource, DamageTypeDef, pyDamagePercentToAbsorb); return py::make_tuple(ret, *pyDamagePercentToAbsorb); })
        .def("SetExpLevel", &AWillowPlayerPawn::SetExpLevel)
        .def("SetAwesomeLevel", &AWillowPlayerPawn::SetAwesomeLevel)
        .def("GetGameStage", &AWillowPlayerPawn::GetGameStage)
        .def("GetExpLevelForEquip", &AWillowPlayerPawn::GetExpLevelForEquip)
        .def("GetExpLevel", &AWillowPlayerPawn::GetExpLevel)
        .def("GetAwesomeLevel", &AWillowPlayerPawn::GetAwesomeLevel)
        .def("InitRagdoll", &AWillowPlayerPawn::InitRagdoll)
        .def("OnNoLongerTargetedByAI", &AWillowPlayerPawn::OnNoLongerTargetedByAI)
        .def("OnTargetedByAI", &AWillowPlayerPawn::OnTargetedByAI)
          ;
}