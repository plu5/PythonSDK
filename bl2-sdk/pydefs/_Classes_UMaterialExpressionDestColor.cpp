#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDestColor(py::module &m)
{
    py::class_< UMaterialExpressionDestColor,  UMaterialExpression   >(m, "UMaterialExpressionDestColor")
          ;
}