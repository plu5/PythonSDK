#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSkelControlStrength(py::module &m)
{
    py::class_< UInterpTrackSkelControlStrength,  UInterpTrackFloatBase   >(m, "UInterpTrackSkelControlStrength")
        .def_readwrite("SkelControlName", &UInterpTrackSkelControlStrength::SkelControlName)
          ;
}