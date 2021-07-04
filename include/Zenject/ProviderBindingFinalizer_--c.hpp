// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ProviderBindingFinalizer/<>c
  // [CompilerGeneratedAttribute] Offset: DDE21C
  class ProviderBindingFinalizer::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.ProviderBindingFinalizer/<>c <>9
    static Zenject::ProviderBindingFinalizer::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.ProviderBindingFinalizer/<>c <>9
    static void _set_$$9(Zenject::ProviderBindingFinalizer::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__7_0
    static System::Func_2<System::Type*, ::Il2CppString*>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<System::Type*, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__8_0
    static System::Func_2<System::Type*, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<System::Type*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x16E31C8
    static void _cctor();
    // System.String <GetScope>b__7_0(System.Type x)
    // Offset: 0x16E3234
    ::Il2CppString* $GetScope$b__7_0(System::Type* x);
    // System.String <FinalizeBinding>b__8_0(System.Type x)
    // Offset: 0x16E329C
    ::Il2CppString* $FinalizeBinding$b__8_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x16E322C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProviderBindingFinalizer::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProviderBindingFinalizer::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProviderBindingFinalizer::$$c*, creationType>()));
    }
  }; // Zenject.ProviderBindingFinalizer/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProviderBindingFinalizer::$$c*, "Zenject", "ProviderBindingFinalizer/<>c");
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::ProviderBindingFinalizer::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::$$c::$GetScope$b__7_0
// Il2CppName: <GetScope>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Zenject::ProviderBindingFinalizer::$$c::*)(System::Type*)>(&Zenject::ProviderBindingFinalizer::$$c::$GetScope$b__7_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer::$$c*), "<GetScope>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::$$c::$FinalizeBinding$b__8_0
// Il2CppName: <FinalizeBinding>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Zenject::ProviderBindingFinalizer::$$c::*)(System::Type*)>(&Zenject::ProviderBindingFinalizer::$$c::$FinalizeBinding$b__8_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer::$$c*), "<FinalizeBinding>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
