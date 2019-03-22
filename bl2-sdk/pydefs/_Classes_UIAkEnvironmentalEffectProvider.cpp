#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAkEnvironmentalEffectProvider(py::module &m)
{
    py::class_< UIAkEnvironmentalEffectProvider,  UInterface   >(m, "UIAkEnvironmentalEffectProvider")
        .def("GetEnvironmentalEffectsForLocation", &UIAkEnvironmentalEffectProvider::GetEnvironmentalEffectsForLocation)
          ;
}