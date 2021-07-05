// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
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
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
  // [NoReflectionBakingAttribute] Offset: DDC9F4
  class TransformScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDDE9EC
    // private Zenject.GameObjectCreationParameters <GameObjectInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    Zenject::GameObjectCreationParameters* GameObjectInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // Creating value type constructor for type: TransformScopeConcreteIdArgConditionCopyNonLazyBinder
    TransformScopeConcreteIdArgConditionCopyNonLazyBinder(Zenject::GameObjectCreationParameters* GameObjectInfo_ = {}) noexcept : GameObjectInfo{GameObjectInfo_} {}
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x16DD18C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo, Zenject::GameObjectCreationParameters* gameObjectInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(bindInfo, gameObjectInfo)));
    }
    // protected Zenject.GameObjectCreationParameters get_GameObjectInfo()
    // Offset: 0x16ED558
    Zenject::GameObjectCreationParameters* get_GameObjectInfo();
    // private System.Void set_GameObjectInfo(Zenject.GameObjectCreationParameters value)
    // Offset: 0x16ED560
    void set_GameObjectInfo(Zenject::GameObjectCreationParameters* value);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransform(UnityEngine.Transform parent)
    // Offset: 0x16ED568
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransform(UnityEngine::Transform* parent);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransform(System.Func`2<Zenject.InjectContext,UnityEngine.Transform> parentGetter)
    // Offset: 0x16ED584
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransform(System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* parentGetter);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransformGroup(System.String transformGroupname)
    // Offset: 0x16ED5A0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransformGroup(::Il2CppString* transformGroupname);
  }; // Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
  static check_size<sizeof(TransformScopeConcreteIdArgConditionCopyNonLazyBinder), 32 + sizeof(Zenject::GameObjectCreationParameters*)> __Zenject_TransformScopeConcreteIdArgConditionCopyNonLazyBinderSizeCheck;
  static_assert(sizeof(TransformScopeConcreteIdArgConditionCopyNonLazyBinder) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "TransformScopeConcreteIdArgConditionCopyNonLazyBinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::get_GameObjectInfo
// Il2CppName: get_GameObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::GameObjectCreationParameters* (Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::get_GameObjectInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*), "get_GameObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::set_GameObjectInfo
// Il2CppName: set_GameObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)(Zenject::GameObjectCreationParameters*)>(&Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::set_GameObjectInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "GameObjectCreationParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*), "set_GameObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransform
// Il2CppName: UnderTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)(UnityEngine::Transform*)>(&Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransform)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*), "UnderTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransform
// Il2CppName: UnderTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)(System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>*)>(&Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransform)> {
  static const MethodInfo* get() {
    static auto* parentGetter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "InjectContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*), "UnderTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentGetter});
  }
};
// Writing MetadataGetter for method: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransformGroup
// Il2CppName: UnderTransformGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::*)(::Il2CppString*)>(&Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder::UnderTransformGroup)> {
  static const MethodInfo* get() {
    static auto* transformGroupname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*), "UnderTransformGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transformGroupname});
  }
};
