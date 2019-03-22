#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGestaltPartMatricesCollectionDefinition(py::module &m)
{
    py::class_< UGestaltPartMatricesCollectionDefinition,  UGBXDefinition   >(m, "UGestaltPartMatricesCollectionDefinition")
        .def_readwrite("Collection", &UGestaltPartMatricesCollectionDefinition::Collection)
          ;
}