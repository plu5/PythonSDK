#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMoviePressStart(py::module &m)
{
    py::class_< UWillowGFxMoviePressStart,  UWillowGFxMovie   >(m, "UWillowGFxMoviePressStart")
        .def_readwrite("IdleTimeBeforeStartingAttractLoop", &UWillowGFxMoviePressStart::IdleTimeBeforeStartingAttractLoop)
        .def_readwrite("CurrIdleTime", &UWillowGFxMoviePressStart::CurrIdleTime)
        .def_readwrite("AttractModeMovieName", &UWillowGFxMoviePressStart::AttractModeMovieName)
        .def_readwrite("Legal_ESRBDisclaimer", &UWillowGFxMoviePressStart::Legal_ESRBDisclaimer)
        .def_readwrite("Legal_GearboxTrademarks", &UWillowGFxMoviePressStart::Legal_GearboxTrademarks)
        .def_readwrite("Legal_GearboxTrademarks_Console", &UWillowGFxMoviePressStart::Legal_GearboxTrademarks_Console)
        .def_readwrite("TimerPauseTicker", &UWillowGFxMoviePressStart::TimerPauseTicker)
        .def_readwrite("CurrentStartupStep", &UWillowGFxMoviePressStart::CurrentStartupStep)
        .def("extSetLegalText", &UWillowGFxMoviePressStart::extSetLegalText)
        .def("IsTimerActive", &UWillowGFxMoviePressStart::IsTimerActive)
        .def("ClearTimer", &UWillowGFxMoviePressStart::ClearTimer)
        .def("SetTimer", &UWillowGFxMoviePressStart::SetTimer)
        .def("ValidateEggCode", &UWillowGFxMoviePressStart::ValidateEggCode)
        .def("eventOnClose", &UWillowGFxMoviePressStart::eventOnClose)
        .def("ClearDelegates", &UWillowGFxMoviePressStart::ClearDelegates)
        .def("ContinueToMenu", &UWillowGFxMoviePressStart::ContinueToMenu)
        .def("SessionCreationComplete", &UWillowGFxMoviePressStart::SessionCreationComplete)
        .def("OnCreateOnlineGameComplete", &UWillowGFxMoviePressStart::OnCreateOnlineGameComplete)
        .def("TryCreateLANGame", &UWillowGFxMoviePressStart::TryCreateLANGame)
        .def("TryCreateInternetGame", &UWillowGFxMoviePressStart::TryCreateInternetGame)
        .def("CreateSession", &UWillowGFxMoviePressStart::CreateSession)
        .def("GetFrontEndMovieDef", &UWillowGFxMoviePressStart::GetFrontEndMovieDef, py::return_value_policy::reference)
        .def("DoStartupDeviceSelection", &UWillowGFxMoviePressStart::DoStartupDeviceSelection)
        .def("PatcherDownloadProcessComplete", &UWillowGFxMoviePressStart::PatcherDownloadProcessComplete)
        .def("DownloadPatcherFiles", &UWillowGFxMoviePressStart::DownloadPatcherFiles)
        .def("RefreshMissionTracker", &UWillowGFxMoviePressStart::RefreshMissionTracker)
        .def("DlcRefreshComplete", &UWillowGFxMoviePressStart::DlcRefreshComplete)
        .def("DlcRefreshCompleteFromBusy", &UWillowGFxMoviePressStart::DlcRefreshCompleteFromBusy)
        .def("DoDlcEnumeration", &UWillowGFxMoviePressStart::DoDlcEnumeration)
        .def("DoSparkAuthentication", &UWillowGFxMoviePressStart::DoSparkAuthentication)
        .def("PerformStartupStep", &UWillowGFxMoviePressStart::PerformStartupStep)
        .def("GotoNextStartupStep", &UWillowGFxMoviePressStart::GotoNextStartupStep)
        .def("BeginStartupProcess", &UWillowGFxMoviePressStart::BeginStartupProcess)
        .def("CustomPlay", &UWillowGFxMoviePressStart::CustomPlay)
        .def("extContinue", &UWillowGFxMoviePressStart::extContinue)
        .def("extBeginWait", &UWillowGFxMoviePressStart::extBeginWait)
        .def("HandleEggInput", &UWillowGFxMoviePressStart::HandleEggInput)
        .def("HandleInputKey_AtTitle", &UWillowGFxMoviePressStart::HandleInputKey_AtTitle)
        .def("HandleInputKey_ShowingLegal", &UWillowGFxMoviePressStart::HandleInputKey_ShowingLegal)
        .def("ConditionalSkipToMenu", &UWillowGFxMoviePressStart::ConditionalSkipToMenu)
        .def("OnReturnToTitleScreen_Click", &UWillowGFxMoviePressStart::OnReturnToTitleScreen_Click)
        .def("IsDialogOpen", &UWillowGFxMoviePressStart::IsDialogOpen)
        .def("eventOnTick", &UWillowGFxMoviePressStart::eventOnTick)
        .def("OnInviteDialogClicked", &UWillowGFxMoviePressStart::OnInviteDialogClicked)
        .def("eventStart", &UWillowGFxMoviePressStart::eventStart)
        .def("StopAttractLoop", &UWillowGFxMoviePressStart::StopAttractLoop)
        .def("IsAttractPlaying", &UWillowGFxMoviePressStart::IsAttractPlaying)
        .def("PlayAttractLoop", &UWillowGFxMoviePressStart::PlayAttractLoop)
          ;
}