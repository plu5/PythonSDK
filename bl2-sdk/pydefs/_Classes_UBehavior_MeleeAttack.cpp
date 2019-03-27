#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_MeleeAttack(py::module &m)
{
    py::class_< UBehavior_MeleeAttack,  UBehaviorBase   >(m, "UBehavior_MeleeAttack")
		.def_static("StaticClass", &UBehavior_MeleeAttack::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MeleeDefinition", &UBehavior_MeleeAttack::MeleeDefinition)
        .def("ApplyBehaviorToContext", &UBehavior_MeleeAttack::ApplyBehaviorToContext)
          ;
}