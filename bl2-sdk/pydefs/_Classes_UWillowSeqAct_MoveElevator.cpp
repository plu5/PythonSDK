#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MoveElevator(py::module &m)
{
    py::class_< UWillowSeqAct_MoveElevator,  USequenceAction   >(m, "UWillowSeqAct_MoveElevator")
        .def_readwrite("Elevator", &UWillowSeqAct_MoveElevator::Elevator)
        .def_readwrite("Usage", &UWillowSeqAct_MoveElevator::Usage)
        .def_readwrite("CallFloor", &UWillowSeqAct_MoveElevator::CallFloor)
          ;
}