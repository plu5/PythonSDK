#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeleeDefinition(py::module &m)
{
    py::class_< UMeleeDefinition,  UGBXDefinition   >(m, "UMeleeDefinition")
        .def_readwrite("VfTable_IIDamageCauser", &UMeleeDefinition::VfTable_IIDamageCauser)
        .def_readwrite("Damage", &UMeleeDefinition::Damage)
        .def_readwrite("DamageSource", &UMeleeDefinition::DamageSource)
        .def_readwrite("DamageTypeDefinitionOverride", &UMeleeDefinition::DamageTypeDefinitionOverride)
        .def_readwrite("DamageTypeDefinition", &UMeleeDefinition::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &UMeleeDefinition::ImpactDefinition)
        .def_readwrite("Knockback", &UMeleeDefinition::Knockback)
        .def_readwrite("StatusEffectDamage", &UMeleeDefinition::StatusEffectDamage)
        .def_readwrite("StatusEffectChance", &UMeleeDefinition::StatusEffectChance)
        .def_readwrite("HitStartSocketOrBone", &UMeleeDefinition::HitStartSocketOrBone)
        .def_readwrite("HitStartOffset", &UMeleeDefinition::HitStartOffset)
        .def_readwrite("MaxMeleeDuration", &UMeleeDefinition::MaxMeleeDuration)
        .def_readwrite("AttackInterval", &UMeleeDefinition::AttackInterval)
        .def_readwrite("DamageRadius", &UMeleeDefinition::DamageRadius)
        .def_readwrite("DamageHeight", &UMeleeDefinition::DamageHeight)
        .def_readwrite("DamageConeAngle", &UMeleeDefinition::DamageConeAngle)
        .def_readwrite("DamageHeightOffset", &UMeleeDefinition::DamageHeightOffset)
        .def_readwrite("ConeAngle", &UMeleeDefinition::ConeAngle)
        .def_readwrite("TraceDistance", &UMeleeDefinition::TraceDistance)
        .def_readwrite("OnHitEnemy", &UMeleeDefinition::OnHitEnemy)
        .def_readwrite("OnHitEnemyHealth", &UMeleeDefinition::OnHitEnemyHealth)
        .def_readwrite("OnHitEnemyShield", &UMeleeDefinition::OnHitEnemyShield)
        .def_readwrite("OnHitFriendly", &UMeleeDefinition::OnHitFriendly)
        .def_readwrite("OnHitEnemyOrFriendly", &UMeleeDefinition::OnHitEnemyOrFriendly)
        .def_readwrite("OnKilledEnemy", &UMeleeDefinition::OnKilledEnemy)
        .def("GetControllerResponsibleForDamage", &UMeleeDefinition::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &UMeleeDefinition::GetInstigator, py::return_value_policy::reference)
        .def("GetInstigatorSelfDamageScale", &UMeleeDefinition::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &UMeleeDefinition::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &UMeleeDefinition::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &UMeleeDefinition::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &UMeleeDefinition::GetStatusEffectBaseDamage)
        .def("IsMeleeDebugEnabled", &UMeleeDefinition::IsMeleeDebugEnabled)
        .def("ToggleMeleeDebug", &UMeleeDefinition::ToggleMeleeDebug)
        .def("MeleeAttack", &UMeleeDefinition::MeleeAttack)
          ;
}