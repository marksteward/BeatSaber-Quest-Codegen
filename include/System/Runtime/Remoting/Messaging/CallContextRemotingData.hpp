// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CallContextRemotingData
  // [TokenAttribute] Offset: FFFFFFFF
  class CallContextRemotingData : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.String _logicalCallID
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* logicalCallID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CallContextRemotingData
    CallContextRemotingData(::Il2CppString* logicalCallID_ = {}) noexcept : logicalCallID{logicalCallID_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return logicalCallID;
    }
    // System.String get_LogicalCallID()
    // Offset: 0x19F6BD0
    ::Il2CppString* get_LogicalCallID();
    // System.Void set_LogicalCallID(System.String value)
    // Offset: 0x19F6BD8
    void set_LogicalCallID(::Il2CppString* value);
    // System.Boolean get_HasInfo()
    // Offset: 0x19F6BE0
    bool get_HasInfo();
    // public System.Object Clone()
    // Offset: 0x19F6BF0
    ::Il2CppObject* Clone();
    // public System.Void .ctor()
    // Offset: 0x19F6C60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallContextRemotingData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CallContextRemotingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallContextRemotingData*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.CallContextRemotingData
  #pragma pack(pop)
  static check_size<sizeof(CallContextRemotingData), 16 + sizeof(::Il2CppString*)> __System_Runtime_Remoting_Messaging_CallContextRemotingDataSizeCheck;
  static_assert(sizeof(CallContextRemotingData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CallContextRemotingData*, "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::get_LogicalCallID
// Il2CppName: get_LogicalCallID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::get_LogicalCallID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "get_LogicalCallID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::set_LogicalCallID
// Il2CppName: set_LogicalCallID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::set_LogicalCallID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "set_LogicalCallID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::get_HasInfo
// Il2CppName: get_HasInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::get_HasInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "get_HasInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::CallContextRemotingData::*)()>(&System::Runtime::Remoting::Messaging::CallContextRemotingData::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextRemotingData*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextRemotingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
