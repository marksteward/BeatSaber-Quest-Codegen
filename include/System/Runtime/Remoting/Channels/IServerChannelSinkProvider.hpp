// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.IServerChannelSinkProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6BB88
  class IServerChannelSinkProvider : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IServerChannelSinkProvider
    IServerChannelSinkProvider() noexcept {}
    // public System.Void set_Next(System.Runtime.Remoting.Channels.IServerChannelSinkProvider value)
    // Offset: 0xFFFFFFFF
    void set_Next(System::Runtime::Remoting::Channels::IServerChannelSinkProvider* value);
  }; // System.Runtime.Remoting.Channels.IServerChannelSinkProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IServerChannelSinkProvider*, "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IServerChannelSinkProvider::set_Next
// Il2CppName: set_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::IServerChannelSinkProvider::*)(System::Runtime::Remoting::Channels::IServerChannelSinkProvider*)>(&System::Runtime::Remoting::Channels::IServerChannelSinkProvider::set_Next)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Channels", "IServerChannelSinkProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IServerChannelSinkProvider*), "set_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
