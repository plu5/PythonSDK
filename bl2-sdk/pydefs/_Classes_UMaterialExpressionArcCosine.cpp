#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionArcCosine(py::module &m)
{
    py::class_< UMaterialExpressionArcCosine,  UMaterialExpression   >(m, "UMaterialExpressionArcCosine")
        .def_readwrite("Input", &UMaterialExpressionArcCosine::Input)
          ;
}