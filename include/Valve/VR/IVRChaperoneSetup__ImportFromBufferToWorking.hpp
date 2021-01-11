// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_ImportFromBufferToWorking
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D895C4
  class IVRChaperoneSetup::_ImportFromBufferToWorking : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ImportFromBufferToWorking
    _ImportFromBufferToWorking() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E22C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_ImportFromBufferToWorking* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_ImportFromBufferToWorking*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0x18E22D4
    bool Invoke(::Il2CppString* pBuffer, uint nImportFlags);
    // public System.IAsyncResult BeginInvoke(System.String pBuffer, System.UInt32 nImportFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E270C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pBuffer, uint nImportFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x18E27A8
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_ImportFromBufferToWorking
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking*, "Valve.VR", "IVRChaperoneSetup/_ImportFromBufferToWorking");
