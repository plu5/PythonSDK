#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSlomo(py::module &m)
{
    py::class_< UInterpTrackSlomo,  UInterpTrackFloatBase   >(m, "UInterpTrackSlomo")
          ;
}