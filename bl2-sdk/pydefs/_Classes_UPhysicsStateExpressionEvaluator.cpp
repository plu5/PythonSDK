#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsStateExpressionEvaluator(py::module &m)
{
    py::class_< UPhysicsStateExpressionEvaluator,  UExpressionEvaluator   >(m, "UPhysicsStateExpressionEvaluator")
        .def_readwrite("PhysicsState", &UPhysicsStateExpressionEvaluator::PhysicsState)
        .def("Evaluate", &UPhysicsStateExpressionEvaluator::Evaluate)
          ;
}