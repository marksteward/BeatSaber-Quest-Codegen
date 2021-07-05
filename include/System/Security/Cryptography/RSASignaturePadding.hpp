// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Security.Cryptography.RSASignaturePaddingMode
#include "System/Security/Cryptography/RSASignaturePaddingMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSASignaturePadding
  class RSASignaturePadding : public ::Il2CppObject/*, public System::IEquatable_1<System::Security::Cryptography::RSASignaturePadding*>*/ {
    public:
    // private readonly System.Security.Cryptography.RSASignaturePaddingMode _mode
    // Size: 0x4
    // Offset: 0x10
    System::Security::Cryptography::RSASignaturePaddingMode mode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RSASignaturePaddingMode) == 0x4);
    // Creating value type constructor for type: RSASignaturePadding
    RSASignaturePadding(System::Security::Cryptography::RSASignaturePaddingMode mode_ = {}) noexcept : mode{mode_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<System::Security::Cryptography::RSASignaturePadding*>
    operator System::IEquatable_1<System::Security::Cryptography::RSASignaturePadding*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::Security::Cryptography::RSASignaturePadding*>*>(this);
    }
    // Creating conversion operator: operator System::Security::Cryptography::RSASignaturePaddingMode
    constexpr operator System::Security::Cryptography::RSASignaturePaddingMode() const noexcept {
      return mode;
    }
    // Get static field: static private readonly System.Security.Cryptography.RSASignaturePadding s_pkcs1
    static System::Security::Cryptography::RSASignaturePadding* _get_s_pkcs1();
    // Set static field: static private readonly System.Security.Cryptography.RSASignaturePadding s_pkcs1
    static void _set_s_pkcs1(System::Security::Cryptography::RSASignaturePadding* value);
    // Get static field: static private readonly System.Security.Cryptography.RSASignaturePadding s_pss
    static System::Security::Cryptography::RSASignaturePadding* _get_s_pss();
    // Set static field: static private readonly System.Security.Cryptography.RSASignaturePadding s_pss
    static void _set_s_pss(System::Security::Cryptography::RSASignaturePadding* value);
    // private System.Void .ctor(System.Security.Cryptography.RSASignaturePaddingMode mode)
    // Offset: 0x1AE5624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSASignaturePadding* New_ctor(System::Security::Cryptography::RSASignaturePaddingMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RSASignaturePadding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSASignaturePadding*, creationType>(mode)));
    }
    // static public System.Security.Cryptography.RSASignaturePadding get_Pkcs1()
    // Offset: 0x1AE5650
    static System::Security::Cryptography::RSASignaturePadding* get_Pkcs1();
    // public System.Boolean Equals(System.Security.Cryptography.RSASignaturePadding other)
    // Offset: 0x1AE5758
    bool Equals(System::Security::Cryptography::RSASignaturePadding* other);
    // static private System.Void .cctor()
    // Offset: 0x1AE5880
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1AE56B8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1AE56E4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x1AE57F4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Security.Cryptography.RSASignaturePadding
  #pragma pack(pop)
  static check_size<sizeof(RSASignaturePadding), 16 + sizeof(System::Security::Cryptography::RSASignaturePaddingMode)> __System_Security_Cryptography_RSASignaturePaddingSizeCheck;
  static_assert(sizeof(RSASignaturePadding) == 0x14);
  // static public System.Boolean op_Equality(System.Security.Cryptography.RSASignaturePadding left, System.Security.Cryptography.RSASignaturePadding right)
  // Offset: 0x1AE367C
  bool operator ==(System::Security::Cryptography::RSASignaturePadding* left, System::Security::Cryptography::RSASignaturePadding& right);
  // static public System.Boolean op_Inequality(System.Security.Cryptography.RSASignaturePadding left, System.Security.Cryptography.RSASignaturePadding right)
  // Offset: 0x1AE4600
  bool operator !=(System::Security::Cryptography::RSASignaturePadding* left, System::Security::Cryptography::RSASignaturePadding& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSASignaturePadding*, "System.Security.Cryptography", "RSASignaturePadding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::get_Pkcs1
// Il2CppName: get_Pkcs1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RSASignaturePadding* (*)()>(&System::Security::Cryptography::RSASignaturePadding::get_Pkcs1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSASignaturePadding*), "get_Pkcs1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSASignaturePadding::*)(System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSASignaturePadding::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSASignaturePadding*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::RSASignaturePadding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSASignaturePadding*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RSASignaturePadding::*)()>(&System::Security::Cryptography::RSASignaturePadding::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSASignaturePadding*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSASignaturePadding::*)(::Il2CppObject*)>(&System::Security::Cryptography::RSASignaturePadding::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSASignaturePadding*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::RSASignaturePadding::*)()>(&System::Security::Cryptography::RSASignaturePadding::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSASignaturePadding*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::RSASignaturePadding::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
