#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation_Seeded(py::module &m)
{
    py::class_< UParticleModuleRotation_Seeded,  UParticleModuleRotation   >(m, "UParticleModuleRotation_Seeded")
        .def_readwrite("RandomSeedInfo", &UParticleModuleRotation_Seeded::RandomSeedInfo)
          ;
}