#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MultiplyInt(py::module &m)
{
    py::class_< USeqAct_MultiplyInt,  USeqAct_SetSequenceVariable   >(m, "USeqAct_MultiplyInt")
        .def_readwrite("ValueA", &USeqAct_MultiplyInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_MultiplyInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_MultiplyInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_MultiplyInt::IntResult)
          ;
}