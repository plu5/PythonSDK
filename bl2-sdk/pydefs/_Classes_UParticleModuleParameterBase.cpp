#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterBase(py::module &m)
{
    py::class_< UParticleModuleParameterBase,  UParticleModule   >(m, "UParticleModuleParameterBase")
          ;
}