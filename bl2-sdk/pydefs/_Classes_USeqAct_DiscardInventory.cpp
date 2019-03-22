#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DiscardInventory(py::module &m)
{
    py::class_< USeqAct_DiscardInventory,  USequenceAction   >(m, "USeqAct_DiscardInventory")
        .def("eventOnActivated", &USeqAct_DiscardInventory::eventOnActivated)
          ;
}