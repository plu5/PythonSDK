#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionExp(py::module &m)
{
    py::class_< UMaterialExpressionExp,  UMaterialExpression   >(m, "UMaterialExpressionExp")
        .def_readwrite("Input", &UMaterialExpressionExp::Input)
          ;
}