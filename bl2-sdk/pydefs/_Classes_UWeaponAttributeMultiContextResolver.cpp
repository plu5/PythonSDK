#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponAttributeMultiContextResolver(py::module &m)
{
    py::class_< UWeaponAttributeMultiContextResolver,  UAttributeMultiContextResolver   >(m, "UWeaponAttributeMultiContextResolver")
          ;
}