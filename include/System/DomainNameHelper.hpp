// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.DomainNameHelper
  class DomainNameHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DomainNameHelper
    DomainNameHelper() noexcept {}
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, System.Int32 end, ref System.Boolean loopback)
    // Offset: 0x186DADC
    static ::Il2CppString* ParseCanonicalName(::Il2CppString* str, int start, int end, bool& loopback);
    // static System.Boolean IsValid(System.Char* name, System.UInt16 pos, ref System.Int32 returnedEnd, ref System.Boolean notCanonical, System.Boolean notImplicitFile)
    // Offset: 0x186DC74
    static bool IsValid(::Il2CppChar* name, uint16_t pos, int& returnedEnd, bool& notCanonical, bool notImplicitFile);
    // static System.Boolean IsValidByIri(System.Char* name, System.UInt16 pos, ref System.Int32 returnedEnd, ref System.Boolean notCanonical, System.Boolean notImplicitFile)
    // Offset: 0x186DEA0
    static bool IsValidByIri(::Il2CppChar* name, uint16_t pos, int& returnedEnd, bool& notCanonical, bool notImplicitFile);
    // static System.String IdnEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, ref System.Boolean allAscii, ref System.Boolean atLeastOneValidIdn)
    // Offset: 0x186E088
    static ::Il2CppString* IdnEquivalent(::Il2CppChar* hostname, int start, int end, bool& allAscii, bool& atLeastOneValidIdn);
    // static System.String IdnEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, ref System.Boolean allAscii, ref System.String bidiStrippedHost)
    // Offset: 0x186E308
    static ::Il2CppString* IdnEquivalent(::Il2CppChar* hostname, int start, int end, bool& allAscii, ::Il2CppString*& bidiStrippedHost);
    // static private System.Boolean IsIdnAce(System.String input, System.Int32 index)
    // Offset: 0x186E544
    static bool IsIdnAce(::Il2CppString* input, int index);
    // static private System.Boolean IsIdnAce(System.Char* input, System.Int32 index)
    // Offset: 0x186E4F8
    static bool IsIdnAce(::Il2CppChar* input, int index);
    // static System.String UnicodeEquivalent(System.String idnHost, System.Char* hostname, System.Int32 start, System.Int32 end)
    // Offset: 0x186E5E0
    static ::Il2CppString* UnicodeEquivalent(::Il2CppString* idnHost, ::Il2CppChar* hostname, int start, int end);
    // static System.String UnicodeEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, ref System.Boolean allAscii, ref System.Boolean atLeastOneValidIdn)
    // Offset: 0x186E708
    static ::Il2CppString* UnicodeEquivalent(::Il2CppChar* hostname, int start, int end, bool& allAscii, bool& atLeastOneValidIdn);
    // static private System.Boolean IsASCIILetterOrDigit(System.Char character, ref System.Boolean notCanonical)
    // Offset: 0x186DDF0
    static bool IsASCIILetterOrDigit(::Il2CppChar character, bool& notCanonical);
    // static private System.Boolean IsValidDomainLabelCharacter(System.Char character, ref System.Boolean notCanonical)
    // Offset: 0x186DE3C
    static bool IsValidDomainLabelCharacter(::Il2CppChar character, bool& notCanonical);
  }; // System.DomainNameHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DomainNameHelper*, "System", "DomainNameHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DomainNameHelper::ParseCanonicalName
// Il2CppName: ParseCanonicalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, int, int, bool&)>(&System::DomainNameHelper::ParseCanonicalName)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loopback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "ParseCanonicalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, start, end, loopback});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, uint16_t, int&, bool&, bool)>(&System::DomainNameHelper::IsValid)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* returnedEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pos, returnedEnd, notCanonical, notImplicitFile});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsValidByIri
// Il2CppName: IsValidByIri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, uint16_t, int&, bool&, bool)>(&System::DomainNameHelper::IsValidByIri)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* returnedEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsValidByIri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pos, returnedEnd, notCanonical, notImplicitFile});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IdnEquivalent
// Il2CppName: IdnEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar*, int, int, bool&, bool&)>(&System::DomainNameHelper::IdnEquivalent)> {
  static const MethodInfo* get() {
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* allAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* atLeastOneValidIdn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IdnEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname, start, end, allAscii, atLeastOneValidIdn});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IdnEquivalent
// Il2CppName: IdnEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar*, int, int, bool&, ::Il2CppString*&)>(&System::DomainNameHelper::IdnEquivalent)> {
  static const MethodInfo* get() {
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* allAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* bidiStrippedHost = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IdnEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname, start, end, allAscii, bidiStrippedHost});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsIdnAce
// Il2CppName: IsIdnAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int)>(&System::DomainNameHelper::IsIdnAce)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsIdnAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, index});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsIdnAce
// Il2CppName: IsIdnAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, int)>(&System::DomainNameHelper::IsIdnAce)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsIdnAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, index});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::UnicodeEquivalent
// Il2CppName: UnicodeEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppChar*, int, int)>(&System::DomainNameHelper::UnicodeEquivalent)> {
  static const MethodInfo* get() {
    static auto* idnHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "UnicodeEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idnHost, hostname, start, end});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::UnicodeEquivalent
// Il2CppName: UnicodeEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar*, int, int, bool&, bool&)>(&System::DomainNameHelper::UnicodeEquivalent)> {
  static const MethodInfo* get() {
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* allAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* atLeastOneValidIdn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "UnicodeEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname, start, end, allAscii, atLeastOneValidIdn});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsASCIILetterOrDigit
// Il2CppName: IsASCIILetterOrDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, bool&)>(&System::DomainNameHelper::IsASCIILetterOrDigit)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsASCIILetterOrDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character, notCanonical});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsValidDomainLabelCharacter
// Il2CppName: IsValidDomainLabelCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, bool&)>(&System::DomainNameHelper::IsValidDomainLabelCharacter)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsValidDomainLabelCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character, notCanonical});
  }
};
