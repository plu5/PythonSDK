#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_MeleeWithBlade(py::module &m)
{
    py::class_< UWillowDmgSource_MeleeWithBlade,  UWillowDamageSource   >(m, "UWillowDmgSource_MeleeWithBlade")
          ;
}