#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderLobby(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderLobby,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderLobby")
        .def("Populate", &UWillowScrollingListDataProviderLobby::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderLobby::HandleClick)
          ;
}