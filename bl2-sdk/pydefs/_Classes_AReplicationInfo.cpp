#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AReplicationInfo(py::module &m)
{
    py::class_< AReplicationInfo,  AInfo   >(m, "AReplicationInfo")
          ;
}