#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_RuleSetChange(py::module &m)
{
    py::class_< URES_RuleSetChange,  UActionResource   >(m, "URES_RuleSetChange")
          ;
}