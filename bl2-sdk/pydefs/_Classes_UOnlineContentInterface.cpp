#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineContentInterface(py::module &m)
{
    py::class_< UOnlineContentInterface,  UInterface   >(m, "UOnlineContentInterface")
        .def("ClearCheckDownloadableContentListDelegate", &UOnlineContentInterface::ClearCheckDownloadableContentListDelegate)
        .def("AddCheckDownloadableContentListDelegate", &UOnlineContentInterface::AddCheckDownloadableContentListDelegate)
        .def("CheckDownloadableContentList", &UOnlineContentInterface::CheckDownloadableContentList)
        .def("OnCheckDownloadableContentList", &UOnlineContentInterface::OnCheckDownloadableContentList)
        .def("GetCriticalDownloadableContentList", &UOnlineContentInterface::GetCriticalDownloadableContentList)
        .def("ReadCriticalDownloadableContentList", &UOnlineContentInterface::ReadCriticalDownloadableContentList)
        .def("ClearReadCriticalDownloadableContentListComplete", &UOnlineContentInterface::ClearReadCriticalDownloadableContentListComplete)
        .def("AddReadCriticalDownloadableContentListComplete", &UOnlineContentInterface::AddReadCriticalDownloadableContentListComplete)
        .def("OnReadCriticalDownloadableContentListComplete", &UOnlineContentInterface::OnReadCriticalDownloadableContentListComplete)
        .def("GetHiddenDownloadableContentList", &UOnlineContentInterface::GetHiddenDownloadableContentList)
        .def("ReadHiddenDownloadableContentList", &UOnlineContentInterface::ReadHiddenDownloadableContentList)
        .def("ClearReadHiddenDownloadableContentListComplete", &UOnlineContentInterface::ClearReadHiddenDownloadableContentListComplete)
        .def("AddReadHiddenDownloadableContentListComplete", &UOnlineContentInterface::AddReadHiddenDownloadableContentListComplete)
        .def("OnReadHiddenDownloadableContentListComplete", &UOnlineContentInterface::OnReadHiddenDownloadableContentListComplete)
        .def("GetDownloadableContentList", &UOnlineContentInterface::GetDownloadableContentList)
        .def("ReadDownloadableContentList", &UOnlineContentInterface::ReadDownloadableContentList)
        .def("ClearReadDownloadableContentListComplete", &UOnlineContentInterface::ClearReadDownloadableContentListComplete)
        .def("AddReadDownloadableContentListComplete", &UOnlineContentInterface::AddReadDownloadableContentListComplete)
        .def("OnReadDownloadableContentListComplete", &UOnlineContentInterface::OnReadDownloadableContentListComplete)
        .def("GetSaveGamesList", &UOnlineContentInterface::GetSaveGamesList)
        .def("ReadSaveGamesList", &UOnlineContentInterface::ReadSaveGamesList)
        .def("ClearReadSaveGamesComplete", &UOnlineContentInterface::ClearReadSaveGamesComplete)
        .def("AddReadSaveGamesComplete", &UOnlineContentInterface::AddReadSaveGamesComplete)
        .def("OnReadSaveGamesComplete", &UOnlineContentInterface::OnReadSaveGamesComplete)
        .def("ClearSaveGames", &UOnlineContentInterface::ClearSaveGames)
        .def("DeleteSaveGame", &UOnlineContentInterface::DeleteSaveGame)
        .def("ClearWriteSaveGameDataComplete", &UOnlineContentInterface::ClearWriteSaveGameDataComplete)
        .def("AddWriteSaveGameDataComplete", &UOnlineContentInterface::AddWriteSaveGameDataComplete)
        .def("OnWriteSaveGameDataComplete", &UOnlineContentInterface::OnWriteSaveGameDataComplete)
        .def("WriteSaveGameData", &UOnlineContentInterface::WriteSaveGameData)
        .def("ClearReadSaveGameDataComplete", &UOnlineContentInterface::ClearReadSaveGameDataComplete)
        .def("AddReadSaveGameDataComplete", &UOnlineContentInterface::AddReadSaveGameDataComplete)
        .def("OnReadSaveGameDataComplete", &UOnlineContentInterface::OnReadSaveGameDataComplete)
        .def("GetSaveGameData", &UOnlineContentInterface::GetSaveGameData)
        .def("ReadSaveGameData", &UOnlineContentInterface::ReadSaveGameData)
        .def("GetAvailableDownloadCounts", &UOnlineContentInterface::GetAvailableDownloadCounts)
        .def("ClearQueryAvailableDownloadsComplete", &UOnlineContentInterface::ClearQueryAvailableDownloadsComplete)
        .def("AddQueryAvailableDownloadsComplete", &UOnlineContentInterface::AddQueryAvailableDownloadsComplete)
        .def("OnQueryAvailableDownloadsComplete", &UOnlineContentInterface::OnQueryAvailableDownloadsComplete)
        .def("QueryAvailableDownloads", &UOnlineContentInterface::QueryAvailableDownloads)
        .def("ClearCrossTitleSaveGames", &UOnlineContentInterface::ClearCrossTitleSaveGames)
        .def("ClearReadCrossTitleSaveGameDataComplete", &UOnlineContentInterface::ClearReadCrossTitleSaveGameDataComplete)
        .def("AddReadCrossTitleSaveGameDataComplete", &UOnlineContentInterface::AddReadCrossTitleSaveGameDataComplete)
        .def("OnReadCrossTitleSaveGameDataComplete", &UOnlineContentInterface::OnReadCrossTitleSaveGameDataComplete)
        .def("GetCrossTitleSaveGameData", &UOnlineContentInterface::GetCrossTitleSaveGameData)
        .def("ReadCrossTitleSaveGameData", &UOnlineContentInterface::ReadCrossTitleSaveGameData)
        .def("ClearReadCrossTitleContentCompleteDelegate", &UOnlineContentInterface::ClearReadCrossTitleContentCompleteDelegate)
        .def("AddReadCrossTitleContentCompleteDelegate", &UOnlineContentInterface::AddReadCrossTitleContentCompleteDelegate)
        .def("OnReadCrossTitleContentComplete", &UOnlineContentInterface::OnReadCrossTitleContentComplete)
        .def("GetCrossTitleContentList", &UOnlineContentInterface::GetCrossTitleContentList)
        .def("ClearCrossTitleContentList", &UOnlineContentInterface::ClearCrossTitleContentList)
        .def("ReadCrossTitleContentList", &UOnlineContentInterface::ReadCrossTitleContentList)
        .def("GetContentList", &UOnlineContentInterface::GetContentList)
        .def("ClearContentList", &UOnlineContentInterface::ClearContentList)
        .def("ReadContentList", &UOnlineContentInterface::ReadContentList)
        .def("ClearReadContentComplete", &UOnlineContentInterface::ClearReadContentComplete)
        .def("AddReadContentComplete", &UOnlineContentInterface::AddReadContentComplete)
        .def("OnReadContentComplete", &UOnlineContentInterface::OnReadContentComplete)
        .def("ClearContentChangeDelegate", &UOnlineContentInterface::ClearContentChangeDelegate)
        .def("AddContentChangeDelegate", &UOnlineContentInterface::AddContentChangeDelegate)
        .def("OnContentChange", &UOnlineContentInterface::OnContentChange)
          ;
}