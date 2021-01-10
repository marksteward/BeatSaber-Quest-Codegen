// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.INetImmutableSerializable`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class INetImmutableSerializable_1 {
    public:
    // Creating value type constructor for type: INetImmutableSerializable_1
    INetImmutableSerializable_1() noexcept {}
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::INetImmutableSerializable_1::Serialize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(writer)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
    }
    // public T CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFF
    T LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::INetImmutableSerializable_1::CreateFromSerializedData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateFromSerializedData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(reader)));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, reader);
    }
  }; // LiteNetLib.Utils.INetImmutableSerializable`1
  // Could not write size check! Type: LiteNetLib.Utils.INetImmutableSerializable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::INetImmutableSerializable_1, "LiteNetLib.Utils", "INetImmutableSerializable`1");
