#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryPartListCollectionDefinition(py::module &m)
{
    py::class_< UInventoryPartListCollectionDefinition,  UGBXDefinition   >(m, "UInventoryPartListCollectionDefinition")
        .def_readwrite("PartReplacementMode", &UInventoryPartListCollectionDefinition::PartReplacementMode)
        .def_readwrite("ConsolidatedAttributeInitData", &UInventoryPartListCollectionDefinition::ConsolidatedAttributeInitData)
          ;
}