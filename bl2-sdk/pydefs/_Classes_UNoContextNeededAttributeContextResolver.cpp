#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNoContextNeededAttributeContextResolver(py::module &m)
{
    py::class_< UNoContextNeededAttributeContextResolver,  UAttributeContextResolver   >(m, "UNoContextNeededAttributeContextResolver")
          ;
}