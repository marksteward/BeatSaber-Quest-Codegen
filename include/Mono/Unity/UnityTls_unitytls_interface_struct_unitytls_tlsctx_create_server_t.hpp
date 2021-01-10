// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D44AF0
  class UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_tlsctx_create_server_t
    unitytls_tlsctx_create_server_t() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x126EE4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/unitytls_tlsctx* Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange supportedProtocols, Mono.Unity.UnityTls/unitytls_tlsctx_callbacks callbacks, System.UInt64 certChain, System.UInt64 leafCertificateKey, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x126EE60
    Mono::Unity::UnityTls::unitytls_tlsctx* Invoke(Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::UnityTls::unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange supportedProtocols, Mono.Unity.UnityTls/unitytls_tlsctx_callbacks callbacks, System.UInt64 certChain, System.UInt64 leafCertificateKey, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x126F220
    System::IAsyncResult* BeginInvoke(Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange supportedProtocols, Mono::Unity::UnityTls::unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/unitytls_tlsctx* EndInvoke(System.IAsyncResult result)
    // Offset: 0x126F30C
    Mono::Unity::UnityTls::unitytls_tlsctx* EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t");
#pragma pack(pop)
