#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlagExpressionEvaluator(py::module &m)
{
    py::class_< UFlagExpressionEvaluator,  UExpressionEvaluator   >(m, "UFlagExpressionEvaluator")
        .def_readwrite("FlagChain", &UFlagExpressionEvaluator::FlagChain)
        .def_readwrite("FlagChainOperator", &UFlagExpressionEvaluator::FlagChainOperator)
        .def("Evaluate", &UFlagExpressionEvaluator::Evaluate)
          ;
}