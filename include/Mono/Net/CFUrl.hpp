// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFObject
#include "Mono/Net/CFObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFUrl
  class CFUrl : public Mono::Net::CFObject {
    public:
    // Creating value type constructor for type: CFUrl
    CFUrl() noexcept {}
    // static private System.IntPtr CFURLCreateWithString(System.IntPtr allocator, System.IntPtr str, System.IntPtr baseURL)
    // Offset: 0x15ED534
    static System::IntPtr CFURLCreateWithString(System::IntPtr allocator, System::IntPtr str, System::IntPtr baseURL);
    // static public Mono.Net.CFUrl Create(System.String absolute)
    // Offset: 0x15EA734
    static Mono::Net::CFUrl* Create(::Il2CppString* absolute);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x15ED4E4
    // Implemented from: Mono.Net.CFObject
    // Base method: System.Void CFObject::.ctor(System.IntPtr handle, System.Boolean own)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFUrl* New_ctor(System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFUrl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFUrl*, creationType>(handle, own)));
    }
  }; // Mono.Net.CFUrl
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFUrl*, "Mono.Net", "CFUrl");
// Writing MetadataGetter for method: Mono::Net::CFUrl::CFURLCreateWithString
// Il2CppName: CFURLCreateWithString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Net::CFUrl::Create
// Il2CppName: Create
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Net::CFUrl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
