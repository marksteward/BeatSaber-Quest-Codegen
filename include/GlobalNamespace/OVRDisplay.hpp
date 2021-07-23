// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: EyeFov because it is already included!
  // Skipping declaration: EyeRenderDesc because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRDisplay : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRDisplay::EyeFov
    struct EyeFov;
    // Nested type: GlobalNamespace::OVRDisplay::EyeRenderDesc
    struct EyeRenderDesc;
    // Nested type: GlobalNamespace::OVRDisplay::LatencyData
    struct LatencyData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRDisplay/EyeFov
    // [TokenAttribute] Offset: FFFFFFFF
    struct EyeFov/*, public System::ValueType*/ {
      public:
      // public System.Single UpFov
      // Size: 0x4
      // Offset: 0x0
      float UpFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single DownFov
      // Size: 0x4
      // Offset: 0x4
      float DownFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single LeftFov
      // Size: 0x4
      // Offset: 0x8
      float LeftFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single RightFov
      // Size: 0x4
      // Offset: 0xC
      float RightFov;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Creating value type constructor for type: EyeFov
      constexpr EyeFov(float UpFov_ = {}, float DownFov_ = {}, float LeftFov_ = {}, float RightFov_ = {}) noexcept : UpFov{UpFov_}, DownFov{DownFov_}, LeftFov{LeftFov_}, RightFov{RightFov_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field: public System.Single UpFov
      float _get_UpFov();
      // Set instance field: public System.Single UpFov
      void _set_UpFov(float value);
      // Get instance field: public System.Single DownFov
      float _get_DownFov();
      // Set instance field: public System.Single DownFov
      void _set_DownFov(float value);
      // Get instance field: public System.Single LeftFov
      float _get_LeftFov();
      // Set instance field: public System.Single LeftFov
      void _set_LeftFov(float value);
      // Get instance field: public System.Single RightFov
      float _get_RightFov();
      // Set instance field: public System.Single RightFov
      void _set_RightFov(float value);
    }; // OVRDisplay/EyeFov
    #pragma pack(pop)
    static check_size<sizeof(OVRDisplay::EyeFov), 12 + sizeof(float)> __GlobalNamespace_OVRDisplay_EyeFovSizeCheck;
    static_assert(sizeof(OVRDisplay::EyeFov) == 0x10);
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRDisplay/EyeRenderDesc
    // [TokenAttribute] Offset: FFFFFFFF
    struct EyeRenderDesc/*, public System::ValueType*/ {
      public:
      // public UnityEngine.Vector2 resolution
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::Vector2 resolution;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector2) == 0x8);
      // public UnityEngine.Vector2 fov
      // Size: 0x8
      // Offset: 0x8
      UnityEngine::Vector2 fov;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector2) == 0x8);
      // public OVRDisplay/EyeFov fullFov
      // Size: 0x10
      // Offset: 0x10
      GlobalNamespace::OVRDisplay::EyeFov fullFov;
      // Field size check
      static_assert(sizeof(GlobalNamespace::OVRDisplay::EyeFov) == 0x10);
      // Creating value type constructor for type: EyeRenderDesc
      constexpr EyeRenderDesc(UnityEngine::Vector2 resolution_ = {}, UnityEngine::Vector2 fov_ = {}, GlobalNamespace::OVRDisplay::EyeFov fullFov_ = {}) noexcept : resolution{resolution_}, fov{fov_}, fullFov{fullFov_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field: public UnityEngine.Vector2 resolution
      UnityEngine::Vector2 _get_resolution();
      // Set instance field: public UnityEngine.Vector2 resolution
      void _set_resolution(UnityEngine::Vector2 value);
      // Get instance field: public UnityEngine.Vector2 fov
      UnityEngine::Vector2 _get_fov();
      // Set instance field: public UnityEngine.Vector2 fov
      void _set_fov(UnityEngine::Vector2 value);
      // Get instance field: public OVRDisplay/EyeFov fullFov
      GlobalNamespace::OVRDisplay::EyeFov _get_fullFov();
      // Set instance field: public OVRDisplay/EyeFov fullFov
      void _set_fullFov(GlobalNamespace::OVRDisplay::EyeFov value);
    }; // OVRDisplay/EyeRenderDesc
    #pragma pack(pop)
    static check_size<sizeof(OVRDisplay::EyeRenderDesc), 16 + sizeof(GlobalNamespace::OVRDisplay::EyeFov)> __GlobalNamespace_OVRDisplay_EyeRenderDescSizeCheck;
    static_assert(sizeof(OVRDisplay::EyeRenderDesc) == 0x20);
    // private System.Boolean needsConfigureTexture
    // Size: 0x1
    // Offset: 0x10
    bool needsConfigureTexture;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: needsConfigureTexture and: eyeDescs
    char __padding0[0x7] = {};
    // private OVRDisplay/EyeRenderDesc[] eyeDescs
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::OVRDisplay::EyeRenderDesc>* eyeDescs;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRDisplay::EyeRenderDesc>*) == 0x8);
    // private System.Boolean recenterRequested
    // Size: 0x1
    // Offset: 0x20
    bool recenterRequested;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recenterRequested and: recenterRequestedFrameCount
    char __padding2[0x3] = {};
    // private System.Int32 recenterRequestedFrameCount
    // Size: 0x4
    // Offset: 0x24
    int recenterRequestedFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 localTrackingSpaceRecenterCount
    // Size: 0x4
    // Offset: 0x28
    int localTrackingSpaceRecenterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: localTrackingSpaceRecenterCount and: RecenteredPose
    char __padding4[0x4] = {};
    // private System.Action RecenteredPose
    // Size: 0x8
    // Offset: 0x30
    System::Action* RecenteredPose;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: OVRDisplay
    OVRDisplay(bool needsConfigureTexture_ = {}, ::Array<GlobalNamespace::OVRDisplay::EyeRenderDesc>* eyeDescs_ = {}, bool recenterRequested_ = {}, int recenterRequestedFrameCount_ = {}, int localTrackingSpaceRecenterCount_ = {}, System::Action* RecenteredPose_ = {}) noexcept : needsConfigureTexture{needsConfigureTexture_}, eyeDescs{eyeDescs_}, recenterRequested{recenterRequested_}, recenterRequestedFrameCount{recenterRequestedFrameCount_}, localTrackingSpaceRecenterCount{localTrackingSpaceRecenterCount_}, RecenteredPose{RecenteredPose_} {}
    // Get instance field: private System.Boolean needsConfigureTexture
    bool _get_needsConfigureTexture();
    // Set instance field: private System.Boolean needsConfigureTexture
    void _set_needsConfigureTexture(bool value);
    // Get instance field: private OVRDisplay/EyeRenderDesc[] eyeDescs
    ::Array<GlobalNamespace::OVRDisplay::EyeRenderDesc>* _get_eyeDescs();
    // Set instance field: private OVRDisplay/EyeRenderDesc[] eyeDescs
    void _set_eyeDescs(::Array<GlobalNamespace::OVRDisplay::EyeRenderDesc>* value);
    // Get instance field: private System.Boolean recenterRequested
    bool _get_recenterRequested();
    // Set instance field: private System.Boolean recenterRequested
    void _set_recenterRequested(bool value);
    // Get instance field: private System.Int32 recenterRequestedFrameCount
    int _get_recenterRequestedFrameCount();
    // Set instance field: private System.Int32 recenterRequestedFrameCount
    void _set_recenterRequestedFrameCount(int value);
    // Get instance field: private System.Int32 localTrackingSpaceRecenterCount
    int _get_localTrackingSpaceRecenterCount();
    // Set instance field: private System.Int32 localTrackingSpaceRecenterCount
    void _set_localTrackingSpaceRecenterCount(int value);
    // Get instance field: private System.Action RecenteredPose
    System::Action* _get_RecenteredPose();
    // Set instance field: private System.Action RecenteredPose
    void _set_RecenteredPose(System::Action* value);
    // public UnityEngine.Vector3 get_acceleration()
    // Offset: 0x125577C
    UnityEngine::Vector3 get_acceleration();
    // public UnityEngine.Vector3 get_angularAcceleration()
    // Offset: 0x12558A8
    UnityEngine::Vector3 get_angularAcceleration();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x12559D4
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x1255B00
    UnityEngine::Vector3 get_angularVelocity();
    // public OVRDisplay/LatencyData get_latency()
    // Offset: 0x1255C2C
    GlobalNamespace::OVRDisplay::LatencyData get_latency();
    // public System.Single get_appFramerate()
    // Offset: 0x1255DF8
    float get_appFramerate();
    // public System.Int32 get_recommendedMSAALevel()
    // Offset: 0x1255E94
    int get_recommendedMSAALevel();
    // public System.Single[] get_displayFrequenciesAvailable()
    // Offset: 0x1255F00
    ::Array<float>* get_displayFrequenciesAvailable();
    // public System.Single get_displayFrequency()
    // Offset: 0x1255F60
    float get_displayFrequency();
    // public System.Void set_displayFrequency(System.Single value)
    // Offset: 0x1255FC0
    void set_displayFrequency(float value);
    // public System.Void add_RecenteredPose(System.Action value)
    // Offset: 0x12555B8
    void add_RecenteredPose(System::Action* value);
    // public System.Void remove_RecenteredPose(System.Action value)
    // Offset: 0x125565C
    void remove_RecenteredPose(System::Action* value);
    // public System.Void Update()
    // Offset: 0x1255424
    void Update();
    // public System.Void RecenterPose()
    // Offset: 0x1255700
    void RecenterPose();
    // public OVRDisplay/EyeRenderDesc GetEyeRenderDesc(UnityEngine.XR.XRNode eye)
    // Offset: 0x125531C
    GlobalNamespace::OVRDisplay::EyeRenderDesc GetEyeRenderDesc(UnityEngine::XR::XRNode eye);
    // private System.Void UpdateTextures()
    // Offset: 0x12553F8
    void UpdateTextures();
    // private System.Void ConfigureEyeDesc(UnityEngine.XR.XRNode eye)
    // Offset: 0x1256030
    void ConfigureEyeDesc(UnityEngine::XR::XRNode eye);
    // public System.Void .ctor()
    // Offset: 0x1255378
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRDisplay*, creationType>()));
    }
  }; // OVRDisplay
  #pragma pack(pop)
  static check_size<sizeof(OVRDisplay), 48 + sizeof(System::Action*)> __GlobalNamespace_OVRDisplaySizeCheck;
  static_assert(sizeof(OVRDisplay) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay*, "", "OVRDisplay");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay::EyeFov, "", "OVRDisplay/EyeFov");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay::EyeRenderDesc, "", "OVRDisplay/EyeRenderDesc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_acceleration
// Il2CppName: get_acceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_acceleration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_acceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_angularAcceleration
// Il2CppName: get_angularAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_angularAcceleration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_angularAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_angularVelocity
// Il2CppName: get_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_angularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_latency
// Il2CppName: get_latency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRDisplay::LatencyData (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_latency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_latency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_appFramerate
// Il2CppName: get_appFramerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_appFramerate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_appFramerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_recommendedMSAALevel
// Il2CppName: get_recommendedMSAALevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_recommendedMSAALevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_recommendedMSAALevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable
// Il2CppName: get_displayFrequenciesAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<float>* (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_displayFrequenciesAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::get_displayFrequency
// Il2CppName: get_displayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_displayFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "get_displayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::set_displayFrequency
// Il2CppName: set_displayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(float)>(&GlobalNamespace::OVRDisplay::set_displayFrequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "set_displayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::add_RecenteredPose
// Il2CppName: add_RecenteredPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(System::Action*)>(&GlobalNamespace::OVRDisplay::add_RecenteredPose)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "add_RecenteredPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::remove_RecenteredPose
// Il2CppName: remove_RecenteredPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(System::Action*)>(&GlobalNamespace::OVRDisplay::remove_RecenteredPose)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "remove_RecenteredPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::RecenterPose
// Il2CppName: RecenterPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::RecenterPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "RecenterPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::GetEyeRenderDesc
// Il2CppName: GetEyeRenderDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRDisplay::EyeRenderDesc (GlobalNamespace::OVRDisplay::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRDisplay::GetEyeRenderDesc)> {
  static const MethodInfo* get() {
    static auto* eye = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "GetEyeRenderDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eye});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::UpdateTextures
// Il2CppName: UpdateTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::UpdateTextures)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "UpdateTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::ConfigureEyeDesc
// Il2CppName: ConfigureEyeDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRDisplay::ConfigureEyeDesc)> {
  static const MethodInfo* get() {
    static auto* eye = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDisplay*), "ConfigureEyeDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eye});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
