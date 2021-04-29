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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass24_0
  // [CompilerGeneratedAttribute] Offset: D0383C
  class SubContainerBinder::$$c__DisplayClass24_0 : public ::Il2CppObject {
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
    // Creating value type constructor for type: $$c__DisplayClass24_0
    $$c__DisplayClass24_0(::Il2CppString* resourcePath_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}) noexcept : resourcePath{resourcePath_}, gameObjectInfo{gameObjectInfo_} {}
    // Zenject.ISubContainerCreator <ByNewContextPrefabResource>b__0(Zenject.DiContainer container)
    // Offset: 0x153ABF4
    Zenject::ISubContainerCreator* $ByNewContextPrefabResource$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x153A328
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder::$$c__DisplayClass24_0*, creationType>()));
    }
  }; // Zenject.SubContainerBinder/<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBinder::$$c__DisplayClass24_0), 24 + sizeof(Zenject::GameObjectCreationParameters*)> __Zenject_SubContainerBinder_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(SubContainerBinder::$$c__DisplayClass24_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass24_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass24_0");
