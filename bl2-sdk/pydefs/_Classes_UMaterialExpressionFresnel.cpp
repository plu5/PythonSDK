#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionFresnel(py::module &m)
{
    py::class_< UMaterialExpressionFresnel,  UMaterialExpression   >(m, "UMaterialExpressionFresnel")
        .def_readwrite("Exponent", &UMaterialExpressionFresnel::Exponent)
        .def_readwrite("Normal", &UMaterialExpressionFresnel::Normal)
          ;
}