#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlActive(py::module &m)
{
    py::class_< UBehavior_SetSkelControlActive,  UBehaviorBase   >(m, "UBehavior_SetSkelControlActive")
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlActive::SkelControlName)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlActive::ApplyBehaviorToContext)
          ;
}