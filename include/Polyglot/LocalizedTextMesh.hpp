// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextMesh
  class TextMesh;
  // Forward declaring type: TextAlignment
  struct TextAlignment;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LanguageDirection
  struct LanguageDirection;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizedTextMesh
  // [AddComponentMenu] Offset: D19D54
  // [RequireComponent] Offset: D19D54
  class LocalizedTextMesh : public UnityEngine::MonoBehaviour/*, public Polyglot::ILocalize*/ {
    public:
    // [TooltipAttribute] Offset: 0xD1A2B8
    // private UnityEngine.TextMesh text
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TextMesh* text;
    // Field size check
    static_assert(sizeof(UnityEngine::TextMesh*) == 0x8);
    // [TooltipAttribute] Offset: 0xD1A304
    // [LocalizationKeyAttribute] Offset: 0xD1A304
    // private System.String key
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LocalizedTextMesh
    LocalizedTextMesh(UnityEngine::TextMesh* text_ = {}, ::Il2CppString* key_ = {}) noexcept : text{text_}, key{key_} {}
    // Creating interface conversion operator: operator Polyglot::ILocalize
    operator Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_Key()
    // Offset: 0x212A6A8
    ::Il2CppString* get_Key();
    // public System.Void Reset()
    // Offset: 0x212A6B0
    void Reset();
    // public System.Void Start()
    // Offset: 0x212A708
    void Start();
    // public System.Void OnLocalize()
    // Offset: 0x212A734
    void OnLocalize();
    // private System.Boolean IsOppositeDirection(UnityEngine.TextAlignment alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x212A838
    bool IsOppositeDirection(UnityEngine::TextAlignment alignment, Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(UnityEngine.TextAlignment alignment)
    // Offset: 0x212A864
    bool IsAlignmentRight(UnityEngine::TextAlignment alignment);
    // private System.Boolean IsAlignmentLeft(UnityEngine.TextAlignment alignment)
    // Offset: 0x212A870
    bool IsAlignmentLeft(UnityEngine::TextAlignment alignment);
    // public System.Void .ctor()
    // Offset: 0x212A87C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextMesh*, creationType>()));
    }
  }; // Polyglot.LocalizedTextMesh
  #pragma pack(pop)
  static check_size<sizeof(LocalizedTextMesh), 32 + sizeof(::Il2CppString*)> __Polyglot_LocalizedTextMeshSizeCheck;
  static_assert(sizeof(LocalizedTextMesh) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMesh*, "Polyglot", "LocalizedTextMesh");
