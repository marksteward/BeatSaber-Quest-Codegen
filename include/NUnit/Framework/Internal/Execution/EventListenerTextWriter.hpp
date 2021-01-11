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
// Type namespace: NUnit.Framework.Internal.Execution
namespace NUnit::Framework::Internal::Execution {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Execution.EventListenerTextWriter
  // [] Offset: FFFFFFFF
  class EventListenerTextWriter : public System::IO::TextWriter {
    public:
    // private System.IO.TextWriter _defaultWriter
    // Size: 0x8
    // Offset: 0x28
    System::IO::TextWriter* defaultWriter;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // private System.String _streamName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* streamName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: EventListenerTextWriter
    EventListenerTextWriter(System::IO::TextWriter* defaultWriter_ = {}, ::Il2CppString* streamName_ = {}) noexcept : defaultWriter{defaultWriter_}, streamName{streamName_} {}
    // public System.Void .ctor(System.String streamName, System.IO.TextWriter defaultWriter)
    // Offset: 0x13F1748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventListenerTextWriter* New_ctor(::Il2CppString* streamName, System::IO::TextWriter* defaultWriter) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Execution::EventListenerTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventListenerTextWriter*, creationType>(streamName, defaultWriter)));
    }
    // private System.Boolean TrySendToListener(System.String text)
    // Offset: 0x13F1838
    bool TrySendToListener(::Il2CppString* text);
    // public override System.Void Write(System.Char aChar)
    // Offset: 0x13F17E0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char aChar)
    void Write(::Il2CppChar aChar);
    // public override System.Void Write(System.String aString)
    // Offset: 0x13F19B4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String aString)
    void Write(::Il2CppString* aString);
    // public override System.Void WriteLine(System.String aString)
    // Offset: 0x13F1A04
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String aString)
    void WriteLine(::Il2CppString* aString);
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x13F1A74
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
  }; // NUnit.Framework.Internal.Execution.EventListenerTextWriter
  static check_size<sizeof(EventListenerTextWriter), 48 + sizeof(::Il2CppString*)> __NUnit_Framework_Internal_Execution_EventListenerTextWriterSizeCheck;
  static_assert(sizeof(EventListenerTextWriter) == 0x38);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Execution::EventListenerTextWriter*, "NUnit.Framework.Internal.Execution", "EventListenerTextWriter");
