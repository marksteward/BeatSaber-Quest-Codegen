// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.IO.StringWriter
#include "System/IO/StringWriter.hpp"
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
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x31
  // Autogenerated type: NUnit.Framework.Constraints.MessageWriter
  // [] Offset: FFFFFFFF
  class MessageWriter : public System::IO::StringWriter {
    public:
    // Creating value type constructor for type: MessageWriter
    MessageWriter() noexcept {}
    // public System.Int32 get_MaxLineLength()
    // Offset: 0xFFFFFFFF
    int get_MaxLineLength();
    // public System.Void WriteMessageLine(System.String message, params System.Object[] args)
    // Offset: 0x13DE0E8
    void WriteMessageLine(::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteMessageLine(System.String message, params System.Object[] args)
    void WriteMessageLine(::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteMessageLine(System.String message, params System.Object[] args)
    template<class ...TParams>
    void WriteMessageLine(::Il2CppString* message, TParams&&... args) {
      WriteMessageLine(message, {args...});
    }
    // public System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    void WriteMessageLine(int level, ::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    void WriteMessageLine(int level, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    template<class ...TParams>
    void WriteMessageLine(int level, ::Il2CppString* message, TParams&&... args) {
      WriteMessageLine(level, message, {args...});
    }
    // public System.Void DisplayDifferences(NUnit.Framework.Constraints.ConstraintResult result)
    // Offset: 0xFFFFFFFF
    void DisplayDifferences(NUnit::Framework::Constraints::ConstraintResult* result);
    // public System.Void DisplayDifferences(System.Object expected, System.Object actual)
    // Offset: 0xFFFFFFFF
    void DisplayDifferences(::Il2CppObject* expected, ::Il2CppObject* actual);
    // public System.Void DisplayDifferences(System.Object expected, System.Object actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0xFFFFFFFF
    void DisplayDifferences(::Il2CppObject* expected, ::Il2CppObject* actual, NUnit::Framework::Constraints::Tolerance* tolerance);
    // public System.Void DisplayStringDifferences(System.String expected, System.String actual, System.Int32 mismatch, System.Boolean ignoreCase, System.Boolean clipping)
    // Offset: 0xFFFFFFFF
    void DisplayStringDifferences(::Il2CppString* expected, ::Il2CppString* actual, int mismatch, bool ignoreCase, bool clipping);
    // public System.Void WriteActualValue(System.Object actual)
    // Offset: 0xFFFFFFFF
    void WriteActualValue(::Il2CppObject* actual);
    // public System.Void WriteValue(System.Object val)
    // Offset: 0xFFFFFFFF
    void WriteValue(::Il2CppObject* val);
    // public System.Void WriteCollectionElements(System.Collections.IEnumerable collection, System.Int64 start, System.Int32 max)
    // Offset: 0xFFFFFFFF
    void WriteCollectionElements(System::Collections::IEnumerable* collection, int64_t start, int max);
    // protected System.Void .ctor()
    // Offset: 0x13DF1B8
    // Implemented from: System.IO.StringWriter
    // Base method: System.Void StringWriter::.ctor()
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::MessageWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWriter*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.MessageWriter
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::MessageWriter*, "NUnit.Framework.Constraints", "MessageWriter");
#pragma pack(pop)
