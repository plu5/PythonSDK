#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsInCombat(py::module &m)
{
    py::class_< USeqCond_IsInCombat,  USequenceOp   >(m, "USeqCond_IsInCombat")
		.def_static("StaticClass", &USeqCond_IsInCombat::StaticClass, py::return_value_policy::reference)
          ;
}