// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3C
  // Autogenerated type: HMUI.VerticalScrollIndicator
  // [] Offset: FFFFFFFF
  class VerticalScrollIndicator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _handle
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* handle;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.AnimationClip _normalAnimationClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationClip* normalAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _disabledAnimationClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationClip* disabledAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private System.Single _padding
    // Size: 0x4
    // Offset: 0x30
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _progress
    // Size: 0x4
    // Offset: 0x34
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _normalizedPageHeight
    // Size: 0x4
    // Offset: 0x38
    float normalizedPageHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: VerticalScrollIndicator
    VerticalScrollIndicator(UnityEngine::RectTransform* handle_ = {}, UnityEngine::AnimationClip* normalAnimationClip_ = {}, UnityEngine::AnimationClip* disabledAnimationClip_ = {}, float padding_ = {}, float progress_ = {}, float normalizedPageHeight_ = {}) noexcept : handle{handle_}, normalAnimationClip{normalAnimationClip_}, disabledAnimationClip{disabledAnimationClip_}, padding{padding_}, progress{progress_}, normalizedPageHeight{normalizedPageHeight_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_progress(System.Single value)
    // Offset: 0x197FDC0
    void set_progress(float value);
    // public System.Single get_progress()
    // Offset: 0x197FF84
    float get_progress();
    // public System.Void set_normalizedPageHeight(System.Single value)
    // Offset: 0x197FF8C
    void set_normalizedPageHeight(float value);
    // public System.Single get_normalizedPageHeight()
    // Offset: 0x1980028
    float get_normalizedPageHeight();
    // public System.Void set_disabled(System.Boolean value)
    // Offset: 0x1980030
    void set_disabled(bool value);
    // protected System.Void OnEnable()
    // Offset: 0x198007C
    void OnEnable();
    // private System.Void RefreshHandle()
    // Offset: 0x197FE5C
    void RefreshHandle();
    // public System.Void .ctor()
    // Offset: 0x1980080
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VerticalScrollIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::VerticalScrollIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VerticalScrollIndicator*, creationType>()));
    }
  }; // HMUI.VerticalScrollIndicator
  static check_size<sizeof(VerticalScrollIndicator), 56 + sizeof(float)> __HMUI_VerticalScrollIndicatorSizeCheck;
  static_assert(sizeof(VerticalScrollIndicator) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::VerticalScrollIndicator*, "HMUI", "VerticalScrollIndicator");
#pragma pack(pop)
