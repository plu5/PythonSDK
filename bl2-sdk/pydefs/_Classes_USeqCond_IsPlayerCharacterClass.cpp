#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsPlayerCharacterClass(py::module &m)
{
    py::class_< USeqCond_IsPlayerCharacterClass,  USequenceCondition   >(m, "USeqCond_IsPlayerCharacterClass")
          ;
}