#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAccountGFxMovie(py::module &m)
{
    py::class_< UGearboxAccountGFxMovie,  UWillowGFxMovie   >(m, "UGearboxAccountGFxMovie")
        .def_readwrite("GearboxAccountObj", &UGearboxAccountGFxMovie::GearboxAccountObj)
        .def_readwrite("ScreenStack", &UGearboxAccountGFxMovie::ScreenStack)
        .def_readwrite("CurrentAgeString", &UGearboxAccountGFxMovie::CurrentAgeString)
        .def_readwrite("authenticationAttempts", &UGearboxAccountGFxMovie::authenticationAttempts)
        .def_readwrite("SparkInteractionWaitInSeconds", &UGearboxAccountGFxMovie::SparkInteractionWaitInSeconds)
        .def_readwrite("NextSparkInteractionTime", &UGearboxAccountGFxMovie::NextSparkInteractionTime)
        .def_readwrite("SparkTicker", &UGearboxAccountGFxMovie::SparkTicker)
        .def_readwrite("OfferCount", &UGearboxAccountGFxMovie::OfferCount)
        .def_readwrite("DefaultInitTime", &UGearboxAccountGFxMovie::DefaultInitTime)
        .def_readwrite("MinInitTime", &UGearboxAccountGFxMovie::MinInitTime)
        .def_readwrite("MaxInitTime", &UGearboxAccountGFxMovie::MaxInitTime)
        .def_readwrite("InitTicker", &UGearboxAccountGFxMovie::InitTicker)
        .def("IsSparkTimerActive", &UGearboxAccountGFxMovie::IsSparkTimerActive)
        .def("ClearSparkTimer", &UGearboxAccountGFxMovie::ClearSparkTimer)
        .def("SetSparkTimer", &UGearboxAccountGFxMovie::SetSparkTimer)
        .def("CanRunSparkInteraction", &UGearboxAccountGFxMovie::CanRunSparkInteraction)
        .def("GetShiftMenuTextString", &UGearboxAccountGFxMovie::GetShiftMenuTextString)
        .def("DelayNextSparkInteraction", &UGearboxAccountGFxMovie::DelayNextSparkInteraction)
        .def("UpdateLegal", &UGearboxAccountGFxMovie::UpdateLegal)
        .def("extRequestCurrentOffers", &UGearboxAccountGFxMovie::extRequestCurrentOffers)
        .def("extRequestConsoleCodeEntry", &UGearboxAccountGFxMovie::extRequestConsoleCodeEntry)
        .def("extRequestConfigureSignUpAdditionalTextMessage", &UGearboxAccountGFxMovie::extRequestConfigureSignUpAdditionalTextMessage)
        .def("extRequestConfigureAdditionalBenefitsMessage", &UGearboxAccountGFxMovie::extRequestConfigureAdditionalBenefitsMessage)
        .def("extGearboxAccountOnLoad", &UGearboxAccountGFxMovie::extGearboxAccountOnLoad)
        .def("TryPasteKeyCode", &UGearboxAccountGFxMovie::TryPasteKeyCode)
        .def("PopulateOffers", &UGearboxAccountGFxMovie::PopulateOffers)
        .def("OnEntitlementsUpdated", &UGearboxAccountGFxMovie::OnEntitlementsUpdated)
        .def("PerformRedeemCode", &UGearboxAccountGFxMovie::PerformRedeemCode)
        .def("OnRedeemCodeButtonClick", &UGearboxAccountGFxMovie::OnRedeemCodeButtonClick)
        .def("OnAgeGateConfirmAgeButtonClick", &UGearboxAccountGFxMovie::OnAgeGateConfirmAgeButtonClick)
        .def("PerformSignUp", &UGearboxAccountGFxMovie::PerformSignUp)
        .def("OnSignUpScreenSignUpButtonClick", &UGearboxAccountGFxMovie::OnSignUpScreenSignUpButtonClick)
        .def("OnEULAScreenAcceptButtonClick", &UGearboxAccountGFxMovie::OnEULAScreenAcceptButtonClick)
        .def("PerformResetPassword", &UGearboxAccountGFxMovie::PerformResetPassword)
        .def("OnResetPasswordScreenResetPasswordButtonClick", &UGearboxAccountGFxMovie::OnResetPasswordScreenResetPasswordButtonClick)
        .def("OnSignInScreenResetPasswordButtonClick", &UGearboxAccountGFxMovie::OnSignInScreenResetPasswordButtonClick)
        .def("PerformSignIn", &UGearboxAccountGFxMovie::PerformSignIn)
        .def("OnSignInScreenSignInButtonClick", &UGearboxAccountGFxMovie::OnSignInScreenSignInButtonClick)
        .def("OnGetUserAgeGroup", &UGearboxAccountGFxMovie::OnGetUserAgeGroup)
        .def("OnWelcomeScreenSignUpButtonClick", &UGearboxAccountGFxMovie::OnWelcomeScreenSignUpButtonClick)
        .def("OnWelcomeScreenSignInButtonClick", &UGearboxAccountGFxMovie::OnWelcomeScreenSignInButtonClick)
        .def("OnConfirmPasswordButtonClick", &UGearboxAccountGFxMovie::OnConfirmPasswordButtonClick)
        .def("OnPasswordButtonClick", &UGearboxAccountGFxMovie::OnPasswordButtonClick)
        .def("OnEmailButtonClick", &UGearboxAccountGFxMovie::OnEmailButtonClick)
        .def("OnBackButtonClick", &UGearboxAccountGFxMovie::OnBackButtonClick)
        .def("IsConsole", &UGearboxAccountGFxMovie::IsConsole)
        .def("IsSteamworksInitialized", &UGearboxAccountGFxMovie::IsSteamworksInitialized)
        .def("IsSignedIn", &UGearboxAccountGFxMovie::IsSignedIn)
        .def("IsAuthenticated", &UGearboxAccountGFxMovie::IsAuthenticated)
        .def("IsFirstWelcome", &UGearboxAccountGFxMovie::IsFirstWelcome)
        .def("AttachFunctions", &UGearboxAccountGFxMovie::AttachFunctions)
        .def("OnEmailOrPasswordEntryComplete", &UGearboxAccountGFxMovie::OnEmailOrPasswordEntryComplete)
        .def("OnRedeemCodeEntryComplete", &UGearboxAccountGFxMovie::OnRedeemCodeEntryComplete)
        .def("OnAgeYearEntryComplete", &UGearboxAccountGFxMovie::OnAgeYearEntryComplete)
        .def("OnAgeDayEntryComplete", &UGearboxAccountGFxMovie::OnAgeDayEntryComplete)
        .def("OnAgeMonthEntryComplete", &UGearboxAccountGFxMovie::OnAgeMonthEntryComplete)
        .def("OnConsoleCodeEntryComplete", &UGearboxAccountGFxMovie::OnConsoleCodeEntryComplete)
        .def("OnConfirmPasswordInputComplete", &UGearboxAccountGFxMovie::OnConfirmPasswordInputComplete)
        .def("OnPasswordInputComplete", &UGearboxAccountGFxMovie::OnPasswordInputComplete)
        .def("OnEmailInputComplete", &UGearboxAccountGFxMovie::OnEmailInputComplete)
        .def("ConsolePlayerInput", &UGearboxAccountGFxMovie::ConsolePlayerInput)
        .def("ValidateConfirmPassword", &UGearboxAccountGFxMovie::ValidateConfirmPassword)
        .def("ValidatePassword", &UGearboxAccountGFxMovie::ValidatePassword)
        .def("ValidateEmail", &UGearboxAccountGFxMovie::ValidateEmail)
        .def("ValidateAge", &UGearboxAccountGFxMovie::ValidateAge)
        .def("UpdateTooltips", &UGearboxAccountGFxMovie::UpdateTooltips)
        .def("UpdateSignInStatus", &UGearboxAccountGFxMovie::UpdateSignInStatus)
        .def("UpdatePlayerName", &UGearboxAccountGFxMovie::UpdatePlayerName)
        .def("ReturnToWelcomeScreen", &UGearboxAccountGFxMovie::ReturnToWelcomeScreen)
        .def("PopScreen", &UGearboxAccountGFxMovie::PopScreen)
        .def("PushScreen", &UGearboxAccountGFxMovie::PushScreen)
        .def("HandleBack", &UGearboxAccountGFxMovie::HandleBack)
        .def("OnCodeRedemptionSuccessClicked", &UGearboxAccountGFxMovie::OnCodeRedemptionSuccessClicked)
        .def("HandleCodeRedeemed", &UGearboxAccountGFxMovie::HandleCodeRedeemed)
        .def("HandleResetPassword", &UGearboxAccountGFxMovie::HandleResetPassword)
        .def("HandleAccountSignUp", &UGearboxAccountGFxMovie::HandleAccountSignUp)
        .def("HandleAgeGate", &UGearboxAccountGFxMovie::HandleAgeGate)
        .def("HandleAccountSignIn", &UGearboxAccountGFxMovie::HandleAccountSignIn)
        .def("HandleInitializedTimeoutClicked", &UGearboxAccountGFxMovie::HandleInitializedTimeoutClicked)
        .def("HandleInitializedTimeout", &UGearboxAccountGFxMovie::HandleInitializedTimeout)
        .def("HandleInitialized", &UGearboxAccountGFxMovie::HandleInitialized)
        .def("eventOnClose", &UGearboxAccountGFxMovie::eventOnClose)
        .def("extConfigureForViewOffers", &UGearboxAccountGFxMovie::extConfigureForViewOffers)
        .def("ResetSparkAndHideMovie", &UGearboxAccountGFxMovie::ResetSparkAndHideMovie)
        .def("HandleInputKey", &UGearboxAccountGFxMovie::HandleInputKey)
        .def("OnConsoleInputComplete", &UGearboxAccountGFxMovie::OnConsoleInputComplete)
        .def("GetRegion", &UGearboxAccountGFxMovie::GetRegion)
        .def("IsKeyValid", &UGearboxAccountGFxMovie::IsKeyValid)
        .def("GetCurrentDate", &UGearboxAccountGFxMovie::GetCurrentDate)
          ;
}