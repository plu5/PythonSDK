#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPlayerStats(py::module &m)
{
    py::class_< AWillowPlayerStats,  AInfo   >(m, "AWillowPlayerStats")
        .def_readwrite("nNumConsecutiveSniperRifleKills", &AWillowPlayerStats::nNumConsecutiveSniperRifleKills)
        .def_readwrite("VfTable_ISparkUpdateCallback", &AWillowBaseStats::VfTable_ISparkUpdateCallback)
        .def_readwrite("SaveVersion", &AWillowBaseStats::SaveVersion)
        .def_readwrite("ReadVersion", &AWillowBaseStats::ReadVersion)
        .def_readwrite("StatProperties", &AWillowBaseStats::StatProperties)
        .def_readwrite("ReplicationChannel", &AWillowBaseStats::ReplicationChannel)
        .def_readwrite("DebugDisplayFilter", &AWillowBaseStats::DebugDisplayFilter)
        .def_readwrite("CurrentDebugPage", &AWillowBaseStats::CurrentDebugPage)
        .def("IncrementPlayerLauncherDirectHitStat", &AWillowPlayerStats::IncrementPlayerLauncherDirectHitStat)
        .def("IncrementPlayerKnockedDownProjectileStat", &AWillowPlayerStats::IncrementPlayerKnockedDownProjectileStat)
        .def("IncrementPlayerTedioreReloadDamageStat", &AWillowPlayerStats::IncrementPlayerTedioreReloadDamageStat)
        .def("IncrementPlayerSecondWindStat", &AWillowPlayerStats::IncrementPlayerSecondWindStat)
        .def("IncrementPlayerCriticalHitStat", &AWillowPlayerStats::IncrementPlayerCriticalHitStat)
        .def("UpdatePlayerShotStats", &AWillowPlayerStats::UpdatePlayerShotStats)
        .def("ResetPlayerShotStats", &AWillowPlayerStats::ResetPlayerShotStats)
        .def("IncrementPlayerKillStat", &AWillowPlayerStats::IncrementPlayerKillStat)
        .def("IncrementWeaponFiredStat", &AWillowPlayerStats::IncrementWeaponFiredStat)
        .def("SetIntStat", &AWillowPlayerStats::SetIntStat)
        .def("IncrementIntStat", &AWillowPlayerStats::IncrementIntStat)
        .def("ClearSparkCallbacks", &AWillowBaseStats::ClearSparkCallbacks)
        .def("DirtyAllStats", &AWillowBaseStats::DirtyAllStats)
        .def("ReportDirtyStats", &AWillowBaseStats::ReportDirtyStats)
        .def("AllDirtyStats", &AWillowBaseStats::AllDirtyStats)
        .def("UpdateChallengeBaseValues", &AWillowBaseStats::UpdateChallengeBaseValues)
        .def("TryAndSpawnReplicationChannel", &AWillowBaseStats::TryAndSpawnReplicationChannel)
        .def("StatPropertyToStringFromName", &AWillowBaseStats::StatPropertyToStringFromName)
        .def("StatPropertyToString", &AWillowBaseStats::StatPropertyToString)
        .def("SetFloatStat", &AWillowBaseStats::SetFloatStat)
        .def("GetFloatStat", &AWillowBaseStats::GetFloatStat)
        .def("GetIntStat", &AWillowBaseStats::GetIntStat)
        .def("IncrementFloatStat", &AWillowBaseStats::IncrementFloatStat)
        .def("PreviousDebugPage", &AWillowBaseStats::PreviousDebugPage)
        .def("NextDebugPage", &AWillowBaseStats::NextDebugPage)
          ;
}