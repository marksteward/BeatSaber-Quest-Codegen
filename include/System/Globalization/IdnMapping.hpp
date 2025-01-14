// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Punycode
  class Punycode;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.IdnMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class IdnMapping : public ::Il2CppObject {
    public:
    // private System.Boolean allow_unassigned
    // Size: 0x1
    // Offset: 0x10
    bool allow_unassigned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean use_std3
    // Size: 0x1
    // Offset: 0x11
    bool use_std3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: use_std3 and: puny
    char __padding1[0x6] = {};
    // private System.Globalization.Punycode puny
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::Punycode* puny;
    // Field size check
    static_assert(sizeof(System::Globalization::Punycode*) == 0x8);
    // Creating value type constructor for type: IdnMapping
    IdnMapping(bool allow_unassigned_ = {}, bool use_std3_ = {}, System::Globalization::Punycode* puny_ = {}) noexcept : allow_unassigned{allow_unassigned_}, use_std3{use_std3_}, puny{puny_} {}
    // Get instance field: private System.Boolean allow_unassigned
    bool _get_allow_unassigned();
    // Set instance field: private System.Boolean allow_unassigned
    void _set_allow_unassigned(bool value);
    // Get instance field: private System.Boolean use_std3
    bool _get_use_std3();
    // Set instance field: private System.Boolean use_std3
    void _set_use_std3(bool value);
    // Get instance field: private System.Globalization.Punycode puny
    System::Globalization::Punycode* _get_puny();
    // Set instance field: private System.Globalization.Punycode puny
    void _set_puny(System::Globalization::Punycode* value);
    // public System.String GetAscii(System.String unicode)
    // Offset: 0x16807C4
    ::Il2CppString* GetAscii(::Il2CppString* unicode);
    // public System.String GetAscii(System.String unicode, System.Int32 index, System.Int32 count)
    // Offset: 0x1680860
    ::Il2CppString* GetAscii(::Il2CppString* unicode, int index, int count);
    // private System.String Convert(System.String input, System.Int32 index, System.Int32 count, System.Boolean toAscii)
    // Offset: 0x1680970
    ::Il2CppString* Convert(::Il2CppString* input, int index, int count, bool toAscii);
    // private System.String ToAscii(System.String s, System.Int32 offset)
    // Offset: 0x1680B94
    ::Il2CppString* ToAscii(::Il2CppString* s, int offset);
    // private System.Void VerifyLength(System.String s, System.Int32 offset)
    // Offset: 0x1681300
    void VerifyLength(::Il2CppString* s, int offset);
    // private System.String NamePrep(System.String s, System.Int32 offset)
    // Offset: 0x1680FB4
    ::Il2CppString* NamePrep(::Il2CppString* s, int offset);
    // private System.Void VerifyProhibitedCharacters(System.String s, System.Int32 offset)
    // Offset: 0x16813F8
    void VerifyProhibitedCharacters(::Il2CppString* s, int offset);
    // private System.Void VerifyStd3AsciiRules(System.String s, System.Int32 offset)
    // Offset: 0x1681110
    void VerifyStd3AsciiRules(::Il2CppString* s, int offset);
    // public System.String GetUnicode(System.String ascii)
    // Offset: 0x1681644
    ::Il2CppString* GetUnicode(::Il2CppString* ascii);
    // public System.String GetUnicode(System.String ascii, System.Int32 index, System.Int32 count)
    // Offset: 0x16816E0
    ::Il2CppString* GetUnicode(::Il2CppString* ascii, int index, int count);
    // private System.String ToUnicode(System.String s, System.Int32 offset)
    // Offset: 0x1680DD4
    ::Il2CppString* ToUnicode(::Il2CppString* s, int offset);
    // public System.Void .ctor()
    // Offset: 0x1680618
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdnMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::IdnMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdnMapping*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x16806F0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16807A8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Globalization.IdnMapping
  #pragma pack(pop)
  static check_size<sizeof(IdnMapping), 24 + sizeof(System::Globalization::Punycode*)> __System_Globalization_IdnMappingSizeCheck;
  static_assert(sizeof(IdnMapping) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::IdnMapping*, "System.Globalization", "IdnMapping");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetAscii
// Il2CppName: GetAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*)>(&System::Globalization::IdnMapping::GetAscii)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetAscii
// Il2CppName: GetAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*, int, int)>(&System::Globalization::IdnMapping::GetAscii)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, index, count});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*, int, int, bool)>(&System::Globalization::IdnMapping::Convert)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* toAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, index, count, toAscii});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::ToAscii
// Il2CppName: ToAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*, int)>(&System::Globalization::IdnMapping::ToAscii)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "ToAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::VerifyLength
// Il2CppName: VerifyLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::IdnMapping::*)(::Il2CppString*, int)>(&System::Globalization::IdnMapping::VerifyLength)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "VerifyLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::NamePrep
// Il2CppName: NamePrep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*, int)>(&System::Globalization::IdnMapping::NamePrep)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "NamePrep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::VerifyProhibitedCharacters
// Il2CppName: VerifyProhibitedCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::IdnMapping::*)(::Il2CppString*, int)>(&System::Globalization::IdnMapping::VerifyProhibitedCharacters)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "VerifyProhibitedCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::VerifyStd3AsciiRules
// Il2CppName: VerifyStd3AsciiRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::IdnMapping::*)(::Il2CppString*, int)>(&System::Globalization::IdnMapping::VerifyStd3AsciiRules)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "VerifyStd3AsciiRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetUnicode
// Il2CppName: GetUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*)>(&System::Globalization::IdnMapping::GetUnicode)> {
  static const MethodInfo* get() {
    static auto* ascii = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ascii});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetUnicode
// Il2CppName: GetUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*, int, int)>(&System::Globalization::IdnMapping::GetUnicode)> {
  static const MethodInfo* get() {
    static auto* ascii = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ascii, index, count});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::ToUnicode
// Il2CppName: ToUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::IdnMapping::*)(::Il2CppString*, int)>(&System::Globalization::IdnMapping::ToUnicode)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "ToUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::IdnMapping::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::IdnMapping::*)(::Il2CppObject*)>(&System::Globalization::IdnMapping::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::IdnMapping::*)()>(&System::Globalization::IdnMapping::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
