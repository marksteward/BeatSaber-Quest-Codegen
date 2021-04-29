// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IWebRequestCreate
  class IWebRequestCreate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequestPrefixElement
  class WebRequestPrefixElement : public ::Il2CppObject {
    public:
    // public System.String Prefix
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Prefix;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Net.IWebRequestCreate creator
    // Size: 0x8
    // Offset: 0x18
    System::Net::IWebRequestCreate* creator;
    // Field size check
    static_assert(sizeof(System::Net::IWebRequestCreate*) == 0x8);
    // System.Type creatorType
    // Size: 0x8
    // Offset: 0x20
    System::Type* creatorType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: WebRequestPrefixElement
    WebRequestPrefixElement(::Il2CppString* Prefix_ = {}, System::Net::IWebRequestCreate* creator_ = {}, System::Type* creatorType_ = {}) noexcept : Prefix{Prefix_}, creator{creator_}, creatorType{creatorType_} {}
    // public System.Net.IWebRequestCreate get_Creator()
    // Offset: 0x1435B70
    System::Net::IWebRequestCreate* get_Creator();
    // public System.Void set_Creator(System.Net.IWebRequestCreate value)
    // Offset: 0x1437648
    void set_Creator(System::Net::IWebRequestCreate* value);
    // public System.Void .ctor(System.String P, System.Net.IWebRequestCreate C)
    // Offset: 0x1435FA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestPrefixElement* New_ctor(::Il2CppString* P, System::Net::IWebRequestCreate* C) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebRequestPrefixElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestPrefixElement*, creationType>(P, C)));
    }
  }; // System.Net.WebRequestPrefixElement
  #pragma pack(pop)
  static check_size<sizeof(WebRequestPrefixElement), 32 + sizeof(System::Type*)> __System_Net_WebRequestPrefixElementSizeCheck;
  static_assert(sizeof(WebRequestPrefixElement) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequestPrefixElement*, "System.Net", "WebRequestPrefixElement");
