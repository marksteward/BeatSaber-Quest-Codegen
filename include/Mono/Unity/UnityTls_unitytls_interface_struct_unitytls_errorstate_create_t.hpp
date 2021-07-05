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
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
  // [UnmanagedFunctionPointerAttribute] Offset: D871B8
  class UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_errorstate_create_t
    unitytls_errorstate_create_t() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F6268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/unitytls_errorstate Invoke()
    // Offset: 0x15F6278
    Mono::Unity::UnityTls::unitytls_errorstate Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F6490
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/unitytls_errorstate EndInvoke(System.IAsyncResult result)
    // Offset: 0x15F64BC
    Mono::Unity::UnityTls::unitytls_errorstate EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::UnityTls::unitytls_errorstate (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::*)()>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::*)(System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::UnityTls::unitytls_errorstate (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::*)(System::IAsyncResult*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_errorstate_create_t*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
