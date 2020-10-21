// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.MonoChunkStream
#include "System/Net/MonoChunkStream.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.MonoChunkStream/Chunk
  class MonoChunkStream::Chunk : public ::Il2CppObject {
    public:
    // public System.Byte[] Bytes
    // Offset: 0x10
    ::Array<uint8_t>* Bytes;
    // public System.Int32 Offset
    // Offset: 0x18
    int Offset;
    // public System.Void .ctor(System.Byte[] chunk)
    // Offset: 0x124AFE4
    static MonoChunkStream::Chunk* New_ctor(::Array<uint8_t>* chunk);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x124A4BC
    int Read(::Array<uint8_t>* buffer, int offset, int size);
  }; // System.Net.MonoChunkStream/Chunk
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::MonoChunkStream::Chunk*, "System.Net", "MonoChunkStream/Chunk");
#pragma pack(pop)