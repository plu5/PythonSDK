#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TargetPriority(py::module &m)
{
    py::class_< UGearboxSeqAct_TargetPriority,  USequenceAction   >(m, "UGearboxSeqAct_TargetPriority")
        .def_readwrite("AITargets", &UGearboxSeqAct_TargetPriority::AITargets)
        .def_readwrite("PriorityModifier", &UGearboxSeqAct_TargetPriority::PriorityModifier)
          ;
}