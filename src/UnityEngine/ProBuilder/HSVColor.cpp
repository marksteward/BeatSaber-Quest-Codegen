// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.HSVColor
#include "UnityEngine/ProBuilder/HSVColor.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.HSVColor..ctor
UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::New_ctor(float h, float s, float v) {
  return THROW_UNLESS(il2cpp_utils::New<HSVColor*>(h, s, v));
}
// Autogenerated method: UnityEngine.ProBuilder.HSVColor..ctor
UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::New_ctor(float h, float s, float v, float sv_modifier) {
  return THROW_UNLESS(il2cpp_utils::New<HSVColor*>(h, s, v, sv_modifier));
}
// Autogenerated method: UnityEngine.ProBuilder.HSVColor.FromRGB
UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::FromRGB(UnityEngine::Color col) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::HSVColor*>("UnityEngine.ProBuilder", "HSVColor", "FromRGB", col));
}
// Autogenerated method: UnityEngine.ProBuilder.HSVColor.SqrDistance
float UnityEngine::ProBuilder::HSVColor::SqrDistance(UnityEngine::ProBuilder::HSVColor* InColor) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "SqrDistance", InColor));
}
// Autogenerated method: UnityEngine.ProBuilder.HSVColor.ToString
::Il2CppString* UnityEngine::ProBuilder::HSVColor::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
