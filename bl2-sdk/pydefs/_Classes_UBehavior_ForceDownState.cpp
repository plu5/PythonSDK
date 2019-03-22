#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ForceDownState(py::module &m)
{
    py::class_< UBehavior_ForceDownState,  UBehaviorBase   >(m, "UBehavior_ForceDownState")
        .def("ApplyBehaviorToContext", &UBehavior_ForceDownState::ApplyBehaviorToContext)
          ;
}