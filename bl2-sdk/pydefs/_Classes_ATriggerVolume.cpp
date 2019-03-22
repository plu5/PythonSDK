#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATriggerVolume(py::module &m)
{
    py::class_< ATriggerVolume,  AVolume   >(m, "ATriggerVolume")
        .def("StopsProjectile", &ATriggerVolume::StopsProjectile)
        .def("eventPostBeginPlay", &ATriggerVolume::eventPostBeginPlay)
          ;
}