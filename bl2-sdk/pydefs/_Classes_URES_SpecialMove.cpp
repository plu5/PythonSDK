#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_SpecialMove(py::module &m)
{
    py::class_< URES_SpecialMove,  UActionResource   >(m, "URES_SpecialMove")
          ;
}