#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowElevator(py::module &m)
{
    py::class_< UActorFactoryWillowElevator,  UActorFactoryMover   >(m, "UActorFactoryWillowElevator")
          ;
}