#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMultiplyAndAdd(py::module &m)
{
    py::class_< UMaterialExpressionMultiplyAndAdd,  UMaterialExpression   >(m, "UMaterialExpressionMultiplyAndAdd")
        .def_readwrite("A", &UMaterialExpressionMultiplyAndAdd::A)
        .def_readwrite("B", &UMaterialExpressionMultiplyAndAdd::B)
        .def_readwrite("WeightB", &UMaterialExpressionMultiplyAndAdd::WeightB)
          ;
}