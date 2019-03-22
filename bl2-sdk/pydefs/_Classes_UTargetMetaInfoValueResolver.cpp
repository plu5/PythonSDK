#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetMetaInfoValueResolver(py::module &m)
{
    py::class_< UTargetMetaInfoValueResolver,  UAttributeValueResolver   >(m, "UTargetMetaInfoValueResolver")
        .def_readwrite("PropertyName", &UTargetMetaInfoValueResolver::PropertyName)
          ;
}