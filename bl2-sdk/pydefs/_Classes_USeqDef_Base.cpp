#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqDef_Base(py::module &m)
{
    py::class_< USeqDef_Base,  USequenceOp   >(m, "USeqDef_Base")
        .def_readwrite("Definition", &USeqDef_Base::Definition)
          ;
}