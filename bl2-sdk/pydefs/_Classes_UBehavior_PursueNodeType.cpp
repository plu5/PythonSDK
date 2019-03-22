#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PursueNodeType(py::module &m)
{
    py::class_< UBehavior_PursueNodeType,  UBehaviorBase   >(m, "UBehavior_PursueNodeType")
        .def_readwrite("NodeType", &UBehavior_PursueNodeType::NodeType)
        .def("ApplyBehaviorToContext", &UBehavior_PursueNodeType::ApplyBehaviorToContext)
          ;
}