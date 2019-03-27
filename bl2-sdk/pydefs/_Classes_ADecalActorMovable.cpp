#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADecalActorMovable(py::module &m)
{
    py::class_< ADecalActorMovable,  AActor   >(m, "ADecalActorMovable")
		.def_static("StaticClass", &ADecalActorMovable::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Decal", &ADecalActorBase::Decal)
          ;
}