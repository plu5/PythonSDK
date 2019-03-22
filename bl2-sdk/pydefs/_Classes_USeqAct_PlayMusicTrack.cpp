#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PlayMusicTrack(py::module &m)
{
    py::class_< USeqAct_PlayMusicTrack,  USequenceAction   >(m, "USeqAct_PlayMusicTrack")
        .def_readwrite("MusicTrack", &USeqAct_PlayMusicTrack::MusicTrack)
          ;
}