// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: Status because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ActionResult
  // [] Offset: FFFFFFFF
  class ActionResult : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::ActionResult::Status
    struct Status;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ProBuilder.ActionResult/Status
    // [] Offset: FFFFFFFF
    struct Status/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Status
      constexpr Status(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status Success
      static constexpr const int Success = 0;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status Success
      static UnityEngine::ProBuilder::ActionResult::Status _get_Success();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status Success
      static void _set_Success(UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status Failure
      static constexpr const int Failure = 1;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status Failure
      static UnityEngine::ProBuilder::ActionResult::Status _get_Failure();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status Failure
      static void _set_Failure(UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status Canceled
      static constexpr const int Canceled = 2;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status Canceled
      static UnityEngine::ProBuilder::ActionResult::Status _get_Canceled();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status Canceled
      static void _set_Canceled(UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status NoChange
      static constexpr const int NoChange = 3;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status NoChange
      static UnityEngine::ProBuilder::ActionResult::Status _get_NoChange();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status NoChange
      static void _set_NoChange(UnityEngine::ProBuilder::ActionResult::Status value);
    }; // UnityEngine.ProBuilder.ActionResult/Status
    static check_size<sizeof(ActionResult::Status), 0 + sizeof(int)> __UnityEngine_ProBuilder_ActionResult_StatusSizeCheck;
    static_assert(sizeof(ActionResult::Status) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDE324C
    // private UnityEngine.ProBuilder.ActionResult/Status <status>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::ProBuilder::ActionResult::Status status;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ActionResult::Status) == 0x4);
    // Padding between fields: status and: notification
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE325C
    // private System.String <notification>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* notification;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ActionResult
    ActionResult(UnityEngine::ProBuilder::ActionResult::Status status_ = {}, ::Il2CppString* notification_ = {}) noexcept : status{status_}, notification{notification_} {}
    // public UnityEngine.ProBuilder.ActionResult/Status get_status()
    // Offset: 0x1883E94
    UnityEngine::ProBuilder::ActionResult::Status get_status();
    // private System.Void set_status(UnityEngine.ProBuilder.ActionResult/Status value)
    // Offset: 0x1883E9C
    void set_status(UnityEngine::ProBuilder::ActionResult::Status value);
    // public System.String get_notification()
    // Offset: 0x1883EA4
    ::Il2CppString* get_notification();
    // private System.Void set_notification(System.String value)
    // Offset: 0x1883EAC
    void set_notification(::Il2CppString* value);
    // public System.Void .ctor(UnityEngine.ProBuilder.ActionResult/Status status, System.String notification)
    // Offset: 0x1883EB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionResult* New_ctor(UnityEngine::ProBuilder::ActionResult::Status status, ::Il2CppString* notification) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ActionResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionResult*, creationType>(status, notification)));
    }
    // public System.Boolean ToBool()
    // Offset: 0x1883F0C
    bool ToBool();
    // static public System.Boolean FromBool(System.Boolean success)
    // Offset: 0x1883F1C
    static bool FromBool(bool success);
    // static public UnityEngine.ProBuilder.ActionResult get_Success()
    // Offset: 0x1883FC4
    static UnityEngine::ProBuilder::ActionResult* get_Success();
    // static public UnityEngine.ProBuilder.ActionResult get_NoSelection()
    // Offset: 0x1884040
    static UnityEngine::ProBuilder::ActionResult* get_NoSelection();
    // static public UnityEngine.ProBuilder.ActionResult get_UserCanceled()
    // Offset: 0x18840C0
    static UnityEngine::ProBuilder::ActionResult* get_UserCanceled();
  }; // UnityEngine.ProBuilder.ActionResult
  static check_size<sizeof(ActionResult), 24 + sizeof(::Il2CppString*)> __UnityEngine_ProBuilder_ActionResultSizeCheck;
  static_assert(sizeof(ActionResult) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ActionResult*, "UnityEngine.ProBuilder", "ActionResult");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ActionResult::Status, "UnityEngine.ProBuilder", "ActionResult/Status");
