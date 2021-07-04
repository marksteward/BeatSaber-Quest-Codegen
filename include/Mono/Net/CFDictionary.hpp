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
  // Autogenerated type: Mono.Net.CFDictionary
  // [DefaultMemberAttribute] Offset: D87448
  class CFDictionary : public Mono::Net::CFObject {
    public:
    // Creating value type constructor for type: CFDictionary
    CFDictionary() noexcept {}
    // Get static field: static private readonly System.IntPtr KeyCallbacks
    static System::IntPtr _get_KeyCallbacks();
    // Set static field: static private readonly System.IntPtr KeyCallbacks
    static void _set_KeyCallbacks(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr ValueCallbacks
    static System::IntPtr _get_ValueCallbacks();
    // Set static field: static private readonly System.IntPtr ValueCallbacks
    static void _set_ValueCallbacks(System::IntPtr value);
    // static private System.Void .cctor()
    // Offset: 0x15E9838
    static void _cctor();
    // static private System.IntPtr CFDictionaryGetValue(System.IntPtr handle, System.IntPtr key)
    // Offset: 0x15E9978
    static System::IntPtr CFDictionaryGetValue(System::IntPtr handle, System::IntPtr key);
    // public System.IntPtr GetValue(System.IntPtr key)
    // Offset: 0x15E9A08
    System::IntPtr GetValue(System::IntPtr key);
    // public System.IntPtr get_Item(System.IntPtr key)
    // Offset: 0x15E9A80
    System::IntPtr get_Item(System::IntPtr key);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x15E9928
    // Implemented from: Mono.Net.CFObject
    // Base method: System.Void CFObject::.ctor(System.IntPtr handle, System.Boolean own)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFDictionary* New_ctor(System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFDictionary*, creationType>(handle, own)));
    }
  }; // Mono.Net.CFDictionary
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFDictionary*, "Mono.Net", "CFDictionary");
// Writing MetadataGetter for method: Mono::Net::CFDictionary::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Net::CFDictionary::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFDictionary*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFDictionary::CFDictionaryGetValue
// Il2CppName: CFDictionaryGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, System::IntPtr)>(&Mono::Net::CFDictionary::CFDictionaryGetValue)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFDictionary*), "CFDictionaryGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, key});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFDictionary::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::Net::CFDictionary::*)(System::IntPtr)>(&Mono::Net::CFDictionary::GetValue)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFDictionary*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Mono::Net::CFDictionary::*)(System::IntPtr)>(&Mono::Net::CFDictionary::get_Item)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
