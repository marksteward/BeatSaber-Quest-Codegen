// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: MirrorRendererSO
  class MirrorRendererSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Mirror
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [RequireComponent] Offset: E98F78
  class Mirror : public UnityEngine::MonoBehaviour {
    public:
    // private MirrorRendererSO _mirrorRenderer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MirrorRendererSO* mirrorRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MirrorRendererSO*) == 0x8);
    // private UnityEngine.MeshRenderer _renderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MeshRenderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Material _mirrorMaterial
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Material* mirrorMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _noMirrorMaterial
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* noMirrorMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Boolean <isEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool isEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEnabled and: mirrorDidChangeEnabledStateEvent
    char __padding4[0x7] = {};
    // private System.Action`1<System.Boolean> mirrorDidChangeEnabledStateEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<bool>* mirrorDidChangeEnabledStateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // Creating value type constructor for type: Mirror
    Mirror(GlobalNamespace::MirrorRendererSO* mirrorRenderer_ = {}, UnityEngine::MeshRenderer* renderer_ = {}, UnityEngine::Material* mirrorMaterial_ = {}, UnityEngine::Material* noMirrorMaterial_ = {}, bool isEnabled_ = {}, System::Action_1<bool>* mirrorDidChangeEnabledStateEvent_ = {}) noexcept : mirrorRenderer{mirrorRenderer_}, renderer{renderer_}, mirrorMaterial{mirrorMaterial_}, noMirrorMaterial{noMirrorMaterial_}, isEnabled{isEnabled_}, mirrorDidChangeEnabledStateEvent{mirrorDidChangeEnabledStateEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE99610
    // Get static field: static private readonly System.Int32 _texturePropertyID
    static int _get__texturePropertyID();
    // Set static field: static private readonly System.Int32 _texturePropertyID
    static void _set__texturePropertyID(int value);
    // Get instance field: private MirrorRendererSO _mirrorRenderer
    GlobalNamespace::MirrorRendererSO* _get__mirrorRenderer();
    // Set instance field: private MirrorRendererSO _mirrorRenderer
    void _set__mirrorRenderer(GlobalNamespace::MirrorRendererSO* value);
    // Get instance field: private UnityEngine.MeshRenderer _renderer
    UnityEngine::MeshRenderer* _get__renderer();
    // Set instance field: private UnityEngine.MeshRenderer _renderer
    void _set__renderer(UnityEngine::MeshRenderer* value);
    // Get instance field: private UnityEngine.Material _mirrorMaterial
    UnityEngine::Material* _get__mirrorMaterial();
    // Set instance field: private UnityEngine.Material _mirrorMaterial
    void _set__mirrorMaterial(UnityEngine::Material* value);
    // Get instance field: private UnityEngine.Material _noMirrorMaterial
    UnityEngine::Material* _get__noMirrorMaterial();
    // Set instance field: private UnityEngine.Material _noMirrorMaterial
    void _set__noMirrorMaterial(UnityEngine::Material* value);
    // Get instance field: private System.Boolean <isEnabled>k__BackingField
    bool _get_$isEnabled$k__BackingField();
    // Set instance field: private System.Boolean <isEnabled>k__BackingField
    void _set_$isEnabled$k__BackingField(bool value);
    // Get instance field: private System.Action`1<System.Boolean> mirrorDidChangeEnabledStateEvent
    System::Action_1<bool>* _get_mirrorDidChangeEnabledStateEvent();
    // Set instance field: private System.Action`1<System.Boolean> mirrorDidChangeEnabledStateEvent
    void _set_mirrorDidChangeEnabledStateEvent(System::Action_1<bool>* value);
    // public UnityEngine.Material get_noMirrorMaterial()
    // Offset: 0x1DC5A08
    UnityEngine::Material* get_noMirrorMaterial();
    // public System.Boolean get_isEnabled()
    // Offset: 0x1DC5A10
    bool get_isEnabled();
    // private System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x1DC5A18
    void set_isEnabled(bool value);
    // public System.Void add_mirrorDidChangeEnabledStateEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1DC5A24
    void add_mirrorDidChangeEnabledStateEvent(System::Action_1<bool>* value);
    // public System.Void remove_mirrorDidChangeEnabledStateEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1DC5AC8
    void remove_mirrorDidChangeEnabledStateEvent(System::Action_1<bool>* value);
    // protected System.Void Update()
    // Offset: 0x1DC5B6C
    void Update();
    // protected System.Void OnWillRenderObject()
    // Offset: 0x1DC5C9C
    void OnWillRenderObject();
    // private System.Void ChangeMirrorEnabledState(System.Boolean newIsEnabled)
    // Offset: 0x1DC5F14
    void ChangeMirrorEnabledState(bool newIsEnabled);
    // public System.Void .ctor()
    // Offset: 0x1DC6848
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Mirror* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Mirror::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Mirror*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DC6850
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Mirror
  #pragma pack(pop)
  static check_size<sizeof(Mirror), 64 + sizeof(System::Action_1<bool>*)> __GlobalNamespace_MirrorSizeCheck;
  static_assert(sizeof(Mirror) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mirror*, "", "Mirror");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Mirror::get_noMirrorMaterial
// Il2CppName: get_noMirrorMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::get_noMirrorMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "get_noMirrorMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::get_isEnabled
// Il2CppName: get_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::get_isEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "get_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::set_isEnabled
// Il2CppName: set_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(bool)>(&GlobalNamespace::Mirror::set_isEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "set_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::add_mirrorDidChangeEnabledStateEvent
// Il2CppName: add_mirrorDidChangeEnabledStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(System::Action_1<bool>*)>(&GlobalNamespace::Mirror::add_mirrorDidChangeEnabledStateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "add_mirrorDidChangeEnabledStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::remove_mirrorDidChangeEnabledStateEvent
// Il2CppName: remove_mirrorDidChangeEnabledStateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(System::Action_1<bool>*)>(&GlobalNamespace::Mirror::remove_mirrorDidChangeEnabledStateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "remove_mirrorDidChangeEnabledStateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::OnWillRenderObject
// Il2CppName: OnWillRenderObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)()>(&GlobalNamespace::Mirror::OnWillRenderObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "OnWillRenderObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::ChangeMirrorEnabledState
// Il2CppName: ChangeMirrorEnabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Mirror::*)(bool)>(&GlobalNamespace::Mirror::ChangeMirrorEnabledState)> {
  static const MethodInfo* get() {
    static auto* newIsEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), "ChangeMirrorEnabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newIsEnabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Mirror::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Mirror::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::Mirror::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Mirror*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
