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
    // public System.Void .ctor(System.String name, System.String val)
    // Offset: 0x1E33550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemHeader* New_ctor(::Il2CppString* name, ::Il2CppString* val) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::IO::Pem::PemHeader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemHeader*, creationType>(name, val)));
    }
    // public System.String get_Name()
    // Offset: 0x1E33588
    ::Il2CppString* get_Name();
    // public System.String get_Value()
    // Offset: 0x1E33590
    ::Il2CppString* get_Value();
    // private System.Int32 GetHashCode(System.String s)
    // Offset: 0x1E335F4
    int GetHashCode(::Il2CppString* s);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1E33598
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1E3360C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Org.BouncyCastle.Utilities.IO.Pem.PemHeader
  #pragma pack(pop)
  static check_size<sizeof(PemHeader), 24 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Utilities_IO_Pem_PemHeaderSizeCheck;
  static_assert(sizeof(PemHeader) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Pem::PemHeader*, "Org.BouncyCastle.Utilities.IO.Pem", "PemHeader");
