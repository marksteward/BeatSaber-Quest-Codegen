// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: EVREventType
  struct EVREventType;
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
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetEventTypeNameFromEnum
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DBF9A8
  class IVRSystem::_GetEventTypeNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetEventTypeNameFromEnum
    _GetEventTypeNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CC8258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetEventTypeNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetEventTypeNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(Valve.VR.EVREventType eType)
    // Offset: 0x1CC8268
    System::IntPtr Invoke(Valve::VR::EVREventType eType);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREventType eType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CC84E0
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREventType eType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x1CC856C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetEventTypeNameFromEnum
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetEventTypeNameFromEnum*, "Valve.VR", "IVRSystem/_GetEventTypeNameFromEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::*)(Valve::VR::EVREventType)>(&Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::Invoke)> {
  static const MethodInfo* get() {
    static auto* eType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetEventTypeNameFromEnum*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eType});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::*)(Valve::VR::EVREventType, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREventType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetEventTypeNameFromEnum*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eType, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetEventTypeNameFromEnum::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetEventTypeNameFromEnum*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
