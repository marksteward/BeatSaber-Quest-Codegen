// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.ChunkedInputStream
#include "System/Net/ChunkedInputStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpStreamAsyncResult
  class HttpStreamAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x30
  // Autogenerated type: System.Net.ChunkedInputStream/ReadBufferState
  // [] Offset: FFFFFFFF
  class ChunkedInputStream::ReadBufferState : public ::Il2CppObject {
    public:
    // public System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Int32 Offset
    // Size: 0x4
    // Offset: 0x18
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Count
    // Size: 0x4
    // Offset: 0x1C
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InitialCount
    // Size: 0x4
    // Offset: 0x20
    int InitialCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: InitialCount and: Ares
    char __padding3[0x4] = {};
    // public System.Net.HttpStreamAsyncResult Ares
    // Size: 0x8
    // Offset: 0x28
    System::Net::HttpStreamAsyncResult* Ares;
    // Field size check
    static_assert(sizeof(System::Net::HttpStreamAsyncResult*) == 0x8);
    // Creating value type constructor for type: ReadBufferState
    ReadBufferState(::Array<uint8_t>* Buffer_ = {}, int Offset_ = {}, int Count_ = {}, int InitialCount_ = {}, System::Net::HttpStreamAsyncResult* Ares_ = {}) noexcept : Buffer{Buffer_}, Offset{Offset_}, Count{Count_}, InitialCount{InitialCount_}, Ares{Ares_} {}
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Net.HttpStreamAsyncResult ares)
    // Offset: 0x130C140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChunkedInputStream::ReadBufferState* New_ctor(::Array<uint8_t>* buffer, int offset, int count, System::Net::HttpStreamAsyncResult* ares) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::ChunkedInputStream::ReadBufferState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChunkedInputStream::ReadBufferState*, creationType>(buffer, offset, count, ares)));
    }
  }; // System.Net.ChunkedInputStream/ReadBufferState
  static check_size<sizeof(ChunkedInputStream::ReadBufferState), 40 + sizeof(System::Net::HttpStreamAsyncResult*)> __System_Net_ChunkedInputStream_ReadBufferStateSizeCheck;
  static_assert(sizeof(ChunkedInputStream::ReadBufferState) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ChunkedInputStream::ReadBufferState*, "System.Net", "ChunkedInputStream/ReadBufferState");
#pragma pack(pop)
