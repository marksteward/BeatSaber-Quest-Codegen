// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::LowLevel
namespace UnityEngine::LowLevel {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LowLevel.PlayerLoopSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: D7EA24
  struct PlayerLoopSystem/*, public System::ValueType*/ {
    public:
    // Nested type: UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction
    class UpdateFunction;
    // public System.Type type
    // Size: 0x8
    // Offset: 0x0
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public UnityEngine.LowLevel.PlayerLoopSystem[] subSystemList
    // Size: 0x8
    // Offset: 0x8
    ::Array<UnityEngine::LowLevel::PlayerLoopSystem>* subSystemList;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::LowLevel::PlayerLoopSystem>*) == 0x8);
    // public UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction updateDelegate
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate;
    // Field size check
    static_assert(sizeof(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*) == 0x8);
    // public System.IntPtr updateFunction
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr updateFunction;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr loopConditionFunction
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr loopConditionFunction;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: PlayerLoopSystem
    constexpr PlayerLoopSystem(System::Type* type_ = {}, ::Array<UnityEngine::LowLevel::PlayerLoopSystem>* subSystemList_ = {}, UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate_ = {}, System::IntPtr updateFunction_ = {}, System::IntPtr loopConditionFunction_ = {}) noexcept : type{type_}, subSystemList{subSystemList_}, updateDelegate{updateDelegate_}, updateFunction{updateFunction_}, loopConditionFunction{loopConditionFunction_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Type type
    System::Type* _get_type();
    // Set instance field: public System.Type type
    void _set_type(System::Type* value);
    // Get instance field: public UnityEngine.LowLevel.PlayerLoopSystem[] subSystemList
    ::Array<UnityEngine::LowLevel::PlayerLoopSystem>* _get_subSystemList();
    // Set instance field: public UnityEngine.LowLevel.PlayerLoopSystem[] subSystemList
    void _set_subSystemList(::Array<UnityEngine::LowLevel::PlayerLoopSystem>* value);
    // Get instance field: public UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction updateDelegate
    UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* _get_updateDelegate();
    // Set instance field: public UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction updateDelegate
    void _set_updateDelegate(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* value);
    // Get instance field: public System.IntPtr updateFunction
    System::IntPtr _get_updateFunction();
    // Set instance field: public System.IntPtr updateFunction
    void _set_updateFunction(System::IntPtr value);
    // Get instance field: public System.IntPtr loopConditionFunction
    System::IntPtr _get_loopConditionFunction();
    // Set instance field: public System.IntPtr loopConditionFunction
    void _set_loopConditionFunction(System::IntPtr value);
  }; // UnityEngine.LowLevel.PlayerLoopSystem
  #pragma pack(pop)
  static check_size<sizeof(PlayerLoopSystem), 32 + sizeof(System::IntPtr)> __UnityEngine_LowLevel_PlayerLoopSystemSizeCheck;
  static_assert(sizeof(PlayerLoopSystem) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LowLevel::PlayerLoopSystem, "UnityEngine.LowLevel", "PlayerLoopSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
