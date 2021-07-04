// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
  // [UnmanagedFunctionPointerAttribute] Offset: D87208
  class UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_key_parse_pem_t
    unitytls_key_parse_pem_t() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F7138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/unitytls_key* Invoke(System.Byte* buffer, System.IntPtr bufferLen, System.Byte* password, System.IntPtr passwordLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15F7148
    Mono::Unity::UnityTls::unitytls_key* Invoke(uint8_t* buffer, System::IntPtr bufferLen, uint8_t* password, System::IntPtr passwordLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Byte* buffer, System.IntPtr bufferLen, System.Byte* password, System.IntPtr passwordLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F741C
    System::IAsyncResult* BeginInvoke(uint8_t* buffer, System::IntPtr bufferLen, uint8_t* password, System::IntPtr passwordLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/unitytls_key* EndInvoke(System.IAsyncResult result)
    // Offset: 0x15F74DC
    Mono::Unity::UnityTls::unitytls_key* EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t");
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_parse_pem_t::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
