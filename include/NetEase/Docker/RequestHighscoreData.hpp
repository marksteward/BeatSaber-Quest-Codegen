// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.RequestHighscoreData
  struct RequestHighscoreData/*, public System::ValueType*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD234BC
    // [DebuggerBrowsableAttribute] Offset: 0xD234BC
    // private System.String <Track>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Track;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xD234F8
    // [CompilerGeneratedAttribute] Offset: 0xD234F8
    // private System.String <HighscoreType>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* HighscoreType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RequestHighscoreData
    constexpr RequestHighscoreData(::Il2CppString* Track_ = {}, ::Il2CppString* HighscoreType_ = {}) noexcept : Track{Track_}, HighscoreType{HighscoreType_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.String get_Track()
    // Offset: 0xE2F464
    ::Il2CppString* get_Track();
    // public System.Void set_Track(System.String value)
    // Offset: 0xE2F46C
    void set_Track(::Il2CppString* value);
    // public System.Void set_HighscoreType(System.String value)
    // Offset: 0xE2F474
    void set_HighscoreType(::Il2CppString* value);
  }; // NetEase.Docker.RequestHighscoreData
  #pragma pack(pop)
  static check_size<sizeof(RequestHighscoreData), 8 + sizeof(::Il2CppString*)> __NetEase_Docker_RequestHighscoreDataSizeCheck;
  static_assert(sizeof(RequestHighscoreData) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::RequestHighscoreData, "NetEase.Docker", "RequestHighscoreData");
