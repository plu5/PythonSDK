#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowReplicatedAmbientSoundRenderingComponent(py::module &m)
{
    py::class_< UWillowReplicatedAmbientSoundRenderingComponent,  UPrimitiveComponent   >(m, "UWillowReplicatedAmbientSoundRenderingComponent")
          ;
}