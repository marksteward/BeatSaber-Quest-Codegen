// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.INatPunchListener
#include "LiteNetLib/INatPunchListener.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatAddressType
  struct NatAddressType;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNatPunchListener
  // [] Offset: FFFFFFFF
  class EventBasedNatPunchListener : public ::Il2CppObject/*, public LiteNetLib::INatPunchListener*/ {
    public:
    // Nested type: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest
    class OnNatIntroductionRequest;
    // Nested type: LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess
    class OnNatIntroductionSuccess;
    // [CompilerGeneratedAttribute] Offset: 0xD9B408
    // private LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest NatIntroductionRequest
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* NatIntroductionRequest;
    // Field size check
    static_assert(sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD9B418
    // private LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess NatIntroductionSuccess
    // Size: 0x8
    // Offset: 0x18
    LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* NatIntroductionSuccess;
    // Field size check
    static_assert(sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*) == 0x8);
    // Creating value type constructor for type: EventBasedNatPunchListener
    EventBasedNatPunchListener(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* NatIntroductionRequest_ = {}, LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* NatIntroductionSuccess_ = {}) noexcept : NatIntroductionRequest{NatIntroductionRequest_}, NatIntroductionSuccess{NatIntroductionSuccess_} {}
    // Creating interface conversion operator: operator LiteNetLib::INatPunchListener
    operator LiteNetLib::INatPunchListener() noexcept {
      return *reinterpret_cast<LiteNetLib::INatPunchListener*>(this);
    }
    // public System.Void add_NatIntroductionRequest(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest value)
    // Offset: 0x1DC03BC
    void add_NatIntroductionRequest(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* value);
    // public System.Void remove_NatIntroductionRequest(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest value)
    // Offset: 0x1DC0460
    void remove_NatIntroductionRequest(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* value);
    // public System.Void add_NatIntroductionSuccess(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess value)
    // Offset: 0x1DC0504
    void add_NatIntroductionSuccess(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* value);
    // public System.Void remove_NatIntroductionSuccess(LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess value)
    // Offset: 0x1DC05A8
    void remove_NatIntroductionSuccess(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* value);
    // private System.Void LiteNetLib.INatPunchListener.OnNatIntroductionRequest(System.Net.IPEndPoint localEndPoint, System.Net.IPEndPoint remoteEndPoint, System.String token)
    // Offset: 0x1DC064C
    // Implemented from: LiteNetLib.INatPunchListener
    // Base method: System.Void INatPunchListener::OnNatIntroductionRequest(System.Net.IPEndPoint localEndPoint, System.Net.IPEndPoint remoteEndPoint, System.String token)
    void LiteNetLib_INatPunchListener_OnNatIntroductionRequest(System::Net::IPEndPoint* localEndPoint, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* token);
    // private System.Void LiteNetLib.INatPunchListener.OnNatIntroductionSuccess(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token)
    // Offset: 0x1DC0A84
    // Implemented from: LiteNetLib.INatPunchListener
    // Base method: System.Void INatPunchListener::OnNatIntroductionSuccess(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token)
    void LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token);
    // public System.Void .ctor()
    // Offset: 0x1DC0EE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNatPunchListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNatPunchListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNatPunchListener*, creationType>()));
    }
  }; // LiteNetLib.EventBasedNatPunchListener
  static check_size<sizeof(EventBasedNatPunchListener), 24 + sizeof(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*)> __LiteNetLib_EventBasedNatPunchListenerSizeCheck;
  static_assert(sizeof(EventBasedNatPunchListener) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNatPunchListener*, "LiteNetLib", "EventBasedNatPunchListener");
