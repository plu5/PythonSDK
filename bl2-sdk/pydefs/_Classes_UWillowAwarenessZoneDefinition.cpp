#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAwarenessZoneDefinition(py::module &m)
{
    py::class_< UWillowAwarenessZoneDefinition,  UAwarenessZoneDefinition   >(m, "UWillowAwarenessZoneDefinition")
        .def_readwrite("ThreatLevel", &UWillowAwarenessZoneDefinition::ThreatLevel)
          ;
}