// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA5
  #pragma pack(push, 1)
  // Autogenerated type: GhostEffectBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class GhostEffectBehaviour : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: GlobalNamespace::GhostEffectBehaviour::EndBehavior
    struct EndBehavior;
    // Nested type: GlobalNamespace::GhostEffectBehaviour::GhostEffectType
    struct GhostEffectType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GhostEffectBehaviour/EndBehavior
    // [TokenAttribute] Offset: FFFFFFFF
    struct EndBehavior/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: EndBehavior
      constexpr EndBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public GhostEffectBehaviour/EndBehavior DisableAll
      static constexpr const int DisableAll = 0;
      // Get static field: static public GhostEffectBehaviour/EndBehavior DisableAll
      static GlobalNamespace::GhostEffectBehaviour::EndBehavior _get_DisableAll();
      // Set static field: static public GhostEffectBehaviour/EndBehavior DisableAll
      static void _set_DisableAll(GlobalNamespace::GhostEffectBehaviour::EndBehavior value);
      // static field const value: static public GhostEffectBehaviour/EndBehavior DisableCopies
      static constexpr const int DisableCopies = 1;
      // Get static field: static public GhostEffectBehaviour/EndBehavior DisableCopies
      static GlobalNamespace::GhostEffectBehaviour::EndBehavior _get_DisableCopies();
      // Set static field: static public GhostEffectBehaviour/EndBehavior DisableCopies
      static void _set_DisableCopies(GlobalNamespace::GhostEffectBehaviour::EndBehavior value);
      // static field const value: static public GhostEffectBehaviour/EndBehavior Nothing
      static constexpr const int Nothing = 2;
      // Get static field: static public GhostEffectBehaviour/EndBehavior Nothing
      static GlobalNamespace::GhostEffectBehaviour::EndBehavior _get_Nothing();
      // Set static field: static public GhostEffectBehaviour/EndBehavior Nothing
      static void _set_Nothing(GlobalNamespace::GhostEffectBehaviour::EndBehavior value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // GhostEffectBehaviour/EndBehavior
    #pragma pack(pop)
    static check_size<sizeof(GhostEffectBehaviour::EndBehavior), 0 + sizeof(int)> __GlobalNamespace_GhostEffectBehaviour_EndBehaviorSizeCheck;
    static_assert(sizeof(GhostEffectBehaviour::EndBehavior) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GhostEffectBehaviour/GhostEffectType
    // [TokenAttribute] Offset: FFFFFFFF
    struct GhostEffectType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GhostEffectType
      constexpr GhostEffectType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public GhostEffectBehaviour/GhostEffectType TextMeshPro
      static constexpr const int TextMeshPro = 0;
      // Get static field: static public GhostEffectBehaviour/GhostEffectType TextMeshPro
      static GlobalNamespace::GhostEffectBehaviour::GhostEffectType _get_TextMeshPro();
      // Set static field: static public GhostEffectBehaviour/GhostEffectType TextMeshPro
      static void _set_TextMeshPro(GlobalNamespace::GhostEffectBehaviour::GhostEffectType value);
      // static field const value: static public GhostEffectBehaviour/GhostEffectType Canvas
      static constexpr const int Canvas = 1;
      // Get static field: static public GhostEffectBehaviour/GhostEffectType Canvas
      static GlobalNamespace::GhostEffectBehaviour::GhostEffectType _get_Canvas();
      // Set static field: static public GhostEffectBehaviour/GhostEffectType Canvas
      static void _set_Canvas(GlobalNamespace::GhostEffectBehaviour::GhostEffectType value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // GhostEffectBehaviour/GhostEffectType
    #pragma pack(pop)
    static check_size<sizeof(GhostEffectBehaviour::GhostEffectType), 0 + sizeof(int)> __GlobalNamespace_GhostEffectBehaviour_GhostEffectTypeSizeCheck;
    static_assert(sizeof(GhostEffectBehaviour::GhostEffectType) == 0x4);
    // public UnityEngine.AnimationCurve alphaCurve
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AnimationCurve* alphaCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve sizeCurve
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimationCurve* sizeCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve distanceCurve
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationCurve* distanceCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 _distanceMultiplier
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 distanceMultiplier;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [SpaceAttribute] Offset: 0xEBF5A4
    // [TooltipAttribute] Offset: 0xEBF5A4
    // public System.Boolean _useStartTransform
    // Size: 0x1
    // Offset: 0x34
    bool useStartTransform;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xEBF5F0
    // public System.Boolean _useEndTransform
    // Size: 0x1
    // Offset: 0x35
    bool useEndTransform;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useEndTransform and: startLocalPosition
    char __padding5[0x2] = {};
    // [SpaceAttribute] Offset: 0xEBF628
    // [DrawIfAttribute] Offset: 0xEBF628
    // public UnityEngine.Vector3 _startLocalPosition
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 startLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: startLocalPosition and: startTransform
    char __padding6[0x4] = {};
    // [DrawIfAttribute] Offset: 0xEBF6CC
    // [NullAllowed] Offset: 0xEBF6CC
    // public UnityEngine.Transform _startTransform
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* startTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [DrawIfAttribute] Offset: 0xEBF774
    // public UnityEngine.Vector3 _endLocalPosition
    // Size: 0xC
    // Offset: 0x50
    UnityEngine::Vector3 endLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: endLocalPosition and: endTransform
    char __padding8[0x4] = {};
    // [DrawIfAttribute] Offset: 0xEBF808
    // [NullAllowed] Offset: 0xEBF808
    // public UnityEngine.Transform _endTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* endTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public Tweening.EaseType _positionEasing
    // Size: 0x4
    // Offset: 0x68
    Tweening::EaseType positionEasing;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // [SpaceAttribute] Offset: 0xEBF8B0
    // public GhostEffectBehaviour/EndBehavior _endBehavior
    // Size: 0x4
    // Offset: 0x6C
    GlobalNamespace::GhostEffectBehaviour::EndBehavior endBehavior;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostEffectBehaviour::EndBehavior) == 0x4);
    // public System.Single progress
    // Size: 0x4
    // Offset: 0x70
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: progress and: textMeshPros
    char __padding12[0x4] = {};
    // [NullAllowed] Offset: 0xEBF8C0
    // public TMPro.TextMeshPro[] textMeshPros
    // Size: 0x8
    // Offset: 0x78
    ::Array<TMPro::TextMeshPro*>* textMeshPros;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshPro*>*) == 0x8);
    // [NullAllowed] Offset: 0xEBF8F8
    // public UnityEngine.CanvasGroup[] _canvasGroups
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::CanvasGroup*>* canvasGroups;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::CanvasGroup*>*) == 0x8);
    // public GhostEffectBehaviour/GhostEffectType _ghostEffectType
    // Size: 0x4
    // Offset: 0x88
    GlobalNamespace::GhostEffectBehaviour::GhostEffectType ghostEffectType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostEffectBehaviour::GhostEffectType) == 0x4);
    // Padding between fields: ghostEffectType and: ghostEffectTransform
    char __padding15[0x4] = {};
    // [NullAllowed] Offset: 0xEBF940
    // public UnityEngine.Transform _ghostEffectTransform
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Transform* ghostEffectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _direction
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean _finished
    // Size: 0x1
    // Offset: 0xA4
    bool finished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GhostEffectBehaviour
    GhostEffectBehaviour(UnityEngine::AnimationCurve* alphaCurve_ = {}, UnityEngine::AnimationCurve* sizeCurve_ = {}, UnityEngine::AnimationCurve* distanceCurve_ = {}, UnityEngine::Vector3 distanceMultiplier_ = {}, bool useStartTransform_ = {}, bool useEndTransform_ = {}, UnityEngine::Vector3 startLocalPosition_ = {}, UnityEngine::Transform* startTransform_ = {}, UnityEngine::Vector3 endLocalPosition_ = {}, UnityEngine::Transform* endTransform_ = {}, Tweening::EaseType positionEasing_ = {}, GlobalNamespace::GhostEffectBehaviour::EndBehavior endBehavior_ = {}, float progress_ = {}, ::Array<TMPro::TextMeshPro*>* textMeshPros_ = {}, ::Array<UnityEngine::CanvasGroup*>* canvasGroups_ = {}, GlobalNamespace::GhostEffectBehaviour::GhostEffectType ghostEffectType_ = {}, UnityEngine::Transform* ghostEffectTransform_ = {}, UnityEngine::Vector3 direction_ = {}, bool finished_ = {}) noexcept : alphaCurve{alphaCurve_}, sizeCurve{sizeCurve_}, distanceCurve{distanceCurve_}, distanceMultiplier{distanceMultiplier_}, useStartTransform{useStartTransform_}, useEndTransform{useEndTransform_}, startLocalPosition{startLocalPosition_}, startTransform{startTransform_}, endLocalPosition{endLocalPosition_}, endTransform{endTransform_}, positionEasing{positionEasing_}, endBehavior{endBehavior_}, progress{progress_}, textMeshPros{textMeshPros_}, canvasGroups{canvasGroups_}, ghostEffectType{ghostEffectType_}, ghostEffectTransform{ghostEffectTransform_}, direction{direction_}, finished{finished_} {}
    // Get instance field: public UnityEngine.AnimationCurve alphaCurve
    UnityEngine::AnimationCurve* _get_alphaCurve();
    // Set instance field: public UnityEngine.AnimationCurve alphaCurve
    void _set_alphaCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: public UnityEngine.AnimationCurve sizeCurve
    UnityEngine::AnimationCurve* _get_sizeCurve();
    // Set instance field: public UnityEngine.AnimationCurve sizeCurve
    void _set_sizeCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: public UnityEngine.AnimationCurve distanceCurve
    UnityEngine::AnimationCurve* _get_distanceCurve();
    // Set instance field: public UnityEngine.AnimationCurve distanceCurve
    void _set_distanceCurve(UnityEngine::AnimationCurve* value);
    // Get instance field: public UnityEngine.Vector3 _distanceMultiplier
    UnityEngine::Vector3 _get__distanceMultiplier();
    // Set instance field: public UnityEngine.Vector3 _distanceMultiplier
    void _set__distanceMultiplier(UnityEngine::Vector3 value);
    // Get instance field: public System.Boolean _useStartTransform
    bool _get__useStartTransform();
    // Set instance field: public System.Boolean _useStartTransform
    void _set__useStartTransform(bool value);
    // Get instance field: public System.Boolean _useEndTransform
    bool _get__useEndTransform();
    // Set instance field: public System.Boolean _useEndTransform
    void _set__useEndTransform(bool value);
    // Get instance field: public UnityEngine.Vector3 _startLocalPosition
    UnityEngine::Vector3 _get__startLocalPosition();
    // Set instance field: public UnityEngine.Vector3 _startLocalPosition
    void _set__startLocalPosition(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Transform _startTransform
    UnityEngine::Transform* _get__startTransform();
    // Set instance field: public UnityEngine.Transform _startTransform
    void _set__startTransform(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Vector3 _endLocalPosition
    UnityEngine::Vector3 _get__endLocalPosition();
    // Set instance field: public UnityEngine.Vector3 _endLocalPosition
    void _set__endLocalPosition(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Transform _endTransform
    UnityEngine::Transform* _get__endTransform();
    // Set instance field: public UnityEngine.Transform _endTransform
    void _set__endTransform(UnityEngine::Transform* value);
    // Get instance field: public Tweening.EaseType _positionEasing
    Tweening::EaseType _get__positionEasing();
    // Set instance field: public Tweening.EaseType _positionEasing
    void _set__positionEasing(Tweening::EaseType value);
    // Get instance field: public GhostEffectBehaviour/EndBehavior _endBehavior
    GlobalNamespace::GhostEffectBehaviour::EndBehavior _get__endBehavior();
    // Set instance field: public GhostEffectBehaviour/EndBehavior _endBehavior
    void _set__endBehavior(GlobalNamespace::GhostEffectBehaviour::EndBehavior value);
    // Get instance field: public System.Single progress
    float _get_progress();
    // Set instance field: public System.Single progress
    void _set_progress(float value);
    // Get instance field: public TMPro.TextMeshPro[] textMeshPros
    ::Array<TMPro::TextMeshPro*>* _get_textMeshPros();
    // Set instance field: public TMPro.TextMeshPro[] textMeshPros
    void _set_textMeshPros(::Array<TMPro::TextMeshPro*>* value);
    // Get instance field: public UnityEngine.CanvasGroup[] _canvasGroups
    ::Array<UnityEngine::CanvasGroup*>* _get__canvasGroups();
    // Set instance field: public UnityEngine.CanvasGroup[] _canvasGroups
    void _set__canvasGroups(::Array<UnityEngine::CanvasGroup*>* value);
    // Get instance field: public GhostEffectBehaviour/GhostEffectType _ghostEffectType
    GlobalNamespace::GhostEffectBehaviour::GhostEffectType _get__ghostEffectType();
    // Set instance field: public GhostEffectBehaviour/GhostEffectType _ghostEffectType
    void _set__ghostEffectType(GlobalNamespace::GhostEffectBehaviour::GhostEffectType value);
    // Get instance field: public UnityEngine.Transform _ghostEffectTransform
    UnityEngine::Transform* _get__ghostEffectTransform();
    // Set instance field: public UnityEngine.Transform _ghostEffectTransform
    void _set__ghostEffectTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Vector3 _direction
    UnityEngine::Vector3 _get__direction();
    // Set instance field: private UnityEngine.Vector3 _direction
    void _set__direction(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean _finished
    bool _get__finished();
    // Set instance field: private System.Boolean _finished
    void _set__finished(bool value);
    // private System.Void EnableObjects(System.Boolean on)
    // Offset: 0x1F234D8
    void EnableObjects(bool on);
    // public System.Void .ctor()
    // Offset: 0x1F23AA0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GhostEffectBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GhostEffectBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GhostEffectBehaviour*, creationType>()));
    }
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1F2337C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x1F23600
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // GhostEffectBehaviour
  #pragma pack(pop)
  static check_size<sizeof(GhostEffectBehaviour), 164 + sizeof(bool)> __GlobalNamespace_GhostEffectBehaviourSizeCheck;
  static_assert(sizeof(GhostEffectBehaviour) == 0xA5);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostEffectBehaviour*, "", "GhostEffectBehaviour");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostEffectBehaviour::EndBehavior, "", "GhostEffectBehaviour/EndBehavior");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostEffectBehaviour::GhostEffectType, "", "GhostEffectBehaviour/GhostEffectType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GhostEffectBehaviour::EnableObjects
// Il2CppName: EnableObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostEffectBehaviour::*)(bool)>(&GlobalNamespace::GhostEffectBehaviour::EnableObjects)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostEffectBehaviour*), "EnableObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostEffectBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostEffectBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostEffectBehaviour*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostEffectBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostEffectBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&GlobalNamespace::GhostEffectBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostEffectBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
