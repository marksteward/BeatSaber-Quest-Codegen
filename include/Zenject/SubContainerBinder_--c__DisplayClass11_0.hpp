// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerBinder
#include "Zenject/SubContainerBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass11_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93A58
  class SubContainerBinder::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public Zenject.SubContainerCreatorBindInfo subContainerBindInfo
    // Size: 0x8
    // Offset: 0x10
    Zenject::SubContainerCreatorBindInfo* subContainerBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerCreatorBindInfo*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> installerMethod
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<Zenject::DiContainer*>* installerMethod;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass11_0
    $$c__DisplayClass11_0(Zenject::SubContainerCreatorBindInfo* subContainerBindInfo_ = {}, System::Action_1<Zenject::DiContainer*>* installerMethod_ = {}) noexcept : subContainerBindInfo{subContainerBindInfo_}, installerMethod{installerMethod_} {}
    // Zenject.ISubContainerCreator <ByMethod>b__0(Zenject.DiContainer container)
    // Offset: 0x13547C8
    Zenject::ISubContainerCreator* $ByMethod$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x135385C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder::$$c__DisplayClass11_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::$$c__DisplayClass11_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder::$$c__DisplayClass11_0*, creationType>()));
    }
  }; // Zenject.SubContainerBinder/<>c__DisplayClass11_0
  static check_size<sizeof(SubContainerBinder::$$c__DisplayClass11_0), 24 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __Zenject_SubContainerBinder_$$c__DisplayClass11_0SizeCheck;
  static_assert(sizeof(SubContainerBinder::$$c__DisplayClass11_0) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass11_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass11_0");
