#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowWeaponTypes(py::module &m)
{
    py::class_< UWillowWeaponTypes,  UInterface   >(m, "UWillowWeaponTypes")
          ;
}