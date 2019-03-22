#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineGameInterfaceImpl(py::module &m)
{
    py::class_< UOnlineGameInterfaceImpl,  UObject   >(m, "UOnlineGameInterfaceImpl")
        .def_readwrite("OwningSubsystem", &UOnlineGameInterfaceImpl::OwningSubsystem)
        .def_readwrite("GameSettings", &UOnlineGameInterfaceImpl::GameSettings)
        .def_readwrite("GameSearch", &UOnlineGameInterfaceImpl::GameSearch)
        .def_readwrite("CurrentGameState", &UOnlineGameInterfaceImpl::CurrentGameState)
        .def_readwrite("LanBeaconState", &UOnlineGameInterfaceImpl::LanBeaconState)
        .def_readwrite("CreateOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::CreateOnlineGameCompleteDelegates)
        .def_readwrite("UpdateOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::UpdateOnlineGameCompleteDelegates)
        .def_readwrite("DestroyOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::DestroyOnlineGameCompleteDelegates)
        .def_readwrite("JoinOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::JoinOnlineGameCompleteDelegates)
        .def_readwrite("MigrateOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::MigrateOnlineGameCompleteDelegates)
        .def_readwrite("JoinMigratedOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::JoinMigratedOnlineGameCompleteDelegates)
        .def_readwrite("RecalculateSkillRatingCompleteDelegates", &UOnlineGameInterfaceImpl::RecalculateSkillRatingCompleteDelegates)
        .def_readwrite("StartOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::StartOnlineGameCompleteDelegates)
        .def_readwrite("EndOnlineGameCompleteDelegates", &UOnlineGameInterfaceImpl::EndOnlineGameCompleteDelegates)
        .def_readwrite("FindOnlineGamesCompleteDelegates", &UOnlineGameInterfaceImpl::FindOnlineGamesCompleteDelegates)
        .def_readwrite("CancelFindOnlineGamesCompleteDelegates", &UOnlineGameInterfaceImpl::CancelFindOnlineGamesCompleteDelegates)
        .def_readwrite("LanAnnouncePort", &UOnlineGameInterfaceImpl::LanAnnouncePort)
        .def_readwrite("LanGameUniqueId", &UOnlineGameInterfaceImpl::LanGameUniqueId)
        .def_readwrite("LanPacketPlatformMask", &UOnlineGameInterfaceImpl::LanPacketPlatformMask)
        .def_readwrite("LanQueryTimeLeft", &UOnlineGameInterfaceImpl::LanQueryTimeLeft)
        .def_readwrite("LanQueryTimeout", &UOnlineGameInterfaceImpl::LanQueryTimeout)
        .def_readwrite("LanBeacon", &UOnlineGameInterfaceImpl::LanBeacon)
        .def_readwrite("SessionInfo", &UOnlineGameInterfaceImpl::SessionInfo)
        .def_readwrite("NATResolutionTimeout", &UOnlineGameInterfaceImpl::NATResolutionTimeout)
        .def("HasPendingBootInvite", &UOnlineGameInterfaceImpl::HasPendingBootInvite)
        .def("CancelNATNegotiation", &UOnlineGameInterfaceImpl::CancelNATNegotiation)
        .def("ClearQosStatusChangedDelegate", &UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate)
        .def("AddQosStatusChangedDelegate", &UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate)
        .def("OnQosStatusChanged", &UOnlineGameInterfaceImpl::OnQosStatusChanged)
        .def("BindPlatformSpecificSessionToSearch", &UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch)
        .def("ReadPlatformSpecificSessionInfoBySessionName", &UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName)
        .def("ReadPlatformSpecificSessionInfo", &UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo)
        .def("QueryNonAdvertisedData", &UOnlineGameInterfaceImpl::QueryNonAdvertisedData)
        .def("ClearJoinMigratedOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate)
        .def("AddJoinMigratedOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate)
        .def("OnJoinMigratedOnlineGameComplete", &UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete)
        .def("JoinMigratedOnlineGame", &UOnlineGameInterfaceImpl::JoinMigratedOnlineGame)
        .def("ClearMigrateOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate)
        .def("AddMigrateOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate)
        .def("OnMigrateOnlineGameComplete", &UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete)
        .def("MigrateOnlineGame", &UOnlineGameInterfaceImpl::MigrateOnlineGame)
        .def("ClearRecalculateSkillRatingCompleteDelegate", &UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate)
        .def("AddRecalculateSkillRatingCompleteDelegate", &UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate)
        .def("OnRecalculateSkillRatingComplete", &UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete)
        .def("RecalculateSkillRating", &UOnlineGameInterfaceImpl::RecalculateSkillRating)
        .def("ClearGameInviteProcessingStartedDelegate", &UOnlineGameInterfaceImpl::ClearGameInviteProcessingStartedDelegate)
        .def("AddGameInviteProcessingStartedDelegate", &UOnlineGameInterfaceImpl::AddGameInviteProcessingStartedDelegate)
        .def("OnGameInviteProcessingStarted", &UOnlineGameInterfaceImpl::OnGameInviteProcessingStarted)
        .def("AcceptGameInvite", &UOnlineGameInterfaceImpl::AcceptGameInvite)
        .def("ClearGameInviteAcceptedDelegate", &UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate)
        .def("AddGameInviteAcceptedDelegate", &UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate)
        .def("OnGameInviteAccepted", &UOnlineGameInterfaceImpl::OnGameInviteAccepted)
        .def("GetArbitratedPlayers", &UOnlineGameInterfaceImpl::GetArbitratedPlayers)
        .def("ClearArbitrationRegistrationCompleteDelegate", &UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate)
        .def("AddArbitrationRegistrationCompleteDelegate", &UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate)
        .def("OnArbitrationRegistrationComplete", &UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete)
        .def("RegisterForArbitration", &UOnlineGameInterfaceImpl::RegisterForArbitration)
        .def("ClearEndOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate)
        .def("AddEndOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate)
        .def("OnEndOnlineGameComplete", &UOnlineGameInterfaceImpl::OnEndOnlineGameComplete)
        .def("EndOnlineGame", &UOnlineGameInterfaceImpl::EndOnlineGame)
        .def("ClearStartOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate)
        .def("AddStartOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate)
        .def("OnStartOnlineGameComplete", &UOnlineGameInterfaceImpl::OnStartOnlineGameComplete)
        .def("StartOnlineGame", &UOnlineGameInterfaceImpl::StartOnlineGame)
        .def("ClearUnregisterPlayerCompleteDelegate", &UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate)
        .def("AddUnregisterPlayerCompleteDelegate", &UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate)
        .def("OnUnregisterPlayerComplete", &UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete)
        .def("UnregisterPlayers", &UOnlineGameInterfaceImpl::UnregisterPlayers)
        .def("UnregisterPlayer", &UOnlineGameInterfaceImpl::UnregisterPlayer)
        .def("ClearRegisterPlayerCompleteDelegate", &UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate)
        .def("AddRegisterPlayerCompleteDelegate", &UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate)
        .def("OnRegisterPlayerComplete", &UOnlineGameInterfaceImpl::OnRegisterPlayerComplete)
        .def("RegisterPlayers", &UOnlineGameInterfaceImpl::RegisterPlayers)
        .def("RegisterPlayer", &UOnlineGameInterfaceImpl::RegisterPlayer)
        .def("GetResolvedConnectString", &UOnlineGameInterfaceImpl::GetResolvedConnectString)
        .def("ClearJoinOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate)
        .def("AddJoinOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate)
        .def("OnJoinOnlineGameComplete", &UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete)
        .def("JoinOnlineGame", &UOnlineGameInterfaceImpl::JoinOnlineGame)
        .def("FreeSearchResults", &UOnlineGameInterfaceImpl::FreeSearchResults)
        .def("ClearCancelFindOnlineGamesCompleteDelegate", &UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate)
        .def("AddCancelFindOnlineGamesCompleteDelegate", &UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate)
        .def("OnCancelFindOnlineGamesComplete", &UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete)
        .def("CancelFindOnlineGames", &UOnlineGameInterfaceImpl::CancelFindOnlineGames)
        .def("ClearFindOnlineGamesCompleteDelegate", &UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate)
        .def("AddFindOnlineGamesCompleteDelegate", &UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate)
        .def("FindOnlineGames", &UOnlineGameInterfaceImpl::FindOnlineGames)
        .def("ClearDestroyOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate)
        .def("AddDestroyOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate)
        .def("OnDestroyOnlineGameComplete", &UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete)
        .def("DestroyOnlineGame", &UOnlineGameInterfaceImpl::DestroyOnlineGame)
        .def("ClearUpdateOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate)
        .def("AddUpdateOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate)
        .def("OnUpdateOnlineGameComplete", &UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete)
        .def("UpdateOnlineGame", &UOnlineGameInterfaceImpl::UpdateOnlineGame)
        .def("ClearCreateOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate)
        .def("AddCreateOnlineGameCompleteDelegate", &UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate)
        .def("OnCreateOnlineGameComplete", &UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete)
        .def("CreateOnlineGame", &UOnlineGameInterfaceImpl::CreateOnlineGame)
        .def("GetGameSearch", &UOnlineGameInterfaceImpl::GetGameSearch, py::return_value_policy::reference)
        .def("GetGameSettings", &UOnlineGameInterfaceImpl::GetGameSettings, py::return_value_policy::reference)
        .def("OnFindOnlineGamesComplete", &UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete)
          ;
}