#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleKillBase(py::module &m)
{
    py::class_< UParticleModuleKillBase,  UParticleModule   >(m, "UParticleModuleKillBase")
          ;
}