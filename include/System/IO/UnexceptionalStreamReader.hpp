// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.UnexceptionalStreamReader
  class UnexceptionalStreamReader : public System::IO::StreamReader {
    public:
    // Creating value type constructor for type: UnexceptionalStreamReader
    UnexceptionalStreamReader() noexcept {}
    // Get static field: static private System.Boolean[] newline
    static ::Array<bool>* _get_newline();
    // Set static field: static private System.Boolean[] newline
    static void _set_newline(::Array<bool>* value);
    // Get static field: static private System.Char newlineChar
    static ::Il2CppChar _get_newlineChar();
    // Set static field: static private System.Char newlineChar
    static void _set_newlineChar(::Il2CppChar value);
    // private System.Boolean CheckEOL(System.Char current)
    // Offset: 0x181A860
    bool CheckEOL(::Il2CppChar current);
    // static private System.Void .cctor()
    // Offset: 0x181A340
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::.cctor()
    // Base method: System.Void TextReader::.cctor()
    static void _cctor();
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x181A3E4
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::.ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnexceptionalStreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnexceptionalStreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnexceptionalStreamReader*, creationType>(stream, encoding)));
    }
    // public override System.Int32 Peek()
    // Offset: 0x181A464
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x181A524
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] dest_buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x181A5E4
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read(in System.Char[] dest_buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& dest_buffer, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x181AA50
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadLine()
    ::Il2CppString* ReadLine();
    // public override System.String ReadToEnd()
    // Offset: 0x181AB10
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
  }; // System.IO.UnexceptionalStreamReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnexceptionalStreamReader*, "System.IO", "UnexceptionalStreamReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::CheckEOL
// Il2CppName: CheckEOL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::UnexceptionalStreamReader::*)(::Il2CppChar)>(&System::IO::UnexceptionalStreamReader::CheckEOL)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamReader*), "CheckEOL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::UnexceptionalStreamReader::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamReader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::UnexceptionalStreamReader::*)()>(&System::IO::UnexceptionalStreamReader::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamReader*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::UnexceptionalStreamReader::*)()>(&System::IO::UnexceptionalStreamReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::UnexceptionalStreamReader::*)(::Array<::Il2CppChar>*&, int, int)>(&System::IO::UnexceptionalStreamReader::Read)> {
  static const MethodInfo* get() {
    static auto* dest_buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest_buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::UnexceptionalStreamReader::*)()>(&System::IO::UnexceptionalStreamReader::ReadLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::UnexceptionalStreamReader::*)()>(&System::IO::UnexceptionalStreamReader::ReadToEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
