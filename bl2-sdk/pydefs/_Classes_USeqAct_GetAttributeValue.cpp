#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetAttributeValue(py::module &m)
{
    py::class_< USeqAct_GetAttributeValue,  USequenceAction   >(m, "USeqAct_GetAttributeValue")
        .def_readwrite("AttributeDef", &USeqAct_GetAttributeValue::AttributeDef)
        .def_readwrite("ResultValue", &USeqAct_GetAttributeValue::ResultValue)
          ;
}