// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
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
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
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
  // Autogenerated type: Valve.VR.IVRChaperone/_SetSceneColor
  // [UnmanagedFunctionPointerAttribute] Offset: DD399C
  class IVRChaperone::_SetSceneColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetSceneColor
    _SetSceneColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D9574
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_SetSceneColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperone::_SetSceneColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_SetSceneColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.HmdColor_t color)
    // Offset: 0x16D1CFC
    void Invoke(Valve::VR::HmdColor_t color);
    // public System.IAsyncResult BeginInvoke(Valve.VR.HmdColor_t color, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D9584
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdColor_t color, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16D9614
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/_SetSceneColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_SetSceneColor*, "Valve.VR", "IVRChaperone/_SetSceneColor");
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_SetSceneColor::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
