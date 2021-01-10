// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x50
  // Autogenerated type: System.Runtime.Remoting.ClientIdentity
  // [] Offset: FFFFFFFF
  class ClientIdentity : public System::Runtime::Remoting::Identity {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // private System.WeakReference _proxyReference
    // Size: 0x8
    // Offset: 0x48
    System::WeakReference* proxyReference;
    // Field size check
    static_assert(sizeof(System::WeakReference*) == 0x8);
    // Creating value type constructor for type: ClientIdentity
    ClientIdentity(System::WeakReference* proxyReference_ = {}) noexcept : proxyReference{proxyReference_} {}
    // Creating conversion operator: operator System::WeakReference*
    constexpr operator System::WeakReference*() const noexcept {
      return proxyReference;
    }
    // public System.Void .ctor(System.String objectUri, System.Runtime.Remoting.ObjRef objRef)
    // Offset: 0x116E818
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientIdentity* New_ctor(::Il2CppString* objectUri, System::Runtime::Remoting::ObjRef* objRef) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ClientIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientIdentity*, creationType>(objectUri, objRef)));
    }
    // public System.MarshalByRefObject get_ClientProxy()
    // Offset: 0x116E990
    System::MarshalByRefObject* get_ClientProxy();
    // public System.Void set_ClientProxy(System.MarshalByRefObject value)
    // Offset: 0x116EA24
    void set_ClientProxy(System::MarshalByRefObject* value);
    // public System.String get_TargetUri()
    // Offset: 0x116EAA4
    ::Il2CppString* get_TargetUri();
    // public override System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0x116EA9C
    // Implemented from: System.Runtime.Remoting.Identity
    // Base method: System.Runtime.Remoting.ObjRef Identity::CreateObjRef(System.Type requestedType)
    System::Runtime::Remoting::ObjRef* CreateObjRef(System::Type* requestedType);
  }; // System.Runtime.Remoting.ClientIdentity
  static check_size<sizeof(ClientIdentity), 72 + sizeof(System::WeakReference*)> __System_Runtime_Remoting_ClientIdentitySizeCheck;
  static_assert(sizeof(ClientIdentity) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ClientIdentity*, "System.Runtime.Remoting", "ClientIdentity");
#pragma pack(pop)
