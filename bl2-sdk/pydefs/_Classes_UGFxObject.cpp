#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxObject(py::module &m)
{
    py::class_< UGFxObject,  UObject   >(m, "UGFxObject")
        .def_readwrite("SubWidgetBindings", &UGFxObject::SubWidgetBindings)
        .def("eventWidgetUnloaded", &UGFxObject::eventWidgetUnloaded)
        .def("eventWidgetInitialized", &UGFxObject::eventWidgetInitialized)
        .def("MouseHitTest", &UGFxObject::MouseHitTest)
        .def("HitTest", &UGFxObject::HitTest)
        .def("_HitTest", &UGFxObject::_HitTest)
        .def("GetNextHighestDepth", &UGFxObject::GetNextHighestDepth)
        .def("RemoveMovieClip", &UGFxObject::RemoveMovieClip)
        .def("AttachMovie", &UGFxObject::AttachMovie, py::return_value_policy::reference)
        .def("CreateEmptyMovieClip", &UGFxObject::CreateEmptyMovieClip, py::return_value_policy::reference)
        .def("GotoAndStopI", &UGFxObject::GotoAndStopI)
        .def("GotoAndStop", &UGFxObject::GotoAndStop)
        .def("GotoAndPlayI", &UGFxObject::GotoAndPlayI)
        .def("GotoAndPlay", &UGFxObject::GotoAndPlay)
        .def("ActionScriptArray", &UGFxObject::ActionScriptArray)
        .def("ActionScriptObject", &UGFxObject::ActionScriptObject, py::return_value_policy::reference)
        .def("ActionScriptString", &UGFxObject::ActionScriptString)
        .def("ActionScriptFloat", &UGFxObject::ActionScriptFloat)
        .def("ActionScriptInt", &UGFxObject::ActionScriptInt)
        .def("ActionScriptVoid", &UGFxObject::ActionScriptVoid)
        .def("Invoke", &UGFxObject::Invoke)
        .def("ActionScriptSetFunctionOn", &UGFxObject::ActionScriptSetFunctionOn)
        .def("ActionScriptSetFunction", &UGFxObject::ActionScriptSetFunction)
        .def("SetElementMemberString", &UGFxObject::SetElementMemberString)
        .def("SetElementMemberFloat", &UGFxObject::SetElementMemberFloat)
        .def("SetElementMemberBool", &UGFxObject::SetElementMemberBool)
        .def("SetElementMemberObject", &UGFxObject::SetElementMemberObject)
        .def("SetElementMember", &UGFxObject::SetElementMember)
        .def("GetElementMemberString", &UGFxObject::GetElementMemberString)
        .def("GetElementMemberFloat", &UGFxObject::GetElementMemberFloat)
        .def("GetElementMemberBool", &UGFxObject::GetElementMemberBool)
        .def("GetElementMemberObject", &UGFxObject::GetElementMemberObject, py::return_value_policy::reference)
        .def("GetElementMember", &UGFxObject::GetElementMember)
        .def("SetElementColorTransform", &UGFxObject::SetElementColorTransform)
        .def("SetElementPosition", &UGFxObject::SetElementPosition)
        .def("SetElementVisible", &UGFxObject::SetElementVisible)
        .def("SetElementDisplayMatrix", &UGFxObject::SetElementDisplayMatrix)
        .def("SetElementDisplayInfo", &UGFxObject::SetElementDisplayInfo)
        .def("GetElementDisplayMatrix", &UGFxObject::GetElementDisplayMatrix)
        .def("GetElementDisplayInfo", &UGFxObject::GetElementDisplayInfo)
        .def("SetElementString", &UGFxObject::SetElementString)
        .def("SetElementFloat", &UGFxObject::SetElementFloat)
        .def("SetElementBool", &UGFxObject::SetElementBool)
        .def("SetElementObject", &UGFxObject::SetElementObject)
        .def("SetElement", &UGFxObject::SetElement)
        .def("GetElementString", &UGFxObject::GetElementString)
        .def("GetElementFloat", &UGFxObject::GetElementFloat)
        .def("GetElementBool", &UGFxObject::GetElementBool)
        .def("GetElementObject", &UGFxObject::GetElementObject, py::return_value_policy::reference)
        .def("GetElement", &UGFxObject::GetElement)
        .def("SetText", &UGFxObject::SetText)
        .def("GetText", &UGFxObject::GetText)
        .def("SetVisible", &UGFxObject::SetVisible)
        .def("SetDisplayMatrix3D", &UGFxObject::SetDisplayMatrix3D)
        .def("SetDisplayMatrix", &UGFxObject::SetDisplayMatrix)
        .def("SetColorTransform", &UGFxObject::SetColorTransform)
        .def("SetPosition", &UGFxObject::SetPosition)
        .def("SetDisplayInfo", &UGFxObject::SetDisplayInfo)
        .def("GetDisplayMatrix", &UGFxObject::GetDisplayMatrix)
        .def("GetColorTransform", &UGFxObject::GetColorTransform)
        .def("GetPosition", &UGFxObject::GetPosition)
        .def("GetDisplayInfo", &UGFxObject::GetDisplayInfo)
        .def("TranslateString", &UGFxObject::TranslateString)
        .def("SetFunction", &UGFxObject::SetFunction)
        .def("SetObject", &UGFxObject::SetObject)
        .def("SetString", &UGFxObject::SetString)
        .def("SetFloat", &UGFxObject::SetFloat)
        .def("SetBool", &UGFxObject::SetBool)
        .def("Set", &UGFxObject::Set)
        .def("GetObject", &UGFxObject::GetObject, py::return_value_policy::reference)
        .def("GetString", &UGFxObject::GetString)
        .def("GetFloat", &UGFxObject::GetFloat)
        .def("GetBool", &UGFxObject::GetBool)
        .def("Get", &UGFxObject::Get)
          ;
}