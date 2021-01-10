// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConventionBindInfo
#include "Zenject/ConventionBindInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  // Autogenerated type: Zenject.ConventionBindInfo/<>c__DisplayClass6_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D92FB8
  class ConventionBindInfo::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.Assembly assembly
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::Assembly* assembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(System::Reflection::Assembly* assembly_ = {}) noexcept : assembly{assembly_} {}
    // Creating conversion operator: operator System::Reflection::Assembly*
    constexpr operator System::Reflection::Assembly*() const noexcept {
      return assembly;
    }
    // System.Boolean <ShouldIncludeAssembly>b__0(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0x10F1E60
    bool $ShouldIncludeAssembly$b__0(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
    // public System.Void .ctor()
    // Offset: 0x10F1C08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionBindInfo::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionBindInfo::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionBindInfo::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // Zenject.ConventionBindInfo/<>c__DisplayClass6_0
  static check_size<sizeof(ConventionBindInfo::$$c__DisplayClass6_0), 16 + sizeof(System::Reflection::Assembly*)> __Zenject_ConventionBindInfo_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(ConventionBindInfo::$$c__DisplayClass6_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionBindInfo::$$c__DisplayClass6_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass6_0");
#pragma pack(pop)
