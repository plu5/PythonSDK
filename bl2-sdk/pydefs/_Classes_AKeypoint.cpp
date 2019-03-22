#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKeypoint(py::module &m)
{
    py::class_< AKeypoint,  AActor   >(m, "AKeypoint")
        .def_readwrite("SpriteComp", &AKeypoint::SpriteComp)
          ;
}