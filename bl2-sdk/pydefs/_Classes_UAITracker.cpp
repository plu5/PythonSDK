#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAITracker(py::module &m)
{
    py::class_< UAITracker,  UObject   >(m, "UAITracker")
		.def_static("StaticClass", &UAITracker::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SnapshotSize", &UAITracker::SnapshotSize)
        .def_readwrite("SnapshotIndex", &UAITracker::SnapshotIndex)
        .def_readwrite("DebugOwner", &UAITracker::DebugOwner)
          ;
}