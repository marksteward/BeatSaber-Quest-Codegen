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
  // Autogenerated type: Valve.VR.IVRChaperone/_GetBoundsColor
  // [UnmanagedFunctionPointerAttribute] Offset: DD39B0
  class IVRChaperone::_GetBoundsColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetBoundsColor
    _GetBoundsColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D91D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetBoundsColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperone::_GetBoundsColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetBoundsColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref Valve.VR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref Valve.VR.HmdColor_t pOutputCameraColor)
    // Offset: 0x16D1FC4
    void Invoke(Valve::VR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, Valve::VR::HmdColor_t& pOutputCameraColor);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref Valve.VR.HmdColor_t pOutputCameraColor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D91E0
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, Valve::VR::HmdColor_t& pOutputCameraColor, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.HmdColor_t pOutputColorArray, ref Valve.VR.HmdColor_t pOutputCameraColor, System.IAsyncResult result)
    // Offset: 0x16D92CC
    void EndInvoke(Valve::VR::HmdColor_t& pOutputColorArray, Valve::VR::HmdColor_t& pOutputCameraColor, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/_GetBoundsColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_GetBoundsColor*, "Valve.VR", "IVRChaperone/_GetBoundsColor");
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_GetBoundsColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_GetBoundsColor::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_GetBoundsColor::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRChaperone::_GetBoundsColor::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
