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
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebExceptionMapping
  class WebExceptionMapping : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: WebExceptionMapping
    WebExceptionMapping() noexcept {}
    // Get static field: static private readonly System.String[] s_Mapping
    static ::Array<::Il2CppString*>* _get_s_Mapping();
    // Set static field: static private readonly System.String[] s_Mapping
    static void _set_s_Mapping(::Array<::Il2CppString*>* value);
    // static System.String GetWebStatusString(System.Net.WebExceptionStatus status)
    // Offset: 0x1431D08
    static ::Il2CppString* GetWebStatusString(System::Net::WebExceptionStatus status);
    // static private System.Void .cctor()
    // Offset: 0x1431EC0
    static void _cctor();
  }; // System.Net.WebExceptionMapping
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebExceptionMapping*, "System.Net", "WebExceptionMapping");
