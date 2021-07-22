// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
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
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass22_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass22_0 : public ::Il2CppObject {
    public:
    // public System.Object subIdentifier
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* subIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Zenject.InjectSources source
    // Size: 0x4
    // Offset: 0x18
    Zenject::InjectSources source;
    // Field size check
    static_assert(sizeof(Zenject::InjectSources) == 0x4);
    // public System.Boolean matchAll
    // Size: 0x1
    // Offset: 0x1C
    bool matchAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass22_0
    $$c__DisplayClass22_0(::Il2CppObject* subIdentifier_ = {}, Zenject::InjectSources source_ = {}, bool matchAll_ = {}) noexcept : subIdentifier{subIdentifier_}, source{source_}, matchAll{matchAll_} {}
    // Zenject.IProvider <FromResolveInternal>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x16209C4
    Zenject::IProvider* $FromResolveInternal$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x161D97C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass22_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass22_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass22_0*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass22_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass22_0), 28 + sizeof(bool)> __Zenject_FromBinder_$$c__DisplayClass22_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass22_0) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass22_0*, "Zenject", "FromBinder/<>c__DisplayClass22_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass22_0::$FromResolveInternal$b__0
// Il2CppName: <FromResolveInternal>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FromBinder::$$c__DisplayClass22_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::FromBinder::$$c__DisplayClass22_0::$FromResolveInternal$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass22_0*), "<FromResolveInternal>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, type});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass22_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
