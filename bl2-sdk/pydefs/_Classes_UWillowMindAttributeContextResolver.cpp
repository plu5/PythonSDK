#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowMindAttributeContextResolver(py::module &m)
{
    py::class_< UWillowMindAttributeContextResolver,  UAttributeContextResolver   >(m, "UWillowMindAttributeContextResolver")
          ;
}