// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebConnectionGroup
  class WebConnectionGroup;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IWebConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  class IWebConnectionState : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IWebConnectionState
    IWebConnectionState() noexcept {}
    // public System.Net.WebConnectionGroup get_Group()
    // Offset: 0xFFFFFFFF
    System::Net::WebConnectionGroup* get_Group();
    // public System.Boolean TrySetBusy()
    // Offset: 0xFFFFFFFF
    bool TrySetBusy();
    // public System.Void SetIdle()
    // Offset: 0xFFFFFFFF
    void SetIdle();
  }; // System.Net.IWebConnectionState
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::IWebConnectionState*, "System.Net", "IWebConnectionState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IWebConnectionState::get_Group
// Il2CppName: get_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebConnectionGroup* (System::Net::IWebConnectionState::*)()>(&System::Net::IWebConnectionState::get_Group)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebConnectionState*), "get_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IWebConnectionState::TrySetBusy
// Il2CppName: TrySetBusy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IWebConnectionState::*)()>(&System::Net::IWebConnectionState::TrySetBusy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebConnectionState*), "TrySetBusy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IWebConnectionState::SetIdle
// Il2CppName: SetIdle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IWebConnectionState::*)()>(&System::Net::IWebConnectionState::SetIdle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebConnectionState*), "SetIdle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
