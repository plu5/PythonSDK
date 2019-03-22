#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPersistentSequenceData(py::module &m)
{
    py::class_< UPersistentSequenceData,  UObject   >(m, "UPersistentSequenceData")
        .def_readwrite("LevelPackageName", &UPersistentSequenceData::LevelPackageName)
        .def_readwrite("SequenceName", &UPersistentSequenceData::SequenceName)
          ;
}