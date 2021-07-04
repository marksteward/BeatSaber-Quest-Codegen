// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
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
  // Forward declaring type: CVRSystem
  class CVRSystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Utils/SystemFn
  class SteamVR_Utils::SystemFn : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SystemFn
    SystemFn() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16CA2A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Utils::SystemFn* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Utils::SystemFn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Utils::SystemFn*, creationType>(object, method)));
    }
    // public System.Object Invoke(Valve.VR.CVRSystem system, params System.Object[] args)
    // Offset: 0x16C75C4
    ::Il2CppObject* Invoke(Valve::VR::CVRSystem* system, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object Invoke(Valve.VR.CVRSystem system, params System.Object[] args)
    ::Il2CppObject* Invoke(Valve::VR::CVRSystem* system, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object Invoke(Valve.VR.CVRSystem system, params System.Object[] args)
    template<class ...TParams>
    ::Il2CppObject* Invoke(Valve::VR::CVRSystem* system, TParams&&... args) {
      return Invoke(system, {args...});
    }
    // public System.IAsyncResult BeginInvoke(Valve.VR.CVRSystem system, System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16CA2B0
    System::IAsyncResult* BeginInvoke(Valve::VR::CVRSystem* system, ::Array<::Il2CppObject*>* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x16CA2E0
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // SteamVR_Utils/SystemFn
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Utils::SystemFn*, "", "SteamVR_Utils/SystemFn");
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
