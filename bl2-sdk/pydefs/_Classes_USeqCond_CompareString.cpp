#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareString(py::module &m)
{
    py::class_< USeqCond_CompareString,  USequenceCondition   >(m, "USeqCond_CompareString")
          ;
}