#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetVelocity(py::module &m)
{
    py::class_< UBehavior_GetVelocity,  UBehaviorBase   >(m, "UBehavior_GetVelocity")
        .def("PublishBehaviorOutput", &UBehavior_GetVelocity::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetVelocity::ApplyBehaviorToContext)
          ;
}