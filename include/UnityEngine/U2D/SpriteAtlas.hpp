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
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.U2D.SpriteAtlas
  // [NativeHeaderAttribute] Offset: D90E4C
  // [NativeTypeAttribute] Offset: D90E4C
  class SpriteAtlas : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: SpriteAtlas
    SpriteAtlas() noexcept {}
    // public System.Boolean CanBindTo(UnityEngine.Sprite sprite)
    // Offset: 0x2320854
    bool CanBindTo(UnityEngine::Sprite* sprite);
    // public UnityEngine.Sprite GetSprite(System.String name)
    // Offset: 0x23208A4
    UnityEngine::Sprite* GetSprite(::Il2CppString* name);
  }; // UnityEngine.U2D.SpriteAtlas
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::U2D::SpriteAtlas*, "UnityEngine.U2D", "SpriteAtlas");
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlas::CanBindTo
// Il2CppName: CanBindTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlas::GetSprite
// Il2CppName: GetSprite
// Cannot perform method pointer template specialization from operators!
