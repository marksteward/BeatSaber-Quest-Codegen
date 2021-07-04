// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Platform
  class Platform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Platform
    Platform() noexcept {}
    // Get static field: static private readonly System.Globalization.CompareInfo InvariantCompareInfo
    static System::Globalization::CompareInfo* _get_InvariantCompareInfo();
    // Set static field: static private readonly System.Globalization.CompareInfo InvariantCompareInfo
    static void _set_InvariantCompareInfo(System::Globalization::CompareInfo* value);
    // Get static field: static readonly System.String NewLine
    static ::Il2CppString* _get_NewLine();
    // Set static field: static readonly System.String NewLine
    static void _set_NewLine(::Il2CppString* value);
    // static private System.String GetNewLine()
    // Offset: 0x1F8CA7C
    static ::Il2CppString* GetNewLine();
    // static System.Boolean EqualsIgnoreCase(System.String a, System.String b)
    // Offset: 0x1F8CA84
    static bool EqualsIgnoreCase(::Il2CppString* a, ::Il2CppString* b);
    // static System.String GetEnvironmentVariable(System.String variable)
    // Offset: 0x1F8CB8C
    static ::Il2CppString* GetEnvironmentVariable(::Il2CppString* variable);
    // static System.Exception CreateNotImplementedException(System.String message)
    // Offset: 0x1F8CC4C
    static System::Exception* CreateNotImplementedException(::Il2CppString* message);
    // static System.Collections.IList CreateArrayList()
    // Offset: 0x1F8C47C
    static System::Collections::IList* CreateArrayList();
    // static System.Collections.IList CreateArrayList(System.Int32 capacity)
    // Offset: 0x1F8CCB0
    static System::Collections::IList* CreateArrayList(int capacity);
    // static System.Collections.IList CreateArrayList(System.Collections.ICollection collection)
    // Offset: 0x1F8BD70
    static System::Collections::IList* CreateArrayList(System::Collections::ICollection* collection);
    // static System.Collections.IDictionary CreateHashtable()
    // Offset: 0x1F89648
    static System::Collections::IDictionary* CreateHashtable();
    // static System.Collections.IDictionary CreateHashtable(System.Int32 capacity)
    // Offset: 0x1F8CD14
    static System::Collections::IDictionary* CreateHashtable(int capacity);
    // static System.String ToUpperInvariant(System.String s)
    // Offset: 0x1F8CB10
    static ::Il2CppString* ToUpperInvariant(::Il2CppString* s);
    // static System.Void Dispose(System.IO.Stream s)
    // Offset: 0x1F8BA38
    static void Dispose(System::IO::Stream* s);
    // static System.Int32 IndexOf(System.String source, System.String value)
    // Offset: 0x1F8C4D8
    static int IndexOf(::Il2CppString* source, ::Il2CppString* value);
    // static System.Boolean StartsWith(System.String source, System.String prefix)
    // Offset: 0x1F8BFD4
    static bool StartsWith(::Il2CppString* source, ::Il2CppString* prefix);
    // static System.Boolean EndsWith(System.String source, System.String suffix)
    // Offset: 0x1F8C068
    static bool EndsWith(::Il2CppString* source, ::Il2CppString* suffix);
    // static System.String GetTypeName(System.Object obj)
    // Offset: 0x1F8CD78
    static ::Il2CppString* GetTypeName(::Il2CppObject* obj);
    // static private System.Void .cctor()
    // Offset: 0x1F8CDA8
    static void _cctor();
  }; // Org.BouncyCastle.Utilities.Platform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Platform*, "Org.BouncyCastle.Utilities", "Platform");
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::GetNewLine
// Il2CppName: GetNewLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::EqualsIgnoreCase
// Il2CppName: EqualsIgnoreCase
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::GetEnvironmentVariable
// Il2CppName: GetEnvironmentVariable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::CreateNotImplementedException
// Il2CppName: CreateNotImplementedException
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::CreateArrayList
// Il2CppName: CreateArrayList
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::CreateArrayList
// Il2CppName: CreateArrayList
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::CreateArrayList
// Il2CppName: CreateArrayList
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::CreateHashtable
// Il2CppName: CreateHashtable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::CreateHashtable
// Il2CppName: CreateHashtable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::ToUpperInvariant
// Il2CppName: ToUpperInvariant
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::Dispose
// Il2CppName: Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::IndexOf
// Il2CppName: IndexOf
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::StartsWith
// Il2CppName: StartsWith
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::EndsWith
// Il2CppName: EndsWith
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::GetTypeName
// Il2CppName: GetTypeName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Platform::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
