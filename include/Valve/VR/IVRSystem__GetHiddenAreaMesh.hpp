// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: HiddenAreaMesh_t
  struct HiddenAreaMesh_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetHiddenAreaMesh
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D88EF8
  class IVRSystem::_GetHiddenAreaMesh : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetHiddenAreaMesh
    _GetHiddenAreaMesh() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192B7C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetHiddenAreaMesh* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetHiddenAreaMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetHiddenAreaMesh*, creationType>(object, method)));
    }
    // public Valve.VR.HiddenAreaMesh_t Invoke(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type)
    // Offset: 0x192B7D4
    Valve::VR::HiddenAreaMesh_t Invoke(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192BA68
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HiddenAreaMesh_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x192BB10
    Valve::VR::HiddenAreaMesh_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetHiddenAreaMesh
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetHiddenAreaMesh*, "Valve.VR", "IVRSystem/_GetHiddenAreaMesh");
#pragma pack(pop)
