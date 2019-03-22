#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExposureUtilityBase(py::module &m)
{
    py::class_< UExposureUtilityBase,  UObject   >(m, "UExposureUtilityBase")
        .def_readwrite("ExposureStrategy", &UExposureUtilityBase::ExposureStrategy)
        .def("CalculateVantageToPoint", &UExposureUtilityBase::CalculateVantageToPoint)
        .def("CalculateTargetExposure", &UExposureUtilityBase::CalculateTargetExposure)
          ;
}