#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeConstantDensityComponent(py::module &m)
{
    py::class_< UFogVolumeConstantDensityComponent,  UFogVolumeDensityComponent   >(m, "UFogVolumeConstantDensityComponent")
        .def_readwrite("Density", &UFogVolumeConstantDensityComponent::Density)
          ;
}