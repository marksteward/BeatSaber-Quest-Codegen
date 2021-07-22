// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRChaperone
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRChaperone : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRChaperone FnTable
    // Size: 0x40
    // Offset: 0x10
    OVR::OpenVR::IVRChaperone FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone) == 0x40);
    // Creating value type constructor for type: CVRChaperone
    CVRChaperone(OVR::OpenVR::IVRChaperone FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRChaperone
    constexpr operator OVR::OpenVR::IVRChaperone() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x157CB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRChaperone* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRChaperone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRChaperone*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.ChaperoneCalibrationState GetCalibrationState()
    // Offset: 0x157CC98
    OVR::OpenVR::ChaperoneCalibrationState GetCalibrationState();
    // public System.Boolean GetPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x157CEC4
    bool GetPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetPlayAreaRect(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x157D15C
    bool GetPlayAreaRect(OVR::OpenVR::HmdQuad_t& rect);
    // public System.Void ReloadInfo()
    // Offset: 0x157D3D4
    void ReloadInfo();
    // public System.Void SetSceneColor(OVR.OpenVR.HmdColor_t color)
    // Offset: 0x157D5F8
    void SetSceneColor(OVR::OpenVR::HmdColor_t color);
    // public System.Void GetBoundsColor(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor)
    // Offset: 0x157D8C0
    void GetBoundsColor(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor);
    // public System.Boolean AreBoundsVisible()
    // Offset: 0x157DB88
    bool AreBoundsVisible();
    // public System.Void ForceBoundsVisible(System.Boolean bForce)
    // Offset: 0x157DDB8
    void ForceBoundsVisible(bool bForce);
  }; // OVR.OpenVR.CVRChaperone
  #pragma pack(pop)
  static check_size<sizeof(CVRChaperone), 16 + sizeof(OVR::OpenVR::IVRChaperone)> __OVR_OpenVR_CVRChaperoneSizeCheck;
  static_assert(sizeof(CVRChaperone) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRChaperone*, "OVR.OpenVR", "CVRChaperone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::GetCalibrationState
// Il2CppName: GetCalibrationState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::ChaperoneCalibrationState (OVR::OpenVR::CVRChaperone::*)()>(&OVR::OpenVR::CVRChaperone::GetCalibrationState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "GetCalibrationState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::GetPlayAreaSize
// Il2CppName: GetPlayAreaSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperone::*)(float&, float&)>(&OVR::OpenVR::CVRChaperone::GetPlayAreaSize)> {
  static const MethodInfo* get() {
    static auto* pSizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pSizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "GetPlayAreaSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSizeX, pSizeZ});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::GetPlayAreaRect
// Il2CppName: GetPlayAreaRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperone::*)(OVR::OpenVR::HmdQuad_t&)>(&OVR::OpenVR::CVRChaperone::GetPlayAreaRect)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdQuad_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "GetPlayAreaRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::ReloadInfo
// Il2CppName: ReloadInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperone::*)()>(&OVR::OpenVR::CVRChaperone::ReloadInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "ReloadInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::SetSceneColor
// Il2CppName: SetSceneColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperone::*)(OVR::OpenVR::HmdColor_t)>(&OVR::OpenVR::CVRChaperone::SetSceneColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "SetSceneColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::GetBoundsColor
// Il2CppName: GetBoundsColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperone::*)(OVR::OpenVR::HmdColor_t&, int, float, OVR::OpenVR::HmdColor_t&)>(&OVR::OpenVR::CVRChaperone::GetBoundsColor)> {
  static const MethodInfo* get() {
    static auto* pOutputColorArray = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    static auto* nNumOutputColors = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flCollisionBoundsFadeDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pOutputCameraColor = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "GetBoundsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::AreBoundsVisible
// Il2CppName: AreBoundsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperone::*)()>(&OVR::OpenVR::CVRChaperone::AreBoundsVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "AreBoundsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperone::ForceBoundsVisible
// Il2CppName: ForceBoundsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperone::*)(bool)>(&OVR::OpenVR::CVRChaperone::ForceBoundsVisible)> {
  static const MethodInfo* get() {
    static auto* bForce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperone*), "ForceBoundsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bForce});
  }
};
