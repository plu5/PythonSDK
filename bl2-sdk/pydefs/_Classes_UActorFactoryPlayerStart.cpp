#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPlayerStart(py::module &m)
{
    py::class_< UActorFactoryPlayerStart,  UActorFactory   >(m, "UActorFactoryPlayerStart")
          ;
}