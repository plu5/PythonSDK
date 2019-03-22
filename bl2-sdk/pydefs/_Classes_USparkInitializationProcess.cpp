#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USparkInitializationProcess(py::module &m)
{
    py::class_< USparkInitializationProcess,  UObject   >(m, "USparkInitializationProcess")
        .def_readwrite("Data", &USparkInitializationProcess::Data)
        .def_readwrite("PlayerIndex", &USparkInitializationProcess::PlayerIndex)
        .def_readwrite("SparkInitializedDelegates", &USparkInitializationProcess::SparkInitializedDelegates)
        .def_readwrite("AsyncTicket", &USparkInitializationProcess::AsyncTicket)
        .def_readwrite("FirstAttemptDelay", &UGearboxProcess::FirstAttemptDelay)
        .def_readwrite("BaseRetrySeconds", &UGearboxProcess::BaseRetrySeconds)
        .def_readwrite("MaxRetryAttempts", &UGearboxProcess::MaxRetryAttempts)
        .def_readwrite("RetryMultiplier", &UGearboxProcess::RetryMultiplier)
        .def_readwrite("RetryJitter", &UGearboxProcess::RetryJitter)
        .def_readwrite("CurrentRetrySeconds", &UGearboxProcess::CurrentRetrySeconds)
        .def_readwrite("Attempts", &UGearboxProcess::Attempts)
        .def_readwrite("WaitTime", &UGearboxProcess::WaitTime)
        .def_readwrite("CurrentStep", &UGearboxProcess::CurrentStep)
        .def_readwrite("FailureStep", &UGearboxProcess::FailureStep)
        .def("eventTriggerSparkInitializedDelegates", &USparkInitializationProcess::eventTriggerSparkInitializedDelegates)
        .def("ClearSparkInitializedDelegate", &USparkInitializationProcess::ClearSparkInitializedDelegate)
        .def("AddSparkInitializedDelegate", &USparkInitializationProcess::AddSparkInitializedDelegate)
        .def("GetStepName", &USparkInitializationProcess::GetStepName)
        .def("GetStepConfiguration", &USparkInitializationProcess::GetStepConfiguration)
        .def("IsInitialized", &USparkInitializationProcess::IsInitialized)
        .def("IsDisabled", &USparkInitializationProcess::IsDisabled)
        .def("IsInitializing", &USparkInitializationProcess::IsInitializing)
        .def("HandleVerificationReceived", &USparkInitializationProcess::HandleVerificationReceived)
        .def("eventVerifyAuthentication", &USparkInitializationProcess::eventVerifyAuthentication)
        .def("AuthenticateTicketStringWithDelegate", &USparkInitializationProcess::AuthenticateTicketStringWithDelegate)
        .def("HandleAuthenticationReceived", &USparkInitializationProcess::HandleAuthenticationReceived)
        .def("eventAuthenticateAccount", &USparkInitializationProcess::eventAuthenticateAccount)
        .def("GetConfigQuery", &USparkInitializationProcess::GetConfigQuery)
        .def("CompleteInitialization", &USparkInitializationProcess::CompleteInitialization)
        .def("HttpInit", &USparkInitializationProcess::HttpInit)
        .def("CheckForTMS", &USparkInitializationProcess::CheckForTMS)
        .def("PerformStep", &USparkInitializationProcess::PerformStep)
        .def("StartProcess", &USparkInitializationProcess::StartProcess)
        .def("InitWithController", &USparkInitializationProcess::InitWithController)
        .def("GotoStep", &UGearboxProcess::GotoStep)
        .def("GotoNextStep", &UGearboxProcess::GotoNextStep)
        .def("GotoFirstStep", &UGearboxProcess::GotoFirstStep)
        .def("eventPerformStep", &UGearboxProcess::eventPerformStep)
        .def("PauseLoop", &UGearboxProcess::PauseLoop)
        .def("Init", &UGearboxProcess::Init)
        .def("ContinueLoop", &UGearboxProcess::ContinueLoop)
        .def("StopLoop", &UGearboxProcess::StopLoop)
          ;
}