#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWeaponThrow(py::module &m)
{
    py::class_< UIWeaponThrow,  UInterface   >(m, "UIWeaponThrow")
        .def("Behavior_WeaponThrow", &UIWeaponThrow::Behavior_WeaponThrow)
          ;
}