// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.ScoreData
  struct ScoreData/*, public System::ValueType*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE04300
    // [DebuggerBrowsableAttribute] Offset: 0xE04300
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE0433C
    // [DebuggerBrowsableAttribute] Offset: 0xE0433C
    // private System.Int32 <Score>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int Score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Score and: TimeStamp
    char __padding1[0x4] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xE04378
    // [CompilerGeneratedAttribute] Offset: 0xE04378
    // private System.Int64 <TimeStamp>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    int64_t TimeStamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: ScoreData
    constexpr ScoreData(::Il2CppString* Name_ = {}, int Score_ = {}, int64_t TimeStamp_ = {}) noexcept : Name{Name_}, Score{Score_}, TimeStamp{TimeStamp_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.String get_Name()
    // Offset: 0xF25208
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0xF25210
    void set_Name(::Il2CppString* value);
    // public System.Int32 get_Score()
    // Offset: 0xF25218
    int get_Score();
    // public System.Void set_Score(System.Int32 value)
    // Offset: 0xF25220
    void set_Score(int value);
    // public System.Void set_TimeStamp(System.Int64 value)
    // Offset: 0xF25228
    void set_TimeStamp(int64_t value);
  }; // NetEase.Docker.ScoreData
  #pragma pack(pop)
  static check_size<sizeof(ScoreData), 16 + sizeof(int64_t)> __NetEase_Docker_ScoreDataSizeCheck;
  static_assert(sizeof(ScoreData) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::ScoreData, "NetEase.Docker", "ScoreData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NetEase::Docker::ScoreData::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NetEase::Docker::ScoreData::*)()>(&NetEase::Docker::ScoreData::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ScoreData), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ScoreData::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::ScoreData::*)(::Il2CppString*)>(&NetEase::Docker::ScoreData::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ScoreData), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ScoreData::get_Score
// Il2CppName: get_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NetEase::Docker::ScoreData::*)()>(&NetEase::Docker::ScoreData::get_Score)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ScoreData), "get_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ScoreData::set_Score
// Il2CppName: set_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::ScoreData::*)(int)>(&NetEase::Docker::ScoreData::set_Score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ScoreData), "set_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::ScoreData::set_TimeStamp
// Il2CppName: set_TimeStamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::ScoreData::*)(int64_t)>(&NetEase::Docker::ScoreData::set_TimeStamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::ScoreData), "set_TimeStamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
