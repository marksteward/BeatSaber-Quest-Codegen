// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpVersion
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpVersion : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HttpVersion
    HttpVersion() noexcept {}
    // Get static field: static public readonly System.Version Version10
    static System::Version* _get_Version10();
    // Set static field: static public readonly System.Version Version10
    static void _set_Version10(System::Version* value);
    // Get static field: static public readonly System.Version Version11
    static System::Version* _get_Version11();
    // Set static field: static public readonly System.Version Version11
    static void _set_Version11(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1639264
    static void _cctor();
  }; // System.Net.HttpVersion
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpVersion*, "System.Net", "HttpVersion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpVersion::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpVersion::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpVersion*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
