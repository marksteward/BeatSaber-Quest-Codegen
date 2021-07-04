// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Constraints.MessageWriter
#include "NUnit/Framework/Constraints/MessageWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
  // Forward declaring type: Tolerance
  class Tolerance;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TextMessageWriter
  class TextMessageWriter : public NUnit::Framework::Constraints::MessageWriter {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x34
    char ___base_padding[0x3] = {};
    // private System.Int32 maxLineLength
    // Size: 0x4
    // Offset: 0x34
    int maxLineLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TextMessageWriter
    TextMessageWriter(int maxLineLength_ = {}) noexcept : maxLineLength{maxLineLength_} {}
    // Get static field: static private readonly System.Int32 DEFAULT_LINE_LENGTH
    static int _get_DEFAULT_LINE_LENGTH();
    // Set static field: static private readonly System.Int32 DEFAULT_LINE_LENGTH
    static void _set_DEFAULT_LINE_LENGTH(int value);
    // Get static field: static public readonly System.String Pfx_Expected
    static ::Il2CppString* _get_Pfx_Expected();
    // Set static field: static public readonly System.String Pfx_Expected
    static void _set_Pfx_Expected(::Il2CppString* value);
    // Get static field: static public readonly System.String Pfx_Actual
    static ::Il2CppString* _get_Pfx_Actual();
    // Set static field: static public readonly System.String Pfx_Actual
    static void _set_Pfx_Actual(::Il2CppString* value);
    // Get static field: static public readonly System.Int32 PrefixLength
    static int _get_PrefixLength();
    // Set static field: static public readonly System.Int32 PrefixLength
    static void _set_PrefixLength(int value);
    // public System.Void .ctor(System.String userMessage, params System.Object[] args)
    // Offset: 0x22B56C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextMessageWriter* New_ctor(::Il2CppString* userMessage, ::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TextMessageWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextMessageWriter*, creationType>(userMessage, args)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String userMessage, params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextMessageWriter* New_ctor(::Il2CppString* userMessage, std::initializer_list<::Il2CppObject*> args) {
      return New_ctor<creationType>(userMessage, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String userMessage, params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static TextMessageWriter* New_ctor(::Il2CppString* userMessage, TParams&&... args) {
      return New_ctor<creationType>(userMessage, {args...});
    }
    // private System.Void WriteExpectedLine(NUnit.Framework.Constraints.ConstraintResult result)
    // Offset: 0x22B58D0
    void WriteExpectedLine(NUnit::Framework::Constraints::ConstraintResult* result);
    // private System.Void WriteExpectedLine(System.Object expected)
    // Offset: 0x22B5A6C
    void WriteExpectedLine(::Il2CppObject* expected);
    // private System.Void WriteExpectedLine(System.Object expected, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x22B5B58
    void WriteExpectedLine(::Il2CppObject* expected, NUnit::Framework::Constraints::Tolerance* tolerance);
    // private System.Void WriteActualLine(NUnit.Framework.Constraints.ConstraintResult result)
    // Offset: 0x22B5984
    void WriteActualLine(NUnit::Framework::Constraints::ConstraintResult* result);
    // private System.Void WriteActualLine(System.Object actual)
    // Offset: 0x22B5A74
    void WriteActualLine(::Il2CppObject* actual);
    // private System.Void WriteCaretLine(System.Int32 mismatch)
    // Offset: 0x22B5F50
    void WriteCaretLine(int mismatch);
    // public override System.Int32 get_MaxLineLength()
    // Offset: 0x22B5794
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Int32 MessageWriter::get_MaxLineLength()
    int get_MaxLineLength();
    // public override System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    // Offset: 0x22B579C
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    void WriteMessageLine(int level, ::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    void WriteMessageLine(int level, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    template<class ...TParams>
    void WriteMessageLine(int level, ::Il2CppString* message, TParams&&... args) {
      WriteMessageLine(level, message, {args...});
    }
    // public override System.Void DisplayDifferences(NUnit.Framework.Constraints.ConstraintResult result)
    // Offset: 0x22B58A4
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayDifferences(NUnit.Framework.Constraints.ConstraintResult result)
    void DisplayDifferences(NUnit::Framework::Constraints::ConstraintResult* result);
    // public override System.Void DisplayDifferences(System.Object expected, System.Object actual)
    // Offset: 0x22B5A3C
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayDifferences(System.Object expected, System.Object actual)
    void DisplayDifferences(::Il2CppObject* expected, ::Il2CppObject* actual);
    // public override System.Void DisplayDifferences(System.Object expected, System.Object actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x22B5B28
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayDifferences(System.Object expected, System.Object actual, NUnit.Framework.Constraints.Tolerance tolerance)
    void DisplayDifferences(::Il2CppObject* expected, ::Il2CppObject* actual, NUnit::Framework::Constraints::Tolerance* tolerance);
    // public override System.Void DisplayStringDifferences(System.String expected, System.String actual, System.Int32 mismatch, System.Boolean ignoreCase, System.Boolean clipping)
    // Offset: 0x22B5D2C
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayStringDifferences(System.String expected, System.String actual, System.Int32 mismatch, System.Boolean ignoreCase, System.Boolean clipping)
    void DisplayStringDifferences(::Il2CppString* expected, ::Il2CppString* actual, int mismatch, bool ignoreCase, bool clipping);
    // public override System.Void WriteActualValue(System.Object actual)
    // Offset: 0x22B6000
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteActualValue(System.Object actual)
    void WriteActualValue(::Il2CppObject* actual);
    // public override System.Void WriteValue(System.Object val)
    // Offset: 0x22B6010
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteValue(System.Object val)
    void WriteValue(::Il2CppObject* val);
    // public override System.Void WriteCollectionElements(System.Collections.IEnumerable collection, System.Int64 start, System.Int32 max)
    // Offset: 0x22B609C
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteCollectionElements(System.Collections.IEnumerable collection, System.Int64 start, System.Int32 max)
    void WriteCollectionElements(System::Collections::IEnumerable* collection, int64_t start, int max);
    // static private System.Void .cctor()
    // Offset: 0x22B6140
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.cctor()
    static void _cctor();
  }; // NUnit.Framework.Internal.TextMessageWriter
  #pragma pack(pop)
  static check_size<sizeof(TextMessageWriter), 52 + sizeof(int)> __NUnit_Framework_Internal_TextMessageWriterSizeCheck;
  static_assert(sizeof(TextMessageWriter) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TextMessageWriter*, "NUnit.Framework.Internal", "TextMessageWriter");
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteExpectedLine
// Il2CppName: WriteExpectedLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteExpectedLine
// Il2CppName: WriteExpectedLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteExpectedLine
// Il2CppName: WriteExpectedLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteActualLine
// Il2CppName: WriteActualLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteActualLine
// Il2CppName: WriteActualLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteCaretLine
// Il2CppName: WriteCaretLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::get_MaxLineLength
// Il2CppName: get_MaxLineLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteMessageLine
// Il2CppName: WriteMessageLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::DisplayDifferences
// Il2CppName: DisplayDifferences
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::DisplayDifferences
// Il2CppName: DisplayDifferences
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::DisplayDifferences
// Il2CppName: DisplayDifferences
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::DisplayStringDifferences
// Il2CppName: DisplayStringDifferences
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteActualValue
// Il2CppName: WriteActualValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteValue
// Il2CppName: WriteValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::WriteCollectionElements
// Il2CppName: WriteCollectionElements
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Internal::TextMessageWriter::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
