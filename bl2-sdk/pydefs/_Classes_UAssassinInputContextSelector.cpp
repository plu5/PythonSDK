#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAssassinInputContextSelector(py::module &m)
{
    py::class_< UAssassinInputContextSelector,  UDefaultInputContextSelector   >(m, "UAssassinInputContextSelector")
        .def("SelectContext", &UAssassinInputContextSelector::SelectContext)
          ;
}