#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_Drive_GoBackToCombatArea(py::module &m)
{
    py::class_< UAction_Drive_GoBackToCombatArea,  UWillowActionSequencePawn   >(m, "UAction_Drive_GoBackToCombatArea")
        .def_readwrite("MinSpeedMultiplier", &UAction_Drive_GoBackToCombatArea::MinSpeedMultiplier)
        .def_readwrite("MaxSpeedMultiplier", &UAction_Drive_GoBackToCombatArea::MaxSpeedMultiplier)
        .def_readwrite("MyVehicle", &UAction_Drive_GoBackToCombatArea::MyVehicle)
        .def("SetSpeedMultiplier", &UAction_Drive_GoBackToCombatArea::SetSpeedMultiplier)
        .def("eventStop", &UAction_Drive_GoBackToCombatArea::eventStop)
        .def("eventStart", &UAction_Drive_GoBackToCombatArea::eventStart)
        .def("eventCanRun", &UAction_Drive_GoBackToCombatArea::eventCanRun)
          ;
}