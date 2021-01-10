// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: BGNetDebug
#include "GlobalNamespace/BGNetDebug.hpp"
// Including type: LiteNetLib.INetLogger
#include "LiteNetLib/INetLogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: BGNetDebug/NetLogger
  // [] Offset: FFFFFFFF
  class BGNetDebug::NetLogger : public ::Il2CppObject/*, public LiteNetLib::INetLogger*/ {
    public:
    // Creating value type constructor for type: NetLogger
    NetLogger() noexcept {}
    // Creating interface conversion operator: operator LiteNetLib::INetLogger
    operator LiteNetLib::INetLogger() noexcept {
      return *reinterpret_cast<LiteNetLib::INetLogger*>(this);
    }
    // public System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0x1B42FB0
    // Implemented from: LiteNetLib.INetLogger
    // Base method: System.Void INetLogger::WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    template<class ...TParams>
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, TParams&&... args) {
      WriteNet(level, str, {args...});
    }
    // public System.Void .ctor()
    // Offset: 0x1B42B98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BGNetDebug::NetLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BGNetDebug::NetLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BGNetDebug::NetLogger*, creationType>()));
    }
  }; // BGNetDebug/NetLogger
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BGNetDebug::NetLogger*, "", "BGNetDebug/NetLogger");
#pragma pack(pop)
