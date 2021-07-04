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
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: ListDictionary
  class ListDictionary;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.KnownHttpVerb
  class KnownHttpVerb : public ::Il2CppObject {
    public:
    // System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean RequireContentBody
    // Size: 0x1
    // Offset: 0x18
    bool RequireContentBody;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean ContentBodyNotAllowed
    // Size: 0x1
    // Offset: 0x19
    bool ContentBodyNotAllowed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean ConnectRequest
    // Size: 0x1
    // Offset: 0x1A
    bool ConnectRequest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean ExpectNoContentResponse
    // Size: 0x1
    // Offset: 0x1B
    bool ExpectNoContentResponse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: KnownHttpVerb
    KnownHttpVerb(::Il2CppString* Name_ = {}, bool RequireContentBody_ = {}, bool ContentBodyNotAllowed_ = {}, bool ConnectRequest_ = {}, bool ExpectNoContentResponse_ = {}) noexcept : Name{Name_}, RequireContentBody{RequireContentBody_}, ContentBodyNotAllowed{ContentBodyNotAllowed_}, ConnectRequest{ConnectRequest_}, ExpectNoContentResponse{ExpectNoContentResponse_} {}
    // Get static field: static private System.Collections.Specialized.ListDictionary NamedHeaders
    static System::Collections::Specialized::ListDictionary* _get_NamedHeaders();
    // Set static field: static private System.Collections.Specialized.ListDictionary NamedHeaders
    static void _set_NamedHeaders(System::Collections::Specialized::ListDictionary* value);
    // Get static field: static System.Net.KnownHttpVerb Get
    static System::Net::KnownHttpVerb* _get_Get();
    // Set static field: static System.Net.KnownHttpVerb Get
    static void _set_Get(System::Net::KnownHttpVerb* value);
    // Get static field: static System.Net.KnownHttpVerb Connect
    static System::Net::KnownHttpVerb* _get_Connect();
    // Set static field: static System.Net.KnownHttpVerb Connect
    static void _set_Connect(System::Net::KnownHttpVerb* value);
    // Get static field: static System.Net.KnownHttpVerb Head
    static System::Net::KnownHttpVerb* _get_Head();
    // Set static field: static System.Net.KnownHttpVerb Head
    static void _set_Head(System::Net::KnownHttpVerb* value);
    // Get static field: static System.Net.KnownHttpVerb Put
    static System::Net::KnownHttpVerb* _get_Put();
    // Set static field: static System.Net.KnownHttpVerb Put
    static void _set_Put(System::Net::KnownHttpVerb* value);
    // Get static field: static System.Net.KnownHttpVerb Post
    static System::Net::KnownHttpVerb* _get_Post();
    // Set static field: static System.Net.KnownHttpVerb Post
    static void _set_Post(System::Net::KnownHttpVerb* value);
    // Get static field: static System.Net.KnownHttpVerb MkCol
    static System::Net::KnownHttpVerb* _get_MkCol();
    // Set static field: static System.Net.KnownHttpVerb MkCol
    static void _set_MkCol(System::Net::KnownHttpVerb* value);
    // System.Void .ctor(System.String name, System.Boolean requireContentBody, System.Boolean contentBodyNotAllowed, System.Boolean connectRequest, System.Boolean expectNoContentResponse)
    // Offset: 0x1659F08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KnownHttpVerb* New_ctor(::Il2CppString* name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::KnownHttpVerb::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KnownHttpVerb*, creationType>(name, requireContentBody, contentBodyNotAllowed, connectRequest, expectNoContentResponse)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1659F74
    static void _cctor();
    // static public System.Net.KnownHttpVerb Parse(System.String name)
    // Offset: 0x165A224
    static System::Net::KnownHttpVerb* Parse(::Il2CppString* name);
  }; // System.Net.KnownHttpVerb
  #pragma pack(pop)
  static check_size<sizeof(KnownHttpVerb), 27 + sizeof(bool)> __System_Net_KnownHttpVerbSizeCheck;
  static_assert(sizeof(KnownHttpVerb) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::KnownHttpVerb*, "System.Net", "KnownHttpVerb");
// Writing MetadataGetter for method: System::Net::KnownHttpVerb::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::KnownHttpVerb::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::KnownHttpVerb::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::KnownHttpVerb*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::KnownHttpVerb::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::KnownHttpVerb* (*)(::Il2CppString*)>(&System::Net::KnownHttpVerb::Parse)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::KnownHttpVerb*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
