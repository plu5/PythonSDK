#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPerchEditorComponent(py::module &m)
{
    py::class_< UPerchEditorComponent,  UPrimitiveComponent   >(m, "UPerchEditorComponent")
          ;
}