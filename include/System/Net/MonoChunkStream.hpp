// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Skipping declaration: State because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.MonoChunkStream
  class MonoChunkStream : public ::Il2CppObject {
    public:
    // Nested type: System::Net::MonoChunkStream::State
    struct State;
    // Nested type: System::Net::MonoChunkStream::Chunk
    class Chunk;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.MonoChunkStream/State
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.MonoChunkStream/State None
      static constexpr const int None = 0;
      // Get static field: static public System.Net.MonoChunkStream/State None
      static System::Net::MonoChunkStream::State _get_None();
      // Set static field: static public System.Net.MonoChunkStream/State None
      static void _set_None(System::Net::MonoChunkStream::State value);
      // static field const value: static public System.Net.MonoChunkStream/State PartialSize
      static constexpr const int PartialSize = 1;
      // Get static field: static public System.Net.MonoChunkStream/State PartialSize
      static System::Net::MonoChunkStream::State _get_PartialSize();
      // Set static field: static public System.Net.MonoChunkStream/State PartialSize
      static void _set_PartialSize(System::Net::MonoChunkStream::State value);
      // static field const value: static public System.Net.MonoChunkStream/State Body
      static constexpr const int Body = 2;
      // Get static field: static public System.Net.MonoChunkStream/State Body
      static System::Net::MonoChunkStream::State _get_Body();
      // Set static field: static public System.Net.MonoChunkStream/State Body
      static void _set_Body(System::Net::MonoChunkStream::State value);
      // static field const value: static public System.Net.MonoChunkStream/State BodyFinished
      static constexpr const int BodyFinished = 3;
      // Get static field: static public System.Net.MonoChunkStream/State BodyFinished
      static System::Net::MonoChunkStream::State _get_BodyFinished();
      // Set static field: static public System.Net.MonoChunkStream/State BodyFinished
      static void _set_BodyFinished(System::Net::MonoChunkStream::State value);
      // static field const value: static public System.Net.MonoChunkStream/State Trailer
      static constexpr const int Trailer = 4;
      // Get static field: static public System.Net.MonoChunkStream/State Trailer
      static System::Net::MonoChunkStream::State _get_Trailer();
      // Set static field: static public System.Net.MonoChunkStream/State Trailer
      static void _set_Trailer(System::Net::MonoChunkStream::State value);
    }; // System.Net.MonoChunkStream/State
    #pragma pack(pop)
    static check_size<sizeof(MonoChunkStream::State), 0 + sizeof(int)> __System_Net_MonoChunkStream_StateSizeCheck;
    static_assert(sizeof(MonoChunkStream::State) == 0x4);
    // System.Net.WebHeaderCollection headers
    // Size: 0x8
    // Offset: 0x10
    System::Net::WebHeaderCollection* headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // private System.Int32 chunkSize
    // Size: 0x4
    // Offset: 0x18
    int chunkSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chunkRead
    // Size: 0x4
    // Offset: 0x1C
    int chunkRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 totalWritten
    // Size: 0x4
    // Offset: 0x20
    int totalWritten;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.MonoChunkStream/State state
    // Size: 0x4
    // Offset: 0x24
    System::Net::MonoChunkStream::State state;
    // Field size check
    static_assert(sizeof(System::Net::MonoChunkStream::State) == 0x4);
    // private System.Text.StringBuilder saved
    // Size: 0x8
    // Offset: 0x28
    System::Text::StringBuilder* saved;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Boolean sawCR
    // Size: 0x1
    // Offset: 0x30
    bool sawCR;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean gotit
    // Size: 0x1
    // Offset: 0x31
    bool gotit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: gotit and: trailerState
    char __padding7[0x2] = {};
    // private System.Int32 trailerState
    // Size: 0x4
    // Offset: 0x34
    int trailerState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.ArrayList chunks
    // Size: 0x8
    // Offset: 0x38
    System::Collections::ArrayList* chunks;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: MonoChunkStream
    MonoChunkStream(System::Net::WebHeaderCollection* headers_ = {}, int chunkSize_ = {}, int chunkRead_ = {}, int totalWritten_ = {}, System::Net::MonoChunkStream::State state_ = {}, System::Text::StringBuilder* saved_ = {}, bool sawCR_ = {}, bool gotit_ = {}, int trailerState_ = {}, System::Collections::ArrayList* chunks_ = {}) noexcept : headers{headers_}, chunkSize{chunkSize_}, chunkRead{chunkRead_}, totalWritten{totalWritten_}, state{state_}, saved{saved_}, sawCR{sawCR_}, gotit{gotit_}, trailerState{trailerState_}, chunks{chunks_} {}
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Net.WebHeaderCollection headers)
    // Offset: 0x165B930
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoChunkStream* New_ctor(::Array<uint8_t>* buffer, int offset, int size, System::Net::WebHeaderCollection* headers) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::MonoChunkStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoChunkStream*, creationType>(buffer, offset, size, headers)));
    }
    // public System.Void .ctor(System.Net.WebHeaderCollection headers)
    // Offset: 0x165B990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoChunkStream* New_ctor(System::Net::WebHeaderCollection* headers) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::MonoChunkStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoChunkStream*, creationType>(headers)));
    }
    // public System.Void ResetBuffer()
    // Offset: 0x165BA64
    void ResetBuffer();
    // public System.Void WriteAndReadBack(System.Byte[] buffer, System.Int32 offset, System.Int32 size, ref System.Int32 read)
    // Offset: 0x165BA98
    void WriteAndReadBack(::Array<uint8_t>* buffer, int offset, int size, int& read);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x165BB18
    int Read(::Array<uint8_t>* buffer, int offset, int size);
    // private System.Int32 ReadFromChunks(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x165BB1C
    int ReadFromChunks(::Array<uint8_t>* buffer, int offset, int size);
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x165BA38
    void Write(::Array<uint8_t>* buffer, int offset, int size);
    // private System.Void InternalWrite(System.Byte[] buffer, ref System.Int32 offset, System.Int32 size)
    // Offset: 0x165BDE4
    void InternalWrite(::Array<uint8_t>* buffer, int& offset, int size);
    // public System.Boolean get_WantMore()
    // Offset: 0x165C760
    bool get_WantMore();
    // public System.Boolean get_DataAvailable()
    // Offset: 0x165C788
    bool get_DataAvailable();
    // public System.Int32 get_ChunkLeft()
    // Offset: 0x165C890
    int get_ChunkLeft();
    // private System.Net.MonoChunkStream/State ReadBody(System.Byte[] buffer, ref System.Int32 offset, System.Int32 size)
    // Offset: 0x165C21C
    System::Net::MonoChunkStream::State ReadBody(::Array<uint8_t>* buffer, int& offset, int size);
    // private System.Net.MonoChunkStream/State GetChunkSize(System.Byte[] buffer, ref System.Int32 offset, System.Int32 size)
    // Offset: 0x165BF24
    System::Net::MonoChunkStream::State GetChunkSize(::Array<uint8_t>* buffer, int& offset, int size);
    // static private System.String RemoveChunkExtension(System.String input)
    // Offset: 0x165C93C
    static ::Il2CppString* RemoveChunkExtension(::Il2CppString* input);
    // private System.Net.MonoChunkStream/State ReadCRLF(System.Byte[] buffer, ref System.Int32 offset, System.Int32 size)
    // Offset: 0x165C34C
    System::Net::MonoChunkStream::State ReadCRLF(::Array<uint8_t>* buffer, int& offset, int size);
    // private System.Net.MonoChunkStream/State ReadTrailer(System.Byte[] buffer, ref System.Int32 offset, System.Int32 size)
    // Offset: 0x165C45C
    System::Net::MonoChunkStream::State ReadTrailer(::Array<uint8_t>* buffer, int& offset, int size);
    // static private System.Void ThrowProtocolViolation(System.String message)
    // Offset: 0x165C8C8
    static void ThrowProtocolViolation(::Il2CppString* message);
  }; // System.Net.MonoChunkStream
  #pragma pack(pop)
  static check_size<sizeof(MonoChunkStream), 56 + sizeof(System::Collections::ArrayList*)> __System_Net_MonoChunkStreamSizeCheck;
  static_assert(sizeof(MonoChunkStream) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::MonoChunkStream*, "System.Net", "MonoChunkStream");
DEFINE_IL2CPP_ARG_TYPE(System::Net::MonoChunkStream::State, "System.Net", "MonoChunkStream/State");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::MonoChunkStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::MonoChunkStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::MonoChunkStream::ResetBuffer
// Il2CppName: ResetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::MonoChunkStream::*)()>(&System::Net::MonoChunkStream::ResetBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "ResetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::WriteAndReadBack
// Il2CppName: WriteAndReadBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int, int, int&)>(&System::Net::MonoChunkStream::WriteAndReadBack)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* read = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "WriteAndReadBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, read});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int, int)>(&System::Net::MonoChunkStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::ReadFromChunks
// Il2CppName: ReadFromChunks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int, int)>(&System::Net::MonoChunkStream::ReadFromChunks)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "ReadFromChunks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int, int)>(&System::Net::MonoChunkStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::InternalWrite
// Il2CppName: InternalWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int&, int)>(&System::Net::MonoChunkStream::InternalWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "InternalWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::get_WantMore
// Il2CppName: get_WantMore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::MonoChunkStream::*)()>(&System::Net::MonoChunkStream::get_WantMore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "get_WantMore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::get_DataAvailable
// Il2CppName: get_DataAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::MonoChunkStream::*)()>(&System::Net::MonoChunkStream::get_DataAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "get_DataAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::get_ChunkLeft
// Il2CppName: get_ChunkLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::MonoChunkStream::*)()>(&System::Net::MonoChunkStream::get_ChunkLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "get_ChunkLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::ReadBody
// Il2CppName: ReadBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::MonoChunkStream::State (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int&, int)>(&System::Net::MonoChunkStream::ReadBody)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "ReadBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::GetChunkSize
// Il2CppName: GetChunkSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::MonoChunkStream::State (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int&, int)>(&System::Net::MonoChunkStream::GetChunkSize)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "GetChunkSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::RemoveChunkExtension
// Il2CppName: RemoveChunkExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::MonoChunkStream::RemoveChunkExtension)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "RemoveChunkExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::ReadCRLF
// Il2CppName: ReadCRLF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::MonoChunkStream::State (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int&, int)>(&System::Net::MonoChunkStream::ReadCRLF)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "ReadCRLF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::ReadTrailer
// Il2CppName: ReadTrailer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::MonoChunkStream::State (System::Net::MonoChunkStream::*)(::Array<uint8_t>*, int&, int)>(&System::Net::MonoChunkStream::ReadTrailer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "ReadTrailer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::MonoChunkStream::ThrowProtocolViolation
// Il2CppName: ThrowProtocolViolation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::Net::MonoChunkStream::ThrowProtocolViolation)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::MonoChunkStream*), "ThrowProtocolViolation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
