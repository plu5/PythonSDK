#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_RandomLeftOrRight(py::module &m)
{
    py::class_< USearchDirection_RandomLeftOrRight,  USearchDirection   >(m, "USearchDirection_RandomLeftOrRight")
		.def_static("StaticClass", &USearchDirection_RandomLeftOrRight::StaticClass, py::return_value_policy::reference)
          ;
}