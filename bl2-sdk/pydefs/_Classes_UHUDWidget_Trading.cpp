#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDWidget_Trading(py::module &m)
{
    py::class_< UHUDWidget_Trading,  UHUDWidget_Base   >(m, "UHUDWidget_Trading")
        .def_readwrite("TradePrompt_Send", &UHUDWidget_Trading::TradePrompt_Send)
        .def_readwrite("TradePrompt_Accept", &UHUDWidget_Trading::TradePrompt_Accept)
        .def_readwrite("TradeSentTo", &UHUDWidget_Trading::TradeSentTo)
        .def_readwrite("TradeReceivedFrom", &UHUDWidget_Trading::TradeReceivedFrom)
        .def_readwrite("TradeCanceled", &UHUDWidget_Trading::TradeCanceled)
        .def_readwrite("TradeFinished", &UHUDWidget_Trading::TradeFinished)
        .def_readwrite("TradeDisabled", &UHUDWidget_Trading::TradeDisabled)
        .def_readwrite("TradingDisabled", &UHUDWidget_Trading::TradingDisabled)
        .def_readwrite("TradeCanceled_Busy", &UHUDWidget_Trading::TradeCanceled_Busy)
        .def_readwrite("TradeCanceled_OutOfRange", &UHUDWidget_Trading::TradeCanceled_OutOfRange)
        .def_readwrite("TradeCanceled_SelfRefused", &UHUDWidget_Trading::TradeCanceled_SelfRefused)
        .def_readwrite("TradeCanceled_OtherRefused", &UHUDWidget_Trading::TradeCanceled_OtherRefused)
        .def_readwrite("TradeCanceled_SelfWithdrew", &UHUDWidget_Trading::TradeCanceled_SelfWithdrew)
        .def_readwrite("TradeCanceled_OtherWithdrew", &UHUDWidget_Trading::TradeCanceled_OtherWithdrew)
        .def_readwrite("TradeCanceled_SelfCanceled", &UHUDWidget_Trading::TradeCanceled_SelfCanceled)
        .def_readwrite("TradeCanceled_OtherCanceled", &UHUDWidget_Trading::TradeCanceled_OtherCanceled)
        .def_readwrite("TradeFinished_Won", &UHUDWidget_Trading::TradeFinished_Won)
        .def_readwrite("TradeFinished_Lost", &UHUDWidget_Trading::TradeFinished_Lost)
        .def_readwrite("TradeFinished_Draw", &UHUDWidget_Trading::TradeFinished_Draw)
        .def_readwrite("InnerClip", &UHUDWidget_Trading::InnerClip)
        .def_readwrite("Line1Clip", &UHUDWidget_Trading::Line1Clip)
        .def_readwrite("Line2Clip", &UHUDWidget_Trading::Line2Clip)
        .def_readwrite("TradeManager", &UHUDWidget_Trading::TradeManager)
        .def_readwrite("CachedStatus", &UHUDWidget_Trading::CachedStatus)
        .def_readwrite("CachedPartnerPRI", &UHUDWidget_Trading::CachedPartnerPRI)
        .def_readwrite("ReasonMessageDuration", &UHUDWidget_Trading::ReasonMessageDuration)
        .def_readwrite("LastReasonMessageTime", &UHUDWidget_Trading::LastReasonMessageTime)
        .def("TradeManagerShutDown", &UHUDWidget_Trading::TradeManagerShutDown)
        .def("TradeManagerInitialized", &UHUDWidget_Trading::TradeManagerInitialized)
        .def("HideTips", &UHUDWidget_Trading::HideTips)
        .def("ShowTips", &UHUDWidget_Trading::ShowTips)
        .def("Update", &UHUDWidget_Trading::Update)
        .def("Deinit", &UHUDWidget_Trading::Deinit)
        .def("Init", &UHUDWidget_Trading::Init)
          ;
}