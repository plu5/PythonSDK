#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UServerCommandlet(py::module &m)
{
    py::class_< UServerCommandlet,  UCommandlet   >(m, "UServerCommandlet")
          ;
}