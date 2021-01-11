// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D44960
  class UnityTls::unitytls_tlsctx_write_callback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_tlsctx_write_callback
    unitytls_tlsctx_write_callback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1273834
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_tlsctx_write_callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_tlsctx_write_callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_tlsctx_write_callback*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(System.Void* userData, System.Byte* data, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x1273848
    System::IntPtr Invoke(void* userData, uint8_t* data, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Void* userData, System.Byte* data, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1273AE8
    System::IAsyncResult* BeginInvoke(void* userData, uint8_t* data, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x1273B90
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_tlsctx_write_callback
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_tlsctx_write_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_write_callback");
