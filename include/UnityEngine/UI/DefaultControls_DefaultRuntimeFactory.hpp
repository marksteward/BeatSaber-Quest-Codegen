// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
// Including type: UnityEngine.UI.DefaultControls/IFactoryControls
#include "UnityEngine/UI/DefaultControls_IFactoryControls.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
  class DefaultControls::DefaultRuntimeFactory : public ::Il2CppObject/*, public UnityEngine::UI::DefaultControls::IFactoryControls*/ {
    public:
    // Creating value type constructor for type: DefaultRuntimeFactory
    DefaultRuntimeFactory() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::UI::DefaultControls::IFactoryControls
    operator UnityEngine::UI::DefaultControls::IFactoryControls() noexcept {
      return *reinterpret_cast<UnityEngine::UI::DefaultControls::IFactoryControls*>(this);
    }
    // Get static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
    static UnityEngine::UI::DefaultControls::IFactoryControls* _get_Default();
    // Set static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
    static void _set_Default(UnityEngine::UI::DefaultControls::IFactoryControls* value);
    // public UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    // Offset: 0x144031C
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, ::Array<System::Type*>* components);
    // Creating initializer_list -> params proxy for: UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, std::initializer_list<System::Type*> components);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    template<class ...TParams>
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, TParams&&... components) {
      return CreateGameObject(name, {components...});
    }
    // static private System.Void .cctor()
    // Offset: 0x1440398
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1440390
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultControls::DefaultRuntimeFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultControls::DefaultRuntimeFactory*, creationType>()));
    }
  }; // UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls::DefaultRuntimeFactory*, "UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory");
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::CreateGameObject
// Il2CppName: CreateGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::*)(::Il2CppString*, ::Array<System::Type*>*)>(&UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::CreateGameObject)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* components = &classof(::Array<::Array<System::Type*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls::DefaultRuntimeFactory*), "CreateGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, components});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls::DefaultRuntimeFactory*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::DefaultRuntimeFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
