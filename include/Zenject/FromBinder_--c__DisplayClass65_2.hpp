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
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass65_2
  // [CompilerGeneratedAttribute] Offset: DDDFDC
  class FromBinder::$$c__DisplayClass65_2 : public ::Il2CppObject {
    public:
    // public Zenject.InjectContext ctx
    // Size: 0x8
    // Offset: 0x10
    Zenject::InjectContext* ctx;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass65_2
    $$c__DisplayClass65_2(Zenject::InjectContext* ctx_ = {}) noexcept : ctx{ctx_} {}
    // Creating conversion operator: operator Zenject::InjectContext*
    constexpr operator Zenject::InjectContext*() const noexcept {
      return ctx;
    }
    // System.Boolean <FromComponentInHierarchy>b__3(UnityEngine.Component x)
    // Offset: 0x163C310
    bool $FromComponentInHierarchy$b__3(UnityEngine::Component* x);
    // public System.Void .ctor()
    // Offset: 0x163C2D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass65_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass65_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass65_2*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass65_2
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass65_2), 16 + sizeof(Zenject::InjectContext*)> __Zenject_FromBinder_$$c__DisplayClass65_2SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass65_2) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass65_2*, "Zenject", "FromBinder/<>c__DisplayClass65_2");
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass65_2::$FromComponentInHierarchy$b__3
// Il2CppName: <FromComponentInHierarchy>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::FromBinder::$$c__DisplayClass65_2::*)(UnityEngine::Component*)>(&Zenject::FromBinder::$$c__DisplayClass65_2::$FromComponentInHierarchy$b__3)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass65_2*), "<FromComponentInHierarchy>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass65_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
