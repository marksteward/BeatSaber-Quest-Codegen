// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ProBuilder.RectSelectMode
#include "UnityEngine/ProBuilder/RectSelectMode.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.PickerOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct PickerOptions/*, public System::ValueType*/ {
    public:
    // private System.Boolean <depthTest>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool depthTest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: depthTest and: rectSelectMode
    char __padding0[0x3] = {};
    // private UnityEngine.ProBuilder.RectSelectMode <rectSelectMode>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    UnityEngine::ProBuilder::RectSelectMode rectSelectMode;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::RectSelectMode) == 0x4);
    // Creating value type constructor for type: PickerOptions
    constexpr PickerOptions(bool depthTest_ = {}, UnityEngine::ProBuilder::RectSelectMode rectSelectMode_ = {}) noexcept : depthTest{depthTest_}, rectSelectMode{rectSelectMode_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private readonly UnityEngine.ProBuilder.PickerOptions k_Default
    static UnityEngine::ProBuilder::PickerOptions _get_k_Default();
    // Set static field: static private readonly UnityEngine.ProBuilder.PickerOptions k_Default
    static void _set_k_Default(UnityEngine::ProBuilder::PickerOptions value);
    // public System.Boolean get_depthTest()
    // Offset: 0xEE49F4
    bool get_depthTest();
    // public System.Void set_depthTest(System.Boolean value)
    // Offset: 0xEE49FC
    void set_depthTest(bool value);
    // public UnityEngine.ProBuilder.RectSelectMode get_rectSelectMode()
    // Offset: 0xEE4A08
    UnityEngine::ProBuilder::RectSelectMode get_rectSelectMode();
    // public System.Void set_rectSelectMode(UnityEngine.ProBuilder.RectSelectMode value)
    // Offset: 0xEE4A10
    void set_rectSelectMode(UnityEngine::ProBuilder::RectSelectMode value);
    // static public UnityEngine.ProBuilder.PickerOptions get_Default()
    // Offset: 0x1704764
    static UnityEngine::ProBuilder::PickerOptions get_Default();
    // static private System.Void .cctor()
    // Offset: 0x1704954
    static void _cctor();
    // public System.Boolean Equals(UnityEngine.ProBuilder.PickerOptions other)
    // Offset: 0xEE4A20
    bool Equals(UnityEngine::ProBuilder::PickerOptions other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEE4A18
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEE4A58
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.PickerOptions
  #pragma pack(pop)
  static check_size<sizeof(PickerOptions), 4 + sizeof(UnityEngine::ProBuilder::RectSelectMode)> __UnityEngine_ProBuilder_PickerOptionsSizeCheck;
  static_assert(sizeof(PickerOptions) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.PickerOptions a, UnityEngine.ProBuilder.PickerOptions b)
  // Offset: 0x17048EC
  bool operator ==(const UnityEngine::ProBuilder::PickerOptions& a, const UnityEngine::ProBuilder::PickerOptions& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.PickerOptions a, UnityEngine.ProBuilder.PickerOptions b)
  // Offset: 0x1704920
  bool operator !=(const UnityEngine::ProBuilder::PickerOptions& a, const UnityEngine::ProBuilder::PickerOptions& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PickerOptions, "UnityEngine.ProBuilder", "PickerOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::get_depthTest
// Il2CppName: get_depthTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::PickerOptions::*)()>(&UnityEngine::ProBuilder::PickerOptions::get_depthTest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "get_depthTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::set_depthTest
// Il2CppName: set_depthTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PickerOptions::*)(bool)>(&UnityEngine::ProBuilder::PickerOptions::set_depthTest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "set_depthTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::get_rectSelectMode
// Il2CppName: get_rectSelectMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::RectSelectMode (UnityEngine::ProBuilder::PickerOptions::*)()>(&UnityEngine::ProBuilder::PickerOptions::get_rectSelectMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "get_rectSelectMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::set_rectSelectMode
// Il2CppName: set_rectSelectMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PickerOptions::*)(UnityEngine::ProBuilder::RectSelectMode)>(&UnityEngine::ProBuilder::PickerOptions::set_rectSelectMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "RectSelectMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "set_rectSelectMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::PickerOptions (*)()>(&UnityEngine::ProBuilder::PickerOptions::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::PickerOptions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::PickerOptions::*)(UnityEngine::ProBuilder::PickerOptions)>(&UnityEngine::ProBuilder::PickerOptions::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "PickerOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::PickerOptions::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::PickerOptions::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::PickerOptions::*)()>(&UnityEngine::ProBuilder::PickerOptions::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PickerOptions), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PickerOptions::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
