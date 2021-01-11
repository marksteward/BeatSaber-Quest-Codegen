// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.FastAction
  // [] Offset: FFFFFFFF
  class FastAction : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.LinkedList`1<System.Action> delegates
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::LinkedList_1<System::Action*>* delegates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedList_1<System::Action*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>> lookup
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<System::Action*, System::Collections::Generic::LinkedListNode_1<System::Action*>*>* lookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Action*, System::Collections::Generic::LinkedListNode_1<System::Action*>*>*) == 0x8);
    // Creating value type constructor for type: FastAction
    FastAction(System::Collections::Generic::LinkedList_1<System::Action*>* delegates_ = {}, System::Collections::Generic::Dictionary_2<System::Action*, System::Collections::Generic::LinkedListNode_1<System::Action*>*>* lookup_ = {}) noexcept : delegates{delegates_}, lookup{lookup_} {}
    // public System.Void Add(System.Action rhs)
    // Offset: 0xF4DA08
    void Add(System::Action* rhs);
    // public System.Void Remove(System.Action rhs)
    // Offset: 0xF4DAC4
    void Remove(System::Action* rhs);
    // public System.Void Call()
    // Offset: 0xF4DB74
    void Call();
    // public System.Void .ctor()
    // Offset: 0xF4DBF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastAction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::FastAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastAction*, creationType>()));
    }
  }; // TMPro.FastAction
  static check_size<sizeof(FastAction), 24 + sizeof(System::Collections::Generic::Dictionary_2<System::Action*, System::Collections::Generic::LinkedListNode_1<System::Action*>*>*)> __TMPro_FastActionSizeCheck;
  static_assert(sizeof(FastAction) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(TMPro::FastAction*, "TMPro", "FastAction");
