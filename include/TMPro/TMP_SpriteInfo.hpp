// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SpriteInfo
  struct TMP_SpriteInfo : public System::ValueType {
    public:
    // public System.Int32 spriteIndex
    // Offset: 0x0
    int spriteIndex;
    // public System.Int32 characterIndex
    // Offset: 0x4
    int characterIndex;
    // public System.Int32 vertexIndex
    // Offset: 0x8
    int vertexIndex;
    // Creating value type constructor for type: TMP_SpriteInfo
    constexpr TMP_SpriteInfo(int spriteIndex_ = {}, int characterIndex_ = {}, int vertexIndex_ = {}) : spriteIndex{spriteIndex_}, characterIndex{characterIndex_}, vertexIndex{vertexIndex_} {}
  }; // TMPro.TMP_SpriteInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteInfo, "TMPro", "TMP_SpriteInfo");
#pragma pack(pop)
