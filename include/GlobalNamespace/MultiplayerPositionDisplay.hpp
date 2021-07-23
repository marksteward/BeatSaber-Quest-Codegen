// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
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
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPositionDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerPositionDisplay : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _leadingColor
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color leadingColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _failedColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color failedColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _fadeInDuration
    // Size: 0x4
    // Offset: 0x50
    float fadeInDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _crossFadeDuration
    // Size: 0x4
    // Offset: 0x54
    float crossFadeDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutDuration
    // Size: 0x4
    // Offset: 0x58
    float fadeOutDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fadeOutDuration and: scoreProvider
    char __padding6[0x4] = {};
    // [InjectAttribute] Offset: 0xE08AD4
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xE08AE4
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private System.Boolean _wasFirst
    // Size: 0x1
    // Offset: 0x70
    bool wasFirst;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isFailed
    // Size: 0x1
    // Offset: 0x71
    bool isFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _updatingColor
    // Size: 0x1
    // Offset: 0x72
    bool updatingColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updatingColor and: startColor
    char __padding11[0x1] = {};
    // private UnityEngine.Color _startColor
    // Size: 0x10
    // Offset: 0x74
    UnityEngine::Color startColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _targetColor
    // Size: 0x10
    // Offset: 0x84
    UnityEngine::Color targetColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _colorAnimationStartTime
    // Size: 0x4
    // Offset: 0x94
    float colorAnimationStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _colorAnimationStartDuration
    // Size: 0x4
    // Offset: 0x98
    float colorAnimationStartDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerPositionDisplay
    MultiplayerPositionDisplay(TMPro::TextMeshPro* text_ = {}, UnityEngine::Color normalColor_ = {}, UnityEngine::Color leadingColor_ = {}, UnityEngine::Color failedColor_ = {}, float fadeInDuration_ = {}, float crossFadeDuration_ = {}, float fadeOutDuration_ = {}, GlobalNamespace::MultiplayerScoreProvider* scoreProvider_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, bool wasFirst_ = {}, bool isFailed_ = {}, bool updatingColor_ = {}, UnityEngine::Color startColor_ = {}, UnityEngine::Color targetColor_ = {}, float colorAnimationStartTime_ = {}, float colorAnimationStartDuration_ = {}) noexcept : text{text_}, normalColor{normalColor_}, leadingColor{leadingColor_}, failedColor{failedColor_}, fadeInDuration{fadeInDuration_}, crossFadeDuration{crossFadeDuration_}, fadeOutDuration{fadeOutDuration_}, scoreProvider{scoreProvider_}, connectedPlayer{connectedPlayer_}, wasFirst{wasFirst_}, isFailed{isFailed_}, updatingColor{updatingColor_}, startColor{startColor_}, targetColor{targetColor_}, colorAnimationStartTime{colorAnimationStartTime_}, colorAnimationStartDuration{colorAnimationStartDuration_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private TMPro.TextMeshPro _text
    TMPro::TextMeshPro* _get__text();
    // Set instance field: private TMPro.TextMeshPro _text
    void _set__text(TMPro::TextMeshPro* value);
    // Get instance field: private UnityEngine.Color _normalColor
    UnityEngine::Color _get__normalColor();
    // Set instance field: private UnityEngine.Color _normalColor
    void _set__normalColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _leadingColor
    UnityEngine::Color _get__leadingColor();
    // Set instance field: private UnityEngine.Color _leadingColor
    void _set__leadingColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _failedColor
    UnityEngine::Color _get__failedColor();
    // Set instance field: private UnityEngine.Color _failedColor
    void _set__failedColor(UnityEngine::Color value);
    // Get instance field: private System.Single _fadeInDuration
    float _get__fadeInDuration();
    // Set instance field: private System.Single _fadeInDuration
    void _set__fadeInDuration(float value);
    // Get instance field: private System.Single _crossFadeDuration
    float _get__crossFadeDuration();
    // Set instance field: private System.Single _crossFadeDuration
    void _set__crossFadeDuration(float value);
    // Get instance field: private System.Single _fadeOutDuration
    float _get__fadeOutDuration();
    // Set instance field: private System.Single _fadeOutDuration
    void _set__fadeOutDuration(float value);
    // Get instance field: private readonly MultiplayerScoreProvider _scoreProvider
    GlobalNamespace::MultiplayerScoreProvider* _get__scoreProvider();
    // Set instance field: private readonly MultiplayerScoreProvider _scoreProvider
    void _set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider* value);
    // Get instance field: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer* _get__connectedPlayer();
    // Set instance field: private readonly IConnectedPlayer _connectedPlayer
    void _set__connectedPlayer(GlobalNamespace::IConnectedPlayer* value);
    // Get instance field: private System.Boolean _wasFirst
    bool _get__wasFirst();
    // Set instance field: private System.Boolean _wasFirst
    void _set__wasFirst(bool value);
    // Get instance field: private System.Boolean _isFailed
    bool _get__isFailed();
    // Set instance field: private System.Boolean _isFailed
    void _set__isFailed(bool value);
    // Get instance field: private System.Boolean _updatingColor
    bool _get__updatingColor();
    // Set instance field: private System.Boolean _updatingColor
    void _set__updatingColor(bool value);
    // Get instance field: private UnityEngine.Color _startColor
    UnityEngine::Color _get__startColor();
    // Set instance field: private UnityEngine.Color _startColor
    void _set__startColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _targetColor
    UnityEngine::Color _get__targetColor();
    // Set instance field: private UnityEngine.Color _targetColor
    void _set__targetColor(UnityEngine::Color value);
    // Get instance field: private System.Single _colorAnimationStartTime
    float _get__colorAnimationStartTime();
    // Set instance field: private System.Single _colorAnimationStartTime
    void _set__colorAnimationStartTime(float value);
    // Get instance field: private System.Single _colorAnimationStartDuration
    float _get__colorAnimationStartDuration();
    // Set instance field: private System.Single _colorAnimationStartDuration
    void _set__colorAnimationStartDuration(float value);
    // protected System.Void Start()
    // Offset: 0x1003BF8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1003DC8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1003FDC
    void Update();
    // private System.Void UpdateColors()
    // Offset: 0x1004038
    void UpdateColors();
    // private System.Void UpdatePosition()
    // Offset: 0x10040D8
    void UpdatePosition();
    // private System.Void HandlePlayerFailed()
    // Offset: 0x1004250
    void HandlePlayerFailed();
    // private System.Void HandleFirstPlayerDidChange(MultiplayerScoreProvider/RankedPlayer obj)
    // Offset: 0x1004334
    void HandleFirstPlayerDidChange(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* obj);
    // private System.Void ChangeColor(UnityEngine.Color toColor, System.Single duration)
    // Offset: 0x1003F54
    void ChangeColor(UnityEngine::Color toColor, float duration);
    // public System.Void .ctor()
    // Offset: 0x10043E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerPositionDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerPositionDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerPositionDisplay*, creationType>()));
    }
  }; // MultiplayerPositionDisplay
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerPositionDisplay), 152 + sizeof(float)> __GlobalNamespace_MultiplayerPositionDisplaySizeCheck;
  static_assert(sizeof(MultiplayerPositionDisplay) == 0x9C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPositionDisplay*, "", "MultiplayerPositionDisplay");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::UpdateColors
// Il2CppName: UpdateColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::UpdateColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "UpdateColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::UpdatePosition
// Il2CppName: UpdatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::UpdatePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "UpdatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::HandlePlayerFailed
// Il2CppName: HandlePlayerFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)()>(&GlobalNamespace::MultiplayerPositionDisplay::HandlePlayerFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "HandlePlayerFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::HandleFirstPlayerDidChange
// Il2CppName: HandleFirstPlayerDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerPositionDisplay::HandleFirstPlayerDidChange)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "HandleFirstPlayerDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::ChangeColor
// Il2CppName: ChangeColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionDisplay::*)(UnityEngine::Color, float)>(&GlobalNamespace::MultiplayerPositionDisplay::ChangeColor)> {
  static const MethodInfo* get() {
    static auto* toColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPositionDisplay*), "ChangeColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toColor, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPositionDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
