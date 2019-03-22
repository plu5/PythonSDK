#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawPylonRadiusComponent(py::module &m)
{
    py::class_< UDrawPylonRadiusComponent,  UPrimitiveComponent   >(m, "UDrawPylonRadiusComponent")
        .def_readwrite("SphereColor", &UDrawSphereComponent::SphereColor)
        .def_readwrite("SphereMaterial", &UDrawSphereComponent::SphereMaterial)
        .def_readwrite("SphereRadius", &UDrawSphereComponent::SphereRadius)
        .def_readwrite("SphereSides", &UDrawSphereComponent::SphereSides)
          ;
}