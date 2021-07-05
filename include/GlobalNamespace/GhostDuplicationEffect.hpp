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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GhostDuplicationEffect
  class GhostDuplicationEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::GhostDuplicationEffect::GhostEffectParams
    struct GhostEffectParams;
    // Nested type: GlobalNamespace::GhostDuplicationEffect::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: GlobalNamespace::GhostDuplicationEffect::$HideRedundantWithDelay$d__8
    class $HideRedundantWithDelay$d__8;
    // private UnityEngine.CanvasGroup[] _canvases
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::CanvasGroup*>* canvases;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::CanvasGroup*>*) == 0x8);
    // private System.Boolean isInitialized
    // Size: 0x1
    // Offset: 0x20
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: tweeningManager
    char __padding1[0x7] = {};
    // [InjectAttribute] Offset: 0xE1A748
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // Creating value type constructor for type: GhostDuplicationEffect
    GhostDuplicationEffect(::Array<UnityEngine::CanvasGroup*>* canvases_ = {}, bool isInitialized_ = {}, Tweening::TweeningManager* tweeningManager_ = {}) noexcept : canvases{canvases_}, isInitialized{isInitialized_}, tweeningManager{tweeningManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0x108D6D0
    void OnDestroy();
    // protected System.Void Awake()
    // Offset: 0x108D768
    void Awake();
    // private System.Void Init()
    // Offset: 0x108D778
    void Init();
    // public System.Void Animate(GhostDuplicationEffect/GhostEffectParams ghostEffectParams)
    // Offset: 0x108D8F0
    void Animate(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams ghostEffectParams);
    // private System.Collections.IEnumerator HideRedundantWithDelay(System.Single delay)
    // Offset: 0x108DC80
    System::Collections::IEnumerator* HideRedundantWithDelay(float delay);
    // private System.Void SetDistances(System.Single distance, UnityEngine.Vector3 direction)
    // Offset: 0x108DD2C
    void SetDistances(float distance, UnityEngine::Vector3 direction);
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x108DE94
    void set_hide(bool value);
    // private System.Void set_size(System.Single value)
    // Offset: 0x108DECC
    void set_size(float value);
    // private System.Single get_size()
    // Offset: 0x108DF90
    float get_size();
    // private System.Void set_alpha(System.Single value)
    // Offset: 0x108D814
    void set_alpha(float value);
    // private System.Single get_alpha()
    // Offset: 0x108DFE4
    float get_alpha();
    // public System.Void .ctor()
    // Offset: 0x108E030
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GhostDuplicationEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GhostDuplicationEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GhostDuplicationEffect*, creationType>()));
    }
  }; // GhostDuplicationEffect
  #pragma pack(pop)
  static check_size<sizeof(GhostDuplicationEffect), 40 + sizeof(Tweening::TweeningManager*)> __GlobalNamespace_GhostDuplicationEffectSizeCheck;
  static_assert(sizeof(GhostDuplicationEffect) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostDuplicationEffect*, "", "GhostDuplicationEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)()>(&GlobalNamespace::GhostDuplicationEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)()>(&GlobalNamespace::GhostDuplicationEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)()>(&GlobalNamespace::GhostDuplicationEffect::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams)>(&GlobalNamespace::GhostDuplicationEffect::Animate)> {
  static const MethodInfo* get() {
    static auto* ghostEffectParams = &::il2cpp_utils::GetClassFromName("", "GhostDuplicationEffect/GhostEffectParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ghostEffectParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::HideRedundantWithDelay
// Il2CppName: HideRedundantWithDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::GhostDuplicationEffect::*)(float)>(&GlobalNamespace::GhostDuplicationEffect::HideRedundantWithDelay)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "HideRedundantWithDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::SetDistances
// Il2CppName: SetDistances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)(float, UnityEngine::Vector3)>(&GlobalNamespace::GhostDuplicationEffect::SetDistances)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "SetDistances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance, direction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)(bool)>(&GlobalNamespace::GhostDuplicationEffect::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)(float)>(&GlobalNamespace::GhostDuplicationEffect::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GhostDuplicationEffect::*)()>(&GlobalNamespace::GhostDuplicationEffect::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostDuplicationEffect::*)(float)>(&GlobalNamespace::GhostDuplicationEffect::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::get_alpha
// Il2CppName: get_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GhostDuplicationEffect::*)()>(&GlobalNamespace::GhostDuplicationEffect::get_alpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GhostDuplicationEffect*), "get_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GhostDuplicationEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
