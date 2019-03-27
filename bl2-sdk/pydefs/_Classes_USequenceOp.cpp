#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceOp(py::module &m)
{
    py::class_< USequenceOp,  UObject   >(m, "USequenceOp")
		.def_static("StaticClass", &USequenceOp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InputLinks", &USequenceOp::InputLinks)
        .def_readwrite("OutputLinks", &USequenceOp::OutputLinks)
        .def_readwrite("VariableLinks", &USequenceOp::VariableLinks)
        .def_readwrite("EventLinks", &USequenceOp::EventLinks)
        .def_readwrite("PlayerIndex", &USequenceOp::PlayerIndex)
        .def_readwrite("GamepadID", &USequenceOp::GamepadID)
        .def_readwrite("ActivateCount", &USequenceOp::ActivateCount)
        .def_readwrite("SearchTag", &USequenceOp::SearchTag)
        .def_readwrite("ObjInstanceVersion", &USequenceObject::ObjInstanceVersion)
        .def_readwrite("ParentSequence", &USequenceObject::ParentSequence)
        .def("ForceActivateOutput", &USequenceOp::ForceActivateOutput)
        .def("ForceActivateInput", &USequenceOp::ForceActivateInput)
        .def("GetController", &USequenceOp::GetController, py::return_value_policy::reference)
        .def("GetPawn", &USequenceOp::GetPawn, py::return_value_policy::reference)
        .def("Reset", &USequenceOp::Reset)
        .def("PublishLinkedVariableValues", &USequenceOp::PublishLinkedVariableValues)
        .def("PopulateLinkedVariableValues", &USequenceOp::PopulateLinkedVariableValues)
        .def("eventVersionUpdated", &USequenceOp::eventVersionUpdated)
        .def("eventDeactivated", &USequenceOp::eventDeactivated)
        .def("eventActivated", &USequenceOp::eventActivated)
        .def("ActivateNamedOutputLink", &USequenceOp::ActivateNamedOutputLink)
        .def("ActivateOutputLink", &USequenceOp::ActivateOutputLink)
        .def("LinkedVariables", [](USequenceOp &self , class UClass* VarClass, struct FString inDesc) { class USequenceVariable** pyOutVariable = 0 ;   self.LinkedVariables(VarClass, inDesc, pyOutVariable); return py::make_tuple(*pyOutVariable); })
        .def("GetBoolVars", &USequenceOp::GetBoolVars)
        .def("GetInterpDataVars", &USequenceOp::GetInterpDataVars)
        .def("GetObjectVars", &USequenceOp::GetObjectVars)
        .def("GetLinkedObjects", &USequenceOp::GetLinkedObjects)
        .def("HasLinkedOps", &USequenceOp::HasLinkedOps)
        .def("eventGetObjClassVersion", &USequenceObject::eventGetObjClassVersion)
        .def("eventIsPastingIntoLevelSequenceAllowed", &USequenceObject::eventIsPastingIntoLevelSequenceAllowed)
        .def("eventIsValidLevelSequenceObject", &USequenceObject::eventIsValidLevelSequenceObject)
        .def("GetWorldInfo", &USequenceObject::GetWorldInfo, py::return_value_policy::reference)
        .def("ScriptLog", &USequenceObject::ScriptLog)
          ;
}