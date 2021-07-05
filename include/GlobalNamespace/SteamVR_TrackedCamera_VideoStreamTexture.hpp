// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_TrackedCamera
#include "GlobalNamespace/SteamVR_TrackedCamera.hpp"
// Including type: Valve.VR.VRTextureBounds_t
#include "Valve/VR/VRTextureBounds_t.hpp"
// Including type: Valve.VR.CameraVideoStreamFrameHeader_t
#include "Valve/VR/CameraVideoStreamFrameHeader_t.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: EVRTrackedCameraFrameType because it is already included!
  // Skipping declaration: TrackedDevicePose_t because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA2
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TrackedCamera/VideoStreamTexture
  class SteamVR_TrackedCamera::VideoStreamTexture : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD4D64
    // private System.Boolean <undistorted>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool undistorted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: undistorted and: frameBounds
    char __padding0[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD4D74
    // private Valve.VR.VRTextureBounds_t <frameBounds>k__BackingField
    // Size: 0x10
    // Offset: 0x14
    Valve::VR::VRTextureBounds_t frameBounds;
    // Field size check
    static_assert(sizeof(Valve::VR::VRTextureBounds_t) == 0x10);
    // Padding between fields: frameBounds and: texture
    char __padding1[0x4] = {};
    // private UnityEngine.Texture2D _texture
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private System.Int32 prevFrameCount
    // Size: 0x4
    // Offset: 0x30
    int prevFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 glTextureId
    // Size: 0x4
    // Offset: 0x34
    uint glTextureId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private SteamVR_TrackedCamera/VideoStream videostream
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SteamVR_TrackedCamera::VideoStream* videostream;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_TrackedCamera::VideoStream*) == 0x8);
    // private Valve.VR.CameraVideoStreamFrameHeader_t header
    // Size: 0x62
    // Offset: 0x40
    Valve::VR::CameraVideoStreamFrameHeader_t header;
    // Field size check
    static_assert(sizeof(Valve::VR::CameraVideoStreamFrameHeader_t) == 0x62);
    // Creating value type constructor for type: VideoStreamTexture
    VideoStreamTexture(bool undistorted_ = {}, Valve::VR::VRTextureBounds_t frameBounds_ = {}, UnityEngine::Texture2D* texture_ = {}, int prevFrameCount_ = {}, uint glTextureId_ = {}, GlobalNamespace::SteamVR_TrackedCamera::VideoStream* videostream_ = {}, Valve::VR::CameraVideoStreamFrameHeader_t header_ = {}) noexcept : undistorted{undistorted_}, frameBounds{frameBounds_}, texture{texture_}, prevFrameCount{prevFrameCount_}, glTextureId{glTextureId_}, videostream{videostream_}, header{header_} {}
    // public System.Void .ctor(System.UInt32 deviceIndex, System.Boolean undistorted)
    // Offset: 0x16C58A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedCamera::VideoStreamTexture* New_ctor(uint deviceIndex, bool undistorted) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedCamera::VideoStreamTexture*, creationType>(deviceIndex, undistorted)));
    }
    // public System.Boolean get_undistorted()
    // Offset: 0x16C5DF8
    bool get_undistorted();
    // private System.Void set_undistorted(System.Boolean value)
    // Offset: 0x16C5E00
    void set_undistorted(bool value);
    // public System.UInt32 get_deviceIndex()
    // Offset: 0x16C5E0C
    uint get_deviceIndex();
    // public System.Boolean get_hasCamera()
    // Offset: 0x16C5E28
    bool get_hasCamera();
    // public System.Boolean get_hasTracking()
    // Offset: 0x16C5E44
    bool get_hasTracking();
    // public System.UInt32 get_frameId()
    // Offset: 0x16C61C8
    uint get_frameId();
    // public Valve.VR.VRTextureBounds_t get_frameBounds()
    // Offset: 0x16C61EC
    Valve::VR::VRTextureBounds_t get_frameBounds();
    // private System.Void set_frameBounds(Valve.VR.VRTextureBounds_t value)
    // Offset: 0x16C61F8
    void set_frameBounds(Valve::VR::VRTextureBounds_t value);
    // public Valve.VR.EVRTrackedCameraFrameType get_frameType()
    // Offset: 0x16C6204
    Valve::VR::EVRTrackedCameraFrameType get_frameType();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x16C620C
    UnityEngine::Texture2D* get_texture();
    // public SteamVR_Utils/RigidTransform get_transform()
    // Offset: 0x16C6230
    GlobalNamespace::SteamVR_Utils::RigidTransform get_transform();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x16C64A4
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x16C64F4
    UnityEngine::Vector3 get_angularVelocity();
    // public Valve.VR.TrackedDevicePose_t GetPose()
    // Offset: 0x16C6548
    Valve::VR::TrackedDevicePose_t GetPose();
    // public System.UInt64 Acquire()
    // Offset: 0x16C6578
    uint64_t Acquire();
    // public System.UInt64 Release()
    // Offset: 0x16C6590
    uint64_t Release();
    // private System.Void Update()
    // Offset: 0x16C5E68
    void Update();
  }; // SteamVR_TrackedCamera/VideoStreamTexture
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_TrackedCamera::VideoStreamTexture), 64 + sizeof(Valve::VR::CameraVideoStreamFrameHeader_t)> __GlobalNamespace_SteamVR_TrackedCamera_VideoStreamTextureSizeCheck;
  static_assert(sizeof(SteamVR_TrackedCamera::VideoStreamTexture) == 0xA2);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*, "", "SteamVR_TrackedCamera/VideoStreamTexture");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_undistorted
// Il2CppName: get_undistorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_undistorted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_undistorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_undistorted
// Il2CppName: set_undistorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)(bool)>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_undistorted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "set_undistorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_deviceIndex
// Il2CppName: get_deviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_deviceIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_deviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasCamera
// Il2CppName: get_hasCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_hasCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasTracking
// Il2CppName: get_hasTracking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasTracking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_hasTracking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameId
// Il2CppName: get_frameId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_frameId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameBounds
// Il2CppName: get_frameBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::VRTextureBounds_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_frameBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_frameBounds
// Il2CppName: set_frameBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)(Valve::VR::VRTextureBounds_t)>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_frameBounds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "set_frameBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameType
// Il2CppName: get_frameType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraFrameType (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_frameType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Utils::RigidTransform (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_angularVelocity
// Il2CppName: get_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_angularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::GetPose
// Il2CppName: GetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::TrackedDevicePose_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::GetPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "GetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Acquire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
