// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusConnectionManager
#include "GlobalNamespace/OculusConnectionManager.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: OculusConnectionManager/OculusConnection
  class OculusConnectionManager::OculusConnection : public ::Il2CppObject/*, public GlobalNamespace::IConnection, public System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>*/ {
    public:
    // Nested type: GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // private readonly System.UInt64 _id
    // Size: 0x8
    // Offset: 0x10
    uint64_t id;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x28
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OculusConnection
    OculusConnection(uint64_t id_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isConnectionOwner_ = {}) noexcept : id{id_}, userId{userId_}, userName{userName_}, isConnectionOwner{isConnectionOwner_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnection
    operator GlobalNamespace::IConnection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnection*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>
    operator System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>*>(this);
    }
    // public System.UInt64 get_id()
    // Offset: 0x11E4F5C
    uint64_t get_id();
    // public System.String get_userId()
    // Offset: 0x11E4F64
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x11E4F6C
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x11E4F74
    bool get_isConnectionOwner();
    // public System.Void .ctor(System.UInt64 id, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x11E4F7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusConnectionManager::OculusConnection* New_ctor(uint64_t id, ::Il2CppString* userName, bool isConnectionOwner) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusConnectionManager::OculusConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusConnectionManager::OculusConnection*, creationType>(id, userName, isConnectionOwner)));
    }
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x11E503C
    void Send(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void Disconnect()
    // Offset: 0x11E51A0
    void Disconnect();
    // public System.Void Ping(System.Action`2<OculusConnectionManager/OculusConnection,System.Single> onPingResult)
    // Offset: 0x11E51AC
    void Ping(System::Action_2<GlobalNamespace::OculusConnectionManager::OculusConnection*, float>* onPingResult);
    // public System.Boolean Equals(OculusConnectionManager/OculusConnection other)
    // Offset: 0x11E5288
    bool Equals(GlobalNamespace::OculusConnectionManager::OculusConnection* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11E52B8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11E53CC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x11E53F8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // OculusConnectionManager/OculusConnection
  #pragma pack(pop)
  static check_size<sizeof(OculusConnectionManager::OculusConnection), 40 + sizeof(bool)> __GlobalNamespace_OculusConnectionManager_OculusConnectionSizeCheck;
  static_assert(sizeof(OculusConnectionManager::OculusConnection) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusConnectionManager::OculusConnection*, "", "OculusConnectionManager/OculusConnection");
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::OculusConnectionManager::OculusConnection::*)()>(&GlobalNamespace::OculusConnectionManager::OculusConnection::get_id)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusConnectionManager::OculusConnection::*)()>(&GlobalNamespace::OculusConnectionManager::OculusConnection::get_userId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusConnectionManager::OculusConnection::*)()>(&GlobalNamespace::OculusConnectionManager::OculusConnection::get_userName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::get_isConnectionOwner
// Il2CppName: get_isConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusConnectionManager::OculusConnection::*)()>(&GlobalNamespace::OculusConnectionManager::OculusConnection::get_isConnectionOwner)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "get_isConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusConnectionManager::OculusConnection::*)(LiteNetLib::Utils::NetDataWriter*, LiteNetLib::DeliveryMethod)>(&GlobalNamespace::OculusConnectionManager::OculusConnection::Send)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* deliveryMethod = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DeliveryMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, deliveryMethod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusConnectionManager::OculusConnection::*)()>(&GlobalNamespace::OculusConnectionManager::OculusConnection::Disconnect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::Ping
// Il2CppName: Ping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusConnectionManager::OculusConnection::*)(System::Action_2<GlobalNamespace::OculusConnectionManager::OculusConnection*, float>*)>(&GlobalNamespace::OculusConnectionManager::OculusConnection::Ping)> {
  const MethodInfo* get() {
    static auto* onPingResult = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OculusConnectionManager/OculusConnection"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "Ping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onPingResult});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusConnectionManager::OculusConnection::*)(GlobalNamespace::OculusConnectionManager::OculusConnection*)>(&GlobalNamespace::OculusConnectionManager::OculusConnection::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "OculusConnectionManager/OculusConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusConnectionManager::OculusConnection::*)(::Il2CppObject*)>(&GlobalNamespace::OculusConnectionManager::OculusConnection::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OculusConnectionManager::OculusConnection::*)()>(&GlobalNamespace::OculusConnectionManager::OculusConnection::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusConnectionManager::OculusConnection::*)()>(&GlobalNamespace::OculusConnectionManager::OculusConnection::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
