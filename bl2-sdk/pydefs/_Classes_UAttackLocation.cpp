#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation(py::module &m)
{
    py::class_< UAttackLocation,  UObject   >(m, "UAttackLocation")
        .def("ValidLocation", &UAttackLocation::ValidLocation)
        .def("IsRunning", &UAttackLocation::IsRunning)
        .def("CanPath", &UAttackLocation::CanPath)
          ;
}