#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNameProperty(py::module &m)
{
    py::class_< UNameProperty,  UProperty   >(m, "UNameProperty")
          ;
}