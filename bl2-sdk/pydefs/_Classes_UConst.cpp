#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UConst(py::module &m)
{
    py::class_< UConst,  UField   >(m, "UConst")
          ;
}