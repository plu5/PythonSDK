#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieInfo(py::module &m)
{
    py::class_< UGFxMovieInfo,  USwfMovie   >(m, "UGFxMovieInfo")
          ;
}