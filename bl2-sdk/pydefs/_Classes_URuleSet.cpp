#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleSet(py::module &m)
{
    py::class_< URuleSet,  UObject   >(m, "URuleSet")
        .def_readwrite("TheAIFactory", &URuleSet::TheAIFactory)
        .def_readwrite("RuleTemplateRefs", &URuleSet::RuleTemplateRefs)
        .def_readwrite("Rules", &URuleSet::Rules)
        .def_readwrite("ToDiscard", &URuleSet::ToDiscard)
        .def_readwrite("RuleSetName", &URuleSet::RuleSetName)
        .def_readwrite("FlagsOnEntry", &URuleSet::FlagsOnEntry)
        .def_readwrite("FlagsOnExit", &URuleSet::FlagsOnExit)
        .def_readwrite("HACK_RuleSetsAllowedToFollow", &URuleSet::HACK_RuleSetsAllowedToFollow)
          ;
}