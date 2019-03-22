#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowGameReplicationInfo(py::module &m)
{
    py::class_< AWillowGameReplicationInfo,  AGameReplicationInfo   >(m, "AWillowGameReplicationInfo")
        .def_readwrite("RadarMgr", &AWillowGameReplicationInfo::RadarMgr)
        .def_readwrite("ActiveRespawnCheckpointTeleportActor", &AWillowGameReplicationInfo::ActiveRespawnCheckpointTeleportActor)
        .def_readwrite("CachedBossHasShield", &AWillowGameReplicationInfo::CachedBossHasShield)
        .def_readwrite("MatchmakingState", &AWillowGameReplicationInfo::MatchmakingState)
        .def_readwrite("StartGameState", &AWillowGameReplicationInfo::StartGameState)
        .def_readwrite("FastTravelLocations", &AWillowGameReplicationInfo::FastTravelLocations)
        .def_readwrite("TimeOfDay", &AWillowGameReplicationInfo::TimeOfDay)
        .def_readwrite("DayNightCycleRate", &AWillowGameReplicationInfo::DayNightCycleRate)
        .def_readwrite("DayNightCycleRateBaseValue", &AWillowGameReplicationInfo::DayNightCycleRateBaseValue)
        .def_readwrite("DayNightCycleRateModifierStack", &AWillowGameReplicationInfo::DayNightCycleRateModifierStack)
        .def_readwrite("SecondsUntilShopsReset", &AWillowGameReplicationInfo::SecondsUntilShopsReset)
        .def_readwrite("ShopTimerRate", &AWillowGameReplicationInfo::ShopTimerRate)
        .def_readwrite("bAnyPlayerAttemptedFastTravel", &AWillowGameReplicationInfo::bAnyPlayerAttemptedFastTravel)
        .def_readwrite("bAnyPlayerEnteredVehicle", &AWillowGameReplicationInfo::bAnyPlayerEnteredVehicle)
        .def_readwrite("CurrentPlaythrough", &AWillowGameReplicationInfo::CurrentPlaythrough)
        .def_readwrite("PlaythroughOverride", &AWillowGameReplicationInfo::PlaythroughOverride)
        .def_readwrite("ReplicatedClientFlags", &AWillowGameReplicationInfo::ReplicatedClientFlags)
        .def_readwrite("MissionTracker", &AWillowGameReplicationInfo::MissionTracker)
        .def_readwrite("StartGameTimer", &AWillowGameReplicationInfo::StartGameTimer)
        .def_readwrite("BossPawn", &AWillowGameReplicationInfo::BossPawn)
        .def_readwrite("BossName", &AWillowGameReplicationInfo::BossName)
        .def_readwrite("BossLevel", &AWillowGameReplicationInfo::BossLevel)
        .def_readwrite("ReplicatedBossHealth", &AWillowGameReplicationInfo::ReplicatedBossHealth)
        .def_readwrite("ReplicatedBossShield", &AWillowGameReplicationInfo::ReplicatedBossShield)
        .def_readwrite("CachedBossHealth", &AWillowGameReplicationInfo::CachedBossHealth)
        .def_readwrite("CachedBossShield", &AWillowGameReplicationInfo::CachedBossShield)
        .def_readwrite("DisplayedBossHealth", &AWillowGameReplicationInfo::DisplayedBossHealth)
        .def_readwrite("DisplayedBossShield", &AWillowGameReplicationInfo::DisplayedBossShield)
        .def_readwrite("PlayerRemovedDelegates", &AWillowGameReplicationInfo::PlayerRemovedDelegates)
        .def_readwrite("PlayerNameUpdatedDelegates", &AWillowGameReplicationInfo::PlayerNameUpdatedDelegates)
        .def_readwrite("PlayerUidUpdatedDelegates", &AWillowGameReplicationInfo::PlayerUidUpdatedDelegates)
        .def_readwrite("PlayerCharacterClassUpdatedDelegates", &AWillowGameReplicationInfo::PlayerCharacterClassUpdatedDelegates)
        .def_readwrite("PlayerExpLevelUpdatedDelegates", &AWillowGameReplicationInfo::PlayerExpLevelUpdatedDelegates)
        .def_readwrite("OverpowerLevelModifier", &AWillowGameReplicationInfo::OverpowerLevelModifier)
        .def_readwrite("MatchmakingStateChangedDelegates", &AWillowGameReplicationInfo::MatchmakingStateChangedDelegates)
        .def_readwrite("MenuMatinee", &AWillowGameReplicationInfo::MenuMatinee)
        .def_readwrite("MusicAkState", &AWillowGameReplicationInfo::MusicAkState)
        .def_readwrite("NameListDef", &AWillowGameReplicationInfo::NameListDef)
        .def("NotifyPlaythroughChanged", &AWillowGameReplicationInfo::NotifyPlaythroughChanged)
        .def("NotifyMatchmakingStateChanged", &AWillowGameReplicationInfo::NotifyMatchmakingStateChanged)
        .def("ClearMatchmakingStateChangedDelegate", &AWillowGameReplicationInfo::ClearMatchmakingStateChangedDelegate)
        .def("AddMatchmakingStateChangedDelegate", &AWillowGameReplicationInfo::AddMatchmakingStateChangedDelegate)
        .def("OnMatchmakingStateChanged", &AWillowGameReplicationInfo::OnMatchmakingStateChanged)
        .def("IsNighttime", &AWillowGameReplicationInfo::IsNighttime)
        .def("IsDaytime", &AWillowGameReplicationInfo::IsDaytime)
        .def("ClearNPCAllies", &AWillowGameReplicationInfo::ClearNPCAllies)
        .def("UpdateNPCAlliesInfo", &AWillowGameReplicationInfo::UpdateNPCAlliesInfo)
        .def("FindAvailableNPCAllySlot", &AWillowGameReplicationInfo::FindAvailableNPCAllySlot)
        .def("FindNPCAllyIndex", &AWillowGameReplicationInfo::FindNPCAllyIndex)
        .def("InitNPCAlly", &AWillowGameReplicationInfo::InitNPCAlly)
        .def("UpdateBossBarInfo", &AWillowGameReplicationInfo::UpdateBossBarInfo)
        .def("InitBossBar", &AWillowGameReplicationInfo::InitBossBar)
        .def("NotifyPlayerExpLevelUpdated", &AWillowGameReplicationInfo::NotifyPlayerExpLevelUpdated)
        .def("TriggerPlayerExpLevelUpdatedDelegates", &AWillowGameReplicationInfo::TriggerPlayerExpLevelUpdatedDelegates)
        .def("ClearPlayerExpLevelUpdatedDelegate", &AWillowGameReplicationInfo::ClearPlayerExpLevelUpdatedDelegate)
        .def("AddPlayerExpLevelUpdatedDelegate", &AWillowGameReplicationInfo::AddPlayerExpLevelUpdatedDelegate)
        .def("OnPlayerExpLevelUpdated", &AWillowGameReplicationInfo::OnPlayerExpLevelUpdated)
        .def("NotifyPlayerCharacterClassUpdated", &AWillowGameReplicationInfo::NotifyPlayerCharacterClassUpdated)
        .def("TriggerPlayerCharacterClassUpdatedDelegates", &AWillowGameReplicationInfo::TriggerPlayerCharacterClassUpdatedDelegates)
        .def("ClearPlayerCharacterClassUpdatedDelegate", &AWillowGameReplicationInfo::ClearPlayerCharacterClassUpdatedDelegate)
        .def("AddPlayerCharacterClassUpdatedDelegate", &AWillowGameReplicationInfo::AddPlayerCharacterClassUpdatedDelegate)
        .def("OnPlayerCharacterClassUpdated", &AWillowGameReplicationInfo::OnPlayerCharacterClassUpdated)
        .def("NotifyPlayerUidUpdated", &AWillowGameReplicationInfo::NotifyPlayerUidUpdated)
        .def("TriggerPlayerUidUpdatedDelegates", &AWillowGameReplicationInfo::TriggerPlayerUidUpdatedDelegates)
        .def("ClearPlayerUidUpdatedDelegate", &AWillowGameReplicationInfo::ClearPlayerUidUpdatedDelegate)
        .def("AddPlayerUidUpdatedDelegate", &AWillowGameReplicationInfo::AddPlayerUidUpdatedDelegate)
        .def("OnPlayerUidUpdated", &AWillowGameReplicationInfo::OnPlayerUidUpdated)
        .def("NotifyPlayerNameUpdated", &AWillowGameReplicationInfo::NotifyPlayerNameUpdated)
        .def("TriggerPlayerNameUpdatedDelegates", &AWillowGameReplicationInfo::TriggerPlayerNameUpdatedDelegates)
        .def("ClearPlayerNameUpdatedDelegate", &AWillowGameReplicationInfo::ClearPlayerNameUpdatedDelegate)
        .def("AddPlayerNameUpdatedDelegate", &AWillowGameReplicationInfo::AddPlayerNameUpdatedDelegate)
        .def("OnPlayerNameUpdated", &AWillowGameReplicationInfo::OnPlayerNameUpdated)
        .def("RemovePRI", &AWillowGameReplicationInfo::RemovePRI)
        .def("AddPRI", &AWillowGameReplicationInfo::AddPRI)
        .def("TriggerPlayerRemovedDelegates", &AWillowGameReplicationInfo::TriggerPlayerRemovedDelegates)
        .def("ClearPlayerRemovedDelegate", &AWillowGameReplicationInfo::ClearPlayerRemovedDelegate)
        .def("AddPlayerRemovedDelegate", &AWillowGameReplicationInfo::AddPlayerRemovedDelegate)
        .def("OnPlayerRemoved", &AWillowGameReplicationInfo::OnPlayerRemoved)
        .def("ClientFlagGet", &AWillowGameReplicationInfo::ClientFlagGet)
        .def("ClientFlagSet", &AWillowGameReplicationInfo::ClientFlagSet)
        .def("ClientInitClientFlags", &AWillowGameReplicationInfo::ClientInitClientFlags)
        .def("InitClientFlags", &AWillowGameReplicationInfo::InitClientFlags)
        .def("IsStationInList", &AWillowGameReplicationInfo::IsStationInList)
        .def("AddFastTravelLocation", &AWillowGameReplicationInfo::AddFastTravelLocation)
        .def("InColiseumGameplayMap", &AWillowGameReplicationInfo::InColiseumGameplayMap)
        .def("CacheMenuMatinee", &AWillowGameReplicationInfo::CacheMenuMatinee)
        .def("PostBeginPlay", &AWillowGameReplicationInfo::PostBeginPlay)
        .def("GetDuelGlobals", &AWillowGameReplicationInfo::GetDuelGlobals, py::return_value_policy::reference)
        .def("UpdateJackVoiceModulation", &AWillowGameReplicationInfo::UpdateJackVoiceModulation)
        .def("SetPlayersSoundLikeJack", &AWillowGameReplicationInfo::SetPlayersSoundLikeJack)
        .def("NotifyMissionTrackerCinematicModeChanged", &AWillowGameReplicationInfo::NotifyMissionTrackerCinematicModeChanged)
        .def("eventReplicatedEvent", &AWillowGameReplicationInfo::eventReplicatedEvent)
        .def("ClearFastTravelLocations", &AWillowGameReplicationInfo::ClearFastTravelLocations)
        .def("GetCurrPlaythrough", &AWillowGameReplicationInfo::GetCurrPlaythrough)
        .def("SetPlaythroughOverride", &AWillowGameReplicationInfo::SetPlaythroughOverride)
        .def("SetCurrentPlaythrough", &AWillowGameReplicationInfo::SetCurrentPlaythrough)
          ;
}