#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Switch(py::module &m)
{
    py::class_< UBehavior_Switch,  UBehavior_RandomBranch   >(m, "UBehavior_Switch")
        .def_readwrite("CheckValue", &UBehavior_Switch::CheckValue)
        .def("ApplyBehaviorToContext", &UBehavior_Switch::ApplyBehaviorToContext)
          ;
}