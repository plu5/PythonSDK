#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowProjectile(py::module &m)
{
    py::class_< UPopulationFactoryWillowProjectile,  UPopulationFactory   >(m, "UPopulationFactoryWillowProjectile")
		.def_static("StaticClass", &UPopulationFactoryWillowProjectile::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AttachmentPointName", &UPopulationFactoryWillowProjectile::AttachmentPointName)
        .def_readwrite("SpawnDirection", &UPopulationFactoryWillowProjectile::SpawnDirection)
        .def_readwrite("ProjectileDefinition", &UPopulationFactoryWillowProjectile::ProjectileDefinition)
        .def_readwrite("RelativeLocation", &UPopulationFactoryWillowProjectile::RelativeLocation)
        .def_readwrite("DirectionConeSize", &UPopulationFactoryWillowProjectile::DirectionConeSize)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryWillowProjectile::eventGetDescriptionOfFactoryOutput)
        .def("CreateProjectile", &UPopulationFactoryWillowProjectile::CreateProjectile, py::return_value_policy::reference)
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowProjectile::eventDestroyPopulationActor)
        .def("eventCreatePopulationActor", &UPopulationFactoryWillowProjectile::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("GetActorAllegiance", &UPopulationFactoryWillowProjectile::GetActorAllegiance, py::return_value_policy::reference)
          ;
}