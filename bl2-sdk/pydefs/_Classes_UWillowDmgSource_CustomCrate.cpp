#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_CustomCrate(py::module &m)
{
    py::class_< UWillowDmgSource_CustomCrate,  UWillowDamageSource   >(m, "UWillowDmgSource_CustomCrate")
          ;
}