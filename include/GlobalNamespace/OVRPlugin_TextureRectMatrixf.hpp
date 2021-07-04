// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/TextureRectMatrixf
  struct OVRPlugin::TextureRectMatrixf/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Rect leftRect
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Rect leftRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect rightRect
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Rect rightRect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Vector4 leftScaleBias
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Vector4 leftScaleBias;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 rightScaleBias
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Vector4 rightScaleBias;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // Creating value type constructor for type: TextureRectMatrixf
    constexpr TextureRectMatrixf(UnityEngine::Rect leftRect_ = {}, UnityEngine::Rect rightRect_ = {}, UnityEngine::Vector4 leftScaleBias_ = {}, UnityEngine::Vector4 rightScaleBias_ = {}) noexcept : leftRect{leftRect_}, rightRect{rightRect_}, leftScaleBias{leftScaleBias_}, rightScaleBias{rightScaleBias_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/TextureRectMatrixf zero
    static GlobalNamespace::OVRPlugin::TextureRectMatrixf _get_zero();
    // Set static field: static public readonly OVRPlugin/TextureRectMatrixf zero
    static void _set_zero(GlobalNamespace::OVRPlugin::TextureRectMatrixf value);
    // static private System.Void .cctor()
    // Offset: 0x162599C
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xEF91F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/TextureRectMatrixf
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::TextureRectMatrixf), 48 + sizeof(UnityEngine::Vector4)> __GlobalNamespace_OVRPlugin_TextureRectMatrixfSizeCheck;
  static_assert(sizeof(OVRPlugin::TextureRectMatrixf) == 0x40);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::TextureRectMatrixf, "", "OVRPlugin/TextureRectMatrixf");
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::TextureRectMatrixf::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::TextureRectMatrixf::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
