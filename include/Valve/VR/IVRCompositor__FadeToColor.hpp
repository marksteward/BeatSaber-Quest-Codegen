// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Autogenerated type: Valve.VR.IVRCompositor/_FadeToColor
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D896C8
  class IVRCompositor::_FadeToColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FadeToColor
    _FadeToColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E545C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_FadeToColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_FadeToColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_FadeToColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single fSeconds, System.Single fRed, System.Single fGreen, System.Single fBlue, System.Single fAlpha, System.Boolean bBackground)
    // Offset: 0x18E5470
    void Invoke(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground);
    // public System.IAsyncResult BeginInvoke(System.Single fSeconds, System.Single fRed, System.Single fGreen, System.Single fBlue, System.Single fAlpha, System.Boolean bBackground, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E576C
    System::IAsyncResult* BeginInvoke(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18E5874
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_FadeToColor
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_FadeToColor*, "Valve.VR", "IVRCompositor/_FadeToColor");
