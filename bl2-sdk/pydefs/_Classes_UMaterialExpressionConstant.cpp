#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant(py::module &m)
{
    py::class_< UMaterialExpressionConstant,  UMaterialExpression   >(m, "UMaterialExpressionConstant")
        .def_readwrite("R", &UMaterialExpressionConstant::R)
          ;
}