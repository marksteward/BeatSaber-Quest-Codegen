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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Camera
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DBF460
  class SteamVR_Camera : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _head
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Camera <camera>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Transform _ears
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* ears;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Boolean wireframe
    // Size: 0x1
    // Offset: 0x30
    bool wireframe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SteamVR_Camera
    SteamVR_Camera(UnityEngine::Transform* head_ = {}, UnityEngine::Camera* camera_ = {}, UnityEngine::Transform* ears_ = {}, bool wireframe_ = {}) noexcept : head{head_}, camera{camera_}, ears{ears_}, wireframe{wireframe_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Hashtable values
    static System::Collections::Hashtable* _get_values();
    // Set static field: static private System.Collections.Hashtable values
    static void _set_values(System::Collections::Hashtable* value);
    // static field const value: static private System.String eyeSuffix
    static constexpr const char* eyeSuffix = " (eye)";
    // Get static field: static private System.String eyeSuffix
    static ::Il2CppString* _get_eyeSuffix();
    // Set static field: static private System.String eyeSuffix
    static void _set_eyeSuffix(::Il2CppString* value);
    // static field const value: static private System.String earsSuffix
    static constexpr const char* earsSuffix = " (ears)";
    // Get static field: static private System.String earsSuffix
    static ::Il2CppString* _get_earsSuffix();
    // Set static field: static private System.String earsSuffix
    static void _set_earsSuffix(::Il2CppString* value);
    // static field const value: static private System.String headSuffix
    static constexpr const char* headSuffix = " (head)";
    // Get static field: static private System.String headSuffix
    static ::Il2CppString* _get_headSuffix();
    // Set static field: static private System.String headSuffix
    static void _set_headSuffix(::Il2CppString* value);
    // static field const value: static private System.String originSuffix
    static constexpr const char* originSuffix = " (origin)";
    // Get static field: static private System.String originSuffix
    static ::Il2CppString* _get_originSuffix();
    // Set static field: static private System.String originSuffix
    static void _set_originSuffix(::Il2CppString* value);
    // Get instance field: private UnityEngine.Transform _head
    UnityEngine::Transform* _get__head();
    // Set instance field: private UnityEngine.Transform _head
    void _set__head(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Camera <camera>k__BackingField
    UnityEngine::Camera* _get_$camera$k__BackingField();
    // Set instance field: private UnityEngine.Camera <camera>k__BackingField
    void _set_$camera$k__BackingField(UnityEngine::Camera* value);
    // Get instance field: private UnityEngine.Transform _ears
    UnityEngine::Transform* _get__ears();
    // Set instance field: private UnityEngine.Transform _ears
    void _set__ears(UnityEngine::Transform* value);
    // Get instance field: public System.Boolean wireframe
    bool _get_wireframe();
    // Set instance field: public System.Boolean wireframe
    void _set_wireframe(bool value);
    // public UnityEngine.Transform get_head()
    // Offset: 0x139F40C
    UnityEngine::Transform* get_head();
    // public UnityEngine.Transform get_offset()
    // Offset: 0x139F414
    UnityEngine::Transform* get_offset();
    // public UnityEngine.Transform get_origin()
    // Offset: 0x139F41C
    UnityEngine::Transform* get_origin();
    // public UnityEngine.Camera get_camera()
    // Offset: 0x139F438
    UnityEngine::Camera* get_camera();
    // private System.Void set_camera(UnityEngine.Camera value)
    // Offset: 0x139F440
    void set_camera(UnityEngine::Camera* value);
    // public UnityEngine.Transform get_ears()
    // Offset: 0x139F448
    UnityEngine::Transform* get_ears();
    // static public System.Single get_sceneResolutionScale()
    // Offset: 0x139F4D8
    static float get_sceneResolutionScale();
    // static public System.Void set_sceneResolutionScale(System.Single value)
    // Offset: 0x139F4E0
    static void set_sceneResolutionScale(float value);
    // public System.String get_baseName()
    // Offset: 0x13A06E4
    ::Il2CppString* get_baseName();
    // public UnityEngine.Ray GetRay()
    // Offset: 0x139F450
    UnityEngine::Ray GetRay();
    // private System.Void OnDisable()
    // Offset: 0x139F4E8
    void OnDisable();
    // private System.Void OnEnable()
    // Offset: 0x139F598
    void OnEnable();
    // private System.Void Awake()
    // Offset: 0x13A0090
    void Awake();
    // public System.Void ForceLast()
    // Offset: 0x13A00EC
    void ForceLast();
    // public System.Void Expand()
    // Offset: 0x139F8F0
    void Expand();
    // public System.Void Collapse()
    // Offset: 0x13A07B4
    void Collapse();
    // public System.Void .ctor()
    // Offset: 0x13A0BB4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Camera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Camera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Camera*, creationType>()));
    }
  }; // SteamVR_Camera
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Camera), 48 + sizeof(bool)> __GlobalNamespace_SteamVR_CameraSizeCheck;
  static_assert(sizeof(SteamVR_Camera) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Camera*, "", "SteamVR_Camera");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::get_head
// Il2CppName: get_head
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::get_head)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "get_head", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::get_origin
// Il2CppName: get_origin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::get_origin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "get_origin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::get_camera
// Il2CppName: get_camera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera* (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::get_camera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "get_camera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::set_camera
// Il2CppName: set_camera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Camera::*)(UnityEngine::Camera*)>(&GlobalNamespace::SteamVR_Camera::set_camera)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "set_camera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::get_ears
// Il2CppName: get_ears
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::get_ears)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "get_ears", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::get_sceneResolutionScale
// Il2CppName: get_sceneResolutionScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&GlobalNamespace::SteamVR_Camera::get_sceneResolutionScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "get_sceneResolutionScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::set_sceneResolutionScale
// Il2CppName: set_sceneResolutionScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&GlobalNamespace::SteamVR_Camera::set_sceneResolutionScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "set_sceneResolutionScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::get_baseName
// Il2CppName: get_baseName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::get_baseName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "get_baseName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::GetRay
// Il2CppName: GetRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Ray (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::GetRay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "GetRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::ForceLast
// Il2CppName: ForceLast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::ForceLast)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "ForceLast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::Expand
// Il2CppName: Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::Expand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::Collapse
// Il2CppName: Collapse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Camera::*)()>(&GlobalNamespace::SteamVR_Camera::Collapse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Camera*), "Collapse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Camera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
