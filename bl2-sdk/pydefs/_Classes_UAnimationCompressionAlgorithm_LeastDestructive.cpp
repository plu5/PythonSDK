#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_LeastDestructive(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm_LeastDestructive,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_LeastDestructive")
          ;
}