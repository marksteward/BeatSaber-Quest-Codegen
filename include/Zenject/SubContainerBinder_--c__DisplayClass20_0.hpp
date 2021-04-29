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
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass20_0
  // [CompilerGeneratedAttribute] Offset: D0381C
  class SubContainerBinder::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    // public System.String resourcePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public Zenject.GameObjectCreationParameters gameObjectInfo
    // Size: 0x8
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // public System.Type installerType
    // Size: 0x8
    // Offset: 0x20
    System::Type* installerType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public Zenject.SubContainerBinder <>4__this
    // Size: 0x8
    // Offset: 0x28
    Zenject::SubContainerBinder* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerBinder*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass20_0
    $$c__DisplayClass20_0(::Il2CppString* resourcePath_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}, System::Type* installerType_ = {}, Zenject::SubContainerBinder* $$4__this_ = {}) noexcept : resourcePath{resourcePath_}, gameObjectInfo{gameObjectInfo_}, installerType{installerType_}, $$4__this{$$4__this_} {}
    // Zenject.ISubContainerCreator <ByNewPrefabResourceInstaller>b__0(Zenject.DiContainer container)
    // Offset: 0x153AA48
    Zenject::ISubContainerCreator* $ByNewPrefabResourceInstaller$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x153A068
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder::$$c__DisplayClass20_0*, creationType>()));
    }
  }; // Zenject.SubContainerBinder/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBinder::$$c__DisplayClass20_0), 40 + sizeof(Zenject::SubContainerBinder*)> __Zenject_SubContainerBinder_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(SubContainerBinder::$$c__DisplayClass20_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass20_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass20_0");
