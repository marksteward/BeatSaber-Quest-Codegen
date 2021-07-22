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
// Type namespace: Org.BouncyCastle.Utilities.IO.Pem
namespace Org::BouncyCastle::Utilities::IO::Pem {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.Pem.PemHeader
  // [TokenAttribute] Offset: FFFFFFFF
  class PemHeader : public ::Il2CppObject {
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String val
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* val;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PemHeader
    PemHeader(::Il2CppString* name_ = {}, ::Il2CppString* val_ = {}) noexcept : name{name_}, val{val_} {}
    // public System.String get_Name()
    // Offset: 0x1F7CAD4
    ::Il2CppString* get_Name();
    // public System.String get_Value()
    // Offset: 0x1F7CADC
    ::Il2CppString* get_Value();
    // public System.Void .ctor(System.String name, System.String val)
    // Offset: 0x1F7CA9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemHeader* New_ctor(::Il2CppString* name, ::Il2CppString* val) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::IO::Pem::PemHeader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemHeader*, creationType>(name, val)));
    }
    // private System.Int32 GetHashCode(System.String s)
    // Offset: 0x1F7CB40
    int GetHashCode(::Il2CppString* s);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F7CAE4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1F7CB58
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Org.BouncyCastle.Utilities.IO.Pem.PemHeader
  #pragma pack(pop)
  static check_size<sizeof(PemHeader), 24 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Utilities_IO_Pem_PemHeaderSizeCheck;
  static_assert(sizeof(PemHeader) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Pem::PemHeader*, "Org.BouncyCastle.Utilities.IO.Pem", "PemHeader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemHeader*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemHeader::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemHeader*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemHeader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)(::Il2CppString*)>(&Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemHeader*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemHeader::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemHeader*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::IO::Pem::PemHeader::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Utilities::IO::Pem::PemHeader::*)(::Il2CppObject*)>(&Org::BouncyCastle::Utilities::IO::Pem::PemHeader::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::IO::Pem::PemHeader*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
