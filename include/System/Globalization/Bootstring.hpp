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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.Bootstring
  // [TokenAttribute] Offset: FFFFFFFF
  class Bootstring : public ::Il2CppObject {
    public:
    // private readonly System.Char delimiter
    // Size: 0x2
    // Offset: 0x10
    ::Il2CppChar delimiter;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: delimiter and: base_num
    char __padding0[0x2] = {};
    // private readonly System.Int32 base_num
    // Size: 0x4
    // Offset: 0x14
    int base_num;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 tmin
    // Size: 0x4
    // Offset: 0x18
    int tmin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 tmax
    // Size: 0x4
    // Offset: 0x1C
    int tmax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 skew
    // Size: 0x4
    // Offset: 0x20
    int skew;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 damp
    // Size: 0x4
    // Offset: 0x24
    int damp;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 initial_bias
    // Size: 0x4
    // Offset: 0x28
    int initial_bias;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 initial_n
    // Size: 0x4
    // Offset: 0x2C
    int initial_n;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Bootstring
    Bootstring(::Il2CppChar delimiter_ = {}, int base_num_ = {}, int tmin_ = {}, int tmax_ = {}, int skew_ = {}, int damp_ = {}, int initial_bias_ = {}, int initial_n_ = {}) noexcept : delimiter{delimiter_}, base_num{base_num_}, tmin{tmin_}, tmax{tmax_}, skew{skew_}, damp{damp_}, initial_bias{initial_bias_}, initial_n{initial_n_} {}
    // public System.Void .ctor(System.Char delimiter, System.Int32 baseNum, System.Int32 tmin, System.Int32 tmax, System.Int32 skew, System.Int32 damp, System.Int32 initialBias, System.Int32 initialN)
    // Offset: 0x17C98D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bootstring* New_ctor(::Il2CppChar delimiter, int baseNum, int tmin, int tmax, int skew, int damp, int initialBias, int initialN) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::Bootstring::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bootstring*, creationType>(delimiter, baseNum, tmin, tmax, skew, damp, initialBias, initialN)));
    }
    // public System.String Encode(System.String s, System.Int32 offset)
    // Offset: 0x17C994C
    ::Il2CppString* Encode(::Il2CppString* s, int offset);
    // private System.Char EncodeDigit(System.Int32 d)
    // Offset: 0x17C9CAC
    ::Il2CppChar EncodeDigit(int d);
    // private System.Int32 DecodeDigit(System.Char c)
    // Offset: 0x17C9D3C
    int DecodeDigit(::Il2CppChar c);
    // private System.Int32 Adapt(System.Int32 delta, System.Int32 numPoints, System.Boolean firstTime)
    // Offset: 0x17C9CC4
    int Adapt(int delta, int numPoints, bool firstTime);
    // public System.String Decode(System.String s, System.Int32 offset)
    // Offset: 0x17C9D7C
    ::Il2CppString* Decode(::Il2CppString* s, int offset);
  }; // System.Globalization.Bootstring
  #pragma pack(pop)
  static check_size<sizeof(Bootstring), 44 + sizeof(int)> __System_Globalization_BootstringSizeCheck;
  static_assert(sizeof(Bootstring) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::Bootstring*, "System.Globalization", "Bootstring");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::Bootstring::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::Bootstring::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::Bootstring::*)(::Il2CppString*, int)>(&System::Globalization::Bootstring::Encode)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Bootstring*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::Bootstring::EncodeDigit
// Il2CppName: EncodeDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Globalization::Bootstring::*)(int)>(&System::Globalization::Bootstring::EncodeDigit)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Bootstring*), "EncodeDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Globalization::Bootstring::DecodeDigit
// Il2CppName: DecodeDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Bootstring::*)(::Il2CppChar)>(&System::Globalization::Bootstring::DecodeDigit)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Bootstring*), "DecodeDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::Bootstring::Adapt
// Il2CppName: Adapt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::Bootstring::*)(int, int, bool)>(&System::Globalization::Bootstring::Adapt)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* numPoints = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* firstTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Bootstring*), "Adapt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta, numPoints, firstTime});
  }
};
// Writing MetadataGetter for method: System::Globalization::Bootstring::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::Bootstring::*)(::Il2CppString*, int)>(&System::Globalization::Bootstring::Decode)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::Bootstring*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
