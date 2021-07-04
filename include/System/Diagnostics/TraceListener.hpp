// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceListener
  class TraceListener : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // private System.Int32 indentLevel
    // Size: 0x4
    // Offset: 0x18
    int indentLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 indentSize
    // Size: 0x4
    // Offset: 0x1C
    int indentSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean needIndent
    // Size: 0x1
    // Offset: 0x20
    bool needIndent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: needIndent and: listenerName
    char __padding2[0x7] = {};
    // private System.String listenerName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* listenerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TraceListener
    TraceListener(int indentLevel_ = {}, int indentSize_ = {}, bool needIndent_ = {}, ::Il2CppString* listenerName_ = {}) noexcept : indentLevel{indentLevel_}, indentSize{indentSize_}, needIndent{needIndent_}, listenerName{listenerName_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // protected System.Void .ctor(System.String name)
    // Offset: 0x1869A30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceListener* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::TraceListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceListener*, creationType>(name)));
    }
    // public System.Boolean get_IsThreadSafe()
    // Offset: 0x186D048
    bool get_IsThreadSafe();
    // public System.Void Dispose()
    // Offset: 0x186D050
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x186D0CC
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x186D0D0
    void Flush();
    // public System.Void set_IndentLevel(System.Int32 value)
    // Offset: 0x186C48C
    void set_IndentLevel(int value);
    // public System.Void set_IndentSize(System.Int32 value)
    // Offset: 0x186C4A8
    void set_IndentSize(int value);
    // protected System.Boolean get_NeedIndent()
    // Offset: 0x186D0D4
    bool get_NeedIndent();
    // protected System.Void set_NeedIndent(System.Boolean value)
    // Offset: 0x186D0DC
    void set_NeedIndent(bool value);
    // public System.Void Fail(System.String message)
    // Offset: 0x1869A84
    void Fail(::Il2CppString* message);
    // public System.Void Fail(System.String message, System.String detailMessage)
    // Offset: 0x1869B3C
    void Fail(::Il2CppString* message, ::Il2CppString* detailMessage);
    // public System.Void Write(System.String message)
    // Offset: 0xFFFFFFFF
    void Write(::Il2CppString* message);
    // protected System.Void WriteIndent()
    // Offset: 0x186D0E8
    void WriteIndent();
    // public System.Void WriteLine(System.String message)
    // Offset: 0xFFFFFFFF
    void WriteLine(::Il2CppString* message);
  }; // System.Diagnostics.TraceListener
  #pragma pack(pop)
  static check_size<sizeof(TraceListener), 40 + sizeof(::Il2CppString*)> __System_Diagnostics_TraceListenerSizeCheck;
  static_assert(sizeof(TraceListener) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceListener*, "System.Diagnostics", "TraceListener");
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::get_IsThreadSafe
// Il2CppName: get_IsThreadSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::get_IsThreadSafe)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "get_IsThreadSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(bool)>(&System::Diagnostics::TraceListener::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::Flush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::set_IndentLevel
// Il2CppName: set_IndentLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(int)>(&System::Diagnostics::TraceListener::set_IndentLevel)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "set_IndentLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::set_IndentSize
// Il2CppName: set_IndentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(int)>(&System::Diagnostics::TraceListener::set_IndentSize)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "set_IndentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::get_NeedIndent
// Il2CppName: get_NeedIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::get_NeedIndent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "get_NeedIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::set_NeedIndent
// Il2CppName: set_NeedIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(bool)>(&System::Diagnostics::TraceListener::set_NeedIndent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "set_NeedIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::Il2CppString*)>(&System::Diagnostics::TraceListener::Fail)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::Il2CppString*, ::Il2CppString*)>(&System::Diagnostics::TraceListener::Fail)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* detailMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, detailMessage});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::Il2CppString*)>(&System::Diagnostics::TraceListener::Write)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::WriteIndent
// Il2CppName: WriteIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::WriteIndent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "WriteIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::Il2CppString*)>(&System::Diagnostics::TraceListener::WriteLine)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
