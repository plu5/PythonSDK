#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FListener(py::module &m)
{
    py::class_< FListener >(m, "FListener")
        .def_readwrite("PortalVolume", &FListener::PortalVolume)
        .def_readwrite("Location", &FListener::Location)
        .def_readwrite("Up", &FListener::Up)
        .def_readwrite("Right", &FListener::Right)
        .def_readwrite("Front", &FListener::Front)
  ;
}