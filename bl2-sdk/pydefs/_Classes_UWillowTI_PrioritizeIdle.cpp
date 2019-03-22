#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_PrioritizeIdle(py::module &m)
{
    py::class_< UWillowTI_PrioritizeIdle,  UTI_Prioritize   >(m, "UWillowTI_PrioritizeIdle")
        .def_readwrite("MaxAICurrentlyTargeting", &UWillowTI_PrioritizeIdle::MaxAICurrentlyTargeting)
          ;
}