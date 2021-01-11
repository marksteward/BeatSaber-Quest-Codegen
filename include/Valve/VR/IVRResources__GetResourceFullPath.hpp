// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRResources
#include "Valve/VR/IVRResources.hpp"
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
  // Autogenerated type: Valve.VR.IVRResources/_GetResourceFullPath
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8A2BC
  class IVRResources::_GetResourceFullPath : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetResourceFullPath
    _GetResourceFullPath() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1921B10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRResources::_GetResourceFullPath* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRResources::_GetResourceFullPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRResources::_GetResourceFullPath*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen)
    // Offset: 0x1921B24
    uint Invoke(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1921F78
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1922028
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRResources/_GetResourceFullPath
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRResources::_GetResourceFullPath*, "Valve.VR", "IVRResources/_GetResourceFullPath");
