#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityArea(py::module &m)
{
    py::class_< UActorFactoryPopulationOpportunityArea,  UActorFactory   >(m, "UActorFactoryPopulationOpportunityArea")
          ;
}