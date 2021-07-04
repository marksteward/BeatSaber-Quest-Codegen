// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ImageWithHint
  class ImageWithHint : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image _image
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Image* image;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private HMUI.HoverHint _hoverHint
    // Size: 0x8
    // Offset: 0x20
    HMUI::HoverHint* hoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // Creating value type constructor for type: ImageWithHint
    ImageWithHint(UnityEngine::UI::Image* image_ = {}, HMUI::HoverHint* hoverHint_ = {}) noexcept : image{image_}, hoverHint{hoverHint_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x12AF5D8
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0x12AF5F4
    UnityEngine::Sprite* get_sprite();
    // public System.Void set_hintText(System.String value)
    // Offset: 0x12AF610
    void set_hintText(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x12AF62C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageWithHint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ImageWithHint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageWithHint*, creationType>()));
    }
  }; // HMUI.ImageWithHint
  #pragma pack(pop)
  static check_size<sizeof(ImageWithHint), 32 + sizeof(HMUI::HoverHint*)> __HMUI_ImageWithHintSizeCheck;
  static_assert(sizeof(ImageWithHint) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageWithHint*, "HMUI", "ImageWithHint");
// Writing MetadataGetter for method: HMUI::ImageWithHint::set_sprite
// Il2CppName: set_sprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ImageWithHint::get_sprite
// Il2CppName: get_sprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ImageWithHint::set_hintText
// Il2CppName: set_hintText
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::ImageWithHint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
