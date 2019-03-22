#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APylon(py::module &m)
{
    py::class_< APylon,  ANavigationPoint   >(m, "APylon")
        .def_readwrite("VfTable_IEditorLinkSelectionInterface", &APylon::VfTable_IEditorLinkSelectionInterface)
        .def_readwrite("NavMeshPtr", &APylon::NavMeshPtr)
        .def_readwrite("ObstacleMesh", &APylon::ObstacleMesh)
        .def_readwrite("DynamicObstacleMesh", &APylon::DynamicObstacleMesh)
        .def_readwrite("WorkingSetPtr", &APylon::WorkingSetPtr)
        .def_readwrite("PathObjectsThatAffectThisPylon", &APylon::PathObjectsThatAffectThisPylon)
        .def_readwrite("NextPassSeedList", &APylon::NextPassSeedList)
        .def_readwrite("OctreeId", &APylon::OctreeId)
        .def_readwrite("OctreeIWasAddedTo", &APylon::OctreeIWasAddedTo)
        .def_readwrite("NextPylon", &APylon::NextPylon)
        .def_readwrite("ExpansionVolumes", &APylon::ExpansionVolumes)
        .def_readwrite("ExpansionRadius", &APylon::ExpansionRadius)
        .def_readwrite("MaxExpansionRadius", &APylon::MaxExpansionRadius)
        .def_readwrite("PathSizes", &APylon::PathSizes)
        .def_readwrite("PylonRadiusPreview", &APylon::PylonRadiusPreview)
        .def_readwrite("ExpansionSphereCenter", &APylon::ExpansionSphereCenter)
        .def_readwrite("RenderingComp", &APylon::RenderingComp)
        .def_readwrite("BrokenSprite", &APylon::BrokenSprite)
        .def_readwrite("ImposterPylons", &APylon::ImposterPylons)
        .def_readwrite("OnBuild_DisableCollisionForThese", &APylon::OnBuild_DisableCollisionForThese)
        .def_readwrite("OnBuild_EnableCollisionForThese", &APylon::OnBuild_EnableCollisionForThese)
        .def_readwrite("MaxPolyHeight_Optional", &APylon::MaxPolyHeight_Optional)
        .def_readwrite("DebugEdgeCount", &APylon::DebugEdgeCount)
        .def_readwrite("IconScale", &APylon::IconScale)
        .def_readwrite("GBX_PolySize", &APylon::GBX_PolySize)
        .def_readwrite("EdgeCheckHeight", &APylon::EdgeCheckHeight)
        .def_readwrite("PolyMergeThreshold", &APylon::PolyMergeThreshold)
        .def_readwrite("OuterPylon", &APylon::OuterPylon)
        .def("CanReachPylon", &APylon::CanReachPylon)
        .def("OnToggle", &APylon::OnToggle)
        .def("eventIsEnabled", &APylon::eventIsEnabled)
        .def("eventSetEnabled", &APylon::eventSetEnabled)
        .def("PostBeginPlay", &APylon::PostBeginPlay)
        .def("OnPylonStatusChange", &APylon::OnPylonStatusChange)
          ;
}