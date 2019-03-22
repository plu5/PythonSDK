#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMapDisplayInfo(py::module &m)
{
    py::class_< UIMapDisplayInfo,  UInterface   >(m, "UIMapDisplayInfo")
        .def("eventGetMapDisplayName", &UIMapDisplayInfo::eventGetMapDisplayName)
        .def("eventGetMapDisplayHeader", &UIMapDisplayInfo::eventGetMapDisplayHeader)
          ;
}