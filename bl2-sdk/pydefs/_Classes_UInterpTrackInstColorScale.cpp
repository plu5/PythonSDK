#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorScale(py::module &m)
{
    py::class_< UInterpTrackInstColorScale,  UInterpTrackInst   >(m, "UInterpTrackInstColorScale")
          ;
}