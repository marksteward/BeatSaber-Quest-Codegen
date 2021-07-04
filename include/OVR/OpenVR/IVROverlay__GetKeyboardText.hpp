// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetKeyboardText
  // [UnmanagedFunctionPointerAttribute] Offset: DCE3A4
  class IVROverlay::_GetKeyboardText : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetKeyboardText
    _GetKeyboardText() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EEE8A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetKeyboardText* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetKeyboardText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetKeyboardText*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.Text.StringBuilder pchText, System.UInt32 cchText)
    // Offset: 0x1EEE8B8
    uint Invoke(System::Text::StringBuilder* pchText, uint cchText);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pchText, System.UInt32 cchText, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EEECCC
    System::IAsyncResult* BeginInvoke(System::Text::StringBuilder* pchText, uint cchText, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EEED68
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetKeyboardText
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetKeyboardText*, "OVR.OpenVR", "IVROverlay/_GetKeyboardText");
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetKeyboardText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetKeyboardText::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetKeyboardText::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetKeyboardText::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
