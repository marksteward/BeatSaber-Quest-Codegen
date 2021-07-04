// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRScreenshots/_TakeStereoScreenshot
  // [UnmanagedFunctionPointerAttribute] Offset: DD4824
  class IVRScreenshots::_TakeStereoScreenshot : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _TakeStereoScreenshot
    _TakeStereoScreenshot() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8FDC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_TakeStereoScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRScreenshots::_TakeStereoScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_TakeStereoScreenshot*, creationType>(object, method)));
    }
    // public Valve.VR.EVRScreenshotError Invoke(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename)
    // Offset: 0x1C8FDD4
    Valve::VR::EVRScreenshotError Invoke(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pOutScreenshotHandle, System.String pchPreviewFilename, System.String pchVRFilename, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C90064
    System::IAsyncResult* BeginInvoke(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(ref System.UInt32 pOutScreenshotHandle, System.IAsyncResult result)
    // Offset: 0x1C9010C
    Valve::VR::EVRScreenshotError EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_TakeStereoScreenshot
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_TakeStereoScreenshot*, "Valve.VR", "IVRScreenshots/_TakeStereoScreenshot");
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_TakeStereoScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_TakeStereoScreenshot::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_TakeStereoScreenshot::*)(uint&, ::Il2CppString*, ::Il2CppString*)>(&Valve::VR::IVRScreenshots::_TakeStereoScreenshot::Invoke)> {
  const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_TakeStereoScreenshot*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, pchPreviewFilename, pchVRFilename});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_TakeStereoScreenshot::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRScreenshots::_TakeStereoScreenshot::*)(uint&, ::Il2CppString*, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRScreenshots::_TakeStereoScreenshot::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pchPreviewFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchVRFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_TakeStereoScreenshot*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_TakeStereoScreenshot::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotError (Valve::VR::IVRScreenshots::_TakeStereoScreenshot::*)(uint&, System::IAsyncResult*)>(&Valve::VR::IVRScreenshots::_TakeStereoScreenshot::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pOutScreenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_TakeStereoScreenshot*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutScreenshotHandle, result});
  }
};
