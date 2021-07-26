// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: DataCallback because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.UIItemsList`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class UIItemsList_1 : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::UIItemsList_1::DataCallback<T>
    class DataCallback;
    // WARNING Size may be invalid!
    // Autogenerated type: HMUI.UIItemsList`1/HMUI.DataCallback
    // [TokenAttribute] Offset: FFFFFFFF
    class DataCallback : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::MulticastDelegate {
      public:
      using declaring_type = UIItemsList_1<T>*;
      static constexpr std::string_view NESTED_NAME = "DataCallback";
      // Creating value type constructor for type: DataCallback
      DataCallback() noexcept {}
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename UIItemsList_1<T>::DataCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::DataCallback::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename UIItemsList_1<T>::DataCallback*, creationType>(object, method)));
      }
      // public System.Void Invoke(System.Int32 idx, T item)
      // Offset: 0xFFFFFFFF
      void Invoke(int idx, T item) {
        static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::DataCallback::Invoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(idx), ::il2cpp_utils::ExtractType(item)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, idx, item);
      }
      // public System.IAsyncResult BeginInvoke(System.Int32 idx, T item, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(int idx, T item, System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::DataCallback::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(idx), ::il2cpp_utils::ExtractType(item), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
        return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, idx, item, callback, object);
      }
      // public System.Void EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      void EndInvoke(System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::DataCallback::EndInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
      }
    }; // HMUI.UIItemsList`1/HMUI.DataCallback
    // Could not write size check! Type: HMUI.UIItemsList`1/HMUI.DataCallback is generic, or has no fields that are valid for size checks!
    // private T _prefab
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T prefab;
    // private UnityEngine.Transform _itemsContainer
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Transform* itemsContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _insertInTheBeginning
    // Size: 0x1
    // Offset: 0x0
    bool insertInTheBeginning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [InjectAttribute] Offset: 0xE92574
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private System.Collections.Generic.List`1<T> _items
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<T>* items;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<T>*) == 0x8);
    // Creating value type constructor for type: UIItemsList_1
    UIItemsList_1(T prefab_ = {}, UnityEngine::Transform* itemsContainer_ = {}, bool insertInTheBeginning_ = {}, Zenject::DiContainer* container_ = {}, System::Collections::Generic::List_1<T>* items_ = {}) noexcept : prefab{prefab_}, itemsContainer{itemsContainer_}, insertInTheBeginning{insertInTheBeginning_}, container{container_}, items{items_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private T _prefab
    T _get__prefab() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_get__prefab");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_prefab"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private T _prefab
    void _set__prefab(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_set__prefab");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_prefab"))->offset;
      *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _itemsContainer
    UnityEngine::Transform* _get__itemsContainer() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_get__itemsContainer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_itemsContainer"))->offset;
      return *reinterpret_cast<UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private UnityEngine.Transform _itemsContainer
    void _set__itemsContainer(UnityEngine::Transform* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_set__itemsContainer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_itemsContainer"))->offset;
      *reinterpret_cast<UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean _insertInTheBeginning
    bool _get__insertInTheBeginning() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_get__insertInTheBeginning");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_insertInTheBeginning"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Boolean _insertInTheBeginning
    void _set__insertInTheBeginning(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_set__insertInTheBeginning");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_insertInTheBeginning"))->offset;
      *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private Zenject.DiContainer _container
    Zenject::DiContainer* _get__container() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_get__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      return *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private Zenject.DiContainer _container
    void _set__container(Zenject::DiContainer* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_set__container");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_container"))->offset;
      *reinterpret_cast<Zenject::DiContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<T> _items
    System::Collections::Generic::List_1<T>* _get__items() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_get__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      return *reinterpret_cast<System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Collections.Generic.List`1<T> _items
    void _set__items(System::Collections::Generic::List_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::_set__items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_items"))->offset;
      *reinterpret_cast<System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // public System.Collections.Generic.IEnumerable`1<T> get_items()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<T>* get_items() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::get_items");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_items", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal__method);
    }
    // public System.Void SetData(System.Int32 numberOfElements, HMUI.UIItemsList`1/HMUI.DataCallback<T> dataCallback)
    // Offset: 0xFFFFFFFF
    void SetData(int numberOfElements, typename HMUI::UIItemsList_1<T>::DataCallback* dataCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::SetData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(numberOfElements), ::il2cpp_utils::ExtractType(dataCallback)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, numberOfElements, dataCallback);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIItemsList_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIItemsList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIItemsList_1<T>*, creationType>()));
    }
  }; // HMUI.UIItemsList`1
  // Could not write size check! Type: HMUI.UIItemsList`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::UIItemsList_1, "HMUI", "UIItemsList`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
