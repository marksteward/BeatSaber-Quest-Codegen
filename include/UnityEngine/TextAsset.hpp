// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextAsset
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4D970
  class TextAsset : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: TextAsset
    TextAsset() noexcept {}
    // public System.String get_text()
    // Offset: 0x16C340C
    ::Il2CppString* get_text();
    // public System.Byte[] get_bytes()
    // Offset: 0x16C344C
    ::Array<uint8_t>* get_bytes();
    // public override System.String ToString()
    // Offset: 0x16C348C
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.TextAsset
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextAsset*, "UnityEngine", "TextAsset");
