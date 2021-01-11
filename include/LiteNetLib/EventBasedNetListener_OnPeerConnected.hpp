// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnPeerConnected
  // [] Offset: FFFFFFFF
  class EventBasedNetListener::OnPeerConnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnPeerConnected
    OnPeerConnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1DC3F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnPeerConnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnPeerConnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnPeerConnected*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.NetPeer peer)
    // Offset: 0x1DC1AAC
    void Invoke(LiteNetLib::NetPeer* peer);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1DC3F20
    System::IAsyncResult* BeginInvoke(LiteNetLib::NetPeer* peer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1DC3F44
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnPeerConnected
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnPeerConnected*, "LiteNetLib", "EventBasedNetListener/OnPeerConnected");
