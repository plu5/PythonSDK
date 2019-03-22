#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSlot(py::module &m)
{
    py::class_< UAnimNodeSlot,  UAnimNodeBlendBase   >(m, "UAnimNodeSlot")
        .def_readwrite("PendingBlendOutTime", &UAnimNodeSlot::PendingBlendOutTime)
        .def_readwrite("CustomChildIndex", &UAnimNodeSlot::CustomChildIndex)
        .def_readwrite("TargetChildIndex", &UAnimNodeSlot::TargetChildIndex)
        .def_readwrite("TargetWeight", &UAnimNodeSlot::TargetWeight)
        .def_readwrite("BlendTimeToGo", &UAnimNodeSlot::BlendTimeToGo)
        .def_readwrite("SynchNode", &UAnimNodeSlot::SynchNode)
        .def("TickChildWeights", &UAnimNodeSlot::TickChildWeights)
        .def("AddToSynchGroup", &UAnimNodeSlot::AddToSynchGroup)
        .def("SetRootBoneRotationOption", &UAnimNodeSlot::SetRootBoneRotationOption)
        .def("SetRootBoneAxisOption", &UAnimNodeSlot::SetRootBoneAxisOption)
        .def("GetCustomAnimNodeSeq", &UAnimNodeSlot::GetCustomAnimNodeSeq, py::return_value_policy::reference)
        .def("SetActorAnimEndNotification", &UAnimNodeSlot::SetActorAnimEndNotification)
        .def("SetCustomAnim", &UAnimNodeSlot::SetCustomAnim)
        .def("StopCustomAnim", &UAnimNodeSlot::StopCustomAnim)
        .def("GetPlayedAnimation", &UAnimNodeSlot::GetPlayedAnimation)
        .def("PlayCustomAnimByDuration", &UAnimNodeSlot::PlayCustomAnimByDuration)
        .def("PlayCustomAnim", &UAnimNodeSlot::PlayCustomAnim)
          ;
}