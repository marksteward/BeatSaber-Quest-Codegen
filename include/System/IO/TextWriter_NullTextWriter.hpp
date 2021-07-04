// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextWriter/NullTextWriter
  class TextWriter::NullTextWriter : public System::IO::TextWriter {
    public:
    // Creating value type constructor for type: NullTextWriter
    NullTextWriter() noexcept {}
    // System.Void .ctor()
    // Offset: 0x1819AA4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter::NullTextWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextWriter::NullTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter::NullTextWriter*, creationType>()));
    }
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x181A008
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x181A010
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x181A014
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::Il2CppString* value);
    // public override System.Void WriteLine()
    // Offset: 0x181A018
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine()
    void WriteLine();
    // public override System.Void WriteLine(System.String value)
    // Offset: 0x181A01C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String value)
    void WriteLine(::Il2CppString* value);
  }; // System.IO.TextWriter/NullTextWriter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextWriter::NullTextWriter*, "System.IO", "TextWriter/NullTextWriter");
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::get_Encoding
// Il2CppName: get_Encoding
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::Write
// Il2CppName: Write
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::Write
// Il2CppName: Write
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::WriteLine
// Il2CppName: WriteLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IO::TextWriter::NullTextWriter::WriteLine
// Il2CppName: WriteLine
// Cannot perform method pointer template specialization from operators!
