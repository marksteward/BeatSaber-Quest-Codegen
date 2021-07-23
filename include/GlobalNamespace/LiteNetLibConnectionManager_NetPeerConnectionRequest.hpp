// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/NetPeerConnectionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::NetPeerConnectionRequest : public ::Il2CppObject {
    public:
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x20
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnectionOwner and: request
    char __padding2[0x7] = {};
    // private readonly LiteNetLib.ConnectionRequest _request
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::ConnectionRequest* request;
    // Field size check
    static_assert(sizeof(LiteNetLib::ConnectionRequest*) == 0x8);
    // Creating value type constructor for type: NetPeerConnectionRequest
    NetPeerConnectionRequest(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isConnectionOwner_ = {}, LiteNetLib::ConnectionRequest* request_ = {}) noexcept : userId{userId_}, userName{userName_}, isConnectionOwner{isConnectionOwner_}, request{request_} {}
    // Get instance field: private readonly System.String _userId
    ::Il2CppString* _get__userId();
    // Set instance field: private readonly System.String _userId
    void _set__userId(::Il2CppString* value);
    // Get instance field: private readonly System.String _userName
    ::Il2CppString* _get__userName();
    // Set instance field: private readonly System.String _userName
    void _set__userName(::Il2CppString* value);
    // Get instance field: private readonly System.Boolean _isConnectionOwner
    bool _get__isConnectionOwner();
    // Set instance field: private readonly System.Boolean _isConnectionOwner
    void _set__isConnectionOwner(bool value);
    // Get instance field: private readonly LiteNetLib.ConnectionRequest _request
    LiteNetLib::ConnectionRequest* _get__request();
    // Set instance field: private readonly LiteNetLib.ConnectionRequest _request
    void _set__request(LiteNetLib::ConnectionRequest* value);
    // public System.String get_userId()
    // Offset: 0x12CABF0
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x12CABF8
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x12CAC00
    bool get_isConnectionOwner();
    // public System.Net.IPEndPoint get_endPoint()
    // Offset: 0x12CAC08
    System::Net::IPEndPoint* get_endPoint();
    // public System.Void .ctor(LiteNetLib.ConnectionRequest request, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x12C9ECC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::NetPeerConnectionRequest* New_ctor(LiteNetLib::ConnectionRequest* request, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::NetPeerConnectionRequest*, creationType>(request, userId, userName, isConnectionOwner)));
    }
    // public LiteNetLib.NetPeer Accept()
    // Offset: 0x12C9EB0
    LiteNetLib::NetPeer* Accept();
  }; // LiteNetLibConnectionManager/NetPeerConnectionRequest
  #pragma pack(pop)
  static check_size<sizeof(LiteNetLibConnectionManager::NetPeerConnectionRequest), 40 + sizeof(LiteNetLib::ConnectionRequest*)> __GlobalNamespace_LiteNetLibConnectionManager_NetPeerConnectionRequestSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::NetPeerConnectionRequest) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*, "", "LiteNetLibConnectionManager/NetPeerConnectionRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_isConnectionOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_endPoint
// Il2CppName: get_endPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::get_endPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "get_endPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPeer* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest::Accept)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnectionRequest*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
