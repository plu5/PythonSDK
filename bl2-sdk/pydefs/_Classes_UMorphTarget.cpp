#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphTarget(py::module &m)
{
    py::class_< UMorphTarget,  UObject   >(m, "UMorphTarget")
		.def_static("StaticClass", &UMorphTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MorphLODModels", &UMorphTarget::MorphLODModels)
        .def_readwrite("MaterialSlotId", &UMorphTarget::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphTarget::ScalarParameterName)
          ;
}