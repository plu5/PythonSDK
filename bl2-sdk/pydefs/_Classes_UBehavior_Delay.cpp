#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Delay(py::module &m)
{
    py::class_< UBehavior_Delay,  UBehaviorBase   >(m, "UBehavior_Delay")
        .def_readwrite("Delay", &UBehavior_Delay::Delay)
        .def("ApplyBehaviorToContext", &UBehavior_Delay::ApplyBehaviorToContext)
          ;
}