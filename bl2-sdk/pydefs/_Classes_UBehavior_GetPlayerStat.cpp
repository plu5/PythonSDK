#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetPlayerStat(py::module &m)
{
    py::class_< UBehavior_GetPlayerStat,  UBehaviorBase   >(m, "UBehavior_GetPlayerStat")
        .def_readwrite("StatId", &UBehavior_GetPlayerStat::StatId)
        .def("PublishBehaviorOutput", &UBehavior_GetPlayerStat::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetPlayerStat::ApplyBehaviorToContext)
          ;
}