#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeMultiContextResolver(py::module &m)
{
    py::class_< UAttributeMultiContextResolver,  UObject   >(m, "UAttributeMultiContextResolver")
          ;
}