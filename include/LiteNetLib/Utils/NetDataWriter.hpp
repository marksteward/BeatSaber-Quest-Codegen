// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NetDataWriter
  class NetDataWriter : public ::Il2CppObject {
    public:
    // protected System.Byte[] _data
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Int32 _position
    // Size: 0x4
    // Offset: 0x18
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Boolean _autoResize
    // Size: 0x1
    // Offset: 0x1C
    bool autoResize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NetDataWriter
    NetDataWriter(::Array<uint8_t>* data_ = {}, int position_ = {}, bool autoResize_ = {}) noexcept : data{data_}, position{position_}, autoResize{autoResize_} {}
    // static field const value: static private System.Int32 InitialSize
    static constexpr const int InitialSize = 64;
    // Get static field: static private System.Int32 InitialSize
    static int _get_InitialSize();
    // Set static field: static private System.Int32 InitialSize
    static void _set_InitialSize(int value);
    // public System.Int32 get_Capacity()
    // Offset: 0x1A3B130
    int get_Capacity();
    // public System.Void .ctor(System.Boolean autoResize)
    // Offset: 0x1A3B1C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor(bool autoResize) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>(autoResize)));
    }
    // public System.Void .ctor(System.Boolean autoResize, System.Int32 initialSize)
    // Offset: 0x1A3B14C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor(bool autoResize, int initialSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>(autoResize, initialSize)));
    }
    // static public LiteNetLib.Utils.NetDataWriter FromBytes(System.Byte[] bytes, System.Boolean copy)
    // Offset: 0x1A3B1D4
    static LiteNetLib::Utils::NetDataWriter* FromBytes(::Array<uint8_t>* bytes, bool copy);
    // static public LiteNetLib.Utils.NetDataWriter FromBytes(System.Byte[] bytes, System.Int32 offset, System.Int32 length)
    // Offset: 0x1A3B304
    static LiteNetLib::Utils::NetDataWriter* FromBytes(::Array<uint8_t>* bytes, int offset, int length);
    // static public LiteNetLib.Utils.NetDataWriter FromString(System.String value)
    // Offset: 0x1A32B94
    static LiteNetLib::Utils::NetDataWriter* FromString(::Il2CppString* value);
    // public System.Void ResizeIfNeed(System.Int32 newSize)
    // Offset: 0x1A3B4E4
    void ResizeIfNeed(int newSize);
    // public System.Void Reset(System.Int32 size)
    // Offset: 0x1A3B578
    void Reset(int size);
    // public System.Void Reset()
    // Offset: 0x1A3B59C
    void Reset();
    // public System.Byte[] CopyData()
    // Offset: 0x1A3B5A4
    ::Array<uint8_t>* CopyData();
    // public System.Byte[] get_Data()
    // Offset: 0x1A3B620
    ::Array<uint8_t>* get_Data();
    // public System.Int32 get_Length()
    // Offset: 0x1A3B628
    int get_Length();
    // public System.Void Put(System.Single value)
    // Offset: 0x1A3B630
    void Put(float value);
    // public System.Void Put(System.Double value)
    // Offset: 0x1A3B68C
    void Put(double value);
    // public System.Void Put(System.Int64 value)
    // Offset: 0x1A3B6E8
    void Put(int64_t value);
    // public System.Void Put(System.UInt64 value)
    // Offset: 0x1A3B73C
    void Put(uint64_t value);
    // public System.Void Put(System.Int32 value)
    // Offset: 0x1A3B790
    void Put(int value);
    // public System.Void Put(System.UInt32 value)
    // Offset: 0x1A3B7E4
    void Put(uint value);
    // public System.Void Put(System.Char value)
    // Offset: 0x1A3B838
    void Put(::Il2CppChar value);
    // public System.Void Put(System.UInt16 value)
    // Offset: 0x1A3B88C
    void Put(uint16_t value);
    // public System.Void Put(System.Int16 value)
    // Offset: 0x1A3B8E0
    void Put(int16_t value);
    // public System.Void Put(System.SByte value)
    // Offset: 0x1A3B934
    void Put(int8_t value);
    // public System.Void Put(System.Byte value)
    // Offset: 0x1A3B9A8
    void Put(uint8_t value);
    // public System.Void Put(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x1A3B398
    void Put(::Array<uint8_t>* data, int offset, int length);
    // public System.Void Put(System.Byte[] data)
    // Offset: 0x1A3B28C
    void Put(::Array<uint8_t>* data);
    // public System.Void PutSBytesWithLength(System.SByte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x1A3BA1C
    void PutSBytesWithLength(::Array<int8_t>* data, int offset, int length);
    // public System.Void PutSBytesWithLength(System.SByte[] data)
    // Offset: 0x1A3BAB4
    void PutSBytesWithLength(::Array<int8_t>* data);
    // public System.Void PutBytesWithLength(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0x1A3BB48
    void PutBytesWithLength(::Array<uint8_t>* data, int offset, int length);
    // public System.Void PutBytesWithLength(System.Byte[] data)
    // Offset: 0x1A3BBE0
    void PutBytesWithLength(::Array<uint8_t>* data);
    // public System.Void Put(System.Boolean value)
    // Offset: 0x1A3BC74
    void Put(bool value);
    // private System.Void PutArray(System.Array arr, System.Int32 sz)
    // Offset: 0x1A3BCEC
    void PutArray(System::Array* arr, int sz);
    // public System.Void PutArray(System.Single[] value)
    // Offset: 0x1A3BD9C
    void PutArray(::Array<float>* value);
    // public System.Void PutArray(System.Double[] value)
    // Offset: 0x1A3BDA4
    void PutArray(::Array<double>* value);
    // public System.Void PutArray(System.Int64[] value)
    // Offset: 0x1A3BDAC
    void PutArray(::Array<int64_t>* value);
    // public System.Void PutArray(System.UInt64[] value)
    // Offset: 0x1A3BDB4
    void PutArray(::Array<uint64_t>* value);
    // public System.Void PutArray(System.Int32[] value)
    // Offset: 0x1A3BDBC
    void PutArray(::Array<int>* value);
    // public System.Void PutArray(System.UInt32[] value)
    // Offset: 0x1A3BDC4
    void PutArray(::Array<uint>* value);
    // public System.Void PutArray(System.UInt16[] value)
    // Offset: 0x1A3BDCC
    void PutArray(::Array<uint16_t>* value);
    // public System.Void PutArray(System.Int16[] value)
    // Offset: 0x1A3BDD4
    void PutArray(::Array<int16_t>* value);
    // public System.Void PutArray(System.Boolean[] value)
    // Offset: 0x1A3BDDC
    void PutArray(::Array<bool>* value);
    // public System.Void PutArray(System.String[] value)
    // Offset: 0x1A3BDE4
    void PutArray(::Array<::Il2CppString*>* value);
    // public System.Void PutArray(System.String[] value, System.Int32 maxLength)
    // Offset: 0x1A3BE84
    void PutArray(::Array<::Il2CppString*>* value, int maxLength);
    // public System.Void Put(System.Net.IPEndPoint endPoint)
    // Offset: 0x1A3C018
    void Put(System::Net::IPEndPoint* endPoint);
    // public System.Void Put(System.String value)
    // Offset: 0x1A3B408
    void Put(::Il2CppString* value);
    // public System.Void Put(System.String value, System.Int32 maxLength)
    // Offset: 0x1A3BF2C
    void Put(::Il2CppString* value, int maxLength);
    // public System.Void Put(T obj)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Put(T obj) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::Put");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Put", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, obj);
    }
    // public System.Void .ctor()
    // Offset: 0x1A2B8D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataWriter*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetDataWriter
  #pragma pack(pop)
  static check_size<sizeof(NetDataWriter), 28 + sizeof(bool)> __LiteNetLib_Utils_NetDataWriterSizeCheck;
  static_assert(sizeof(NetDataWriter) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetDataWriter*, "LiteNetLib.Utils", "NetDataWriter");
