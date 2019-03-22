#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxRadialCustomForceField(py::module &m)
{
    py::class_< ANxRadialCustomForceField,  ANxRadialForceField   >(m, "ANxRadialCustomForceField")
        .def_readwrite("SelfRotationStrength", &ANxRadialCustomForceField::SelfRotationStrength)
        .def_readwrite("Kernel", &ANxRadialCustomForceField::Kernel)
          ;
}