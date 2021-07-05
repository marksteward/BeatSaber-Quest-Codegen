// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SynchronizedActionQueue
  class SynchronizedActionQueue : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SynchronizedActionQueue::SynchronizedAction
    struct SynchronizedAction;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: SynchronizedActionQueue/SynchronizedAction
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct SynchronizedAction/*, public System::ValueType*/ {
      public:
      // public readonly System.Single time
      // Size: 0x4
      // Offset: 0x0
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: time and: action
      char __padding0[0x4] = {};
      // public readonly System.Action action
      // Size: 0x8
      // Offset: 0x8
      System::Action* action;
      // Field size check
      static_assert(sizeof(System::Action*) == 0x8);
      // Creating value type constructor for type: SynchronizedAction
      constexpr SynchronizedAction(float time_ = {}, System::Action* action_ = {}) noexcept : time{time_}, action{action_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.Single time, System.Action action)
      // Offset: 0xF22954
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  SynchronizedAction(float time, System::Action* action)
    }; // SynchronizedActionQueue/SynchronizedAction
    #pragma pack(pop)
    static check_size<sizeof(SynchronizedActionQueue::SynchronizedAction), 8 + sizeof(System::Action*)> __GlobalNamespace_SynchronizedActionQueue_SynchronizedActionSizeCheck;
    static_assert(sizeof(SynchronizedActionQueue::SynchronizedAction) == 0x10);
    // private readonly System.Collections.Generic.List`1<SynchronizedActionQueue/SynchronizedAction> _synchronizedActionQueue
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::SynchronizedActionQueue::SynchronizedAction>* synchronizedActionQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::SynchronizedActionQueue::SynchronizedAction>*) == 0x8);
    // Creating value type constructor for type: SynchronizedActionQueue
    SynchronizedActionQueue(System::Collections::Generic::List_1<GlobalNamespace::SynchronizedActionQueue::SynchronizedAction>* synchronizedActionQueue_ = {}) noexcept : synchronizedActionQueue{synchronizedActionQueue_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::SynchronizedActionQueue::SynchronizedAction>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::SynchronizedActionQueue::SynchronizedAction>*() const noexcept {
      return synchronizedActionQueue;
    }
    // public System.Void Clear()
    // Offset: 0x237D840
    void Clear();
    // public System.Void EnqueueAction(System.Single time, System.Action action)
    // Offset: 0x237D898
    void EnqueueAction(float time, System::Action* action);
    // public System.Void Update(System.Single time)
    // Offset: 0x237D91C
    void Update(float time);
    // public System.Void .ctor()
    // Offset: 0x237DA34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizedActionQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SynchronizedActionQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizedActionQueue*, creationType>()));
    }
  }; // SynchronizedActionQueue
  #pragma pack(pop)
  static check_size<sizeof(SynchronizedActionQueue), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::SynchronizedActionQueue::SynchronizedAction>*)> __GlobalNamespace_SynchronizedActionQueueSizeCheck;
  static_assert(sizeof(SynchronizedActionQueue) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SynchronizedActionQueue*, "", "SynchronizedActionQueue");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SynchronizedActionQueue::SynchronizedAction, "", "SynchronizedActionQueue/SynchronizedAction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SynchronizedActionQueue::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SynchronizedActionQueue::*)()>(&GlobalNamespace::SynchronizedActionQueue::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SynchronizedActionQueue*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SynchronizedActionQueue::EnqueueAction
// Il2CppName: EnqueueAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SynchronizedActionQueue::*)(float, System::Action*)>(&GlobalNamespace::SynchronizedActionQueue::EnqueueAction)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SynchronizedActionQueue*), "EnqueueAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, action});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SynchronizedActionQueue::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SynchronizedActionQueue::*)(float)>(&GlobalNamespace::SynchronizedActionQueue::Update)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SynchronizedActionQueue*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SynchronizedActionQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
