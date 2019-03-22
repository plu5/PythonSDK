#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockCustomization(py::module &m)
{
    py::class_< UBehavior_UnlockCustomization,  UBehaviorBase   >(m, "UBehavior_UnlockCustomization")
        .def_readwrite("DefinitionToUnlock", &UBehavior_UnlockCustomization::DefinitionToUnlock)
        .def("ApplyBehaviorToContext", &UBehavior_UnlockCustomization::ApplyBehaviorToContext)
          ;
}