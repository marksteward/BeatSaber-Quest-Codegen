// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.CIELabColor
#include "UnityEngine/ProBuilder/CIELabColor.hpp"
// Including type: UnityEngine.ProBuilder.XYZColor
#include "UnityEngine/ProBuilder/XYZColor.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.CIELabColor..ctor
UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::New_ctor(float L, float a, float b) {
  return THROW_UNLESS(il2cpp_utils::New<CIELabColor*>(L, a, b));
}
// Autogenerated method: UnityEngine.ProBuilder.CIELabColor.FromXYZ
UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::FromXYZ(UnityEngine::ProBuilder::XYZColor* xyz) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::CIELabColor*>("UnityEngine.ProBuilder", "CIELabColor", "FromXYZ", xyz));
}
// Autogenerated method: UnityEngine.ProBuilder.CIELabColor.FromRGB
UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::FromRGB(UnityEngine::Color col) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::CIELabColor*>("UnityEngine.ProBuilder", "CIELabColor", "FromRGB", col));
}
// Autogenerated method: UnityEngine.ProBuilder.CIELabColor.ToString
::Il2CppString* UnityEngine::ProBuilder::CIELabColor::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
