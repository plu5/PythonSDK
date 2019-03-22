#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FinishLifting(py::module &m)
{
    py::class_< UBehavior_FinishLifting,  UBehaviorBase   >(m, "UBehavior_FinishLifting")
        .def("ApplyBehaviorToContext", &UBehavior_FinishLifting::ApplyBehaviorToContext)
          ;
}