#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxValue(py::module &m)
{
    py::class_< UGFxValue,  UObject   >(m, "UGFxValue")
          ;
}