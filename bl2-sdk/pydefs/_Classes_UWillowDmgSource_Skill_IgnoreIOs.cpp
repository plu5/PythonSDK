#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Skill_IgnoreIOs(py::module &m)
{
    py::class_< UWillowDmgSource_Skill_IgnoreIOs,  UWillowDamageSource   >(m, "UWillowDmgSource_Skill_IgnoreIOs")
          ;
}