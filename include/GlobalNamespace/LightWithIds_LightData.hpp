// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
// Including type: ILightWithId
#include "GlobalNamespace/ILightWithId.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: LightWithIds/LightData
  class LightWithIds::LightData : public ::Il2CppObject/*, public GlobalNamespace::ILightWithId*/ {
    public:
    // private System.Int32 _lightId
    // Size: 0x4
    // Offset: 0x10
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x14
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _isRegistered
    // Size: 0x1
    // Offset: 0x24
    bool isRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LightData
    LightData(int lightId_ = {}, UnityEngine::Color color_ = {}, bool isRegistered_ = {}) noexcept : lightId{lightId_}, color{color_}, isRegistered{isRegistered_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILightWithId
    operator GlobalNamespace::ILightWithId() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILightWithId*>(this);
    }
    // public System.Int32 get_lightId()
    // Offset: 0x1D8DABC
    int get_lightId();
    // public UnityEngine.Color get_color()
    // Offset: 0x1D8DAC4
    UnityEngine::Color get_color();
    // public System.Boolean get_isRegistered()
    // Offset: 0x1D8DAD0
    bool get_isRegistered();
    // public System.Void __SetIsRegistered()
    // Offset: 0x1D8DAD8
    void __SetIsRegistered();
    // public System.Void __SetIsUnRegistered()
    // Offset: 0x1D8DAE4
    void __SetIsUnRegistered();
    // public System.Void ColorWasSet(UnityEngine.Color newColor)
    // Offset: 0x1D8DAEC
    void ColorWasSet(UnityEngine::Color newColor);
    // protected UnityEngine.Color ProcessColor(UnityEngine.Color newColor)
    // Offset: 0xFFFFFFFF
    UnityEngine::Color ProcessColor(UnityEngine::Color newColor);
    // protected System.Void .ctor()
    // Offset: 0x1D8DB1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIds::LightData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightWithIds::LightData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIds::LightData*, creationType>()));
    }
  }; // LightWithIds/LightData
  #pragma pack(pop)
  static check_size<sizeof(LightWithIds::LightData), 36 + sizeof(bool)> __GlobalNamespace_LightWithIds_LightDataSizeCheck;
  static_assert(sizeof(LightWithIds::LightData) == 0x25);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIds::LightData*, "", "LightWithIds/LightData");
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::get_lightId
// Il2CppName: get_lightId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightWithIds::LightData::*)()>(&GlobalNamespace::LightWithIds::LightData::get_lightId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightData*), "get_lightId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightWithIds::LightData::*)()>(&GlobalNamespace::LightWithIds::LightData::get_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightData*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::get_isRegistered
// Il2CppName: get_isRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightWithIds::LightData::*)()>(&GlobalNamespace::LightWithIds::LightData::get_isRegistered)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightData*), "get_isRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::__SetIsRegistered
// Il2CppName: __SetIsRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::LightData::*)()>(&GlobalNamespace::LightWithIds::LightData::__SetIsRegistered)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightData*), "__SetIsRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::__SetIsUnRegistered
// Il2CppName: __SetIsUnRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::LightData::*)()>(&GlobalNamespace::LightWithIds::LightData::__SetIsUnRegistered)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightData*), "__SetIsUnRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::LightData::*)(UnityEngine::Color)>(&GlobalNamespace::LightWithIds::LightData::ColorWasSet)> {
  const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightData*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::ProcessColor
// Il2CppName: ProcessColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightWithIds::LightData::*)(UnityEngine::Color)>(&GlobalNamespace::LightWithIds::LightData::ProcessColor)> {
  const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds::LightData*), "ProcessColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::LightData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
