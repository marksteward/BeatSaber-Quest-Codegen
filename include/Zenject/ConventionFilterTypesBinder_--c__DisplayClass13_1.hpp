// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConventionFilterTypesBinder
#include "Zenject/ConventionFilterTypesBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionFilterTypesBinder/<>c__DisplayClass13_1
  // [CompilerGeneratedAttribute] Offset: DDD6EC
  class ConventionFilterTypesBinder::$$c__DisplayClass13_1 : public ::Il2CppObject {
    public:
    // public System.Type t
    // Size: 0x8
    // Offset: 0x10
    System::Type* t;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass13_1
    $$c__DisplayClass13_1(System::Type* t_ = {}) noexcept : t{t_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return t;
    }
    // System.Boolean <InNamespaces>b__1(System.String n)
    // Offset: 0x138FCA0
    bool $InNamespaces$b__1(::Il2CppString* n);
    // public System.Void .ctor()
    // Offset: 0x138FC98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder::$$c__DisplayClass13_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder::$$c__DisplayClass13_1*, creationType>()));
    }
  }; // Zenject.ConventionFilterTypesBinder/<>c__DisplayClass13_1
  #pragma pack(pop)
  static check_size<sizeof(ConventionFilterTypesBinder::$$c__DisplayClass13_1), 16 + sizeof(System::Type*)> __Zenject_ConventionFilterTypesBinder_$$c__DisplayClass13_1SizeCheck;
  static_assert(sizeof(ConventionFilterTypesBinder::$$c__DisplayClass13_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass13_1");
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1::$InNamespaces$b__1
// Il2CppName: <InNamespaces>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1::*)(::Il2CppString*)>(&Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1::$InNamespaces$b__1)> {
  const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1*), "<InNamespaces>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
