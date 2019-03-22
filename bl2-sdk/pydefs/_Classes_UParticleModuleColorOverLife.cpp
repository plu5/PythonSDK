#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorOverLife(py::module &m)
{
    py::class_< UParticleModuleColorOverLife,  UParticleModuleColorBase   >(m, "UParticleModuleColorOverLife")
        .def_readwrite("ColorOverLife", &UParticleModuleColorOverLife::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleColorOverLife::AlphaOverLife)
          ;
}