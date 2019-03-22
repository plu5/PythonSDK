#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorMaterialParam(py::module &m)
{
    py::class_< UInterpTrackVectorMaterialParam,  UInterpTrackVectorBase   >(m, "UInterpTrackVectorMaterialParam")
        .def_readwrite("Materials", &UInterpTrackVectorMaterialParam::Materials)
        .def_readwrite("Material", &UInterpTrackVectorMaterialParam::Material)
        .def_readwrite("ParamName", &UInterpTrackVectorMaterialParam::ParamName)
          ;
}