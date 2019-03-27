#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessMaterialRef(py::module &m)
{
    py::class_< FPostProcessMaterialRef >(m, "FPostProcessMaterialRef")
        .def_readwrite("Effect", &FPostProcessMaterialRef::Effect)
  ;
}