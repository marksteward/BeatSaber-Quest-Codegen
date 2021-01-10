// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Component
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D4D500
  // [NativeClassAttribute] Offset: D4D500
  // [NativeHeaderAttribute] Offset: D4D500
  class Component : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: Component
    Component() noexcept {}
    // public UnityEngine.Transform get_transform()
    // Offset: 0x16823C0
    UnityEngine::Transform* get_transform();
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0x1682400
    UnityEngine::GameObject* get_gameObject();
    // public UnityEngine.Component GetComponent(System.Type type)
    // Offset: 0x1682440
    UnityEngine::Component* GetComponent(System::Type* type);
    // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
    // Offset: 0x1682514
    void GetComponentFastPath(System::Type* type, System::IntPtr oneFurtherThanResultValue);
    // public T GetComponent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponent() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // public System.Boolean TryGetComponent(out T component)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool TryGetComponent(T& component) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::TryGetComponent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryGetComponent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(component)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, component);
    }
    // public UnityEngine.Component GetComponentInChildren(System.Type t, System.Boolean includeInactive)
    // Offset: 0x168256C
    UnityEngine::Component* GetComponentInChildren(System::Type* t, bool includeInactive);
    // public T GetComponentInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInChildren() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentInChildren");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentInChildren", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // public UnityEngine.Component[] GetComponentsInChildren(System.Type t, System.Boolean includeInactive)
    // Offset: 0x1682650
    ::Array<UnityEngine::Component*>* GetComponentsInChildren(System::Type* t, bool includeInactive);
    // public T[] GetComponentsInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(includeInactive)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, includeInactive);
    }
    // public System.Void GetComponentsInChildren(System.Boolean includeInactive, System.Collections.Generic.List`1<T> result)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInChildren(bool includeInactive, System::Collections::Generic::List_1<T>* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(includeInactive, result)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, includeInactive, result);
    }
    // public T[] GetComponentsInChildren()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInChildren() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method);
    }
    // public System.Void GetComponentsInChildren(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInChildren(System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(results)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, results);
    }
    // public UnityEngine.Component GetComponentInParent(System.Type t)
    // Offset: 0x1682770
    UnityEngine::Component* GetComponentInParent(System::Type* t);
    // public T GetComponentInParent()
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetComponentInParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentInParent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentInParent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // public UnityEngine.Component[] GetComponentsInParent(System.Type t, System.Boolean includeInactive)
    // Offset: 0x1682844
    ::Array<UnityEngine::Component*>* GetComponentsInParent(System::Type* t, bool includeInactive);
    // public T[] GetComponentsInParent(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInParent(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(includeInactive)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, includeInactive);
    }
    // public System.Void GetComponentsInParent(System.Boolean includeInactive, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponentsInParent(bool includeInactive, System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(includeInactive, results)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, includeInactive, results);
    }
    // public T[] GetComponentsInParent()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponentsInParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method);
    }
    // public UnityEngine.Component[] GetComponents(System.Type type)
    // Offset: 0x1682964
    ::Array<UnityEngine::Component*>* GetComponents(System::Type* type);
    // private System.Void GetComponentsForListInternal(System.Type searchType, System.Object resultList)
    // Offset: 0x1682A78
    void GetComponentsForListInternal(System::Type* searchType, ::Il2CppObject* resultList);
    // public System.Void GetComponents(System.Type type, System.Collections.Generic.List`1<UnityEngine.Component> results)
    // Offset: 0x1682AD0
    void GetComponents(System::Type* type, System::Collections::Generic::List_1<UnityEngine::Component*>* results);
    // public System.Void GetComponents(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetComponents(System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponents");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponents", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(results)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, results);
    }
    // public System.String get_tag()
    // Offset: 0x1682B28
    ::Il2CppString* get_tag();
    // public System.Void set_tag(System.String value)
    // Offset: 0x1682BDC
    void set_tag(::Il2CppString* value);
    // public T[] GetComponents()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetComponents() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::GetComponents");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetComponents", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method);
    }
    // public System.Boolean CompareTag(System.String tag)
    // Offset: 0x1682CB0
    bool CompareTag(::Il2CppString* tag);
    // public System.Void .ctor()
    // Offset: 0x167DD44
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Component* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Component::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Component*, creationType>()));
    }
  }; // UnityEngine.Component
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Component*, "UnityEngine", "Component");
#pragma pack(pop)
