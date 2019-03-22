#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ShowMissionInterface(py::module &m)
{
    py::class_< UBehavior_ShowMissionInterface,  UBehaviorBase   >(m, "UBehavior_ShowMissionInterface")
        .def("ResolveController", &UBehavior_ShowMissionInterface::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ShowMissionInterface::ApplyBehaviorToContext)
          ;
}