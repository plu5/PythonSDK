#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionWeaponBalanceDefinition(py::module &m)
{
    py::class_< UMissionWeaponBalanceDefinition,  UInventoryBalanceDefinition   >(m, "UMissionWeaponBalanceDefinition")
        .def_readwrite("MissionObjective", &UMissionWeaponBalanceDefinition::MissionObjective)
        .def_readwrite("WeaponPartListCollection", &UWeaponBalanceDefinition::WeaponPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UWeaponBalanceDefinition::RuntimePartListCollection)
          ;
}