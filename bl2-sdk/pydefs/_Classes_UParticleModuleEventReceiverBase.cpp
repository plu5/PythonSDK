#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverBase(py::module &m)
{
    py::class_< UParticleModuleEventReceiverBase,  UParticleModuleEventBase   >(m, "UParticleModuleEventReceiverBase")
        .def_readwrite("EventGeneratorType", &UParticleModuleEventReceiverBase::EventGeneratorType)
        .def_readwrite("EventName", &UParticleModuleEventReceiverBase::EventName)
          ;
}