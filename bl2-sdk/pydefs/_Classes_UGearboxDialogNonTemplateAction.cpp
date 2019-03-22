#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogNonTemplateAction(py::module &m)
{
    py::class_< UGearboxDialogNonTemplateAction,  UGearboxDialogNode   >(m, "UGearboxDialogNonTemplateAction")
        .def("eventActivate", &UGearboxDialogAction::eventActivate)
          ;
}