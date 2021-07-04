// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
  // Forward declaring type: ConventionFilterTypesBinder
  class ConventionFilterTypesBinder;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionSelectTypesBinder
  // [NoReflectionBakingAttribute] Offset: DDC5E4
  class ConventionSelectTypesBinder : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ConventionSelectTypesBinder::$$c
    class $$c;
    // private readonly Zenject.ConventionBindInfo _bindInfo
    // Size: 0x8
    // Offset: 0x10
    Zenject::ConventionBindInfo* bindInfo;
    // Field size check
    static_assert(sizeof(Zenject::ConventionBindInfo*) == 0x8);
    // Creating value type constructor for type: ConventionSelectTypesBinder
    ConventionSelectTypesBinder(Zenject::ConventionBindInfo* bindInfo_ = {}) noexcept : bindInfo{bindInfo_} {}
    // Creating conversion operator: operator Zenject::ConventionBindInfo*
    constexpr operator Zenject::ConventionBindInfo*() const noexcept {
      return bindInfo;
    }
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0x138C7A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionSelectTypesBinder* New_ctor(Zenject::ConventionBindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionSelectTypesBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionSelectTypesBinder*, creationType>(bindInfo)));
    }
    // private Zenject.ConventionFilterTypesBinder CreateNextBinder()
    // Offset: 0x139001C
    Zenject::ConventionFilterTypesBinder* CreateNextBinder();
    // public Zenject.ConventionFilterTypesBinder AllTypes()
    // Offset: 0x1390084
    Zenject::ConventionFilterTypesBinder* AllTypes();
    // public Zenject.ConventionFilterTypesBinder AllClasses()
    // Offset: 0x1390088
    Zenject::ConventionFilterTypesBinder* AllClasses();
    // public Zenject.ConventionFilterTypesBinder AllNonAbstractClasses()
    // Offset: 0x1390184
    Zenject::ConventionFilterTypesBinder* AllNonAbstractClasses();
    // public Zenject.ConventionFilterTypesBinder AllAbstractClasses()
    // Offset: 0x1390280
    Zenject::ConventionFilterTypesBinder* AllAbstractClasses();
    // public Zenject.ConventionFilterTypesBinder AllInterfaces()
    // Offset: 0x139037C
    Zenject::ConventionFilterTypesBinder* AllInterfaces();
  }; // Zenject.ConventionSelectTypesBinder
  #pragma pack(pop)
  static check_size<sizeof(ConventionSelectTypesBinder), 16 + sizeof(Zenject::ConventionBindInfo*)> __Zenject_ConventionSelectTypesBinderSizeCheck;
  static_assert(sizeof(ConventionSelectTypesBinder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionSelectTypesBinder*, "Zenject", "ConventionSelectTypesBinder");
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::CreateNextBinder
// Il2CppName: CreateNextBinder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllTypes
// Il2CppName: AllTypes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllClasses
// Il2CppName: AllClasses
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllNonAbstractClasses
// Il2CppName: AllNonAbstractClasses
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllAbstractClasses
// Il2CppName: AllAbstractClasses
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::ConventionSelectTypesBinder::AllInterfaces
// Il2CppName: AllInterfaces
// Cannot perform method pointer template specialization from operators!
