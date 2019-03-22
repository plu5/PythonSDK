#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOptionsGFxObject(py::module &m)
{
    py::class_< UOptionsGFxObject,  UGFxObject   >(m, "UOptionsGFxObject")
        .def("SetDescription", &UOptionsGFxObject::SetDescription)
        .def("SetTooltips", &UOptionsGFxObject::SetTooltips)
        .def("SetPlayerName", &UOptionsGFxObject::SetPlayerName)
        .def("SetHeader", &UOptionsGFxObject::SetHeader)
        .def("SetAspectRatio", &UOptionsGFxObject::SetAspectRatio)
          ;
}