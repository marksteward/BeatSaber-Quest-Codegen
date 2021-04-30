// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: INetworkPacketSerializer`1
#include "GlobalNamespace/INetworkPacketSerializer_1.hpp"
// Including type: INetworkPacketSubSerializer`1
#include "GlobalNamespace/INetworkPacketSubSerializer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: <>c__DisplayClass4_0`1 because it is already included!
  // Skipping declaration: <>c__DisplayClass5_0`1 because it is already included!
  // Skipping declaration: <>c__6`1 because it is already included!
  // Skipping declaration: <>c__DisplayClass7_0`1 because it is already included!
  // Skipping declaration: <>c__DisplayClass9_0 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IConvertible
  class IConvertible;
  // Forward declaring type: ValueType
  class ValueType;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkPacketSerializer`2
  template<typename TType, typename TData>
  class NetworkPacketSerializer_2 : public ::Il2CppObject/*, public GlobalNamespace::INetworkPacketSerializer_1<TData>, public GlobalNamespace::INetworkPacketSubSerializer_1<TData>*/ {
    public:
    // Nested type: GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass4_0_1<TType, TData, TPacket>
    template<typename TPacket>
    class $$c__DisplayClass4_0_1;
    // Nested type: GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass5_0_1<TType, TData, TPacket>
    template<typename TPacket>
    class $$c__DisplayClass5_0_1;
    // Nested type: GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1<TType, TData, TPacket>
    template<typename TPacket>
    class $$c__6_1;
    // Nested type: GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass7_0_1<TType, TData, TPacket>
    template<typename TPacket>
    class $$c__DisplayClass7_0_1;
    // Nested type: GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass9_0<TType, TData>
    class $$c__DisplayClass9_0;
    // WARNING Size may be invalid!
    // Autogenerated type: NetworkPacketSerializer`2/<>c__DisplayClass4_0`1
    // [CompilerGeneratedAttribute] Offset: D1A824
    template<typename TPacket>
    class $$c__DisplayClass4_0_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = NetworkPacketSerializer_2<TType, TData>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass4_0_1";
      // public System.Action`1<TPacket> callback
      // Size: 0x8
      // Offset: 0x0
      System::Action_1<TPacket>* callback;
      // Field size check
      static_assert(sizeof(System::Action_1<TPacket>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass4_0_1
      $$c__DisplayClass4_0_1(System::Action_1<TPacket>* callback_ = {}) noexcept : callback{callback_} {}
      // Creating conversion operator: operator System::Action_1<TPacket>*
      constexpr operator System::Action_1<TPacket>*() const noexcept {
        return callback;
      }
      // System.Void <RegisterCallback>b__0(TPacket packet, TData data)
      // Offset: 0xFFFFFFFF
      void $RegisterCallback$b__0(TPacket packet, TData data) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass4_0_1::<RegisterCallback>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RegisterCallback>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(data)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, data);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass4_0_1<TPacket>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass4_0_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass4_0_1<TPacket>*, creationType>()));
      }
    }; // NetworkPacketSerializer`2/<>c__DisplayClass4_0`1
    // Could not write size check! Type: NetworkPacketSerializer`2/<>c__DisplayClass4_0`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: NetworkPacketSerializer`2/<>c__DisplayClass5_0`1
    // [CompilerGeneratedAttribute] Offset: D1A834
    template<typename TPacket>
    class $$c__DisplayClass5_0_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = NetworkPacketSerializer_2<TType, TData>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass5_0_1";
      // public System.Action`1<TPacket> callback
      // Size: 0x8
      // Offset: 0x0
      System::Action_1<TPacket>* callback;
      // Field size check
      static_assert(sizeof(System::Action_1<TPacket>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass5_0_1
      $$c__DisplayClass5_0_1(System::Action_1<TPacket>* callback_ = {}) noexcept : callback{callback_} {}
      // Creating conversion operator: operator System::Action_1<TPacket>*
      constexpr operator System::Action_1<TPacket>*() const noexcept {
        return callback;
      }
      // System.Void <RegisterCallback>b__0(TPacket packet, TData data)
      // Offset: 0xFFFFFFFF
      void $RegisterCallback$b__0(TPacket packet, TData data) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass5_0_1::<RegisterCallback>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RegisterCallback>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(data)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, data);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass5_0_1<TPacket>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass5_0_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass5_0_1<TPacket>*, creationType>()));
      }
    }; // NetworkPacketSerializer`2/<>c__DisplayClass5_0`1
    // Could not write size check! Type: NetworkPacketSerializer`2/<>c__DisplayClass5_0`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: NetworkPacketSerializer`2/<>c__6`1
    // [CompilerGeneratedAttribute] Offset: D1A844
    template<typename TPacket>
    class $$c__6_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = NetworkPacketSerializer_2<TType, TData>*;
      static constexpr std::string_view NESTED_NAME = "$$c__6_1";
      // Creating value type constructor for type: $$c__6_1
      $$c__6_1() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly NetworkPacketSerializer`2/<>c__6`1<TType,TData,TPacket> <>9
      static typename GlobalNamespace::NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename GlobalNamespace::NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly NetworkPacketSerializer`2/<>c__6`1<TType,TData,TPacket> <>9
      static void _set_$$9(typename GlobalNamespace::NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`1<TPacket> <>9__6_0
      static System::Func_1<TPacket>* _get_$$9__6_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1::_get_$$9__6_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_1<TPacket>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>*>::get(), "<>9__6_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`1<TPacket> <>9__6_0
      static void _set_$$9__6_0(System::Func_1<TPacket>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1::_set_$$9__6_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>*>::get(), "<>9__6_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // TPacket <RegisterCallback>b__6_0()
      // Offset: 0xFFFFFFFF
      TPacket $RegisterCallback$b__6_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1::<RegisterCallback>b__6_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RegisterCallback>b__6_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<TPacket, false>(this, ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__6_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename NetworkPacketSerializer_2<TType, TData>::$$c__6_1<TPacket>*, creationType>()));
      }
    }; // NetworkPacketSerializer`2/<>c__6`1
    // Could not write size check! Type: NetworkPacketSerializer`2/<>c__6`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: NetworkPacketSerializer`2/<>c__DisplayClass7_0`1
    // [CompilerGeneratedAttribute] Offset: D1A854
    template<typename TPacket>
    class $$c__DisplayClass7_0_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = NetworkPacketSerializer_2<TType, TData>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass7_0_1";
      // public System.Func`1<TPacket> constructor
      // Size: 0x8
      // Offset: 0x0
      System::Func_1<TPacket>* constructor;
      // Field size check
      static_assert(sizeof(System::Func_1<TPacket>*) == 0x8);
      // public System.Action`2<TPacket,TData> callback
      // Size: 0x8
      // Offset: 0x0
      System::Action_2<TPacket, TData>* callback;
      // Field size check
      static_assert(sizeof(System::Action_2<TPacket, TData>*) == 0x8);
      // public System.Func`3<LiteNetLib.Utils.NetDataReader,System.Int32,TPacket> deserialize
      // Size: 0x8
      // Offset: 0x0
      System::Func_3<LiteNetLib::Utils::NetDataReader*, int, TPacket>* deserialize;
      // Field size check
      static_assert(sizeof(System::Func_3<LiteNetLib::Utils::NetDataReader*, int, TPacket>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass7_0_1
      $$c__DisplayClass7_0_1(System::Func_1<TPacket>* constructor_ = {}, System::Action_2<TPacket, TData>* callback_ = {}, System::Func_3<LiteNetLib::Utils::NetDataReader*, int, TPacket>* deserialize_ = {}) noexcept : constructor{constructor_}, callback{callback_}, deserialize{deserialize_} {}
      // TPacket <RegisterCallback>b__0(LiteNetLib.Utils.NetDataReader reader, System.Int32 size)
      // Offset: 0xFFFFFFFF
      TPacket $RegisterCallback$b__0(LiteNetLib::Utils::NetDataReader* reader, int size) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass7_0_1::<RegisterCallback>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RegisterCallback>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(size)})));
        return ::il2cpp_utils::RunMethodThrow<TPacket, false>(this, ___internal__method, reader, size);
      }
      // System.Void <RegisterCallback>b__1(LiteNetLib.Utils.NetDataReader reader, System.Int32 size, TData data)
      // Offset: 0xFFFFFFFF
      void $RegisterCallback$b__1(LiteNetLib::Utils::NetDataReader* reader, int size, TData data) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass7_0_1::<RegisterCallback>b__1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RegisterCallback>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(size), ::il2cpp_utils::ExtractType(data)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, size, data);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass7_0_1<TPacket>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass7_0_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass7_0_1<TPacket>*, creationType>()));
      }
    }; // NetworkPacketSerializer`2/<>c__DisplayClass7_0`1
    // Could not write size check! Type: NetworkPacketSerializer`2/<>c__DisplayClass7_0`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: NetworkPacketSerializer`2/<>c__DisplayClass9_0
    // [CompilerGeneratedAttribute] Offset: D1A864
    class $$c__DisplayClass9_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = NetworkPacketSerializer_2<TType, TData>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass9_0";
      // public INetworkPacketSubSerializer`1<TData> subSubSerializer
      // Size: 0x8
      // Offset: 0x0
      GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer;
      // Field size check
      static_assert(sizeof(GlobalNamespace::INetworkPacketSubSerializer_1<TData>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass9_0
      $$c__DisplayClass9_0(GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer_ = {}) noexcept : subSubSerializer{subSubSerializer_} {}
      // Creating conversion operator: operator GlobalNamespace::INetworkPacketSubSerializer_1<TData>*
      constexpr operator GlobalNamespace::INetworkPacketSubSerializer_1<TData>*() const noexcept {
        return subSubSerializer;
      }
      // System.Void <RegisterSubSerializer>b__0(LiteNetLib.Utils.NetDataReader reader, System.Int32 size, TData data)
      // Offset: 0xFFFFFFFF
      void $RegisterSubSerializer$b__0(LiteNetLib::Utils::NetDataReader* reader, int size, TData data) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass9_0::<RegisterSubSerializer>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RegisterSubSerializer>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(size), ::il2cpp_utils::ExtractType(data)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, size, data);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass9_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::$$c__DisplayClass9_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename NetworkPacketSerializer_2<TType, TData>::$$c__DisplayClass9_0*, creationType>()));
      }
    }; // NetworkPacketSerializer`2/<>c__DisplayClass9_0
    // Could not write size check! Type: NetworkPacketSerializer`2/<>c__DisplayClass9_0 is generic, or has no fields that are valid for size checks!
    // private System.Collections.Generic.Dictionary`2<System.Byte,System.Action`3<LiteNetLib.Utils.NetDataReader,System.Int32,TData>> _messsageHandlers
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<uint8_t, System::Action_3<LiteNetLib::Utils::NetDataReader*, int, TData>*>* messsageHandlers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint8_t, System::Action_3<LiteNetLib::Utils::NetDataReader*, int, TData>*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Type,System.Byte> _typeRegistry
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<System::Type*, uint8_t>* typeRegistry;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Type*, uint8_t>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<INetworkPacketSubSerializer`1<TData>,System.Byte> _subSerializerRegistry
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* subSerializerRegistry;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _internalWriter
    // Size: 0x8
    // Offset: 0x0
    LiteNetLib::Utils::NetDataWriter* internalWriter;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // Creating value type constructor for type: NetworkPacketSerializer_2
    NetworkPacketSerializer_2(System::Collections::Generic::Dictionary_2<uint8_t, System::Action_3<LiteNetLib::Utils::NetDataReader*, int, TData>*>* messsageHandlers_ = {}, System::Collections::Generic::Dictionary_2<System::Type*, uint8_t>* typeRegistry_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, uint8_t>* subSerializerRegistry_ = {}, LiteNetLib::Utils::NetDataWriter* internalWriter_ = {}) noexcept : messsageHandlers{messsageHandlers_}, typeRegistry{typeRegistry_}, subSerializerRegistry{subSerializerRegistry_}, internalWriter{internalWriter_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPacketSerializer_1<TData>
    operator GlobalNamespace::INetworkPacketSerializer_1<TData>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPacketSerializer_1<TData>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPacketSubSerializer_1<TData>
    operator GlobalNamespace::INetworkPacketSubSerializer_1<TData>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(this);
    }
    // public System.Void RegisterCallback(TType packetType, System.Action`1<TPacket> callback)
    // Offset: 0xFFFFFFFF
    template<class TPacket>
    void RegisterCallback(TType packetType, System::Action_1<TPacket>* callback) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<TPacket>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::RegisterCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packetType), ::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, packetType, callback);
    }
    // public System.Void RegisterCallback(TType packetType, System.Action`1<TPacket> callback, System.Func`1<TPacket> constructor)
    // Offset: 0xFFFFFFFF
    template<class TPacket>
    void RegisterCallback(TType packetType, System::Action_1<TPacket>* callback, System::Func_1<TPacket>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<TPacket>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::RegisterCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packetType), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(constructor)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, packetType, callback, constructor);
    }
    // public System.Void RegisterCallback(TType packetType, System.Action`2<TPacket,TData> callback)
    // Offset: 0xFFFFFFFF
    template<class TPacket>
    void RegisterCallback(TType packetType, System::Action_2<TPacket, TData>* callback) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<TPacket>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::RegisterCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packetType), ::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, packetType, callback);
    }
    // public System.Void RegisterCallback(TType packetType, System.Action`2<TPacket,TData> callback, System.Func`1<TPacket> constructor)
    // Offset: 0xFFFFFFFF
    template<class TPacket>
    void RegisterCallback(TType packetType, System::Action_2<TPacket, TData>* callback, System::Func_1<TPacket>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<TPacket>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::RegisterCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packetType), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(constructor)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, packetType, callback, constructor);
    }
    // public System.Void UnregisterCallback(TType packetType)
    // Offset: 0xFFFFFFFF
    template<class TPacket>
    void UnregisterCallback(TType packetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::UnregisterCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UnregisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packetType)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, packetType);
    }
    // public System.Void RegisterSubSerializer(TType packetType, INetworkPacketSubSerializer`1<TData> subSubSerializer)
    // Offset: 0xFFFFFFFF
    void RegisterSubSerializer(TType packetType, GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::RegisterSubSerializer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterSubSerializer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packetType), ::il2cpp_utils::ExtractType(subSubSerializer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packetType, subSubSerializer);
    }
    // public System.Void UnregisterSubSerializer(TType packetType, INetworkPacketSubSerializer`1<TData> subSubSerializer)
    // Offset: 0xFFFFFFFF
    void UnregisterSubSerializer(TType packetType, GlobalNamespace::INetworkPacketSubSerializer_1<TData>* subSubSerializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::UnregisterSubSerializer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UnregisterSubSerializer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packetType), ::il2cpp_utils::ExtractType(subSubSerializer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packetType, subSubSerializer);
    }
    // public System.Void SerializePacket(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.Utils.INetSerializable packet)
    // Offset: 0xFFFFFFFF
    void SerializePacket(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::Utils::INetSerializable* packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::SerializePacket");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SerializePacket", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(packet)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer, packet);
    }
    // private System.Void SerializePacketInternal(LiteNetLib.Utils.NetDataWriter externalWriter, LiteNetLib.Utils.INetSerializable packet, System.Boolean prependLength)
    // Offset: 0xFFFFFFFF
    void SerializePacketInternal(LiteNetLib::Utils::NetDataWriter* externalWriter, LiteNetLib::Utils::INetSerializable* packet, bool prependLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::SerializePacketInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SerializePacketInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(externalWriter), ::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(prependLength)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, externalWriter, packet, prependLength);
    }
    // public System.Void ProcessAllPackets(LiteNetLib.Utils.NetDataReader reader, TData data)
    // Offset: 0xFFFFFFFF
    void ProcessAllPackets(LiteNetLib::Utils::NetDataReader* reader, TData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::ProcessAllPackets");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessAllPackets", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(data)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, data);
    }
    // public System.Boolean ProcessPacket(LiteNetLib.Utils.NetDataReader reader, TData data)
    // Offset: 0xFFFFFFFF
    bool ProcessPacket(LiteNetLib::Utils::NetDataReader* reader, TData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::ProcessPacket");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessPacket", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(data)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, reader, data);
    }
    // private System.Void ProcessPacketInternal(LiteNetLib.Utils.NetDataReader reader, System.Int32 length, TData data)
    // Offset: 0xFFFFFFFF
    void ProcessPacketInternal(LiteNetLib::Utils::NetDataReader* reader, int length, TData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::ProcessPacketInternal");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessPacketInternal", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(data)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, length, data);
    }
    // private System.Boolean TryGetPacketType(System.Type type, out System.Byte packetType, out INetworkPacketSubSerializer`1<TData> subSubSerializer)
    // Offset: 0xFFFFFFFF
    bool TryGetPacketType(System::Type* type, uint8_t& packetType, GlobalNamespace::INetworkPacketSubSerializer_1<TData>*& subSubSerializer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::TryGetPacketType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetPacketType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractIndependentType<uint8_t&>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::INetworkPacketSubSerializer_1<TData>*&>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, type, packetType, subSubSerializer);
    }
    // public System.Boolean HandlesType(System.Type type)
    // Offset: 0xFFFFFFFF
    bool HandlesType(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::HandlesType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandlesType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, type);
    }
    // private System.Void INetworkPacketSubSerializer<TData>.Serialize(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.Utils.INetSerializable packet)
    // Offset: 0xFFFFFFFF
    void INetworkPacketSubSerializer$TData$_Serialize(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::Utils::INetSerializable* packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::INetworkPacketSubSerializer<TData>.Serialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "INetworkPacketSubSerializer<TData>.Serialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(packet)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer, packet);
    }
    // private System.Void INetworkPacketSubSerializer<TData>.Deserialize(LiteNetLib.Utils.NetDataReader reader, System.Int32 length, TData data)
    // Offset: 0xFFFFFFFF
    void INetworkPacketSubSerializer$TData$_Deserialize(LiteNetLib::Utils::NetDataReader* reader, int length, TData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::INetworkPacketSubSerializer<TData>.Deserialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "INetworkPacketSubSerializer<TData>.Deserialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(data)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, length, data);
    }
    // private System.Void Log(System.String message)
    // Offset: 0xFFFFFFFF
    void Log(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::Log");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Log", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPacketSerializer_2<TType, TData>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPacketSerializer_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPacketSerializer_2<TType, TData>*, creationType>()));
    }
  }; // NetworkPacketSerializer`2
  // Could not write size check! Type: NetworkPacketSerializer`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::NetworkPacketSerializer_2, "", "NetworkPacketSerializer`2");
