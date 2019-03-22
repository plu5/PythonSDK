#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWebConnection(py::module &m)
{
    py::class_< AWebConnection,  AInfo   >(m, "AWebConnection")
        .def_readwrite("WebServer", &AWebConnection::WebServer)
        .def_readwrite("ReceivedData", &AWebConnection::ReceivedData)
        .def_readwrite("Request", &AWebConnection::Request)
        .def_readwrite("Response", &AWebConnection::Response)
        .def_readwrite("Application", &AWebConnection::Application)
        .def_readwrite("RawBytesExpecting", &AWebConnection::RawBytesExpecting)
        .def_readwrite("MaxValueLength", &AWebConnection::MaxValueLength)
        .def_readwrite("MaxLineLength", &AWebConnection::MaxLineLength)
        .def_readwrite("ConnID", &AWebConnection::ConnID)
        .def_readwrite("LinkState", &ATcpLink::LinkState)
        .def_readwrite("RemoteAddr", &ATcpLink::RemoteAddr)
        .def_readwrite("AcceptClass", &ATcpLink::AcceptClass)
        .def_readwrite("SendFIFO", &ATcpLink::SendFIFO)
        .def_readwrite("RecvBuf", &ATcpLink::RecvBuf)
        .def_readwrite("LinkMode", &AInternetLink::LinkMode)
        .def_readwrite("InLineMode", &AInternetLink::InLineMode)
        .def_readwrite("OutLineMode", &AInternetLink::OutLineMode)
        .def_readwrite("ReceiveMode", &AInternetLink::ReceiveMode)
        .def_readwrite("Socket", &AInternetLink::Socket)
        .def_readwrite("Port", &AInternetLink::Port)
        .def_readwrite("RemoteSocket", &AInternetLink::RemoteSocket)
        .def_readwrite("PrivateResolveInfo", &AInternetLink::PrivateResolveInfo)
        .def_readwrite("DataPending", &AInternetLink::DataPending)
        .def("IsHanging", &AWebConnection::IsHanging)
        .def("Cleanup", &AWebConnection::Cleanup)
        .def("CheckRawBytes", &AWebConnection::CheckRawBytes)
        .def("EndOfHeaders", &AWebConnection::EndOfHeaders)
        .def("CreateResponseObject", &AWebConnection::CreateResponseObject)
        .def("ProcessPost", &AWebConnection::ProcessPost)
        .def("ProcessGet", &AWebConnection::ProcessGet)
        .def("ProcessHead", &AWebConnection::ProcessHead)
        .def("ReceivedLine", &AWebConnection::ReceivedLine)
        .def("eventReceivedText", &AWebConnection::eventReceivedText)
        .def("eventTimer", &AWebConnection::eventTimer)
        .def("eventClosed", &AWebConnection::eventClosed)
        .def("eventAccepted", &AWebConnection::eventAccepted)
        .def("eventReceivedBinary", &ATcpLink::eventReceivedBinary)
        .def("eventReceivedLine", &ATcpLink::eventReceivedLine)
        .def("eventOpened", &ATcpLink::eventOpened)
        .def("ReadBinary", &ATcpLink::ReadBinary)
        .def("ReadText", &ATcpLink::ReadText)
        .def("SendBinary", &ATcpLink::SendBinary)
        .def("SendText", &ATcpLink::SendText)
        .def("IsConnected", &ATcpLink::IsConnected)
        .def("Close", &ATcpLink::Close)
        .def("Open", &ATcpLink::Open)
        .def("Listen", &ATcpLink::Listen)
        .def("BindPort", &ATcpLink::BindPort)
        .def("eventResolveFailed", &AInternetLink::eventResolveFailed)
        .def("eventResolved", &AInternetLink::eventResolved)
        .def("GetLocalIP", &AInternetLink::GetLocalIP)
        .def("StringToIpAddr", &AInternetLink::StringToIpAddr)
        .def("IpAddrToString", &AInternetLink::IpAddrToString)
        .def("GetLastError", &AInternetLink::GetLastError)
        .def("Resolve", &AInternetLink::Resolve)
        .def("ParseURL", &AInternetLink::ParseURL)
        .def("IsDataPending", &AInternetLink::IsDataPending)
          ;
}