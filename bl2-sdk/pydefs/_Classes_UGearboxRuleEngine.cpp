#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxRuleEngine(py::module &m)
{
    py::class_< UGearboxRuleEngine,  UObject   >(m, "UGearboxRuleEngine")
        .def_readwrite("MyGearboxPawn", &UGearboxRuleEngine::MyGearboxPawn)
        .def_readwrite("MyGearboxMind", &UGearboxRuleEngine::MyGearboxMind)
        .def_readwrite("VfTable_IIFlagProvider", &URuleEngine::VfTable_IIFlagProvider)
        .def_readwrite("TheAIFactory", &URuleEngine::TheAIFactory)
        .def_readwrite("ActorProxy", &URuleEngine::ActorProxy)
        .def_readwrite("ThinkRate", &URuleEngine::ThinkRate)
        .def_readwrite("ElapsedTime", &URuleEngine::ElapsedTime)
        .def_readwrite("TickRate", &URuleEngine::TickRate)
        .def_readwrite("RuleSetTemplate", &URuleEngine::RuleSetTemplate)
        .def_readwrite("CurRuleSet", &URuleEngine::CurRuleSet)
        .def_readwrite("PendingRuleSetTemplate", &URuleEngine::PendingRuleSetTemplate)
        .def_readwrite("FlagInitialization", &URuleEngine::FlagInitialization)
        .def_readwrite("DynamicFlagDefinitions", &URuleEngine::DynamicFlagDefinitions)
        .def_readwrite("DynamicFlags", &URuleEngine::DynamicFlags)
        .def_readwrite("KnowledgeDB", &URuleEngine::KnowledgeDB)
        .def_readwrite("RunningRules", &URuleEngine::RunningRules)
        .def_readwrite("ResourcesInUse", &URuleEngine::ResourcesInUse)
        .def_readwrite("MyTracker", &URuleEngine::MyTracker)
        .def_readwrite("RuleSetStack", &URuleEngine::RuleSetStack)
        .def_readwrite("QueuedRuleEvents", &URuleEngine::QueuedRuleEvents)
        .def_readwrite("LastFullUpdateTime", &URuleEngine::LastFullUpdateTime)
        .def_readwrite("MaxRuleSetPasses", &URuleEngine::MaxRuleSetPasses)
        .def_readwrite("KRCache", &URuleEngine::KRCache)
        .def_readwrite("LastTargetIteratorTime", &URuleEngine::LastTargetIteratorTime)
        .def_readwrite("LastTargetIteratorRuleEvalDiffTime", &URuleEngine::LastTargetIteratorRuleEvalDiffTime)
        .def_readwrite("AverageTargetIteratorRuleEvalDiffTime", &URuleEngine::AverageTargetIteratorRuleEvalDiffTime)
        .def_readwrite("WorstTargetIteratorRuleEvalDiffTime", &URuleEngine::WorstTargetIteratorRuleEvalDiffTime)
        .def_readwrite("ActivateTime", &URuleEngine::ActivateTime)
        .def_readwrite("RuleSetReferences", &URuleEngine::RuleSetReferences)
        .def("Initialize", &UGearboxRuleEngine::Initialize)
        .def("GetContextSource", &UGearboxRuleEngine::GetContextSource, py::return_value_policy::reference)
        .def("ApplyFlagInitializationData", &URuleEngine::ApplyFlagInitializationData)
        .def("IsResourceInUse", &URuleEngine::IsResourceInUse)
        .def("IsRunningRuleWhichBlocksRuleSetChange", &URuleEngine::IsRunningRuleWhichBlocksRuleSetChange)
        .def("GetDynamicFlagValue", &URuleEngine::GetDynamicFlagValue)
        .def("SetDynamicFlagDefTrueTimed", &URuleEngine::SetDynamicFlagDefTrueTimed)
        .def("SetDynamicFlagDefValue", &URuleEngine::SetDynamicFlagDefValue)
        .def("GetRuleSetFromReference", &URuleEngine::GetRuleSetFromReference, py::return_value_policy::reference)
        .def("ClearRuleSetStack", &URuleEngine::ClearRuleSetStack)
        .def("PopRuleSetSwitch", &URuleEngine::PopRuleSetSwitch)
        .def("PushRuleSetSwitch", &URuleEngine::PushRuleSetSwitch)
        .def("SetRuleSet", &URuleEngine::SetRuleSet)
        .def("SwitchActiveRuleSet", &URuleEngine::SwitchActiveRuleSet)
        .def("UpdateKnowledge", &URuleEngine::UpdateKnowledge)
        .def("ActivateEventRuleEx", &URuleEngine::ActivateEventRuleEx)
        .def("CleanUpRuleEngineData", &URuleEngine::CleanUpRuleEngineData)
        .def("ActivateEventRule", &URuleEngine::ActivateEventRule)
        .def("ActivateEventRuleByDefinition", &URuleEngine::ActivateEventRuleByDefinition)
          ;
}