#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeValueResolver(py::module &m)
{
    py::class_< UAttributeValueResolver,  UObject   >(m, "UAttributeValueResolver")
          ;
}