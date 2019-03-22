#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIResetProvocation(py::module &m)
{
    py::class_< UBehavior_AIResetProvocation,  UBehaviorBase   >(m, "UBehavior_AIResetProvocation")
        .def("ApplyBehaviorToContext", &UBehavior_AIResetProvocation::ApplyBehaviorToContext)
          ;
}