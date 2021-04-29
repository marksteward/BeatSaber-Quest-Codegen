// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: KeyboardShortcutsManager
  class KeyboardShortcutsManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut
    class KeyboardShortcut;
    // private System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Collections.Generic.List`1<System.Action>> _keyboardShortcutActions
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>* keyboardShortcutActions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>*) == 0x8);
    // Creating value type constructor for type: KeyboardShortcutsManager
    KeyboardShortcutsManager(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>* keyboardShortcutActions_ = {}) noexcept : keyboardShortcutActions{keyboardShortcutActions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Update()
    // Offset: 0x118224C
    void Update();
    // public System.Void RemoveKeyboardShortcuts(System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action> shortcutActions)
    // Offset: 0x11824DC
    void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>* shortcutActions);
    // public System.Void RemoveKeyboardShortcuts(System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Action> shortcutActions)
    // Offset: 0x11825F8
    void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>* shortcutActions);
    // public System.Void RemoveKeyboardShortcut(KeyboardShortcutsManager/KeyboardShortcut keyboardShortcut, System.Action callback)
    // Offset: 0x11826F8
    void RemoveKeyboardShortcut(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut* keyboardShortcut, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2, System.Action callback)
    // Offset: 0x1182798
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, System.Action callback)
    // Offset: 0x1182868
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, System.Action callback)
    // Offset: 0x11825E8
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action* callback);
    // public System.Void AddKeyboardShortcuts(System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action> shortcutActions)
    // Offset: 0x1182874
    void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>* shortcutActions);
    // public System.Void AddKeyboardShortcuts(System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Action> shortcutActions)
    // Offset: 0x1182990
    void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>* shortcutActions);
    // public System.Void AddKeyboardShortcut(KeyboardShortcutsManager/KeyboardShortcut keyboardShortcut, System.Action callback)
    // Offset: 0x1182A90
    void AddKeyboardShortcut(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut* keyboardShortcut, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2, System.Action callback)
    // Offset: 0x1182B78
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, System.Action callback)
    // Offset: 0x1182C08
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, System.Action callback)
    // Offset: 0x1182980
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action* callback);
    // public System.Void .ctor()
    // Offset: 0x1182C14
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardShortcutsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::KeyboardShortcutsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardShortcutsManager*, creationType>()));
    }
  }; // KeyboardShortcutsManager
  #pragma pack(pop)
  static check_size<sizeof(KeyboardShortcutsManager), 24 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>*)> __GlobalNamespace_KeyboardShortcutsManagerSizeCheck;
  static_assert(sizeof(KeyboardShortcutsManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KeyboardShortcutsManager*, "", "KeyboardShortcutsManager");
