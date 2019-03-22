#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISpecialOcclusionProvider(py::module &m)
{
    py::class_< UISpecialOcclusionProvider,  UInterface   >(m, "UISpecialOcclusionProvider")
        .def("GetOcclusionAmount", &UISpecialOcclusionProvider::GetOcclusionAmount)
          ;
}