#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger_Dynamic(py::module &m)
{
    py::class_< ATrigger_Dynamic,  ATrigger   >(m, "ATrigger_Dynamic")
          ;
}