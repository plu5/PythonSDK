#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearch_DataStore(py::module &m)
{
    py::class_< UWillowOnlineGameSearch_DataStore,  UUIDataStore_OnlineGameSearch   >(m, "UWillowOnlineGameSearch_DataStore")
        .def("GetCurrentSearchName", &UWillowOnlineGameSearch_DataStore::GetCurrentSearchName)
          ;
}