// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass7_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D94158
  class ReflectionTypeAnalyzer::$$c__DisplayClass7_1 : public ::Il2CppObject {
    public:
    // public System.Reflection.MethodInfo x
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MethodInfo* x;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass7_1
    $$c__DisplayClass7_1(System::Reflection::MethodInfo* x_ = {}) noexcept : x{x_} {}
    // Creating conversion operator: operator System::Reflection::MethodInfo*
    constexpr operator System::Reflection::MethodInfo*() const noexcept {
      return x;
    }
    // System.Boolean <GetMethodInfos>b__1(System.Type a)
    // Offset: 0x12A5680
    bool $GetMethodInfos$b__1(System::Type* a);
    // public System.Void .ctor()
    // Offset: 0x12A4FE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass7_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass7_1*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass7_1
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass7_1), 16 + sizeof(System::Reflection::MethodInfo*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass7_1SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass7_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_1");
#pragma pack(pop)
