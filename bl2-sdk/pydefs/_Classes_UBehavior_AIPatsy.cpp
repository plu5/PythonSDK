#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIPatsy(py::module &m)
{
    py::class_< UBehavior_AIPatsy,  UBehaviorBase   >(m, "UBehavior_AIPatsy")
        .def_readwrite("Patsy", &UBehavior_AIPatsy::Patsy)
        .def("ApplyBehaviorToContext", &UBehavior_AIPatsy::ApplyBehaviorToContext)
          ;
}