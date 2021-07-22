// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextReader/System.IO.SyncTextReader
  // [TokenAttribute] Offset: FFFFFFFF
  class TextReader::SyncTextReader : public System::IO::TextReader {
    public:
    // System.IO.TextReader _in
    // Size: 0x8
    // Offset: 0x18
    System::IO::TextReader* in;
    // Field size check
    static_assert(sizeof(System::IO::TextReader*) == 0x8);
    // Creating value type constructor for type: SyncTextReader
    SyncTextReader(System::IO::TextReader* in_ = {}) noexcept : in{in_} {}
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.IO.TextReader t)
    // Offset: 0x17F3310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextReader::SyncTextReader* New_ctor(System::IO::TextReader* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextReader::SyncTextReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextReader::SyncTextReader*, creationType>(t)));
    }
    // public override System.Void Close()
    // Offset: 0x17F36EC
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x17F370C
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0x17F37DC
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x17F37FC
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x17F381C
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x17F383C
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
    // public override System.String ReadToEnd()
    // Offset: 0x17F3860
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
  }; // System.IO.TextReader/System.IO.SyncTextReader
  #pragma pack(pop)
  static check_size<sizeof(TextReader::SyncTextReader), 24 + sizeof(System::IO::TextReader*)> __System_IO_TextReader_SyncTextReaderSizeCheck;
  static_assert(sizeof(TextReader::SyncTextReader) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader::SyncTextReader*, "System.IO", "TextReader/SyncTextReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextReader::SyncTextReader::*)()>(&System::IO::TextReader::SyncTextReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::SyncTextReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextReader::SyncTextReader::*)(bool)>(&System::IO::TextReader::SyncTextReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::SyncTextReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::SyncTextReader::*)()>(&System::IO::TextReader::SyncTextReader::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::SyncTextReader*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::SyncTextReader::*)()>(&System::IO::TextReader::SyncTextReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::SyncTextReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::SyncTextReader::*)(::Array<::Il2CppChar>*&, int, int)>(&System::IO::TextReader::SyncTextReader::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::SyncTextReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::TextReader::SyncTextReader::*)()>(&System::IO::TextReader::SyncTextReader::ReadLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::SyncTextReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::SyncTextReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::TextReader::SyncTextReader::*)()>(&System::IO::TextReader::SyncTextReader::ReadToEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader::SyncTextReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
