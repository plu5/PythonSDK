#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_MoveTo(py::module &m)
{
    py::class_< UAction_MoveTo,  UActionSequencePawn   >(m, "UAction_MoveTo")
          ;
}