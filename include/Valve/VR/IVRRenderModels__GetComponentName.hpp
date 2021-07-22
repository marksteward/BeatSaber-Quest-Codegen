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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: Valve.VR.IVRRenderModels/Valve.VR._GetComponentName
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DC0B28
  class IVRRenderModels::_GetComponentName : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentName
    _GetComponentName() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CBB9FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentName* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRRenderModels::_GetComponentName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentName*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchRenderModelName, System.UInt32 unComponentIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameLen)
    // Offset: 0x1CBBA0C
    uint Invoke(::Il2CppString* pchRenderModelName, uint unComponentIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameLen);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.UInt32 unComponentIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CBBE70
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, uint unComponentIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1CBBF24
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/Valve.VR._GetComponentName
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_GetComponentName*, "Valve.VR", "IVRRenderModels/_GetComponentName");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentName::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRRenderModels::_GetComponentName::*)(::Il2CppString*, uint, System::Text::StringBuilder*, uint)>(&Valve::VR::IVRRenderModels::_GetComponentName::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unComponentIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentNameLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentName*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentName::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRRenderModels::_GetComponentName::*)(::Il2CppString*, uint, System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_GetComponentName::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unComponentIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentNameLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentName*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentName::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRRenderModels::_GetComponentName::*)(System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_GetComponentName::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentName*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
