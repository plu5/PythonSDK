#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Hovercraft(py::module &m)
{
    py::class_< UCustomizationUsage_Hovercraft,  UCustomizationUsage_Vehicle   >(m, "UCustomizationUsage_Hovercraft")
          ;
}