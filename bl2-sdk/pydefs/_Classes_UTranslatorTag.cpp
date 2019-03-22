#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTranslatorTag(py::module &m)
{
    py::class_< UTranslatorTag,  UObject   >(m, "UTranslatorTag")
        .def_readwrite("Tag", &UTranslatorTag::Tag)
        .def("Translate", &UTranslatorTag::Translate)
          ;
}