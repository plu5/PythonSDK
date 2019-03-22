#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetObject(py::module &m)
{
    py::class_< USeqAct_SetObject,  USeqAct_SetSequenceVariable   >(m, "USeqAct_SetObject")
        .def_readwrite("DefaultValue", &USeqAct_SetObject::DefaultValue)
        .def_readwrite("Value", &USeqAct_SetObject::Value)
        .def("eventGetObjClassVersion", &USeqAct_SetObject::eventGetObjClassVersion)
          ;
}