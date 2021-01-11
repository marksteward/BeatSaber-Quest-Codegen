// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BGNetDebug
#include "GlobalNamespace/BGNetDebug.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: BGNetDebug/ILogger
  // [] Offset: FFFFFFFF
  class BGNetDebug::ILogger {
    public:
    // Creating value type constructor for type: ILogger
    ILogger() noexcept {}
    // public System.Void LogInfo(System.String message)
    // Offset: 0xFFFFFFFF
    void LogInfo(::Il2CppString* message);
    // public System.Void LogError(System.String message)
    // Offset: 0xFFFFFFFF
    void LogError(::Il2CppString* message);
    // public System.Void LogWarning(System.String message)
    // Offset: 0xFFFFFFFF
    void LogWarning(::Il2CppString* message);
  }; // BGNetDebug/ILogger
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BGNetDebug::ILogger*, "", "BGNetDebug/ILogger");
