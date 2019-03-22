#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineAccountInterface(py::module &m)
{
    py::class_< UOnlineAccountInterface,  UInterface   >(m, "UOnlineAccountInterface")
        .def("GetLocalAccountNames", &UOnlineAccountInterface::GetLocalAccountNames)
        .def("DeleteLocalAccount", &UOnlineAccountInterface::DeleteLocalAccount)
        .def("RenameLocalAccount", &UOnlineAccountInterface::RenameLocalAccount)
        .def("CreateLocalAccount", &UOnlineAccountInterface::CreateLocalAccount)
        .def("ClearCreateOnlineAccountCompletedDelegate", &UOnlineAccountInterface::ClearCreateOnlineAccountCompletedDelegate)
        .def("AddCreateOnlineAccountCompletedDelegate", &UOnlineAccountInterface::AddCreateOnlineAccountCompletedDelegate)
        .def("OnCreateOnlineAccountCompleted", &UOnlineAccountInterface::OnCreateOnlineAccountCompleted)
        .def("CreateOnlineAccount", &UOnlineAccountInterface::CreateOnlineAccount)
          ;
}