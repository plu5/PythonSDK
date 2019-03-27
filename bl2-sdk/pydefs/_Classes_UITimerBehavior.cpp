#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UITimerBehavior(py::module &m)
{
    py::class_< UITimerBehavior,  UInterface   >(m, "UITimerBehavior")
		.def_static("StaticClass", &UITimerBehavior::StaticClass, py::return_value_policy::reference)
        .def("SetTimerState", &UITimerBehavior::SetTimerState)
        .def("GetTimerState", &UITimerBehavior::GetTimerState)
        .def("GetTimeSeconds", &UITimerBehavior::GetTimeSeconds)
          ;
}