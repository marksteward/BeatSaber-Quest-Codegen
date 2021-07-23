// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MenuLightsPresetSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuLightsPresetSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::MenuLightsPresetSO::LightIdColorPair
    class LightIdColorPair;
    // private ColorSO _playersPlaceNeonsColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* playersPlaceNeonsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // [RangeAttribute] Offset: 0xE0190C
    // private System.Single _playersPlaceNeonsIntensity
    // Size: 0x4
    // Offset: 0x20
    float playersPlaceNeonsIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: playersPlaceNeonsIntensity and: lightIdColorPairs
    char __padding1[0x4] = {};
    // private MenuLightsPresetSO/LightIdColorPair[] _lightIdColorPairs
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* lightIdColorPairs;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>*) == 0x8);
    // Creating value type constructor for type: MenuLightsPresetSO
    MenuLightsPresetSO(GlobalNamespace::ColorSO* playersPlaceNeonsColor_ = {}, float playersPlaceNeonsIntensity_ = {}, ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* lightIdColorPairs_ = {}) noexcept : playersPlaceNeonsColor{playersPlaceNeonsColor_}, playersPlaceNeonsIntensity{playersPlaceNeonsIntensity_}, lightIdColorPairs{lightIdColorPairs_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private ColorSO _playersPlaceNeonsColor
    GlobalNamespace::ColorSO* _get__playersPlaceNeonsColor();
    // Set instance field: private ColorSO _playersPlaceNeonsColor
    void _set__playersPlaceNeonsColor(GlobalNamespace::ColorSO* value);
    // Get instance field: private System.Single _playersPlaceNeonsIntensity
    float _get__playersPlaceNeonsIntensity();
    // Set instance field: private System.Single _playersPlaceNeonsIntensity
    void _set__playersPlaceNeonsIntensity(float value);
    // Get instance field: private MenuLightsPresetSO/LightIdColorPair[] _lightIdColorPairs
    ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* _get__lightIdColorPairs();
    // Set instance field: private MenuLightsPresetSO/LightIdColorPair[] _lightIdColorPairs
    void _set__lightIdColorPairs(::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* value);
    // public ColorSO get_playersPlaceNeonsColor()
    // Offset: 0x118065C
    GlobalNamespace::ColorSO* get_playersPlaceNeonsColor();
    // public System.Single get_playersPlaceNeonsIntensity()
    // Offset: 0x1180664
    float get_playersPlaceNeonsIntensity();
    // public MenuLightsPresetSO/LightIdColorPair[] get_lightIdColorPairs()
    // Offset: 0x118066C
    ::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* get_lightIdColorPairs();
    // public System.Void .ctor()
    // Offset: 0x1180674
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuLightsPresetSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuLightsPresetSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuLightsPresetSO*, creationType>()));
    }
  }; // MenuLightsPresetSO
  #pragma pack(pop)
  static check_size<sizeof(MenuLightsPresetSO), 40 + sizeof(::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>*)> __GlobalNamespace_MenuLightsPresetSOSizeCheck;
  static_assert(sizeof(MenuLightsPresetSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsPresetSO*, "", "MenuLightsPresetSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsColor
// Il2CppName: get_playersPlaceNeonsColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSO* (GlobalNamespace::MenuLightsPresetSO::*)()>(&GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsPresetSO*), "get_playersPlaceNeonsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsIntensity
// Il2CppName: get_playersPlaceNeonsIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MenuLightsPresetSO::*)()>(&GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsPresetSO*), "get_playersPlaceNeonsIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs
// Il2CppName: get_lightIdColorPairs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::MenuLightsPresetSO::LightIdColorPair*>* (GlobalNamespace::MenuLightsPresetSO::*)()>(&GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuLightsPresetSO*), "get_lightIdColorPairs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuLightsPresetSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
