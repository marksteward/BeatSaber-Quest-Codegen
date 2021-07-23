// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.InitializeData
  // [TokenAttribute] Offset: FFFFFFFF
  struct InitializeData/*, public System::ValueType*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xDEDB68
    // private System.Boolean <InitializeSuccessful>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool InitializeSuccessful;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InitializeSuccessful and: InitializeCode
    char __padding0[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xDEDBA4
    // private System.Int32 <InitializeCode>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int InitializeCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InitializeData
    constexpr InitializeData(bool InitializeSuccessful_ = {}, int InitializeCode_ = {}) noexcept : InitializeSuccessful{InitializeSuccessful_}, InitializeCode{InitializeCode_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.Boolean <InitializeSuccessful>k__BackingField
    bool _get_$InitializeSuccessful$k__BackingField();
    // Set instance field: private System.Boolean <InitializeSuccessful>k__BackingField
    void _set_$InitializeSuccessful$k__BackingField(bool value);
    // Get instance field: private System.Int32 <InitializeCode>k__BackingField
    int _get_$InitializeCode$k__BackingField();
    // Set instance field: private System.Int32 <InitializeCode>k__BackingField
    void _set_$InitializeCode$k__BackingField(int value);
    // public System.Boolean get_InitializeSuccessful()
    // Offset: 0xF0F94C
    bool get_InitializeSuccessful();
    // public System.Void set_InitializeSuccessful(System.Boolean value)
    // Offset: 0xF0F954
    void set_InitializeSuccessful(bool value);
    // public System.Void set_InitializeCode(System.Int32 value)
    // Offset: 0xF0F960
    void set_InitializeCode(int value);
  }; // NetEase.Docker.InitializeData
  #pragma pack(pop)
  static check_size<sizeof(InitializeData), 4 + sizeof(int)> __NetEase_Docker_InitializeDataSizeCheck;
  static_assert(sizeof(InitializeData) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::InitializeData, "NetEase.Docker", "InitializeData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NetEase::Docker::InitializeData::get_InitializeSuccessful
// Il2CppName: get_InitializeSuccessful
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NetEase::Docker::InitializeData::*)()>(&NetEase::Docker::InitializeData::get_InitializeSuccessful)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::InitializeData), "get_InitializeSuccessful", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::InitializeData::set_InitializeSuccessful
// Il2CppName: set_InitializeSuccessful
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::InitializeData::*)(bool)>(&NetEase::Docker::InitializeData::set_InitializeSuccessful)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::InitializeData), "set_InitializeSuccessful", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::InitializeData::set_InitializeCode
// Il2CppName: set_InitializeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::InitializeData::*)(int)>(&NetEase::Docker::InitializeData::set_InitializeCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::InitializeData), "set_InitializeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
