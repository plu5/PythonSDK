#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlackMarketDefinition(py::module &m)
{
    py::class_< UBlackMarketDefinition,  UGBXDefinition   >(m, "UBlackMarketDefinition")
        .def_readwrite("BlackMarketName", &UBlackMarketDefinition::BlackMarketName)
        .def_readwrite("ItemOfTheDay", &UBlackMarketDefinition::ItemOfTheDay)
        .def_readwrite("GeneralStock", &UBlackMarketDefinition::GeneralStock)
        .def_readwrite("MaxUpgradeLevel", &UBlackMarketDefinition::MaxUpgradeLevel)
        .def_readwrite("MaxUpgradeLevelOverrides", &UBlackMarketDefinition::MaxUpgradeLevelOverrides)
        .def("CurrentLevelIsBelowMaxForPlayer", &UBlackMarketDefinition::CurrentLevelIsBelowMaxForPlayer)
        .def("CurrentLevelIsBelowMaxLevel", &UBlackMarketDefinition::CurrentLevelIsBelowMaxLevel)
          ;
}