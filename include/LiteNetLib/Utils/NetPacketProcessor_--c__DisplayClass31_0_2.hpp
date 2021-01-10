// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass31_0`2
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D9B358
  template<typename T, typename TUserData>
  class NetPacketProcessor::$$c__DisplayClass31_0_2 : public ::Il2CppObject {
    public:
    // public T reference
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T reference;
    // public System.Action`2<T,TUserData> onReceive
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<T, TUserData>* onReceive;
    // Field size check
    static_assert(sizeof(System::Action_2<T, TUserData>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass31_0_2
    $$c__DisplayClass31_0_2(T reference_ = {}, System::Action_2<T, TUserData>* onReceive_ = {}) noexcept : reference{reference_}, onReceive{onReceive_} {}
    // System.Void <SubscribeNetSerializable>b__0(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0xFFFFFFFF
    void $SubscribeNetSerializable$b__0(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass31_0_2::<SubscribeNetSerializable>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<SubscribeNetSerializable>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(reader, userData))));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, userData);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor::$$c__DisplayClass31_0_2<T, TUserData>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass31_0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor::$$c__DisplayClass31_0_2<T, TUserData>*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass31_0`2
  // Could not write size check! Type: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass31_0`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass31_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass31_0`2");
