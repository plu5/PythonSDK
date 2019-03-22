#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxNavigationHandle(py::module &m)
{
    py::class_< UGearboxNavigationHandle,  UNavigationHandle   >(m, "UGearboxNavigationHandle")
        .def_readwrite("DesiredMovementSpeed", &UGearboxNavigationHandle::DesiredMovementSpeed)
        .def_readwrite("ActiveSpecialNavMeshMove", &UGearboxNavigationHandle::ActiveSpecialNavMeshMove)
        .def_readwrite("CurrentGoal", &UGearboxNavigationHandle::CurrentGoal)
        .def_readwrite("CurrentPath", &UGearboxNavigationHandle::CurrentPath)
        .def_readwrite("Anchor", &UGearboxNavigationHandle::Anchor)
        .def_readwrite("LastValidAnchor", &UGearboxNavigationHandle::LastValidAnchor)
        .def_readwrite("LastAnchorPosition", &UGearboxNavigationHandle::LastAnchorPosition)
        .def_readwrite("LastAnchorDelta", &UGearboxNavigationHandle::LastAnchorDelta)
        .def_readwrite("NextPathObjectDistance", &UGearboxNavigationHandle::NextPathObjectDistance)
        .def_readwrite("CurrentGoalStartLoc", &UGearboxNavigationHandle::CurrentGoalStartLoc)
        .def_readwrite("DesiredLookDirection", &UGearboxNavigationHandle::DesiredLookDirection)
        .def_readwrite("LookDirection", &UGearboxNavigationHandle::LookDirection)
        .def_readwrite("PathFinder", &UGearboxNavigationHandle::PathFinder)
        .def_readwrite("NearPathCheckDist", &UGearboxNavigationHandle::NearPathCheckDist)
        .def_readwrite("NearPathCheckDistMin", &UGearboxNavigationHandle::NearPathCheckDistMin)
        .def_readwrite("NearPathCheckDistMax", &UGearboxNavigationHandle::NearPathCheckDistMax)
        .def_readwrite("NearPathCheckDistRate", &UGearboxNavigationHandle::NearPathCheckDistRate)
        .def("SetDesiredMovementSpeed", &UGearboxNavigationHandle::SetDesiredMovementSpeed)
        .def("ClearAnchor", &UGearboxNavigationHandle::ClearAnchor)
        .def("GetNearestPositionOnNavMesh", &UGearboxNavigationHandle::GetNearestPositionOnNavMesh)
        .def("GetNavMeshPolyForPoint", &UGearboxNavigationHandle::GetNavMeshPolyForPoint)
        .def("IsDoingSpecialMove", &UGearboxNavigationHandle::IsDoingSpecialMove)
        .def("InFinalPoly", &UGearboxNavigationHandle::InFinalPoly)
        .def("NeedsRegularWalkingPhysics", &UGearboxNavigationHandle::NeedsRegularWalkingPhysics)
        .def("PopulatePathfindingParamCache", &UGearboxNavigationHandle::PopulatePathfindingParamCache)
        .def("TrySpecialMove", &UGearboxNavigationHandle::TrySpecialMove)
        .def("Finished", &UGearboxNavigationHandle::Finished)
        .def("IsGoalValid", &UGearboxNavigationHandle::IsGoalValid)
        .def("MovePawnToGoal", &UGearboxNavigationHandle::MovePawnToGoal)
        .def("PathIsValid", &UGearboxNavigationHandle::PathIsValid)
        .def("IsFollowingPath", &UGearboxNavigationHandle::IsFollowingPath)
        .def("ClearPath", &UGearboxNavigationHandle::ClearPath)
        .def("FollowPath", &UGearboxNavigationHandle::FollowPath)
        .def("CreatePathToLocation", &UGearboxNavigationHandle::CreatePathToLocation)
          ;
}