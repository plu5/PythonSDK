#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumRoundAnnounce(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumRoundAnnounce,  USequenceAction   >(m, "UWillowSeqAct_ColiseumRoundAnnounce")
        .def("eventActivated", &UWillowSeqAct_ColiseumRoundAnnounce::eventActivated)
          ;
}