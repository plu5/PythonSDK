#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIClassDefinition(py::module &m)
{
    py::class_< UAIClassDefinition,  UWillowCharacterClassDefinition   >(m, "UAIClassDefinition")
        .def_readwrite("AIDef", &UAIClassDefinition::AIDef)
        .def_readwrite("DefaultDisplayName", &UAIClassDefinition::DefaultDisplayName)
        .def_readwrite("UBMKilledByMessageString", &UAIClassDefinition::UBMKilledByMessageString)
        .def_readwrite("WatchPlayerTime", &UAIClassDefinition::WatchPlayerTime)
        .def_readwrite("SightViewCone", &UAIClassDefinition::SightViewCone)
        .def_readwrite("SightFireCone", &UAIClassDefinition::SightFireCone)
        .def_readwrite("CrawlerMeshLerpSpeed", &UAIClassDefinition::CrawlerMeshLerpSpeed)
        .def_readwrite("MoveAtDestinationThreshold", &UAIClassDefinition::MoveAtDestinationThreshold)
        .def_readwrite("AkStartRotation", &UAIClassDefinition::AkStartRotation)
        .def_readwrite("AkStopRotation", &UAIClassDefinition::AkStopRotation)
        .def_readwrite("RotationRate", &UAIClassDefinition::RotationRate)
        .def_readwrite("Physics", &UAIClassDefinition::Physics)
        .def_readwrite("UsableIcon", &UAIClassDefinition::UsableIcon)
        .def_readwrite("AccelRate", &UAIClassDefinition::AccelRate)
        .def_readwrite("CrawlerRotationModifier", &UAIClassDefinition::CrawlerRotationModifier)
        .def_readwrite("CornerCutDistance", &UAIClassDefinition::CornerCutDistance)
        .def_readwrite("LookAheadDistance", &UAIClassDefinition::LookAheadDistance)
        .def_readwrite("LookInterpRate", &UAIClassDefinition::LookInterpRate)
        .def_readwrite("SlowDownDist", &UAIClassDefinition::SlowDownDist)
        .def_readwrite("SlowDownMinPct", &UAIClassDefinition::SlowDownMinPct)
        .def_readwrite("FlyMaxRotationModifier", &UAIClassDefinition::FlyMaxRotationModifier)
        .def_readwrite("FlyBlockedDistModifier", &UAIClassDefinition::FlyBlockedDistModifier)
        .def_readwrite("FlyLookAheadTime", &UAIClassDefinition::FlyLookAheadTime)
        .def_readwrite("FlyNavMeshCheckDist", &UAIClassDefinition::FlyNavMeshCheckDist)
        .def_readwrite("FlyStartSlowPct", &UAIClassDefinition::FlyStartSlowPct)
        .def_readwrite("FlyStopSlowPct", &UAIClassDefinition::FlyStopSlowPct)
        .def_readwrite("FlyExtentModifier", &UAIClassDefinition::FlyExtentModifier)
        .def_readwrite("OverrideNavSize", &UAIClassDefinition::OverrideNavSize)
        .def_readwrite("OverrideNavHeight", &UAIClassDefinition::OverrideNavHeight)
        .def_readwrite("PassiveSkills", &UAIClassDefinition::PassiveSkills)
        .def_readwrite("DefaultWeapon", &UAIClassDefinition::DefaultWeapon)
        .def_readwrite("InteractionDefinition", &UAIClassDefinition::InteractionDefinition)
        .def_readwrite("CombatMusicTargetingThreat", &UAIClassDefinition::CombatMusicTargetingThreat)
        .def_readwrite("SpecialCombatMusicState", &UAIClassDefinition::SpecialCombatMusicState)
        .def_readwrite("SpecialCombatMusicPriority", &UAIClassDefinition::SpecialCombatMusicPriority)
        .def_readwrite("UsableIconDef", &UAIClassDefinition::UsableIconDef)
        .def_readwrite("UsableIconDefSecondary", &UAIClassDefinition::UsableIconDefSecondary)
        .def_readwrite("OnUsedBehaviors", &UAIClassDefinition::OnUsedBehaviors)
        .def_readwrite("OnUsedBehaviors_NoMission", &UAIClassDefinition::OnUsedBehaviors_NoMission)
        .def_readwrite("OnDismissedBehaviors", &UAIClassDefinition::OnDismissedBehaviors)
        .def_readwrite("OnLingeringBehaviors", &UAIClassDefinition::OnLingeringBehaviors)
        .def_readwrite("TimeUntilConsideredLingering", &UAIClassDefinition::TimeUntilConsideredLingering)
        .def_readwrite("FocusRadius", &UAIClassDefinition::FocusRadius)
        .def_readwrite("FocusOffset", &UAIClassDefinition::FocusOffset)
        .def("OnAllPickupsDetached", &UAIClassDefinition::OnAllPickupsDetached)
        .def("OnPickupDetached", &UAIClassDefinition::OnPickupDetached)
        .def("OnFootStep", &UAIClassDefinition::OnFootStep)
        .def("OnUnTouch", &UAIClassDefinition::OnUnTouch)
        .def("OnTouch", &UAIClassDefinition::OnTouch)
        .def("OnUncloak", &UAIClassDefinition::OnUncloak)
        .def("OnCloak", &UAIClassDefinition::OnCloak)
        .def("OnTakeHeal", &UAIClassDefinition::OnTakeHeal)
        .def("OnVehicleTakeDamage", &UAIClassDefinition::OnVehicleTakeDamage)
        .def("OnTakeDamage", &UAIClassDefinition::OnTakeDamage)
        .def("OnSpawned", &UAIClassDefinition::OnSpawned)
        .def("OnUserCouldNotAffordSecondary", &UAIClassDefinition::OnUserCouldNotAffordSecondary)
        .def("OnUserCouldNotAfford", &UAIClassDefinition::OnUserCouldNotAfford)
        .def("OnSecondaryUsed", &UAIClassDefinition::OnSecondaryUsed)
        .def("OnUsed", &UAIClassDefinition::OnUsed)
          ;
}