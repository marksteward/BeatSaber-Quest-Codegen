// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUITargetAttribute
  // [AttributeUsageAttribute] Offset: DADB6C
  class GUITargetAttribute : public System::Attribute {
    public:
    // System.Int32 displayMask
    // Size: 0x4
    // Offset: 0x10
    int displayMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GUITargetAttribute
    GUITargetAttribute(int displayMask_ = {}) noexcept : displayMask{displayMask_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return displayMask;
    }
    // static private System.Int32 GetGUITargetAttrValue(System.Type klass, System.String methodName)
    // Offset: 0x1A97A20
    static int GetGUITargetAttrValue(System::Type* klass, ::Il2CppString* methodName);
  }; // UnityEngine.GUITargetAttribute
  #pragma pack(pop)
  static check_size<sizeof(GUITargetAttribute), 16 + sizeof(int)> __UnityEngine_GUITargetAttributeSizeCheck;
  static_assert(sizeof(GUITargetAttribute) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUITargetAttribute*, "UnityEngine", "GUITargetAttribute");
// Writing MetadataGetter for method: UnityEngine::GUITargetAttribute::GetGUITargetAttrValue
// Il2CppName: GetGUITargetAttrValue
// Cannot perform method pointer template specialization from operators!
