#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_TowardTarget(py::module &m)
{
    py::class_< USearchDirection_TowardTarget,  USearchDirection   >(m, "USearchDirection_TowardTarget")
          ;
}