// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.LocalizedTextComponent`1
#include "Polyglot/LocalizedTextComponent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
  // Forward declaring type: TextAlignmentOptions
  struct TextAlignmentOptions;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // WARNING Size may be invalid!
  // Autogenerated type: Polyglot.LocalizedTextMeshPro
  // [AddComponentMenu] Offset: D19DDC
  // [RequireComponent] Offset: D19DDC
  class LocalizedTextMeshPro : public Polyglot::LocalizedTextComponent_1<TMPro::TextMeshPro*> {
    public:
    // Creating value type constructor for type: LocalizedTextMeshPro
    LocalizedTextMeshPro() noexcept {}
    // protected System.Void SetText(TMPro.TextMeshPro text, System.String value)
    // Offset: 0x212A884
    void SetText(TMPro::TextMeshPro* text, ::Il2CppString* value);
    // protected System.Void UpdateAlignment(TMPro.TextMeshPro text, Polyglot.LanguageDirection direction)
    // Offset: 0x212A8A4
    void UpdateAlignment(TMPro::TextMeshPro* text, Polyglot::LanguageDirection direction);
    // private System.Boolean IsOppositeDirection(TMPro.TextAlignmentOptions alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x212A97C
    bool IsOppositeDirection(TMPro::TextAlignmentOptions alignment, Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x212A9D4
    bool IsAlignmentRight(TMPro::TextAlignmentOptions alignment);
    // private System.Boolean IsAlignmentLeft(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x212A9FC
    bool IsAlignmentLeft(TMPro::TextAlignmentOptions alignment);
    // public System.Void .ctor()
    // Offset: 0x212AA24
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextMeshPro* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextMeshPro::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextMeshPro*, creationType>()));
    }
  }; // Polyglot.LocalizedTextMeshPro
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMeshPro*, "Polyglot", "LocalizedTextMeshPro");
