#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlinePlayerData(py::module &m)
{
    py::class_< UUIDataStore_OnlinePlayerData,  UUIDataStore   >(m, "UUIDataStore_OnlinePlayerData")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_OnlinePlayerData::VfTable_IUIListElementProvider)
        .def_readwrite("FriendsProvider", &UUIDataStore_OnlinePlayerData::FriendsProvider)
        .def_readwrite("PlayerControllerId", &UUIDataStore_OnlinePlayerData::PlayerControllerId)
        .def_readwrite("PlayerNick", &UUIDataStore_OnlinePlayerData::PlayerNick)
        .def_readwrite("ProfileSettingsClassName", &UUIDataStore_OnlinePlayerData::ProfileSettingsClassName)
        .def_readwrite("ProfileSettingsClass", &UUIDataStore_OnlinePlayerData::ProfileSettingsClass)
        .def_readwrite("ProfileProvider", &UUIDataStore_OnlinePlayerData::ProfileProvider)
        .def_readwrite("ProfileProviderClassName", &UUIDataStore_OnlinePlayerData::ProfileProviderClassName)
        .def_readwrite("ProfileProviderClass", &UUIDataStore_OnlinePlayerData::ProfileProviderClass)
        .def_readwrite("PlayerStorageClassName", &UUIDataStore_OnlinePlayerData::PlayerStorageClassName)
        .def_readwrite("PlayerStorageClass", &UUIDataStore_OnlinePlayerData::PlayerStorageClass)
        .def_readwrite("StorageProvider", &UUIDataStore_OnlinePlayerData::StorageProvider)
        .def_readwrite("StorageProviderClassName", &UUIDataStore_OnlinePlayerData::StorageProviderClassName)
        .def_readwrite("StorageProviderClass", &UUIDataStore_OnlinePlayerData::StorageProviderClass)
        .def_readwrite("FriendMessagesProvider", &UUIDataStore_OnlinePlayerData::FriendMessagesProvider)
        .def_readwrite("AchievementsProvider", &UUIDataStore_OnlinePlayerData::AchievementsProvider)
        .def_readwrite("FriendsProviderClassName", &UUIDataStore_OnlinePlayerData::FriendsProviderClassName)
        .def_readwrite("FriendsProviderClass", &UUIDataStore_OnlinePlayerData::FriendsProviderClass)
        .def_readwrite("FriendMessagesProviderClassName", &UUIDataStore_OnlinePlayerData::FriendMessagesProviderClassName)
        .def_readwrite("FriendMessagesProviderClass", &UUIDataStore_OnlinePlayerData::FriendMessagesProviderClass)
        .def_readwrite("AchievementsProviderClassName", &UUIDataStore_OnlinePlayerData::AchievementsProviderClassName)
        .def_readwrite("AchievementsProviderClass", &UUIDataStore_OnlinePlayerData::AchievementsProviderClass)
        .def_readwrite("PartyChatProviderClassName", &UUIDataStore_OnlinePlayerData::PartyChatProviderClassName)
        .def_readwrite("PartyChatProviderClass", &UUIDataStore_OnlinePlayerData::PartyChatProviderClass)
        .def_readwrite("PartyChatProvider", &UUIDataStore_OnlinePlayerData::PartyChatProvider)
        .def("eventGetCachedPlayerStorage", &UUIDataStore_OnlinePlayerData::eventGetCachedPlayerStorage, py::return_value_policy::reference)
        .def("eventGetCachedPlayerProfile", &UUIDataStore_OnlinePlayerData::eventGetCachedPlayerProfile, py::return_value_policy::reference)
        .def("ClearDelegates", &UUIDataStore_OnlinePlayerData::ClearDelegates)
        .def("RegisterDelegates", &UUIDataStore_OnlinePlayerData::RegisterDelegates)
        .def("OnPlayerDataChange", &UUIDataStore_OnlinePlayerData::OnPlayerDataChange)
        .def("OnLoginChange", &UUIDataStore_OnlinePlayerData::OnLoginChange)
        .def("eventOnUnregister", &UUIDataStore_OnlinePlayerData::eventOnUnregister)
        .def("eventOnRegister", &UUIDataStore_OnlinePlayerData::eventOnRegister)
        .def("OnSettingProviderChanged", &UUIDataStore_OnlinePlayerData::OnSettingProviderChanged)
          ;
}