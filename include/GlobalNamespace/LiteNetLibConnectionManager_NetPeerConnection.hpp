// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: IConnection
#include "GlobalNamespace/IConnection.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/NetPeerConnection
  class LiteNetLibConnectionManager::NetPeerConnection : public ::Il2CppObject/*, public GlobalNamespace::IConnection, public System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>*/ {
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
    // Padding between fields: isConnectionOwner and: netPeer
    char __padding2[0x7] = {};
    // public readonly LiteNetLib.NetPeer netPeer
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::NetPeer* netPeer;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPeer*) == 0x8);
    // Creating value type constructor for type: NetPeerConnection
    NetPeerConnection(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isConnectionOwner_ = {}, LiteNetLib::NetPeer* netPeer_ = {}) noexcept : userId{userId_}, userName{userName_}, isConnectionOwner{isConnectionOwner_}, netPeer{netPeer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnection
    operator GlobalNamespace::IConnection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnection*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>
    operator System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>*>(this);
    }
    // public System.String get_userId()
    // Offset: 0x1332F9C
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x1332FA4
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x1332FAC
    bool get_isConnectionOwner();
    // public System.Void .ctor(LiteNetLib.NetPeer netPeer, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x1332468
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::NetPeerConnection* New_ctor(LiteNetLib::NetPeer* netPeer, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::NetPeerConnection*, creationType>(netPeer, userId, userName, isConnectionOwner)));
    }
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1332FB4
    void Send(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Boolean Equals(LiteNetLibConnectionManager/NetPeerConnection other)
    // Offset: 0x1332FD0
    bool Equals(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* other);
    // public System.Void Disconnect()
    // Offset: 0x1331A84
    void Disconnect();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1332FFC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1333118
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // LiteNetLibConnectionManager/NetPeerConnection
  #pragma pack(pop)
  static check_size<sizeof(LiteNetLibConnectionManager::NetPeerConnection), 40 + sizeof(LiteNetLib::NetPeer*)> __GlobalNamespace_LiteNetLibConnectionManager_NetPeerConnectionSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::NetPeerConnection) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*, "", "LiteNetLibConnectionManager/NetPeerConnection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_isConnectionOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)(LiteNetLib::Utils::NetDataWriter*, LiteNetLib::DeliveryMethod)>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Send)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* deliveryMethod = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DeliveryMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, deliveryMethod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*)>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "LiteNetLibConnectionManager/NetPeerConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)(::Il2CppObject*)>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::*)()>(&GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
