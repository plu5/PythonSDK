#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_FinishSequence(py::module &m)
{
    py::class_< USeqAct_FinishSequence,  USequenceAction   >(m, "USeqAct_FinishSequence")
        .def_readwrite("OutputLabel", &USeqAct_FinishSequence::OutputLabel)
          ;
}