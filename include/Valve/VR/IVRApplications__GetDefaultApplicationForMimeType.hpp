// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/_GetDefaultApplicationForMimeType
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D892CC
  class IVRApplications::_GetDefaultApplicationForMimeType : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDefaultApplicationForMimeType
    _GetDefaultApplicationForMimeType() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x136E4B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetDefaultApplicationForMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetDefaultApplicationForMimeType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetDefaultApplicationForMimeType*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x13649E0
    bool Invoke(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x136E4C4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x136E564
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetDefaultApplicationForMimeType
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetDefaultApplicationForMimeType*, "Valve.VR", "IVRApplications/_GetDefaultApplicationForMimeType");
