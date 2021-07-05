// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
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
  // Autogenerated type: Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo
  // [UnmanagedFunctionPointerAttribute] Offset: DD35DC
  class IVRExtendedDisplay::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDXGIOutputInfo
    _GetDXGIOutputInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FC2560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetDXGIOutputInfo*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x1FC2570
    void Invoke(int& pnAdapterIndex, int& pnAdapterOutputIndex);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FC27DC
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex, System.IAsyncResult result)
    // Offset: 0x1FC2888
    void EndInvoke(int& pnAdapterIndex, int& pnAdapterOutputIndex, System::IAsyncResult* result);
  }; // Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo*, "Valve.VR", "IVRExtendedDisplay/_GetDXGIOutputInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::*)(int&, int&)>(&Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::Invoke)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnAdapterOutputIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex, pnAdapterOutputIndex});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::*)(int&, int&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnAdapterOutputIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex, pnAdapterOutputIndex, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::*)(int&, int&, System::IAsyncResult*)>(&Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnAdapterOutputIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex, pnAdapterOutputIndex, result});
  }
};
