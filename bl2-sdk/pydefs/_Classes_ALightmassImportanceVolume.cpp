#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALightmassImportanceVolume(py::module &m)
{
    py::class_< ALightmassImportanceVolume,  AVolume   >(m, "ALightmassImportanceVolume")
		.def_static("StaticClass", &ALightmassImportanceVolume::StaticClass, py::return_value_policy::reference)
          ;
}