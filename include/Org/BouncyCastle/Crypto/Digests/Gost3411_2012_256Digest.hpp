// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
#include "Org/BouncyCastle/Crypto/Digests/Gost3411_2012Digest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest
  class Gost3411_2012_256Digest : public Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest {
    public:
    // Creating value type constructor for type: Gost3411_2012_256Digest
    Gost3411_2012_256Digest() noexcept {}
    // Get static field: static private readonly System.Byte[] IV
    static ::Array<uint8_t>* _get_IV();
    // Set static field: static private readonly System.Byte[] IV
    static void _set_IV(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest other)
    // Offset: 0x1CD5988
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411_2012_256Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411_2012_256Digest*, creationType>(other)));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x1CD58A8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.String Gost3411_2012Digest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1CD58F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411_2012_256Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411_2012_256Digest*, creationType>()));
    }
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1CD5A38
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.Int32 Gost3411_2012Digest::GetDigestSize()
    int GetDigestSize();
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CD5A40
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.Int32 Gost3411_2012Digest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1CD5AD8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: Org.BouncyCastle.Utilities.IMemoable Gost3411_2012Digest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // static private System.Void .cctor()
    // Offset: 0x1CD5B38
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.Void Gost3411_2012Digest::.cctor()
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_256Digest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::GetDigestSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::DoFinal)> {
  const MethodInfo* get() {
    static auto* output = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::Copy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
