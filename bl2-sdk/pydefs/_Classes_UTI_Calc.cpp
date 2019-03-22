#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTI_Calc(py::module &m)
{
    py::class_< UTI_Calc,  UObject   >(m, "UTI_Calc")
        .def_readwrite("IteratorType", &UTargetIterator::IteratorType)
        .def_readwrite("BarGraphShortName", &UTargetIterator::BarGraphShortName)
        .def("eventRecordEvalCallback", &UTargetIterator::eventRecordEvalCallback)
          ;
}