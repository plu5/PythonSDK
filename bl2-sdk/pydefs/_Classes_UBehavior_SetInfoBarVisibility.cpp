#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetInfoBarVisibility(py::module &m)
{
    py::class_< UBehavior_SetInfoBarVisibility,  UBehaviorBase   >(m, "UBehavior_SetInfoBarVisibility")
        .def("ApplyBehaviorToContext", &UBehavior_SetInfoBarVisibility::ApplyBehaviorToContext)
          ;
}