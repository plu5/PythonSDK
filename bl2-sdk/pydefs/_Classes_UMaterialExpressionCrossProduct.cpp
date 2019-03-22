#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionCrossProduct(py::module &m)
{
    py::class_< UMaterialExpressionCrossProduct,  UMaterialExpression   >(m, "UMaterialExpressionCrossProduct")
        .def_readwrite("A", &UMaterialExpressionCrossProduct::A)
        .def_readwrite("B", &UMaterialExpressionCrossProduct::B)
          ;
}