#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USparkNews(py::module &m)
{
    py::class_< USparkNews,  UObject   >(m, "USparkNews")
		.def_static("StaticClass", &USparkNews::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Articles", &USparkNews::Articles)
        .def("Internal_GetService", &USparkNews::Internal_GetService, py::return_value_policy::reference)
        .def("CallAndClearRetrievedDelegate", &USparkNews::CallAndClearRetrievedDelegate)
        .def("ParseArticles", &USparkNews::ParseArticles)
        .def("HandleNewsRetrievalResponse", &USparkNews::HandleNewsRetrievalResponse)
        .def("GetArticle", &USparkNews::GetArticle)
        .def("GetArticleCount", &USparkNews::GetArticleCount)
        .def("RetrieveNews", &USparkNews::RetrieveNews)
        .def("OnNewsRetrieved", &USparkNews::OnNewsRetrieved)
          ;
}