// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: LiteNetLib.NetLogLevel
#include "LiteNetLib/NetLogLevel.hpp"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.INetLogger
  class INetLogger {
    public:
    // Creating value type constructor for type: INetLogger
    INetLogger() noexcept {}
    // public System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    template<class ...TParams>
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, TParams&&... args) {
      WriteNet(level, str, {args...});
    }
  }; // LiteNetLib.INetLogger
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INetLogger*, "LiteNetLib", "INetLogger");
// Writing MetadataGetter for method: LiteNetLib::INetLogger::WriteNet
// Il2CppName: WriteNet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetLogger::*)(LiteNetLib::NetLogLevel, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&LiteNetLib::INetLogger::WriteNet)> {
  const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetLogger*), "WriteNet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
