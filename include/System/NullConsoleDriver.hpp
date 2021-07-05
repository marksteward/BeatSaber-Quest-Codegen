// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IConsoleDriver
#include "System/IConsoleDriver.hpp"
// Including type: System.ConsoleKeyInfo
#include "System/ConsoleKeyInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.NullConsoleDriver
  class NullConsoleDriver : public ::Il2CppObject/*, public System::IConsoleDriver*/ {
    public:
    // Creating value type constructor for type: NullConsoleDriver
    NullConsoleDriver() noexcept {}
    // Creating interface conversion operator: operator System::IConsoleDriver
    operator System::IConsoleDriver() noexcept {
      return *reinterpret_cast<System::IConsoleDriver*>(this);
    }
    // Get static field: static private readonly System.ConsoleKeyInfo EmptyConsoleKeyInfo
    static System::ConsoleKeyInfo _get_EmptyConsoleKeyInfo();
    // Set static field: static private readonly System.ConsoleKeyInfo EmptyConsoleKeyInfo
    static void _set_EmptyConsoleKeyInfo(System::ConsoleKeyInfo value);
    // public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x18258DC
    System::ConsoleKeyInfo ReadKey(bool intercept);
    // static private System.Void .cctor()
    // Offset: 0x1825950
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1825948
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullConsoleDriver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::NullConsoleDriver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullConsoleDriver*, creationType>()));
    }
  }; // System.NullConsoleDriver
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::NullConsoleDriver*, "System", "NullConsoleDriver");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::NullConsoleDriver::ReadKey
// Il2CppName: ReadKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKeyInfo (System::NullConsoleDriver::*)(bool)>(&System::NullConsoleDriver::ReadKey)> {
  static const MethodInfo* get() {
    static auto* intercept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::NullConsoleDriver*), "ReadKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intercept});
  }
};
// Writing MetadataGetter for method: System::NullConsoleDriver::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::NullConsoleDriver::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::NullConsoleDriver*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::NullConsoleDriver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
