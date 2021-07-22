// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
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
  // Autogenerated type: Valve.VR.IVRRenderModels/Valve.VR._LoadTexture_Async
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DC0A88
  class IVRRenderModels::_LoadTexture_Async : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LoadTexture_Async
    _LoadTexture_Async() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CBEA08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_LoadTexture_Async* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_LoadTexture_Async::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_LoadTexture_Async*, creationType>(object, method)));
    }
    // public Valve.VR.EVRRenderModelError Invoke(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x1CBEA18
    Valve::VR::EVRRenderModelError Invoke(int textureId, System::IntPtr& ppTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, ref System.IntPtr ppTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CBEC9C
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr& ppTexture, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(ref System.IntPtr ppTexture, System.IAsyncResult result)
    // Offset: 0x1CBED50
    Valve::VR::EVRRenderModelError EndInvoke(System::IntPtr& ppTexture, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/Valve.VR._LoadTexture_Async
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_LoadTexture_Async*, "Valve.VR", "IVRRenderModels/_LoadTexture_Async");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadTexture_Async::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadTexture_Async::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRRenderModelError (Valve::VR::IVRRenderModels::_LoadTexture_Async::*)(int, System::IntPtr&)>(&Valve::VR::IVRRenderModels::_LoadTexture_Async::Invoke)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ppTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_LoadTexture_Async*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, ppTexture});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadTexture_Async::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRRenderModels::_LoadTexture_Async::*)(int, System::IntPtr&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_LoadTexture_Async::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ppTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_LoadTexture_Async*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, ppTexture, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_LoadTexture_Async::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRRenderModelError (Valve::VR::IVRRenderModels::_LoadTexture_Async::*)(System::IntPtr&, System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_LoadTexture_Async::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* ppTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_LoadTexture_Async*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ppTexture, result});
  }
};
