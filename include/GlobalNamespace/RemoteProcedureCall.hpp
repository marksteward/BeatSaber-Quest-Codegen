// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRemoteProcedureCall
#include "GlobalNamespace/IRemoteProcedureCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: RemoteProcedureCall
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteProcedureCall : public ::Il2CppObject/*, public GlobalNamespace::IRemoteProcedureCall*/ {
    public:
    // Nested type: GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T>
    template<typename T>
    struct TypeWrapper_1;
    // private System.Single <syncTime>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float syncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RemoteProcedureCall
    RemoteProcedureCall(float syncTime_ = {}) noexcept : syncTime{syncTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRemoteProcedureCall
    operator GlobalNamespace::IRemoteProcedureCall() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRemoteProcedureCall*>(this);
    }
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return syncTime;
    }
    // Get instance field: private System.Single <syncTime>k__BackingField
    float _get_$syncTime$k__BackingField();
    // Set instance field: private System.Single <syncTime>k__BackingField
    void _set_$syncTime$k__BackingField(float value);
    // public System.Single get_syncTime()
    // Offset: 0x230DDFC
    float get_syncTime();
    // public System.Void set_syncTime(System.Single value)
    // Offset: 0x230DE04
    void set_syncTime(float value);
    // protected System.Void SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x230DE0C
    void SerializeData(LiteNetLib::Utils::NetDataWriter* writer);
    // protected System.Void DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x230DE10
    void DeserializeData(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x230DE14
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x230DE5C
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x230DEA4
    void Release();
    // public IRemoteProcedureCall Init(System.Single syncTime)
    // Offset: 0x230DFC4
    GlobalNamespace::IRemoteProcedureCall* Init(float syncTime);
    // protected System.Void .ctor()
    // Offset: 0x230DFCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteProcedureCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteProcedureCall*, creationType>()));
    }
  }; // RemoteProcedureCall
  #pragma pack(pop)
  static check_size<sizeof(RemoteProcedureCall), 16 + sizeof(float)> __GlobalNamespace_RemoteProcedureCallSizeCheck;
  static_assert(sizeof(RemoteProcedureCall) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RemoteProcedureCall*, "", "RemoteProcedureCall");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::get_syncTime
// Il2CppName: get_syncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RemoteProcedureCall::*)()>(&GlobalNamespace::RemoteProcedureCall::get_syncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "get_syncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::set_syncTime
// Il2CppName: set_syncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(float)>(&GlobalNamespace::RemoteProcedureCall::set_syncTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "set_syncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::SerializeData
// Il2CppName: SerializeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::RemoteProcedureCall::SerializeData)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "SerializeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::DeserializeData
// Il2CppName: DeserializeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::RemoteProcedureCall::DeserializeData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "DeserializeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "LiteNetLib.Utils.INetSerializable.Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize
// Il2CppName: LiteNetLib.Utils.INetSerializable.Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "LiteNetLib.Utils.INetSerializable.Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)()>(&GlobalNamespace::RemoteProcedureCall::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IRemoteProcedureCall* (GlobalNamespace::RemoteProcedureCall::*)(float)>(&GlobalNamespace::RemoteProcedureCall::Init)> {
  static const MethodInfo* get() {
    static auto* syncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteProcedureCall*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteProcedureCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
