// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteFrame
  // [TokenAttribute] Offset: FFFFFFFF
  struct TexturePacker::SpriteFrame/*, public System::ValueType*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0x8
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single h
    // Size: 0x4
    // Offset: 0xC
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SpriteFrame
    constexpr SpriteFrame(float x_ = {}, float y_ = {}, float w_ = {}, float h_ = {}) noexcept : x{x_}, y{y_}, w{w_}, h{h_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Single x
    float _get_x();
    // Set instance field: public System.Single x
    void _set_x(float value);
    // Get instance field: public System.Single y
    float _get_y();
    // Set instance field: public System.Single y
    void _set_y(float value);
    // Get instance field: public System.Single w
    float _get_w();
    // Set instance field: public System.Single w
    void _set_w(float value);
    // Get instance field: public System.Single h
    float _get_h();
    // Set instance field: public System.Single h
    void _set_h(float value);
    // public override System.String ToString()
    // Offset: 0xED0AF4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteFrame
  #pragma pack(pop)
  static check_size<sizeof(TexturePacker::SpriteFrame), 12 + sizeof(float)> __TMPro_SpriteAssetUtilities_TexturePacker_SpriteFrameSizeCheck;
  static_assert(sizeof(TexturePacker::SpriteFrame) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteFrame");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame::*)()>(&TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::SpriteAssetUtilities::TexturePacker::SpriteFrame), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
