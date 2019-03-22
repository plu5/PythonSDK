#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerInteractionClient(py::module &m)
{
    py::class_< UPlayerInteractionClient,  UObject   >(m, "UPlayerInteractionClient")
        .def("eventSendMessage", &UPlayerInteractionClient::eventSendMessage)
        .def("HandleMessage", &UPlayerInteractionClient::HandleMessage)
        .def("ShutDown", &UPlayerInteractionClient::ShutDown)
        .def("Initialize", &UPlayerInteractionClient::Initialize)
          ;
}