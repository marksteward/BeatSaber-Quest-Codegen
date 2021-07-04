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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
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
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass17_0
  // [CompilerGeneratedAttribute] Offset: DDE14C
  class SubContainerBinder::$$c__DisplayClass17_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Object prefab
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Object* prefab;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
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
    // Creating value type constructor for type: $$c__DisplayClass17_0
    $$c__DisplayClass17_0(UnityEngine::Object* prefab_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}, System::Type* installerType_ = {}, Zenject::SubContainerBinder* $$4__this_ = {}) noexcept : prefab{prefab_}, gameObjectInfo{gameObjectInfo_}, installerType{installerType_}, $$4__this{$$4__this_} {}
    // Zenject.ISubContainerCreator <ByNewPrefabInstaller>b__0(Zenject.DiContainer container)
    // Offset: 0x16E8AD8
    Zenject::ISubContainerCreator* $ByNewPrefabInstaller$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x16E8020
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder::$$c__DisplayClass17_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::$$c__DisplayClass17_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder::$$c__DisplayClass17_0*, creationType>()));
    }
  }; // Zenject.SubContainerBinder/<>c__DisplayClass17_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBinder::$$c__DisplayClass17_0), 40 + sizeof(Zenject::SubContainerBinder*)> __Zenject_SubContainerBinder_$$c__DisplayClass17_0SizeCheck;
  static_assert(sizeof(SubContainerBinder::$$c__DisplayClass17_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass17_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass17_0");
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass17_0::$ByNewPrefabInstaller$b__0
// Il2CppName: <ByNewPrefabInstaller>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator* (Zenject::SubContainerBinder::$$c__DisplayClass17_0::*)(Zenject::DiContainer*)>(&Zenject::SubContainerBinder::$$c__DisplayClass17_0::$ByNewPrefabInstaller$b__0)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder::$$c__DisplayClass17_0*), "<ByNewPrefabInstaller>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass17_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
