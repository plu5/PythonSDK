#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPopulationPoint_Dynamic(py::module &m)
{
    py::class_< AWillowPopulationPoint_Dynamic,  APopulationPoint   >(m, "AWillowPopulationPoint_Dynamic")
        .def_readwrite("VfTable_ISpecialMoveInterface", &AWillowPopulationPoint::VfTable_ISpecialMoveInterface)
        .def_readwrite("VfTable_IIInstanceData", &AWillowPopulationPoint::VfTable_IIInstanceData)
        .def_readwrite("VfTable_IIBodyCompositionInstance", &AWillowPopulationPoint::VfTable_IIBodyCompositionInstance)
        .def_readwrite("VfTable_IISimpleAnimPlayer", &AWillowPopulationPoint::VfTable_IISimpleAnimPlayer)
        .def_readwrite("VfTable_FTickableObject", &AWillowPopulationPoint::VfTable_FTickableObject)
        .def_readwrite("PointDef", &AWillowPopulationPoint::PointDef)
        .def_readwrite("PointSkelMesh", &AWillowPopulationPoint::PointSkelMesh)
        .def_readwrite("InstanceState", &AWillowPopulationPoint::InstanceState)
        .def_readwrite("ReplicatedInstanceDataState", &AWillowPopulationPoint::ReplicatedInstanceDataState)
        .def_readwrite("SMComponent", &AWillowPopulationPoint::SMComponent)
        .def_readwrite("StretchyActor", &AWillowPopulationPoint::StretchyActor)
        .def_readwrite("StretchyOffset", &AWillowPopulationPoint::StretchyOffset)
        .def_readwrite("StretchyType", &AWillowPopulationPoint::StretchyType)
        .def_readwrite("NumberInChallengeGroup", &AWillowPopulationPoint::NumberInChallengeGroup)
        .def_readwrite("StretchyGravity", &AWillowPopulationPoint::StretchyGravity)
        .def_readwrite("SimpleAnimState", &AWillowPopulationPoint::SimpleAnimState)
        .def_readwrite("SimpleAnimInfo", &AWillowPopulationPoint::SimpleAnimInfo)
        .def_readwrite("DynamicLightEnvironment", &AWillowPopulationPoint::DynamicLightEnvironment)
        .def_readwrite("CombatVolume", &AWillowPopulationPoint::CombatVolume)
        .def_readwrite("AssociatedChallenge", &AWillowPopulationPoint::AssociatedChallenge)
        .def("ClearBodyCompositionInstance", &AWillowPopulationPoint::ClearBodyCompositionInstance)
        .def("GetBodyInfoProvider", &AWillowPopulationPoint::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("ApplyPreviewBodyComposition", &AWillowPopulationPoint::ApplyPreviewBodyComposition)
        .def("ChangeInstanceDataSwitch", &AWillowPopulationPoint::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &AWillowPopulationPoint::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &AWillowPopulationPoint::PreRemoveBodyComposition)
        .def("GetReplicatedInstanceDataState", &AWillowPopulationPoint::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &AWillowPopulationPoint::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &AWillowPopulationPoint::DestroyOwnedInstanceData)
        .def("eventRemoveInstanceDataObject", &AWillowPopulationPoint::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &AWillowPopulationPoint::eventRemoveInstanceData)
        .def("eventGetInstanceData", &AWillowPopulationPoint::eventGetInstanceData)
        .def("SetInstanceData", &AWillowPopulationPoint::SetInstanceData)
        .def("eventServerSpecialMove_StopAny", &AWillowPopulationPoint::eventServerSpecialMove_StopAny)
        .def("eventServerSpecialMove_Stop", &AWillowPopulationPoint::eventServerSpecialMove_Stop)
        .def("eventServerSpecialMove_Queue", &AWillowPopulationPoint::eventServerSpecialMove_Queue)
        .def("eventServerSpecialMove_Play", &AWillowPopulationPoint::eventServerSpecialMove_Play)
        .def("SetReplicatedSMData", &AWillowPopulationPoint::SetReplicatedSMData)
        .def("GetDefaultRootMotionRotationMode", &AWillowPopulationPoint::GetDefaultRootMotionRotationMode)
        .def("GetDefaultRootMotionMode", &AWillowPopulationPoint::GetDefaultRootMotionMode)
        .def("GetSkelMesh", &AWillowPopulationPoint::GetSkelMesh, py::return_value_policy::reference)
        .def("GetSMComponent", &AWillowPopulationPoint::GetSMComponent, py::return_value_policy::reference)
        .def("GetActor", &AWillowPopulationPoint::GetActor, py::return_value_policy::reference)
        .def("CanSpawnFromFactory", &AWillowPopulationPoint::CanSpawnFromFactory)
        .def("GetStretchyOffset", &AWillowPopulationPoint::GetStretchyOffset)
        .def("ApplyOffsetToComponents", &AWillowPopulationPoint::ApplyOffsetToComponents)
        .def("ActorSpawned", &AWillowPopulationPoint::ActorSpawned)
        .def("GetSpawnLocation", &AWillowPopulationPoint::GetSpawnLocation)
        .def("PostBeginPlay", &AWillowPopulationPoint::PostBeginPlay)
        .def("InitializeRBPhys", &AWillowPopulationPoint::InitializeRBPhys)
          ;
}