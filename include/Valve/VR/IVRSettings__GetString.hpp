// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
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
  // Autogenerated type: Valve.VR.IVRSettings/_GetString
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D8A1E0
  class IVRSettings::_GetString : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetString
    _GetString() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1925188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_GetString* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSettings::_GetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_GetString*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x192519C
    void Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, Valve::VR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, ref Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1925608
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x19256D8
    void EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_GetString
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_GetString*, "Valve.VR", "IVRSettings/_GetString");
#pragma pack(pop)
