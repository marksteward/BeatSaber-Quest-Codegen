// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Reflect
#include "NUnit/Framework/Internal/Reflect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Reflect/<>c__DisplayClass9_0
  // [CompilerGeneratedAttribute] Offset: D23F6C
  class Reflect::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.MethodInfo method
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MethodInfo* method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public System.Object fixture
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* fixture;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object[] args
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass9_0
    $$c__DisplayClass9_0(System::Reflection::MethodInfo* method_ = {}, ::Il2CppObject* fixture_ = {}, ::Array<::Il2CppObject*>* args_ = {}) noexcept : method{method_}, fixture{fixture_}, args{args_} {}
    // System.Object <InvokeMethod>b__0()
    // Offset: 0x208FD74
    ::Il2CppObject* $InvokeMethod$b__0();
    // public System.Void .ctor()
    // Offset: 0x208FC28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Reflect::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Reflect::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Reflect::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Reflect/<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(Reflect::$$c__DisplayClass9_0), 32 + sizeof(::Array<::Il2CppObject*>*)> __NUnit_Framework_Internal_Reflect_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(Reflect::$$c__DisplayClass9_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Reflect::$$c__DisplayClass9_0*, "NUnit.Framework.Internal", "Reflect/<>c__DisplayClass9_0");
