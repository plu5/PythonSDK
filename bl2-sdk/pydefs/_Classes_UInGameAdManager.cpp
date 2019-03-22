#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInGameAdManager(py::module &m)
{
    py::class_< UInGameAdManager,  UObject   >(m, "UInGameAdManager")
        .def_readwrite("ClickedBannerDelegates", &UInGameAdManager::ClickedBannerDelegates)
        .def_readwrite("ClosedAdDelegates", &UInGameAdManager::ClosedAdDelegates)
        .def("ClearClosedAdDelegate", &UInGameAdManager::ClearClosedAdDelegate)
        .def("AddClosedAdDelegate", &UInGameAdManager::AddClosedAdDelegate)
        .def("OnUserClosedAdvertisement", &UInGameAdManager::OnUserClosedAdvertisement)
        .def("ClearClickedBannerDelegate", &UInGameAdManager::ClearClickedBannerDelegate)
        .def("AddClickedBannerDelegate", &UInGameAdManager::AddClickedBannerDelegate)
        .def("OnUserClickedBanner", &UInGameAdManager::OnUserClickedBanner)
        .def("SetPauseWhileAdOpen", &UInGameAdManager::SetPauseWhileAdOpen)
        .def("ForceCloseAd", &UInGameAdManager::ForceCloseAd)
        .def("HideBanner", &UInGameAdManager::HideBanner)
        .def("ShowBanner", &UInGameAdManager::ShowBanner)
        .def("eventInit", &UInGameAdManager::eventInit)
          ;
}