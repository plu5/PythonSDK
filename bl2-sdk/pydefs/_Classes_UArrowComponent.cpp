#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArrowComponent(py::module &m)
{
    py::class_< UArrowComponent,  UPrimitiveComponent   >(m, "UArrowComponent")
        .def_readwrite("ArrowColor", &UArrowComponent::ArrowColor)
        .def_readwrite("ArrowSize", &UArrowComponent::ArrowSize)
          ;
}