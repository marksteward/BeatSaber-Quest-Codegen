// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t
#include "Mono/Unity/UnityTls_unitytls_interface_struct_unitytls_x509list_append_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_x509list
#include "Mono/Unity/UnityTls_unitytls_x509list.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_x509_ref
#include "Mono/Unity/UnityTls_unitytls_x509_ref.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_errorstate
#include "Mono/Unity/UnityTls_unitytls_errorstate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t..ctor
Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_x509list_append_t*>(object, method));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t.Invoke
void Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t::Invoke(Mono::Unity::UnityTls::unitytls_x509list* list, Mono::Unity::UnityTls::unitytls_x509_ref cert, Mono::Unity::UnityTls::unitytls_errorstate* errorState) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", list, cert, errorState));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t.BeginInvoke
System::IAsyncResult* Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t::BeginInvoke(Mono::Unity::UnityTls::unitytls_x509list* list, Mono::Unity::UnityTls::unitytls_x509_ref cert, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", list, cert, errorState, callback, object));
}
// Autogenerated method: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t.EndInvoke
void Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_append_t::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}