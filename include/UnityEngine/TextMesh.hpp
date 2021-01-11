// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAlignment
  struct TextAlignment;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextMesh
  // [] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: D607F0
  // [NativeHeaderAttribute] Offset: D607F0
  // [RequireComponent] Offset: D607F0
  class TextMesh : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: TextMesh
    TextMesh() noexcept {}
    // public System.Void set_text(System.String value)
    // Offset: 0x19F8E60
    void set_text(::Il2CppString* value);
    // public UnityEngine.TextAlignment get_alignment()
    // Offset: 0x19F8EB0
    UnityEngine::TextAlignment get_alignment();
    // public System.Void set_alignment(UnityEngine.TextAlignment value)
    // Offset: 0x19F8EF0
    void set_alignment(UnityEngine::TextAlignment value);
  }; // UnityEngine.TextMesh
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextMesh*, "UnityEngine", "TextMesh");
