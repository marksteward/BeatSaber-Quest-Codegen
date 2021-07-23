// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.EVRScreenshotType
#include "OVR/OpenVR/EVRScreenshotType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRScreenshots
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRScreenshots : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRScreenshots FnTable
    // Size: 0x38
    // Offset: 0x10
    OVR::OpenVR::IVRScreenshots FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRScreenshots) == 0x38);
    // Creating value type constructor for type: CVRScreenshots
    CVRScreenshots(OVR::OpenVR::IVRScreenshots FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRScreenshots
    constexpr operator OVR::OpenVR::IVRScreenshots() const noexcept {
      return FnTable;
    }
    // Get instance field: private OVR.OpenVR.IVRScreenshots FnTable
    OVR::OpenVR::IVRScreenshots _get_FnTable();
    // Set instance field: private OVR.OpenVR.IVRScreenshots FnTable
    void _set_FnTable(OVR::OpenVR::IVRScreenshots value);
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1584384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRScreenshots* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRScreenshots::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRScreenshots*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EVRScreenshotError RequestScreenshot(ref System.UInt32 pOutScreenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1584494
    OVR::OpenVR::EVRScreenshotError RequestScreenshot(uint& pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public OVR.OpenVR.EVRScreenshotError HookScreenshot(OVR.OpenVR.EVRScreenshotType[] pSupportedTypes)
    // Offset: 0x15844B4
    OVR::OpenVR::EVRScreenshotError HookScreenshot(::Array<OVR::OpenVR::EVRScreenshotType>* pSupportedTypes);
    // public OVR.OpenVR.EVRScreenshotType GetScreenshotPropertyType(System.UInt32 screenshotHandle, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x15844DC
    OVR::OpenVR::EVRScreenshotType GetScreenshotPropertyType(uint screenshotHandle, OVR::OpenVR::EVRScreenshotError& pError);
    // public System.UInt32 GetScreenshotPropertyFilename(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x15844F8
    uint GetScreenshotPropertyFilename(uint screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder* pchFilename, uint cchFilename, OVR::OpenVR::EVRScreenshotError& pError);
    // public OVR.OpenVR.EVRScreenshotError UpdateScreenshotProgress(System.UInt32 screenshotHandle, System.Single flProgress)
    // Offset: 0x1584514
    OVR::OpenVR::EVRScreenshotError UpdateScreenshotProgress(uint screenshotHandle, float flProgress);
    // public OVR.OpenVR.EVRScreenshotError TakeStereoScreenshot(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1584530
    OVR::OpenVR::EVRScreenshotError TakeStereoScreenshot(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public OVR.OpenVR.EVRScreenshotError SubmitScreenshot(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotType type, System.String pchSourcePreviewFilename, System.String pchSourceVRFilename)
    // Offset: 0x1584550
    OVR::OpenVR::EVRScreenshotError SubmitScreenshot(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename);
  }; // OVR.OpenVR.CVRScreenshots
  #pragma pack(pop)
  static check_size<sizeof(CVRScreenshots), 16 + sizeof(OVR::OpenVR::IVRScreenshots)> __OVR_OpenVR_CVRScreenshotsSizeCheck;
  static_assert(sizeof(CVRScreenshots) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRScreenshots*, "OVR.OpenVR", "CVRScreenshots");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::RequestScreenshot
// Il2CppName: RequestScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(uint&, OVR::OpenVR::EVRScreenshotType, ::Il2CppString*, ::Il2CppString*)>(&OVR::OpenVR::CVRScreenshots::RequestScreenshot)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotType")->byval_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRScreenshots*), "RequestScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::HookScreenshot
// Il2CppName: HookScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(::Array<OVR::OpenVR::EVRScreenshotType>*)>(&OVR::OpenVR::CVRScreenshots::HookScreenshot)> {
  static const MethodInfo* get() {
    static auto* pSupportedTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotType"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRScreenshots*), "HookScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSupportedTypes});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType
// Il2CppName: GetScreenshotPropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotType (OVR::OpenVR::CVRScreenshots::*)(uint, OVR::OpenVR::EVRScreenshotError&)>(&OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyType)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRScreenshots*), "GetScreenshotPropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, pError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename
// Il2CppName: GetScreenshotPropertyFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRScreenshots::*)(uint, OVR::OpenVR::EVRScreenshotPropertyFilenames, System::Text::StringBuilder*, uint, OVR::OpenVR::EVRScreenshotError&)>(&OVR::OpenVR::CVRScreenshots::GetScreenshotPropertyFilename)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* filenameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotPropertyFilenames")->byval_arg;
    static auto* pchFilename = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* cchFilename = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRScreenshots*), "GetScreenshotPropertyFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, filenameType, pchFilename, cchFilename, pError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress
// Il2CppName: UpdateScreenshotProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(uint, float)>(&OVR::OpenVR::CVRScreenshots::UpdateScreenshotProgress)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* flProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRScreenshots*), "UpdateScreenshotProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, flProgress});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot
// Il2CppName: TakeStereoScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(uint&, ::Il2CppString*, ::Il2CppString*)>(&OVR::OpenVR::CVRScreenshots::TakeStereoScreenshot)> {
  static const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRScreenshots*), "TakeStereoScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, pchPreviewFilename, pchVRFilename});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRScreenshots::SubmitScreenshot
// Il2CppName: SubmitScreenshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRScreenshotError (OVR::OpenVR::CVRScreenshots::*)(uint, OVR::OpenVR::EVRScreenshotType, ::Il2CppString*, ::Il2CppString*)>(&OVR::OpenVR::CVRScreenshots::SubmitScreenshot)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotType")->byval_arg;
    static auto* pchSourcePreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSourceVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRScreenshots*), "SubmitScreenshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename});
  }
};
