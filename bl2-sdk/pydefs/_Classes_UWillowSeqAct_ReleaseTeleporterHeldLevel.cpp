#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ReleaseTeleporterHeldLevel(py::module &m)
{
    py::class_< UWillowSeqAct_ReleaseTeleporterHeldLevel,  USequenceAction   >(m, "UWillowSeqAct_ReleaseTeleporterHeldLevel")
		.def_static("StaticClass", &UWillowSeqAct_ReleaseTeleporterHeldLevel::StaticClass, py::return_value_policy::reference)
          ;
}