// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebConnection
#include "System/Net/WebConnection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnection/AbortHelper
  class WebConnection::AbortHelper : public ::Il2CppObject {
    public:
    // public System.Net.WebConnection Connection
    // Size: 0x8
    // Offset: 0x10
    System::Net::WebConnection* Connection;
    // Field size check
    static_assert(sizeof(System::Net::WebConnection*) == 0x8);
    // Creating value type constructor for type: AbortHelper
    AbortHelper(System::Net::WebConnection* Connection_ = {}) noexcept : Connection{Connection_} {}
    // Creating conversion operator: operator System::Net::WebConnection*
    constexpr operator System::Net::WebConnection*() const noexcept {
      return Connection;
    }
    // public System.Void Abort(System.Object sender, System.EventArgs args)
    // Offset: 0x15C296C
    void Abort(::Il2CppObject* sender, System::EventArgs* args);
    // public System.Void .ctor()
    // Offset: 0x15BC5C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnection::AbortHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnection::AbortHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnection::AbortHelper*, creationType>()));
    }
  }; // System.Net.WebConnection/AbortHelper
  #pragma pack(pop)
  static check_size<sizeof(WebConnection::AbortHelper), 16 + sizeof(System::Net::WebConnection*)> __System_Net_WebConnection_AbortHelperSizeCheck;
  static_assert(sizeof(WebConnection::AbortHelper) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnection::AbortHelper*, "System.Net", "WebConnection/AbortHelper");
// Writing MetadataGetter for method: System::Net::WebConnection::AbortHelper::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::AbortHelper::*)(::Il2CppObject*, System::EventArgs*)>(&System::Net::WebConnection::AbortHelper::Abort)> {
  const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnection::AbortHelper*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnection::AbortHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
