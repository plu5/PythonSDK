#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRateBase(py::module &m)
{
    py::class_< UParticleModuleRotationRateBase,  UParticleModule   >(m, "UParticleModuleRotationRateBase")
          ;
}