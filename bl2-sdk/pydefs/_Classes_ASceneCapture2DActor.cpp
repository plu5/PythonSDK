#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASceneCapture2DActor(py::module &m)
{
    py::class_< ASceneCapture2DActor,  ASceneCaptureActor   >(m, "ASceneCapture2DActor")
        .def_readwrite("DrawFrustum", &ASceneCapture2DActor::DrawFrustum)
          ;
}