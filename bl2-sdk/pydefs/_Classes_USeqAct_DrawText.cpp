#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DrawText(py::module &m)
{
    py::class_< USeqAct_DrawText,  USequenceAction   >(m, "USeqAct_DrawText")
		.def_static("StaticClass", &USeqAct_DrawText::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DisplayTimeSeconds", &USeqAct_DrawText::DisplayTimeSeconds)
        .def_readwrite("DrawTextInfo", &USeqAct_DrawText::DrawTextInfo)
        .def("eventGetObjClassVersion", &USeqAct_DrawText::eventGetObjClassVersion)
          ;
}