#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm,  UObject   >(m, "UAnimationCompressionAlgorithm")
		.def_static("StaticClass", &UAnimationCompressionAlgorithm::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Description", &UAnimationCompressionAlgorithm::Description)
        .def_readwrite("TranslationCompressionChoice", &UAnimationCompressionAlgorithm::TranslationCompressionChoice)
        .def_readwrite("RotationCompressionChoice", &UAnimationCompressionAlgorithm::RotationCompressionChoice)
          ;
}