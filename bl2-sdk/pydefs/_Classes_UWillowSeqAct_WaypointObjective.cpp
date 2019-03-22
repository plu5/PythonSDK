#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_WaypointObjective(py::module &m)
{
    py::class_< UWillowSeqAct_WaypointObjective,  USequenceAction   >(m, "UWillowSeqAct_WaypointObjective")
        .def_readwrite("WaypointInfo", &UWillowSeqAct_WaypointObjective::WaypointInfo)
        .def_readwrite("WaypointObjective", &UWillowSeqAct_WaypointObjective::WaypointObjective)
          ;
}