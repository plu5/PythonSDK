#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityOverLifetime(py::module &m)
{
    py::class_< UParticleModuleVelocityOverLifetime,  UParticleModule   >(m, "UParticleModuleVelocityOverLifetime")
        .def_readwrite("VelOverLife", &UParticleModuleVelocityOverLifetime::VelOverLife)
          ;
}