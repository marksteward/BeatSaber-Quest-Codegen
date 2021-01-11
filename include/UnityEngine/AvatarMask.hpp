// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarMaskBodyPart
  struct AvatarMaskBodyPart;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AvatarMask
  // [] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: D62280
  // [NativeHeaderAttribute] Offset: D62280
  // [NativeHeaderAttribute] Offset: D62280
  // [UsedByNativeCodeAttribute] Offset: D62280
  class AvatarMask : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: AvatarMask
    AvatarMask() noexcept {}
    // public System.Boolean GetHumanoidBodyPartActive(UnityEngine.AvatarMaskBodyPart index)
    // Offset: 0x19CBD64
    bool GetHumanoidBodyPartActive(UnityEngine::AvatarMaskBodyPart index);
    // public System.Int32 get_transformCount()
    // Offset: 0x19CBDB4
    int get_transformCount();
    // public System.String GetTransformPath(System.Int32 index)
    // Offset: 0x19CBDF4
    ::Il2CppString* GetTransformPath(int index);
    // private System.Single GetTransformWeight(System.Int32 index)
    // Offset: 0x19CBE44
    float GetTransformWeight(int index);
    // public System.Boolean GetTransformActive(System.Int32 index)
    // Offset: 0x19CBE94
    bool GetTransformActive(int index);
  }; // UnityEngine.AvatarMask
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AvatarMask*, "UnityEngine", "AvatarMask");
