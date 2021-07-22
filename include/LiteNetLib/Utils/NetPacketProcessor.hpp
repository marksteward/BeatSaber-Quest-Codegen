// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetSerializer
  class NetSerializer;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: NetManager
  class NetManager;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class NetPacketProcessor : public ::Il2CppObject {
    public:
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::HashCache_1<T>
    template<typename T>
    class HashCache_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate
    class SubscribeDelegate;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass25_0_1<T>
    template<typename T>
    class $$c__DisplayClass25_0_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass26_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass26_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass27_0_1<T>
    template<typename T>
    class $$c__DisplayClass27_0_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass28_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass28_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass29_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass29_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass30_0_1<T>
    template<typename T>
    class $$c__DisplayClass30_0_1;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass31_0_2<T, TUserData>
    template<typename T, typename TUserData>
    class $$c__DisplayClass31_0_2;
    // Nested type: LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass32_0_1<T>
    template<typename T>
    class $$c__DisplayClass32_0_1;
    // private readonly LiteNetLib.Utils.NetSerializer _netSerializer
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::Utils::NetSerializer* netSerializer;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetSerializer*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.UInt64,LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.SubscribeDelegate> _callbacks
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<uint64_t, LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*>* callbacks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint64_t, LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*>*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _netDataWriter
    // Size: 0x8
    // Offset: 0x20
    LiteNetLib::Utils::NetDataWriter* netDataWriter;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // Creating value type constructor for type: NetPacketProcessor
    NetPacketProcessor(LiteNetLib::Utils::NetSerializer* netSerializer_ = {}, System::Collections::Generic::Dictionary_2<uint64_t, LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*>* callbacks_ = {}, LiteNetLib::Utils::NetDataWriter* netDataWriter_ = {}) noexcept : netSerializer{netSerializer_}, callbacks{callbacks_}, netDataWriter{netDataWriter_} {}
    // public System.Void .ctor(System.Int32 maxStringLength)
    // Offset: 0x23B7DFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor* New_ctor(int maxStringLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor*, creationType>(maxStringLength)));
    }
    // protected System.UInt64 GetHash()
    // Offset: 0xFFFFFFFF
    template<class T>
    uint64_t GetHash() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::GetHash");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHash", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<uint64_t, false>(this, ___generic__method);
    }
    // protected LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.SubscribeDelegate GetCallbackFromData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23B7F40
    LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate* GetCallbackFromData(LiteNetLib::Utils::NetDataReader* reader);
    // protected System.Void WriteHash(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    template<class T>
    void WriteHash(LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::WriteHash");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteHash", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, writer);
    }
    // public System.Void RegisterNestedType()
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterNestedType() {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>> && is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterNestedType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method);
    }
    // public System.Void RegisterNestedType(System.Action`2<LiteNetLib.Utils.NetDataWriter,T> writeDelegate, System.Func`2<LiteNetLib.Utils.NetDataReader,T> readDelegate)
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterNestedType(System::Action_2<LiteNetLib::Utils::NetDataWriter*, T>* writeDelegate, System::Func_2<LiteNetLib::Utils::NetDataReader*, T>* readDelegate) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterNestedType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writeDelegate), ::il2cpp_utils::ExtractType(readDelegate)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, writeDelegate, readDelegate);
    }
    // public System.Void RegisterNestedType(System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterNestedType(System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterNestedType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(constructor)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, constructor);
    }
    // public System.Void ReadAllPackets(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23B8080
    void ReadAllPackets(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void ReadAllPackets(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0x23B80D8
    void ReadAllPackets(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData);
    // public System.Void ReadPacket(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23B80D0
    void ReadPacket(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Send(LiteNetLib.NetPeer peer, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send(LiteNetLib::NetPeer* peer, T packet, LiteNetLib::DeliveryMethod options) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::Send");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(peer), ::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(options)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, peer, packet, options);
    }
    // public System.Void SendNetSerializable(LiteNetLib.NetPeer peer, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SendNetSerializable(LiteNetLib::NetPeer* peer, T packet, LiteNetLib::DeliveryMethod options) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SendNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(peer), ::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(options)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, peer, packet, options);
    }
    // public System.Void Send(LiteNetLib.NetManager manager, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send(LiteNetLib::NetManager* manager, T packet, LiteNetLib::DeliveryMethod options) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::Send");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(manager), ::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(options)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, manager, packet, options);
    }
    // public System.Void SendNetSerializable(LiteNetLib.NetManager manager, T packet, LiteNetLib.DeliveryMethod options)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SendNetSerializable(LiteNetLib::NetManager* manager, T packet, LiteNetLib::DeliveryMethod options) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SendNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(manager), ::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(options)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, manager, packet, options);
    }
    // public System.Void Write(LiteNetLib.Utils.NetDataWriter writer, T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Write(LiteNetLib::Utils::NetDataWriter* writer, T packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::Write");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(packet)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, writer, packet);
    }
    // public System.Void WriteNetSerializable(LiteNetLib.Utils.NetDataWriter writer, T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    void WriteNetSerializable(LiteNetLib::Utils::NetDataWriter* writer, T packet) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(packet)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, writer, packet);
    }
    // public System.Byte[] Write(T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<uint8_t>* Write(T packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::Write");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___generic__method, packet);
    }
    // public System.Byte[] WriteNetSerializable(T packet)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<uint8_t>* WriteNetSerializable(T packet) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___generic__method, packet);
    }
    // public System.Void ReadPacket(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0x23B8134
    void ReadPacket(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData);
    // public System.Void Subscribe(System.Action`1<T> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Subscribe(System::Action_1<T>* onReceive, System::Func_1<T>* packetConstructor) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::Subscribe");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Subscribe", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive), ::il2cpp_utils::ExtractType(packetConstructor)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive, packetConstructor);
    }
    // public System.Void Subscribe(System.Action`2<T,TUserData> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void Subscribe(System::Action_2<T, TUserData>* onReceive, System::Func_1<T>* packetConstructor) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::Subscribe");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Subscribe", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive), ::il2cpp_utils::ExtractType(packetConstructor)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive, packetConstructor);
    }
    // public System.Void SubscribeReusable(System.Action`1<T> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SubscribeReusable(System::Action_1<T>* onReceive) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SubscribeReusable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive);
    }
    // public System.Void SubscribeReusable(System.Action`2<T,TUserData> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void SubscribeReusable(System::Action_2<T, TUserData>* onReceive) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SubscribeReusable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive);
    }
    // public System.Void SubscribeNetSerializable(System.Action`2<T,TUserData> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void SubscribeNetSerializable(System::Action_2<T, TUserData>* onReceive, System::Func_1<T>* packetConstructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SubscribeNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive), ::il2cpp_utils::ExtractType(packetConstructor)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive, packetConstructor);
    }
    // public System.Void SubscribeNetSerializable(System.Action`1<T> onReceive, System.Func`1<T> packetConstructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SubscribeNetSerializable(System::Action_1<T>* onReceive, System::Func_1<T>* packetConstructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SubscribeNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive), ::il2cpp_utils::ExtractType(packetConstructor)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive, packetConstructor);
    }
    // public System.Void SubscribeNetSerializable(System.Action`2<T,TUserData> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T, class TUserData>
    void SubscribeNetSerializable(System::Action_2<T, TUserData>* onReceive) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SubscribeNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive);
    }
    // public System.Void SubscribeNetSerializable(System.Action`1<T> onReceive)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SubscribeNetSerializable(System::Action_1<T>* onReceive) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SubscribeNetSerializable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(onReceive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, onReceive);
    }
    // public System.Boolean RemoveSubscription()
    // Offset: 0xFFFFFFFF
    template<class T>
    bool RemoveSubscription() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::RemoveSubscription");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveSubscription", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method);
    }
    // public System.Void .ctor()
    // Offset: 0x23B7D40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetPacketProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetPacketProcessor
  #pragma pack(pop)
  static check_size<sizeof(NetPacketProcessor), 32 + sizeof(LiteNetLib::Utils::NetDataWriter*)> __LiteNetLib_Utils_NetPacketProcessorSizeCheck;
  static_assert(sizeof(NetPacketProcessor) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetPacketProcessor*, "LiteNetLib.Utils", "NetPacketProcessor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::GetHash
// Il2CppName: GetHash
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData
// Il2CppName: GetCallbackFromData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate* (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader*)>(&LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor*), "GetCallbackFromData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::WriteHash
// Il2CppName: WriteHash
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType
// Il2CppName: RegisterNestedType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType
// Il2CppName: RegisterNestedType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType
// Il2CppName: RegisterNestedType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets
// Il2CppName: ReadAllPackets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader*)>(&LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor*), "ReadAllPackets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets
// Il2CppName: ReadAllPackets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader*, ::Il2CppObject*)>(&LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor*), "ReadAllPackets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, userData});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::ReadPacket
// Il2CppName: ReadPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader*)>(&LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor*), "ReadPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::Send
// Il2CppName: Send
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable
// Il2CppName: SendNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::Send
// Il2CppName: Send
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable
// Il2CppName: SendNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::Write
// Il2CppName: Write
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable
// Il2CppName: WriteNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::Write
// Il2CppName: Write
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable
// Il2CppName: WriteNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::ReadPacket
// Il2CppName: ReadPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader*, ::Il2CppObject*)>(&LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor*), "ReadPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, userData});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::Subscribe
// Il2CppName: Subscribe
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::Subscribe
// Il2CppName: Subscribe
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable
// Il2CppName: SubscribeReusable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable
// Il2CppName: SubscribeReusable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable
// Il2CppName: SubscribeNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable
// Il2CppName: SubscribeNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable
// Il2CppName: SubscribeNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable
// Il2CppName: SubscribeNetSerializable
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::RemoveSubscription
// Il2CppName: RemoveSubscription
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
