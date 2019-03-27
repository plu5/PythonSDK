#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Latent(py::module &m)
{
    py::class_< USeqAct_Latent,  USequenceAction   >(m, "USeqAct_Latent")
		.def_static("StaticClass", &USeqAct_Latent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LatentActors", &USeqAct_Latent::LatentActors)
        .def("eventUpdate", &USeqAct_Latent::eventUpdate)
        .def("AbortFor", &USeqAct_Latent::AbortFor)
          ;
}