#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Soldier(py::module &m)
{
    py::class_< UCustomizationUsage_Soldier,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_Soldier")
          ;
}