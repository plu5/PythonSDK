#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMapProperty(py::module &m)
{
    py::class_< UMapProperty,  UProperty   >(m, "UMapProperty")
          ;
}