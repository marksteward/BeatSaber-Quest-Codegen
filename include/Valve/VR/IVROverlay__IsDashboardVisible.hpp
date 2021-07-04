// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Autogenerated type: Valve.VR.IVROverlay/_IsDashboardVisible
  // [UnmanagedFunctionPointerAttribute] Offset: DD4400
  class IVROverlay::_IsDashboardVisible : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _IsDashboardVisible
    _IsDashboardVisible() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FCD0B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_IsDashboardVisible* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_IsDashboardVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_IsDashboardVisible*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x1FCD0C4
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FCD2DC
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FCD308
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_IsDashboardVisible
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_IsDashboardVisible*, "Valve.VR", "IVROverlay/_IsDashboardVisible");
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_IsDashboardVisible::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_IsDashboardVisible::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_IsDashboardVisible::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_IsDashboardVisible::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
