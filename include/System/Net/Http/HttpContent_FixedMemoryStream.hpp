// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpContent/FixedMemoryStream
  class HttpContent::FixedMemoryStream : public System::IO::MemoryStream {
    public:
    // private readonly System.Int64 maxSize
    // Size: 0x8
    // Offset: 0x50
    int64_t maxSize;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: FixedMemoryStream
    FixedMemoryStream(int64_t maxSize_ = {}) noexcept : maxSize{maxSize_} {}
    // public System.Void .ctor(System.Int64 maxSize)
    // Offset: 0x15A0750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpContent::FixedMemoryStream* New_ctor(int64_t maxSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpContent::FixedMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpContent::FixedMemoryStream*, creationType>(maxSize)));
    }
    // private System.Void CheckOverflow(System.Int32 count)
    // Offset: 0x15A0FF4
    void CheckOverflow(int count);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x15A1144
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x15A1178
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
  }; // System.Net.Http.HttpContent/FixedMemoryStream
  #pragma pack(pop)
  static check_size<sizeof(HttpContent::FixedMemoryStream), 80 + sizeof(int64_t)> __System_Net_Http_HttpContent_FixedMemoryStreamSizeCheck;
  static_assert(sizeof(HttpContent::FixedMemoryStream) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpContent::FixedMemoryStream*, "System.Net.Http", "HttpContent/FixedMemoryStream");
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::CheckOverflow
// Il2CppName: CheckOverflow
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::WriteByte
// Il2CppName: WriteByte
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::Http::HttpContent::FixedMemoryStream::Write
// Il2CppName: Write
// Cannot perform method pointer template specialization from operators!
