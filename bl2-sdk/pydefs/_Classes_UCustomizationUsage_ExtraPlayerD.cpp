#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerD(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerD,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerD")
          ;
}