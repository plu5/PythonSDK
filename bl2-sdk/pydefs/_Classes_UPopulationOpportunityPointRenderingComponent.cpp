#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityPointRenderingComponent(py::module &m)
{
    py::class_< UPopulationOpportunityPointRenderingComponent,  UPrimitiveComponent   >(m, "UPopulationOpportunityPointRenderingComponent")
          ;
}