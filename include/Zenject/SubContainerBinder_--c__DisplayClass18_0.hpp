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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBinder/Zenject.<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SubContainerBinder::$$c__DisplayClass18_0 : public ::Il2CppObject {
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
    // public System.Action`1<Zenject.DiContainer> installerMethod
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<Zenject::DiContainer*>* installerMethod;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass18_0
    $$c__DisplayClass18_0(::Il2CppString* resourcePath_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}, System::Action_1<Zenject::DiContainer*>* installerMethod_ = {}) noexcept : resourcePath{resourcePath_}, gameObjectInfo{gameObjectInfo_}, installerMethod{installerMethod_} {}
    // Zenject.ISubContainerCreator <ByNewPrefabResourceMethod>b__0(Zenject.DiContainer container)
    // Offset: 0x16D1338
    Zenject::ISubContainerCreator* $ByNewPrefabResourceMethod$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x16D0844
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder::$$c__DisplayClass18_0*, creationType>()));
    }
  }; // Zenject.SubContainerBinder/Zenject.<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBinder::$$c__DisplayClass18_0), 32 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __Zenject_SubContainerBinder_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(SubContainerBinder::$$c__DisplayClass18_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass18_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass18_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass18_0::$ByNewPrefabResourceMethod$b__0
// Il2CppName: <ByNewPrefabResourceMethod>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator* (Zenject::SubContainerBinder::$$c__DisplayClass18_0::*)(Zenject::DiContainer*)>(&Zenject::SubContainerBinder::$$c__DisplayClass18_0::$ByNewPrefabResourceMethod$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder::$$c__DisplayClass18_0*), "<ByNewPrefabResourceMethod>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
