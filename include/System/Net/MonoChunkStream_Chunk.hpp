// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.MonoChunkStream
#include "System/Net/MonoChunkStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.MonoChunkStream/System.Net.Chunk
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoChunkStream::Chunk : public ::Il2CppObject {
    public:
    // public System.Byte[] Bytes
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* Bytes;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Int32 Offset
    // Size: 0x4
    // Offset: 0x18
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Chunk
    Chunk(::Array<uint8_t>* Bytes_ = {}, int Offset_ = {}) noexcept : Bytes{Bytes_}, Offset{Offset_} {}
    // Get instance field: public System.Byte[] Bytes
    ::Array<uint8_t>* _get_Bytes();
    // Set instance field: public System.Byte[] Bytes
    void _set_Bytes(::Array<uint8_t>* value);
    // Get instance field: public System.Int32 Offset
    int _get_Offset();
    // Set instance field: public System.Int32 Offset
    void _set_Offset(int value);
    // public System.Void .ctor(System.Byte[] chunk)
    // Offset: 0x1643D3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoChunkStream::Chunk* New_ctor(::Array<uint8_t>* chunk) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::MonoChunkStream::Chunk::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoChunkStream::Chunk*, creationType>(chunk)));
    }
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x1643220
    int Read(::Array<uint8_t>* buffer, int offset, int size);
  }; // System.Net.MonoChunkStream/System.Net.Chunk
  #pragma pack(pop)
  static check_size<sizeof(MonoChunkStream::Chunk), 24 + sizeof(int)> __System_Net_MonoChunkStream_ChunkSizeCheck;
  static_assert(sizeof(MonoChunkStream::Chunk) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::MonoChunkStream::Chunk*, "System.Net", "MonoChunkStream/Chunk");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::MonoChunkStream::Chunk::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::MonoChunkStream::Chunk::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::MonoChunkStream::Chunk::*)(::Array<uint8_t>*, int, int)>(&System::Net::MonoChunkStream::Chunk::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream::Chunk*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
