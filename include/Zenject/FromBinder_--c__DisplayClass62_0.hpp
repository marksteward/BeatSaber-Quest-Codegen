// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass62_0
  // [CompilerGeneratedAttribute] Offset: DDDF5C
  class FromBinder::$$c__DisplayClass62_0 : public ::Il2CppObject {
    public:
    // public System.Boolean includeInactive
    // Size: 0x1
    // Offset: 0x10
    bool includeInactive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean excludeSelf
    // Size: 0x1
    // Offset: 0x11
    bool excludeSelf;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass62_0
    $$c__DisplayClass62_0(bool includeInactive_ = {}, bool excludeSelf_ = {}) noexcept : includeInactive{includeInactive_}, excludeSelf{excludeSelf_} {}
    // Zenject.IProvider <FromComponentsInParents>b__0(Zenject.DiContainer container, System.Type concreteType)
    // Offset: 0x163B7B0
    Zenject::IProvider* $FromComponentsInParents$b__0(Zenject::DiContainer* container, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x1639674
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass62_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass62_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass62_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass62_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass62_0), 17 + sizeof(bool)> __Zenject_FromBinder_$$c__DisplayClass62_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass62_0) == 0x12);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass62_0*, "Zenject", "FromBinder/<>c__DisplayClass62_0");
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_0::$FromComponentsInParents$b__0
// Il2CppName: <FromComponentsInParents>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FromBinder::$$c__DisplayClass62_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::FromBinder::$$c__DisplayClass62_0::$FromComponentsInParents$b__0)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass62_0*), "<FromComponentsInParents>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteType});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass62_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
