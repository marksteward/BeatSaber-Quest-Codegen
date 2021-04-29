// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IConvertible because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.InternalUtility
  // [ExtensionAttribute] Offset: FFFFFFFF
  class InternalUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::InternalUtility::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Creating value type constructor for type: InternalUtility
    InternalUtility() noexcept {}
    // static public T[] GetComponents(System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> gameObjects)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* GetComponents(System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* gameObjects) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::InternalUtility::GetComponents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "InternalUtility", "GetComponents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameObjects)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, gameObjects);
    }
    // static public T[] GetComponents(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* GetComponents(UnityEngine::GameObject* go) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::InternalUtility::GetComponents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "InternalUtility", "GetComponents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(go)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, go);
    }
    // static public T[] GetComponents(System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> transforms)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* GetComponents(System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* transforms) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::InternalUtility::GetComponents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "InternalUtility", "GetComponents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(transforms)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, transforms);
    }
    // static public UnityEngine.GameObject EmptyGameObjectWithTransform(UnityEngine.Transform t)
    // Offset: 0x19213A4
    static UnityEngine::GameObject* EmptyGameObjectWithTransform(UnityEngine::Transform* t);
    // static public T NextEnumValue(T current)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T NextEnumValue(T current) {
      static_assert(std::is_base_of_v<System::IConvertible, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::InternalUtility::NextEnumValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "InternalUtility", "NextEnumValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(current)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, current);
    }
    // static public System.String ControlKeyString(System.Char character)
    // Offset: 0x192149C
    static ::Il2CppString* ControlKeyString(::Il2CppChar character);
    // static public System.Boolean TryParseColor(System.String value, ref UnityEngine.Color col)
    // Offset: 0x1921574
    static bool TryParseColor(::Il2CppString* value, UnityEngine::Color& col);
    // static public UnityEngine.Vector3[] StringToVector3Array(System.String str)
    // Offset: 0x19217F8
    static ::Array<UnityEngine::Vector3>* StringToVector3Array(::Il2CppString* str);
    // static public T DemandComponent(UnityEngine.Component component)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T DemandComponent(UnityEngine::Component* component) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::InternalUtility::DemandComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "InternalUtility", "DemandComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(component)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, component);
    }
    // static public T DemandComponent(UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T DemandComponent(UnityEngine::GameObject* gameObject) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::InternalUtility::DemandComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "InternalUtility", "DemandComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameObject)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, gameObject);
    }
  }; // UnityEngine.ProBuilder.InternalUtility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::InternalUtility*, "UnityEngine.ProBuilder", "InternalUtility");
