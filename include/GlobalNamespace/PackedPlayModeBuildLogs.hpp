// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PackedPlayModeBuildLogs
  // [TokenAttribute] Offset: FFFFFFFF
  class PackedPlayModeBuildLogs : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog
    struct RuntimeBuildLog;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: PackedPlayModeBuildLogs/RuntimeBuildLog
    // [TokenAttribute] Offset: FFFFFFFF
    struct RuntimeBuildLog/*, public System::ValueType*/ {
      public:
      // public UnityEngine.LogType Type
      // Size: 0x4
      // Offset: 0x0
      UnityEngine::LogType Type;
      // Field size check
      static_assert(sizeof(UnityEngine::LogType) == 0x4);
      // Padding between fields: Type and: Message
      char __padding0[0x4] = {};
      // public System.String Message
      // Size: 0x8
      // Offset: 0x8
      ::Il2CppString* Message;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // Creating value type constructor for type: RuntimeBuildLog
      constexpr RuntimeBuildLog(UnityEngine::LogType Type_ = {}, ::Il2CppString* Message_ = {}) noexcept : Type{Type_}, Message{Message_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field: public UnityEngine.LogType Type
      UnityEngine::LogType _get_Type();
      // Set instance field: public UnityEngine.LogType Type
      void _set_Type(UnityEngine::LogType value);
      // Get instance field: public System.String Message
      ::Il2CppString* _get_Message();
      // Set instance field: public System.String Message
      void _set_Message(::Il2CppString* value);
      // public System.Void .ctor(UnityEngine.LogType type, System.String message)
      // Offset: 0xD6B59C
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  RuntimeBuildLog(UnityEngine::LogType type, ::Il2CppString* message)
    }; // PackedPlayModeBuildLogs/RuntimeBuildLog
    #pragma pack(pop)
    static check_size<sizeof(PackedPlayModeBuildLogs::RuntimeBuildLog), 8 + sizeof(::Il2CppString*)> __GlobalNamespace_PackedPlayModeBuildLogs_RuntimeBuildLogSizeCheck;
    static_assert(sizeof(PackedPlayModeBuildLogs::RuntimeBuildLog) == 0x10);
    // private System.Collections.Generic.List`1<PackedPlayModeBuildLogs/RuntimeBuildLog> m_RuntimeBuildLogs
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>* m_RuntimeBuildLogs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>*) == 0x8);
    // Creating value type constructor for type: PackedPlayModeBuildLogs
    PackedPlayModeBuildLogs(System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>* m_RuntimeBuildLogs_ = {}) noexcept : m_RuntimeBuildLogs{m_RuntimeBuildLogs_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>*() const noexcept {
      return m_RuntimeBuildLogs;
    }
    // Get instance field: private System.Collections.Generic.List`1<PackedPlayModeBuildLogs/RuntimeBuildLog> m_RuntimeBuildLogs
    System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>* _get_m_RuntimeBuildLogs();
    // Set instance field: private System.Collections.Generic.List`1<PackedPlayModeBuildLogs/RuntimeBuildLog> m_RuntimeBuildLogs
    void _set_m_RuntimeBuildLogs(System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>* value);
    // public System.Collections.Generic.List`1<PackedPlayModeBuildLogs/RuntimeBuildLog> get_RuntimeBuildLogs()
    // Offset: 0x115D8CC
    System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>* get_RuntimeBuildLogs();
    // public System.Void set_RuntimeBuildLogs(System.Collections.Generic.List`1<PackedPlayModeBuildLogs/RuntimeBuildLog> value)
    // Offset: 0x115D8D4
    void set_RuntimeBuildLogs(System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>* value);
    // public System.Void .ctor()
    // Offset: 0x115D8DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PackedPlayModeBuildLogs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PackedPlayModeBuildLogs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PackedPlayModeBuildLogs*, creationType>()));
    }
  }; // PackedPlayModeBuildLogs
  #pragma pack(pop)
  static check_size<sizeof(PackedPlayModeBuildLogs), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>*)> __GlobalNamespace_PackedPlayModeBuildLogsSizeCheck;
  static_assert(sizeof(PackedPlayModeBuildLogs) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PackedPlayModeBuildLogs*, "", "PackedPlayModeBuildLogs");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog, "", "PackedPlayModeBuildLogs/RuntimeBuildLog");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs
// Il2CppName: get_RuntimeBuildLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>* (GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PackedPlayModeBuildLogs*), "get_RuntimeBuildLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs
// Il2CppName: set_RuntimeBuildLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PackedPlayModeBuildLogs::*)(System::Collections::Generic::List_1<GlobalNamespace::PackedPlayModeBuildLogs::RuntimeBuildLog>*)>(&GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PackedPlayModeBuildLogs/RuntimeBuildLog")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PackedPlayModeBuildLogs*), "set_RuntimeBuildLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PackedPlayModeBuildLogs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
