#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatBase(py::module &m)
{
    py::class_< UInterpTrackFloatBase,  UInterpTrack   >(m, "UInterpTrackFloatBase")
        .def_readwrite("FloatTrack", &UInterpTrackFloatBase::FloatTrack)
        .def_readwrite("CurveTension", &UInterpTrackFloatBase::CurveTension)
          ;
}