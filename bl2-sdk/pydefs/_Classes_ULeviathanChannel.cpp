#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULeviathanChannel(py::module &m)
{
    py::class_< ULeviathanChannel,  UChannel   >(m, "ULeviathanChannel")
          ;
}