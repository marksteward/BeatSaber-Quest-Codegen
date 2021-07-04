// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentSingleton`1
#include "GlobalNamespace/PersistentSingleton_1.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PS4Helper
  class PS4Helper : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::PS4Helper*> {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE181C0
    // private System.Action didGoToBackgroundExecutionEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* didGoToBackgroundExecutionEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE181D0
    // private System.Action didGoToForegroundExecutionEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* didGoToForegroundExecutionEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _backgroundExecution
    // Size: 0x1
    // Offset: 0x28
    bool backgroundExecution;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PS4Helper
    PS4Helper(System::Action* didGoToBackgroundExecutionEvent_ = {}, System::Action* didGoToForegroundExecutionEvent_ = {}, bool backgroundExecution_ = {}) noexcept : didGoToBackgroundExecutionEvent{didGoToBackgroundExecutionEvent_}, didGoToForegroundExecutionEvent{didGoToForegroundExecutionEvent_}, backgroundExecution{backgroundExecution_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didGoToBackgroundExecutionEvent(System.Action value)
    // Offset: 0x1049EE8
    void add_didGoToBackgroundExecutionEvent(System::Action* value);
    // public System.Void remove_didGoToBackgroundExecutionEvent(System.Action value)
    // Offset: 0x1049F8C
    void remove_didGoToBackgroundExecutionEvent(System::Action* value);
    // public System.Void add_didGoToForegroundExecutionEvent(System.Action value)
    // Offset: 0x104A030
    void add_didGoToForegroundExecutionEvent(System::Action* value);
    // public System.Void remove_didGoToForegroundExecutionEvent(System.Action value)
    // Offset: 0x104A0D4
    void remove_didGoToForegroundExecutionEvent(System::Action* value);
    // protected System.Void Update()
    // Offset: 0x104A178
    void Update();
    // public System.Void .ctor()
    // Offset: 0x104A19C
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4Helper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4Helper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4Helper*, creationType>()));
    }
  }; // PS4Helper
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4Helper*, "", "PS4Helper");
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::add_didGoToBackgroundExecutionEvent
// Il2CppName: add_didGoToBackgroundExecutionEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::remove_didGoToBackgroundExecutionEvent
// Il2CppName: remove_didGoToBackgroundExecutionEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::add_didGoToForegroundExecutionEvent
// Il2CppName: add_didGoToForegroundExecutionEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::remove_didGoToForegroundExecutionEvent
// Il2CppName: remove_didGoToForegroundExecutionEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
