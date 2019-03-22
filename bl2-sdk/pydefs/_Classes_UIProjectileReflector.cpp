#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIProjectileReflector(py::module &m)
{
    py::class_< UIProjectileReflector,  UInterface   >(m, "UIProjectileReflector")
        .def("GetBulletReflectedOffSelfDamageScale", &UIProjectileReflector::GetBulletReflectedOffSelfDamageScale)
        .def("GetBulletReflectedOffEnemyDamageScale", &UIProjectileReflector::GetBulletReflectedOffEnemyDamageScale)
        .def("GetBulletReflectedOffSelfDamageTakenScale", &UIProjectileReflector::GetBulletReflectedOffSelfDamageTakenScale)
        .def("GetEnemyReflectionChance", &UIProjectileReflector::GetEnemyReflectionChance)
        .def("GetSelfReflectionChance", &UIProjectileReflector::GetSelfReflectionChance)
          ;
}