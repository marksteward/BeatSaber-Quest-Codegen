// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerResponse
#include "MasterServer/IMasterServerResponse.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: BaseMasterServerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseMasterServerResponse : public ::Il2CppObject/*, public MasterServer::IMasterServerResponse*/ {
    public:
    // private System.UInt32 <responseId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint responseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: BaseMasterServerResponse
    BaseMasterServerResponse(uint responseId_ = {}) noexcept : responseId{responseId_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerResponse
    operator MasterServer::IMasterServerResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerResponse*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return responseId;
    }
    // public System.UInt32 get_responseId()
    // Offset: 0x12B95D8
    uint get_responseId();
    // private System.Void set_responseId(System.UInt32 value)
    // Offset: 0x12B95E0
    void set_responseId(uint value);
    // public System.Byte get_resultCode()
    // Offset: 0x12B95E8
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0x12B95F0
    ::Il2CppString* get_resultCodeString();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12B9390
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12B9400
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFF
    void Release();
    // private MasterServer.IMasterServerResponse MasterServer.IMasterServerResponse.WithResponseId(System.UInt32 responseId)
    // Offset: 0x12B9638
    MasterServer::IMasterServerResponse* MasterServer_IMasterServerResponse_WithResponseId(uint responseId);
    // protected System.Void .ctor()
    // Offset: 0x12B943C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseMasterServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerResponse*, creationType>()));
    }
  }; // BaseMasterServerResponse
  #pragma pack(pop)
  static check_size<sizeof(BaseMasterServerResponse), 16 + sizeof(uint)> __GlobalNamespace_BaseMasterServerResponseSizeCheck;
  static_assert(sizeof(BaseMasterServerResponse) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerResponse*, "", "BaseMasterServerResponse");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::get_responseId
// Il2CppName: get_responseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::BaseMasterServerResponse::*)()>(&GlobalNamespace::BaseMasterServerResponse::get_responseId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "get_responseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::set_responseId
// Il2CppName: set_responseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerResponse::*)(uint)>(&GlobalNamespace::BaseMasterServerResponse::set_responseId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "set_responseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::BaseMasterServerResponse::*)()>(&GlobalNamespace::BaseMasterServerResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BaseMasterServerResponse::*)()>(&GlobalNamespace::BaseMasterServerResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerResponse::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BaseMasterServerResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerResponse::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BaseMasterServerResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerResponse::*)()>(&GlobalNamespace::BaseMasterServerResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::MasterServer_IMasterServerResponse_WithResponseId
// Il2CppName: MasterServer.IMasterServerResponse.WithResponseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::IMasterServerResponse* (GlobalNamespace::BaseMasterServerResponse::*)(uint)>(&GlobalNamespace::BaseMasterServerResponse::MasterServer_IMasterServerResponse_WithResponseId)> {
  static const MethodInfo* get() {
    static auto* responseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerResponse*), "MasterServer.IMasterServerResponse.WithResponseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
