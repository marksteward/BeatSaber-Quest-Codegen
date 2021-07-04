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
// Begin forward declares
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFRange
  struct CFRange;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFString
  class CFString : public Mono::Net::CFObject {
    public:
    // private System.String str
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CFString
    CFString(::Il2CppString* str_ = {}) noexcept : str{str_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static private System.IntPtr CFStringCreateWithCharacters(System.IntPtr alloc, System.IntPtr chars, System.IntPtr length)
    // Offset: 0x15ED274
    static System::IntPtr CFStringCreateWithCharacters(System::IntPtr alloc, System::IntPtr chars, System::IntPtr length);
    // static public Mono.Net.CFString Create(System.String value)
    // Offset: 0x15EAA10
    static Mono::Net::CFString* Create(::Il2CppString* value);
    // static private System.IntPtr CFStringGetLength(System.IntPtr handle)
    // Offset: 0x15ED30C
    static System::IntPtr CFStringGetLength(System::IntPtr handle);
    // static private System.IntPtr CFStringGetCharactersPtr(System.IntPtr handle)
    // Offset: 0x15ED38C
    static System::IntPtr CFStringGetCharactersPtr(System::IntPtr handle);
    // static private System.IntPtr CFStringGetCharacters(System.IntPtr handle, Mono.Net.CFRange range, System.IntPtr buffer)
    // Offset: 0x15ED40C
    static System::IntPtr CFStringGetCharacters(System::IntPtr handle, Mono::Net::CFRange range, System::IntPtr buffer);
    // static public System.String AsString(System.IntPtr handle)
    // Offset: 0x15ECC18
    static ::Il2CppString* AsString(System::IntPtr handle);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x15ED224
    // Implemented from: Mono.Net.CFObject
    // Base method: System.Void CFObject::.ctor(System.IntPtr handle, System.Boolean own)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFString* New_ctor(System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFString*, creationType>(handle, own)));
    }
    // public override System.String ToString()
    // Offset: 0x15ED4B4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Net.CFString
  #pragma pack(pop)
  static check_size<sizeof(CFString), 24 + sizeof(::Il2CppString*)> __Mono_Net_CFStringSizeCheck;
  static_assert(sizeof(CFString) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFString*, "Mono.Net", "CFString");
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringCreateWithCharacters
// Il2CppName: CFStringCreateWithCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, System::IntPtr, System::IntPtr)>(&Mono::Net::CFString::CFStringCreateWithCharacters)> {
  const MethodInfo* get() {
    static auto* alloc = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* chars = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringCreateWithCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alloc, chars, length});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::CFString* (*)(::Il2CppString*)>(&Mono::Net::CFString::Create)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringGetLength
// Il2CppName: CFStringGetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr)>(&Mono::Net::CFString::CFStringGetLength)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringGetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringGetCharactersPtr
// Il2CppName: CFStringGetCharactersPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr)>(&Mono::Net::CFString::CFStringGetCharactersPtr)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringGetCharactersPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringGetCharacters
// Il2CppName: CFStringGetCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, Mono::Net::CFRange, System::IntPtr)>(&Mono::Net::CFString::CFStringGetCharacters)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* range = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFRange")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringGetCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, range, buffer});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::AsString
// Il2CppName: AsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::IntPtr)>(&Mono::Net::CFString::AsString)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "AsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::CFString::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::CFString::*)()>(&Mono::Net::CFString::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
