// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorCached
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerCreatorCached : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    // private readonly Zenject.ISubContainerCreator _subCreator
    // Size: 0x8
    // Offset: 0x10
    Zenject::ISubContainerCreator* subCreator;
    // Field size check
    static_assert(sizeof(Zenject::ISubContainerCreator*) == 0x8);
    // private System.Boolean _isLookingUp
    // Size: 0x1
    // Offset: 0x18
    bool isLookingUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLookingUp and: subContainer
    char __padding1[0x7] = {};
    // private Zenject.DiContainer _subContainer
    // Size: 0x8
    // Offset: 0x20
    Zenject::DiContainer* subContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorCached
    SubContainerCreatorCached(Zenject::ISubContainerCreator* subCreator_ = {}, bool isLookingUp_ = {}, Zenject::DiContainer* subContainer_ = {}) noexcept : subCreator{subCreator_}, isLookingUp{isLookingUp_}, subContainer{subContainer_} {}
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // public System.Void .ctor(Zenject.ISubContainerCreator subCreator)
    // Offset: 0x16D1B44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorCached* New_ctor(Zenject::ISubContainerCreator* subCreator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorCached::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorCached*, creationType>(subCreator)));
    }
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0x16D3688
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorCached
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorCached), 32 + sizeof(Zenject::DiContainer*)> __Zenject_SubContainerCreatorCachedSizeCheck;
  static_assert(sizeof(SubContainerCreatorCached) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorCached*, "Zenject", "SubContainerCreatorCached");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorCached::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorCached::CreateSubContainer
// Il2CppName: CreateSubContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::SubContainerCreatorCached::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*, Zenject::InjectContext*)>(&Zenject::SubContainerCreatorCached::CreateSubContainer)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorCached*), "CreateSubContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, context});
  }
};
