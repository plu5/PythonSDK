#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIKilledBehavior(py::module &m)
{
    py::class_< UIKilledBehavior,  UInterface   >(m, "UIKilledBehavior")
        .def("Behavior_Killed", &UIKilledBehavior::Behavior_Killed)
          ;
}