#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogEventTag(py::module &m)
{
    py::class_< UWillowDialogEventTag,  UGearboxDialogEventTag   >(m, "UWillowDialogEventTag")
          ;
}