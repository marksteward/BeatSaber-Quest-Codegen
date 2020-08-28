// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.RequestHighscoreData
  struct RequestHighscoreData : public System::ValueType {
    public:
    // private System.String <Track>k__BackingField
    // Offset: 0x0
    ::Il2CppString* Track;
    // private System.String <HighscoreType>k__BackingField
    // Offset: 0x8
    ::Il2CppString* HighscoreType;
    // Creating value type constructor for type: RequestHighscoreData
    constexpr RequestHighscoreData(::Il2CppString* Track_ = {}, ::Il2CppString* HighscoreType_ = {}) : Track{Track_}, HighscoreType{HighscoreType_} {}
    // public System.String get_Track()
    // Offset: 0xA607E0
    ::Il2CppString* get_Track();
    // public System.Void set_Track(System.String value)
    // Offset: 0xA607E8
    void set_Track(::Il2CppString* value);
    // public System.Void set_HighscoreType(System.String value)
    // Offset: 0xA607F0
    void set_HighscoreType(::Il2CppString* value);
  }; // NetEase.Docker.RequestHighscoreData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::RequestHighscoreData, "NetEase.Docker", "RequestHighscoreData");
#pragma pack(pop)
