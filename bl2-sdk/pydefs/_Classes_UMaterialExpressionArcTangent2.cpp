#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcTangent2(py::module &m)
{
    py::class_< UMaterialExpressionArcTangent2,  UMaterialExpression   >(m, "UMaterialExpressionArcTangent2")
        .def_readwrite("InputX", &UMaterialExpressionArcTangent2::InputX)
        .def_readwrite("InputY", &UMaterialExpressionArcTangent2::InputY)
          ;
}