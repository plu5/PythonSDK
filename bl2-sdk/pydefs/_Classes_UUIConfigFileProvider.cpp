#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigFileProvider(py::module &m)
{
    py::class_< UUIConfigFileProvider,  UUIConfigProvider   >(m, "UUIConfigFileProvider")
        .def_readwrite("Sections", &UUIConfigFileProvider::Sections)
        .def_readwrite("ConfigFileName", &UUIConfigFileProvider::ConfigFileName)
          ;
}