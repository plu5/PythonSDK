#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMultitypeScrollingList(py::module &m)
{
    py::class_< UIMultitypeScrollingList,  UInterface   >(m, "UIMultitypeScrollingList")
        .def("Move", &UIMultitypeScrollingList::Move)
        .def("SetRendererInfo", &UIMultitypeScrollingList::SetRendererInfo)
          ;
}