#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAnimControl(py::module &m)
{
    py::class_< UInterpTrackInstAnimControl,  UInterpTrackInst   >(m, "UInterpTrackInstAnimControl")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstAnimControl::LastUpdatePosition)
        .def_readwrite("ResetLocation", &UInterpTrackInstAnimControl::ResetLocation)
        .def_readwrite("ResetRotation", &UInterpTrackInstAnimControl::ResetRotation)
          ;
}