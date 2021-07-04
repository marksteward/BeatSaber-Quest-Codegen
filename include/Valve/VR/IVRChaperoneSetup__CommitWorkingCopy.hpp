// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
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
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy
  // [UnmanagedFunctionPointerAttribute] Offset: DD39EC
  class IVRChaperoneSetup::_CommitWorkingCopy : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CommitWorkingCopy
    _CommitWorkingCopy() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D9620
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_CommitWorkingCopy* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_CommitWorkingCopy*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0x16D2850
    bool Invoke(Valve::VR::EChaperoneConfigFile configFile);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EChaperoneConfigFile configFile, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D9630
    System::IAsyncResult* BeginInvoke(Valve::VR::EChaperoneConfigFile configFile, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x16D96BC
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy*, "Valve.VR", "IVRChaperoneSetup/_CommitWorkingCopy");
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::*)(Valve::VR::EChaperoneConfigFile)>(&Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::Invoke)> {
  const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("Valve.VR", "EChaperoneConfigFile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::*)(Valve::VR::EChaperoneConfigFile, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("Valve.VR", "EChaperoneConfigFile")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::*)(System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
