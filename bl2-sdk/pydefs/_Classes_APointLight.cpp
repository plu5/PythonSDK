#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APointLight(py::module &m)
{
    py::class_< APointLight,  ALight   >(m, "APointLight")
          ;
}