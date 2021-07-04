// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.UnhandledExceptionEventArgs
  // [ComVisibleAttribute] Offset: D7B0F0
  class UnhandledExceptionEventArgs : public System::EventArgs {
    public:
    // private System.Object _Exception
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Exception;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean _IsTerminating
    // Size: 0x1
    // Offset: 0x18
    bool IsTerminating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnhandledExceptionEventArgs
    UnhandledExceptionEventArgs(::Il2CppObject* Exception_ = {}, bool IsTerminating_ = {}) noexcept : Exception{Exception_}, IsTerminating{IsTerminating_} {}
    // public System.Void .ctor(System.Object exception, System.Boolean isTerminating)
    // Offset: 0x2330220
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnhandledExceptionEventArgs* New_ctor(::Il2CppObject* exception, bool isTerminating) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UnhandledExceptionEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnhandledExceptionEventArgs*, creationType>(exception, isTerminating)));
    }
    // public System.Object get_ExceptionObject()
    // Offset: 0x23302A8
    ::Il2CppObject* get_ExceptionObject();
    // public System.Boolean get_IsTerminating()
    // Offset: 0x23302B0
    bool get_IsTerminating();
  }; // System.UnhandledExceptionEventArgs
  #pragma pack(pop)
  static check_size<sizeof(UnhandledExceptionEventArgs), 24 + sizeof(bool)> __System_UnhandledExceptionEventArgsSizeCheck;
  static_assert(sizeof(UnhandledExceptionEventArgs) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::UnhandledExceptionEventArgs*, "System", "UnhandledExceptionEventArgs");
// Writing MetadataGetter for method: System::UnhandledExceptionEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UnhandledExceptionEventArgs::get_ExceptionObject
// Il2CppName: get_ExceptionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::UnhandledExceptionEventArgs::*)()>(&System::UnhandledExceptionEventArgs::get_ExceptionObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UnhandledExceptionEventArgs*), "get_ExceptionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UnhandledExceptionEventArgs::get_IsTerminating
// Il2CppName: get_IsTerminating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UnhandledExceptionEventArgs::*)()>(&System::UnhandledExceptionEventArgs::get_IsTerminating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UnhandledExceptionEventArgs*), "get_IsTerminating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
