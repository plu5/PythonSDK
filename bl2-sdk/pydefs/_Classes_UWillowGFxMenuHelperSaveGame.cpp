#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMenuHelperSaveGame(py::module &m)
{
    py::class_< UWillowGFxMenuHelperSaveGame,  UObject   >(m, "UWillowGFxMenuHelperSaveGame")
        .def_readwrite("LoadingListDlg", &UWillowGFxMenuHelperSaveGame::LoadingListDlg)
        .def_readwrite("DeletingDlg", &UWillowGFxMenuHelperSaveGame::DeletingDlg)
        .def_readwrite("ValidatingDlg", &UWillowGFxMenuHelperSaveGame::ValidatingDlg)
        .def_readwrite("SaveGames", &UWillowGFxMenuHelperSaveGame::SaveGames)
        .def_readwrite("PlayerIndex", &UWillowGFxMenuHelperSaveGame::PlayerIndex)
        .def_readwrite("MenuOwner", &UWillowGFxMenuHelperSaveGame::MenuOwner)
        .def_readwrite("CurrentSelection", &UWillowGFxMenuHelperSaveGame::CurrentSelection)
        .def("CheckForPS3SaveList", &UWillowGFxMenuHelperSaveGame::CheckForPS3SaveList)
        .def("CheckForPS3LoadGame", &UWillowGFxMenuHelperSaveGame::CheckForPS3LoadGame)
        .def("BeginPS3LoadGame", &UWillowGFxMenuHelperSaveGame::BeginPS3LoadGame)
        .def("OnDeleteComplete", &UWillowGFxMenuHelperSaveGame::OnDeleteComplete)
        .def("GetSaveIdFromFilePath", &UWillowGFxMenuHelperSaveGame::GetSaveIdFromFilePath)
        .def("IntFromHex", &UWillowGFxMenuHelperSaveGame::IntFromHex)
        .def("ConfirmSaveDelete_Clicked", &UWillowGFxMenuHelperSaveGame::ConfirmSaveDelete_Clicked)
        .def("FinishSaveGameUpdate", &UWillowGFxMenuHelperSaveGame::FinishSaveGameUpdate)
        .def("SortResults", &UWillowGFxMenuHelperSaveGame::SortResults)
        .def("OnSaveGameListLoadComplete", &UWillowGFxMenuHelperSaveGame::OnSaveGameListLoadComplete)
        .def("GetSaveList", &UWillowGFxMenuHelperSaveGame::GetSaveList)
        .def("GetSaveListComplete", &UWillowGFxMenuHelperSaveGame::GetSaveListComplete)
        .def("OnSaveGameLoadComplete", &UWillowGFxMenuHelperSaveGame::OnSaveGameLoadComplete)
        .def("LoadSelectedCharacter", &UWillowGFxMenuHelperSaveGame::LoadSelectedCharacter)
        .def("OnValidationComplete", &UWillowGFxMenuHelperSaveGame::OnValidationComplete)
        .def("GetSaveGames", &UWillowGFxMenuHelperSaveGame::GetSaveGames)
        .def("OnLoadingStorageDeviceChanged", &UWillowGFxMenuHelperSaveGame::OnLoadingStorageDeviceChanged)
        .def("ShowBlockingLoadingDialog", &UWillowGFxMenuHelperSaveGame::ShowBlockingLoadingDialog)
        .def("BeginGetSaveList", &UWillowGFxMenuHelperSaveGame::BeginGetSaveList)
        .def("EmptyResults", &UWillowGFxMenuHelperSaveGame::EmptyResults)
        .def("EmptyContent", &UWillowGFxMenuHelperSaveGame::EmptyContent)
        .def("OnDeleteStorageDeviceChanged", &UWillowGFxMenuHelperSaveGame::OnDeleteStorageDeviceChanged)
        .def("Delete", &UWillowGFxMenuHelperSaveGame::Delete)
        .def("Activate", &UWillowGFxMenuHelperSaveGame::Activate)
        .def("AbortRead", &UWillowGFxMenuHelperSaveGame::AbortRead)
        .def("SetOwner", &UWillowGFxMenuHelperSaveGame::SetOwner)
        .def("Init", &UWillowGFxMenuHelperSaveGame::Init)
        .def("OnDeleteEnded", &UWillowGFxMenuHelperSaveGame::OnDeleteEnded)
        .def("OnDeleteStarted", &UWillowGFxMenuHelperSaveGame::OnDeleteStarted)
        .def("OnSaveGamesUpdated", &UWillowGFxMenuHelperSaveGame::OnSaveGamesUpdated)
        .def("OnDeleted", &UWillowGFxMenuHelperSaveGame::OnDeleted)
          ;
}