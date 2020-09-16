// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Xft.Spline
#include "Xft/Spline.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Xft.SplineControlPoint
#include "Xft/SplineControlPoint.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Xft.Spline.get_Item
Xft::SplineControlPoint* Xft::Spline::get_Item(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Xft::SplineControlPoint*>(this, "get_Item", index));
}
// Autogenerated method: Xft.Spline.get_Segments
System::Collections::Generic::List_1<Xft::SplineControlPoint*>* Xft::Spline::get_Segments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<Xft::SplineControlPoint*>*>(this, "get_Segments"));
}
// Autogenerated method: Xft.Spline.get_ControlPoints
System::Collections::Generic::List_1<Xft::SplineControlPoint*>* Xft::Spline::get_ControlPoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<Xft::SplineControlPoint*>*>(this, "get_ControlPoints"));
}
// Autogenerated method: Xft.Spline.NextControlPoint
Xft::SplineControlPoint* Xft::Spline::NextControlPoint(Xft::SplineControlPoint* controlpoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Xft::SplineControlPoint*>(this, "NextControlPoint", controlpoint));
}
// Autogenerated method: Xft.Spline.PreviousControlPoint
Xft::SplineControlPoint* Xft::Spline::PreviousControlPoint(Xft::SplineControlPoint* controlpoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Xft::SplineControlPoint*>(this, "PreviousControlPoint", controlpoint));
}
// Autogenerated method: Xft.Spline.NextPosition
UnityEngine::Vector3 Xft::Spline::NextPosition(Xft::SplineControlPoint* controlpoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "NextPosition", controlpoint));
}
// Autogenerated method: Xft.Spline.PreviousPosition
UnityEngine::Vector3 Xft::Spline::PreviousPosition(Xft::SplineControlPoint* controlpoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "PreviousPosition", controlpoint));
}
// Autogenerated method: Xft.Spline.PreviousNormal
UnityEngine::Vector3 Xft::Spline::PreviousNormal(Xft::SplineControlPoint* controlpoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "PreviousNormal", controlpoint));
}
// Autogenerated method: Xft.Spline.NextNormal
UnityEngine::Vector3 Xft::Spline::NextNormal(Xft::SplineControlPoint* controlpoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "NextNormal", controlpoint));
}
// Autogenerated method: Xft.Spline.LenToSegment
Xft::SplineControlPoint* Xft::Spline::LenToSegment(float t, float& localF) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Xft::SplineControlPoint*>(this, "LenToSegment", t, localF));
}
// Autogenerated method: Xft.Spline.CatmulRom
UnityEngine::Vector3 Xft::Spline::CatmulRom(UnityEngine::Vector3 T0, UnityEngine::Vector3 P0, UnityEngine::Vector3 P1, UnityEngine::Vector3 T1, float f) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("Xft", "Spline", "CatmulRom", T0, P0, P1, T1, f));
}
// Autogenerated method: Xft.Spline.InterpolateByLen
UnityEngine::Vector3 Xft::Spline::InterpolateByLen(float tl) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "InterpolateByLen", tl));
}
// Autogenerated method: Xft.Spline.InterpolateNormalByLen
UnityEngine::Vector3 Xft::Spline::InterpolateNormalByLen(float tl) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "InterpolateNormalByLen", tl));
}
// Autogenerated method: Xft.Spline.AddControlPoint
Xft::SplineControlPoint* Xft::Spline::AddControlPoint(UnityEngine::Vector3 pos, UnityEngine::Vector3 up) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Xft::SplineControlPoint*>(this, "AddControlPoint", pos, up));
}
// Autogenerated method: Xft.Spline.Clear
void Xft::Spline::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: Xft.Spline.RefreshDistance
void Xft::Spline::RefreshDistance() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshDistance"));
}
// Autogenerated method: Xft.Spline.RefreshSpline
void Xft::Spline::RefreshSpline() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshSpline"));
}
// Autogenerated method: Xft.Spline..ctor
Xft::Spline* Xft::Spline::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Spline*>());
}
