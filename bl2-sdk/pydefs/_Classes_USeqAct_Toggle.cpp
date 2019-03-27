#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Toggle(py::module &m)
{
    py::class_< USeqAct_Toggle, USequenceAction   >(m, "USeqAct_Toggle")
		.def_static("StaticClass", &USeqAct_Toggle::StaticClass, py::return_value_policy::reference)
          ;
}