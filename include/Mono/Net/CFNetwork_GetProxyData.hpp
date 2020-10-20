// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Autogenerated type: Mono.Net.CFNetwork/GetProxyData
  class CFNetwork::GetProxyData : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // public System.IntPtr script
    // Offset: 0x10
    System::IntPtr script;
    // public System.IntPtr targetUri
    // Offset: 0x18
    System::IntPtr targetUri;
    // public System.IntPtr error
    // Offset: 0x20
    System::IntPtr error;
    // public System.IntPtr result
    // Offset: 0x28
    System::IntPtr result;
    // public System.Threading.ManualResetEvent evt
    // Offset: 0x30
    System::Threading::ManualResetEvent* evt;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void Dispose()
    // Offset: 0x11EDD54
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x11EBA50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CFNetwork::GetProxyData* New_ctor();
  }; // Mono.Net.CFNetwork/GetProxyData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFNetwork::GetProxyData*, "Mono.Net", "CFNetwork/GetProxyData");
#pragma pack(pop)
