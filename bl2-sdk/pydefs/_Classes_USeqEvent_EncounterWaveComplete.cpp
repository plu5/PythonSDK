#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_EncounterWaveComplete(py::module &m)
{
    py::class_< USeqEvent_EncounterWaveComplete,  USequenceEvent   >(m, "USeqEvent_EncounterWaveComplete")
        .def_readwrite("CurrentWave", &USeqEvent_EncounterWaveComplete::CurrentWave)
        .def("NotifyWaveComplete", &USeqEvent_EncounterWaveComplete::NotifyWaveComplete)
          ;
}