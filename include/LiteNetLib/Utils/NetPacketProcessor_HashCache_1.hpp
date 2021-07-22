// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.HashCache`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class NetPacketProcessor::HashCache_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HashCache_1
    HashCache_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static public System.Boolean Initialized
    static bool _get_Initialized() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::HashCache_1::_get_Initialized");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetPacketProcessor::HashCache_1<T>*>::get(), "Initialized"));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Boolean Initialized
    static void _set_Initialized(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::HashCache_1::_set_Initialized");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetPacketProcessor::HashCache_1<T>*>::get(), "Initialized", value));
    }
    // Autogenerated static field getter
    // Get static field: static public System.UInt64 Id
    static uint64_t _get_Id() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::HashCache_1::_get_Id");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint64_t>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetPacketProcessor::HashCache_1<T>*>::get(), "Id"));
    }
    // Autogenerated static field setter
    // Set static field: static public System.UInt64 Id
    static void _set_Id(uint64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::HashCache_1::_set_Id");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NetPacketProcessor::HashCache_1<T>*>::get(), "Id", value));
    }
  }; // LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.HashCache`1
  // Could not write size check! Type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.HashCache`1 is generic, or has no fields that are valid for size checks!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetPacketProcessor::HashCache_1, "LiteNetLib.Utils", "NetPacketProcessor/HashCache`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
