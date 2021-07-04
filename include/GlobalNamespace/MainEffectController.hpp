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
  // Forward declaring type: MainEffectContainerSO
  class MainEffectContainerSO;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: ImageEffectController
  class ImageEffectController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectController
  // [RequireComponent] Offset: E01818
  // [ImageEffectAllowedInSceneView] Offset: E01818
  // [ExecuteInEditMode] Offset: E01818
  class MainEffectController : public UnityEngine::MonoBehaviour {
    public:
    // private MainEffectContainerSO _mainEffectContainer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MainEffectContainerSO* mainEffectContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectContainerSO*) == 0x8);
    // private FloatSO _fadeValue
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FloatSO* fadeValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE01C8C
    // private System.Action`1<UnityEngine.RenderTexture> afterImageEffectEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<UnityEngine::RenderTexture*>* afterImageEffectEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::RenderTexture*>*) == 0x8);
    // private ImageEffectController _imageEffectController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ImageEffectController* imageEffectController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ImageEffectController*) == 0x8);
    // Creating value type constructor for type: MainEffectController
    MainEffectController(GlobalNamespace::MainEffectContainerSO* mainEffectContainer_ = {}, GlobalNamespace::FloatSO* fadeValue_ = {}, System::Action_1<UnityEngine::RenderTexture*>* afterImageEffectEvent_ = {}, GlobalNamespace::ImageEffectController* imageEffectController_ = {}) noexcept : mainEffectContainer{mainEffectContainer_}, fadeValue{fadeValue_}, afterImageEffectEvent{afterImageEffectEvent_}, imageEffectController{imageEffectController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kMainEffectEnabledKeyword
    static constexpr const char* kMainEffectEnabledKeyword = "MAIN_EFFECT_ENABLED";
    // Get static field: static private System.String kMainEffectEnabledKeyword
    static ::Il2CppString* _get_kMainEffectEnabledKeyword();
    // Set static field: static private System.String kMainEffectEnabledKeyword
    static void _set_kMainEffectEnabledKeyword(::Il2CppString* value);
    // public System.Void add_afterImageEffectEvent(System.Action`1<UnityEngine.RenderTexture> value)
    // Offset: 0x235FAA4
    void add_afterImageEffectEvent(System::Action_1<UnityEngine::RenderTexture*>* value);
    // public System.Void remove_afterImageEffectEvent(System.Action`1<UnityEngine.RenderTexture> value)
    // Offset: 0x235FB48
    void remove_afterImageEffectEvent(System::Action_1<UnityEngine::RenderTexture*>* value);
    // protected System.Void OnEnable()
    // Offset: 0x235FBEC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x235FD84
    void OnDisable();
    // protected System.Void OnValidate()
    // Offset: 0x235FE1C
    void OnValidate();
    // private System.Void LazySetupImageEffectController()
    // Offset: 0x235FC20
    void LazySetupImageEffectController();
    // private System.Void ImageEffectControllerCallback(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x235FE70
    void ImageEffectControllerCallback(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // protected System.Void OnPreRender()
    // Offset: 0x235FF28
    void OnPreRender();
    // protected System.Void OnPostRender()
    // Offset: 0x235FFEC
    void OnPostRender();
    // public System.Void .ctor()
    // Offset: 0x2360060
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainEffectController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectController*, creationType>()));
    }
  }; // MainEffectController
  #pragma pack(pop)
  static check_size<sizeof(MainEffectController), 48 + sizeof(GlobalNamespace::ImageEffectController*)> __GlobalNamespace_MainEffectControllerSizeCheck;
  static_assert(sizeof(MainEffectController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectController*, "", "MainEffectController");
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::add_afterImageEffectEvent
// Il2CppName: add_afterImageEffectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)(System::Action_1<UnityEngine::RenderTexture*>*)>(&GlobalNamespace::MainEffectController::add_afterImageEffectEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "add_afterImageEffectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::remove_afterImageEffectEvent
// Il2CppName: remove_afterImageEffectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)(System::Action_1<UnityEngine::RenderTexture*>*)>(&GlobalNamespace::MainEffectController::remove_afterImageEffectEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "remove_afterImageEffectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)()>(&GlobalNamespace::MainEffectController::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)()>(&GlobalNamespace::MainEffectController::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)()>(&GlobalNamespace::MainEffectController::OnValidate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::LazySetupImageEffectController
// Il2CppName: LazySetupImageEffectController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)()>(&GlobalNamespace::MainEffectController::LazySetupImageEffectController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "LazySetupImageEffectController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::ImageEffectControllerCallback
// Il2CppName: ImageEffectControllerCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*)>(&GlobalNamespace::MainEffectController::ImageEffectControllerCallback)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "ImageEffectControllerCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::OnPreRender
// Il2CppName: OnPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)()>(&GlobalNamespace::MainEffectController::OnPreRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "OnPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::OnPostRender
// Il2CppName: OnPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectController::*)()>(&GlobalNamespace::MainEffectController::OnPostRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectController*), "OnPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
