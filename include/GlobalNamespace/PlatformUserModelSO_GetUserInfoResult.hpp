// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformUserModelSO/GetUserInfoResult
  struct PlatformUserModelSO::GetUserInfoResult : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: GetUserInfoResult
    constexpr GetUserInfoResult(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public PlatformUserModelSO/GetUserInfoResult OK
    static constexpr const int OK = 0;
    // Get static field: static public PlatformUserModelSO/GetUserInfoResult OK
    static GlobalNamespace::PlatformUserModelSO::GetUserInfoResult _get_OK();
    // Set static field: static public PlatformUserModelSO/GetUserInfoResult OK
    static void _set_OK(GlobalNamespace::PlatformUserModelSO::GetUserInfoResult value);
    // static field const value: static public PlatformUserModelSO/GetUserInfoResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformUserModelSO/GetUserInfoResult Failed
    static GlobalNamespace::PlatformUserModelSO::GetUserInfoResult _get_Failed();
    // Set static field: static public PlatformUserModelSO/GetUserInfoResult Failed
    static void _set_Failed(GlobalNamespace::PlatformUserModelSO::GetUserInfoResult value);
  }; // PlatformUserModelSO/GetUserInfoResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelSO::GetUserInfoResult, "", "PlatformUserModelSO/GetUserInfoResult");
#pragma pack(pop)
