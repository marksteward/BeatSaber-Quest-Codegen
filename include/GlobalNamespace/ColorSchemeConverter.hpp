// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorSchemeNetSerializable
  struct ColorSchemeNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSchemeConverter : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ColorSchemeConverter
    ColorSchemeConverter() noexcept {}
    // static public ColorScheme FromNetSerializable(ColorSchemeNetSerializable serialized)
    // Offset: 0x107DD84
    static GlobalNamespace::ColorScheme* FromNetSerializable(GlobalNamespace::ColorSchemeNetSerializable serialized);
  }; // ColorSchemeConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeConverter*, "", "ColorSchemeConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeConverter::FromNetSerializable
// Il2CppName: FromNetSerializable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorScheme* (*)(GlobalNamespace::ColorSchemeNetSerializable)>(&GlobalNamespace::ColorSchemeConverter::FromNetSerializable)> {
  static const MethodInfo* get() {
    static auto* serialized = &::il2cpp_utils::GetClassFromName("", "ColorSchemeNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeConverter*), "FromNetSerializable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serialized});
  }
};
