// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.ISubsystemDescriptor
#include "UnityEngine/ISubsystemDescriptor.hpp"
// Including type: UnityEngine.SubsystemDescriptor
#include "UnityEngine/SubsystemDescriptor.hpp"
// Including type: UnityEngine.Internal_SubsystemDescriptors
#include "UnityEngine/Internal_SubsystemDescriptors.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.ISubsystemDescriptorImpl
#include "UnityEngine/ISubsystemDescriptorImpl.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptorImpl*>* UnityEngine::Internal_SubsystemDescriptors::_get_s_IntegratedSubsystemDescriptors() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext("_get_s_IntegratedSubsystemDescriptors");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptorImpl*>*>("UnityEngine", "Internal_SubsystemDescriptors", "s_IntegratedSubsystemDescriptors"));
}
// Autogenerated static field setter
// Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptorImpl> s_IntegratedSubsystemDescriptors
void UnityEngine::Internal_SubsystemDescriptors::_set_s_IntegratedSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptorImpl*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext("_set_s_IntegratedSubsystemDescriptors");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Internal_SubsystemDescriptors", "s_IntegratedSubsystemDescriptors", value));
}
// Autogenerated static field getter
// Get static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptor*>* UnityEngine::Internal_SubsystemDescriptors::_get_s_StandaloneSubsystemDescriptors() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext("_get_s_StandaloneSubsystemDescriptors");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptor*>*>("UnityEngine", "Internal_SubsystemDescriptors", "s_StandaloneSubsystemDescriptors"));
}
// Autogenerated static field setter
// Set static field: static System.Collections.Generic.List`1<UnityEngine.ISubsystemDescriptor> s_StandaloneSubsystemDescriptors
void UnityEngine::Internal_SubsystemDescriptors::_set_s_StandaloneSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::ISubsystemDescriptor*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext("_set_s_StandaloneSubsystemDescriptors");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Internal_SubsystemDescriptors", "s_StandaloneSubsystemDescriptors", value));
}
// Autogenerated method: UnityEngine.Internal_SubsystemDescriptors.Internal_AddDescriptor
bool UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor(UnityEngine::SubsystemDescriptor* descriptor) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext("Internal_AddDescriptor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Internal_SubsystemDescriptors", "Internal_AddDescriptor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(descriptor)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, descriptor);
}
// Autogenerated method: UnityEngine.Internal_SubsystemDescriptors.Internal_InitializeManagedDescriptor
void UnityEngine::Internal_SubsystemDescriptors::Internal_InitializeManagedDescriptor(System::IntPtr ptr, UnityEngine::ISubsystemDescriptorImpl* desc) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext("Internal_InitializeManagedDescriptor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Internal_SubsystemDescriptors", "Internal_InitializeManagedDescriptor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(ptr, desc)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, ptr, desc);
}
// Autogenerated method: UnityEngine.Internal_SubsystemDescriptors.Internal_ClearManagedDescriptors
void UnityEngine::Internal_SubsystemDescriptors::Internal_ClearManagedDescriptors() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext("Internal_ClearManagedDescriptors");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Internal_SubsystemDescriptors", "Internal_ClearManagedDescriptors", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.Internal_SubsystemDescriptors..cctor
void UnityEngine::Internal_SubsystemDescriptors::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Internal_SubsystemDescriptors").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Internal_SubsystemDescriptors", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
