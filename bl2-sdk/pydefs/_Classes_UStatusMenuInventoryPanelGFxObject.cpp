#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatusMenuInventoryPanelGFxObject(py::module &m)
{
    py::class_< UStatusMenuInventoryPanelGFxObject,  UBaseTopLevelPanelGFxObject   >(m, "UStatusMenuInventoryPanelGFxObject")
        .def_readwrite("EquippedPanel", &UStatusMenuInventoryPanelGFxObject::EquippedPanel)
        .def_readwrite("BackpackPanel", &UStatusMenuInventoryPanelGFxObject::BackpackPanel)
        .def_readwrite("AmmoPanel", &UStatusMenuInventoryPanelGFxObject::AmmoPanel)
        .def_readwrite("EquippingThing", &UStatusMenuInventoryPanelGFxObject::EquippingThing)
        .def_readwrite("SecondEquippingThing", &UStatusMenuInventoryPanelGFxObject::SecondEquippingThing)
        .def_readwrite("StartEquipPanel", &UStatusMenuInventoryPanelGFxObject::StartEquipPanel)
        .def_readwrite("SlotsUsed", &UStatusMenuInventoryPanelGFxObject::SlotsUsed)
        .def_readwrite("MaxCapacity", &UStatusMenuInventoryPanelGFxObject::MaxCapacity)
        .def_readwrite("CachedSortFilterConfig", &UStatusMenuInventoryPanelGFxObject::CachedSortFilterConfig)
        .def_readwrite("TotalSlotCount", &UStatusMenuInventoryPanelGFxObject::TotalSlotCount)
        .def_readwrite("NewlyOpenedSlotCount", &UStatusMenuInventoryPanelGFxObject::NewlyOpenedSlotCount)
        .def_readwrite("BackpackSortConfigIndex", &UStatusMenuInventoryPanelGFxObject::BackpackSortConfigIndex)
        .def_readwrite("StartingBackpackSortConfigIndex", &UStatusMenuInventoryPanelGFxObject::StartingBackpackSortConfigIndex)
        .def_readwrite("BackpackSortConfigurations", &UStatusMenuInventoryPanelGFxObject::BackpackSortConfigurations)
        .def("GetCurrentCellObject", &UStatusMenuInventoryPanelGFxObject::GetCurrentCellObject, py::return_value_policy::reference)
        .def("OnCellPressed", &UStatusMenuInventoryPanelGFxObject::OnCellPressed)
        .def("extCompleteDrag_Backpack", &UStatusMenuInventoryPanelGFxObject::extCompleteDrag_Backpack)
        .def("extCompleteDrag_Equipped", &UStatusMenuInventoryPanelGFxObject::extCompleteDrag_Equipped)
        .def("extCancelDrag", &UStatusMenuInventoryPanelGFxObject::extCancelDrag)
        .def("OnStartDrag", &UStatusMenuInventoryPanelGFxObject::OnStartDrag)
        .def("SetLeftRightArrowVisibility", &UStatusMenuInventoryPanelGFxObject::SetLeftRightArrowVisibility)
        .def("TweenCards", &UStatusMenuInventoryPanelGFxObject::TweenCards)
        .def("SetStorageInfoCardData", &UStatusMenuInventoryPanelGFxObject::SetStorageInfoCardData)
        .def("SetStorageInfoCardTitle", &UStatusMenuInventoryPanelGFxObject::SetStorageInfoCardTitle)
        .def("FreeCellData", &UStatusMenuInventoryPanelGFxObject::FreeCellData)
        .def("OnTrashFavChanged", &UStatusMenuInventoryPanelGFxObject::OnTrashFavChanged)
        .def("CycleSelectedThingAsTrashOrFavorite", &UStatusMenuInventoryPanelGFxObject::CycleSelectedThingAsTrashOrFavorite)
        .def("CycleEquippedThingAsTrashOrFavorite", &UStatusMenuInventoryPanelGFxObject::CycleEquippedThingAsTrashOrFavorite)
        .def("FlourishDrop", &UStatusMenuInventoryPanelGFxObject::FlourishDrop)
        .def("CanDrop", &UStatusMenuInventoryPanelGFxObject::CanDrop)
        .def("DropSelectedThing", &UStatusMenuInventoryPanelGFxObject::DropSelectedThing)
        .def("CanUnready", &UStatusMenuInventoryPanelGFxObject::CanUnready)
        .def("CanReady", &UStatusMenuInventoryPanelGFxObject::CanReady)
        .def("CanUseConsume", &UStatusMenuInventoryPanelGFxObject::CanUseConsume)
        .def("UnreadyThing", &UStatusMenuInventoryPanelGFxObject::UnreadyThing)
        .def("IsComparing", &UStatusMenuInventoryPanelGFxObject::IsComparing)
        .def("SetBackpackList", &UStatusMenuInventoryPanelGFxObject::SetBackpackList)
        .def("SetTooltipText", &UStatusMenuInventoryPanelGFxObject::SetTooltipText)
        .def("SetDPadFrames", &UStatusMenuInventoryPanelGFxObject::SetDPadFrames)
        .def("SetTotalCredits", &UStatusMenuInventoryPanelGFxObject::SetTotalCredits)
        .def("SetAllAmmoCounts", &UStatusMenuInventoryPanelGFxObject::SetAllAmmoCounts)
        .def("SetPortrait", &UStatusMenuInventoryPanelGFxObject::SetPortrait)
        .def("ShowDualWieldInventoryGuides", &UStatusMenuInventoryPanelGFxObject::ShowDualWieldInventoryGuides)
        .def("FlourishNewSlots", &UStatusMenuInventoryPanelGFxObject::FlourishNewSlots)
        .def("SetBackpackCapacity", &UStatusMenuInventoryPanelGFxObject::SetBackpackCapacity)
        .def("AwardNewQuickSlots", &UStatusMenuInventoryPanelGFxObject::AwardNewQuickSlots)
        .def("ConfigureForPlayer", &UStatusMenuInventoryPanelGFxObject::ConfigureForPlayer)
        .def("FlourishEquip", &UStatusMenuInventoryPanelGFxObject::FlourishEquip)
        .def("FinishEquip", &UStatusMenuInventoryPanelGFxObject::FinishEquip)
        .def("CancelEquip", &UStatusMenuInventoryPanelGFxObject::CancelEquip)
        .def("CompleteEquip", &UStatusMenuInventoryPanelGFxObject::CompleteEquip)
        .def("TryUnlockedFlourish", &UStatusMenuInventoryPanelGFxObject::TryUnlockedFlourish)
        .def("StartEquip", &UStatusMenuInventoryPanelGFxObject::StartEquip)
        .def("EquipInputKey", &UStatusMenuInventoryPanelGFxObject::EquipInputKey)
        .def("GetEquippedPanelCurrentCellType", &UStatusMenuInventoryPanelGFxObject::GetEquippedPanelCurrentCellType)
        .def("OnItemSelected", &UStatusMenuInventoryPanelGFxObject::OnItemSelected)
        .def("NormalInputKey", &UStatusMenuInventoryPanelGFxObject::NormalInputKey)
        .def("PanelOnInputKey", &UStatusMenuInventoryPanelGFxObject::PanelOnInputKey)
        .def("InspectSelectedItem", &UStatusMenuInventoryPanelGFxObject::InspectSelectedItem)
        .def("eventGetSelectedThingFromNative", &UStatusMenuInventoryPanelGFxObject::eventGetSelectedThingFromNative, py::return_value_policy::reference)
        .def("GetSelectedThing", &UStatusMenuInventoryPanelGFxObject::GetSelectedThing, py::return_value_policy::reference)
        .def("UpdateDynamicCard", &UStatusMenuInventoryPanelGFxObject::UpdateDynamicCard)
        .def("RefreshItemCards", &UStatusMenuInventoryPanelGFxObject::RefreshItemCards)
        .def("SwitchToEquippedPanel", &UStatusMenuInventoryPanelGFxObject::SwitchToEquippedPanel)
        .def("SwitchToBackpackPanel", &UStatusMenuInventoryPanelGFxObject::SwitchToBackpackPanel)
        .def("UpdateTooltipsText", &UStatusMenuInventoryPanelGFxObject::UpdateTooltipsText)
        .def("SwitchFocus", &UStatusMenuInventoryPanelGFxObject::SwitchFocus)
        .def("OnPanelPressed", &UStatusMenuInventoryPanelGFxObject::OnPanelPressed)
        .def("RestoreState", &UStatusMenuInventoryPanelGFxObject::RestoreState)
        .def("Refresh", &UStatusMenuInventoryPanelGFxObject::Refresh)
        .def("OnListSort", &UStatusMenuInventoryPanelGFxObject::OnListSort)
        .def("SaveBackpackSortPreference", &UStatusMenuInventoryPanelGFxObject::SaveBackpackSortPreference)
        .def("extInitComplete", &UStatusMenuInventoryPanelGFxObject::extInitComplete)
        .def("RefreshBackpackPanel", &UStatusMenuInventoryPanelGFxObject::RefreshBackpackPanel)
        .def("extInitRightPanel", &UStatusMenuInventoryPanelGFxObject::extInitRightPanel)
        .def("extInitLeftPanel", &UStatusMenuInventoryPanelGFxObject::extInitLeftPanel)
        .def("InitItemCards", &UStatusMenuInventoryPanelGFxObject::InitItemCards)
        .def("AssignItemCards", &UStatusMenuInventoryPanelGFxObject::AssignItemCards)
        .def("Init", &UStatusMenuInventoryPanelGFxObject::Init)
          ;
}