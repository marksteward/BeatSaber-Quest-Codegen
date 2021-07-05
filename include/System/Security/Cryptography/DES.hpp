// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SymmetricAlgorithm
#include "System/Security/Cryptography/SymmetricAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DES
  // [ComVisibleAttribute] Offset: D7D81C
  class DES : public System::Security::Cryptography::SymmetricAlgorithm {
    public:
    // Creating value type constructor for type: DES
    DES() noexcept {}
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalBlockSizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static void _set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::Array<System::Security::Cryptography::KeySizes*>* _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value);
    // static public System.Security.Cryptography.DES Create()
    // Offset: 0x19671D8
    static System::Security::Cryptography::DES* Create();
    // static public System.Boolean IsWeakKey(System.Byte[] rgbKey)
    // Offset: 0x1966C9C
    static bool IsWeakKey(::Array<uint8_t>* rgbKey);
    // static public System.Boolean IsSemiWeakKey(System.Byte[] rgbKey)
    // Offset: 0x1966DD4
    static bool IsSemiWeakKey(::Array<uint8_t>* rgbKey);
    // static private System.Boolean IsLegalKeySize(System.Byte[] rgbKey)
    // Offset: 0x1967230
    static bool IsLegalKeySize(::Array<uint8_t>* rgbKey);
    // static private System.UInt64 QuadWordFromBigEndian(System.Byte[] block)
    // Offset: 0x1967250
    static uint64_t QuadWordFromBigEndian(::Array<uint8_t>* block);
    // static private System.Void .cctor()
    // Offset: 0x19672F4
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1966B08
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DES* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DES::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DES*, creationType>()));
    }
    // public override System.Byte[] get_Key()
    // Offset: 0x1966BA0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x1966FF8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
  }; // System.Security.Cryptography.DES
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DES*, "System.Security.Cryptography", "DES");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DES::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::DES* (*)()>(&System::Security::Cryptography::DES::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DES::IsWeakKey
// Il2CppName: IsWeakKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*)>(&System::Security::Cryptography::DES::IsWeakKey)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), "IsWeakKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DES::IsSemiWeakKey
// Il2CppName: IsSemiWeakKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*)>(&System::Security::Cryptography::DES::IsSemiWeakKey)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), "IsSemiWeakKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DES::IsLegalKeySize
// Il2CppName: IsLegalKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*)>(&System::Security::Cryptography::DES::IsLegalKeySize)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), "IsLegalKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DES::QuadWordFromBigEndian
// Il2CppName: QuadWordFromBigEndian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Array<uint8_t>*)>(&System::Security::Cryptography::DES::QuadWordFromBigEndian)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), "QuadWordFromBigEndian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DES::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::DES::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DES::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DES::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::DES::*)()>(&System::Security::Cryptography::DES::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DES::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DES::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::DES::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DES*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
