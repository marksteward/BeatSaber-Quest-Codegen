// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextReader
  // [ComVisibleAttribute] Offset: D7C934
  class TextReader : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // Nested type: System::IO::TextReader::NullTextReader
    class NullTextReader;
    // Nested type: System::IO::TextReader::SyncTextReader
    class SyncTextReader;
    // Nested type: System::IO::TextReader::$$c
    class $$c;
    // Creating value type constructor for type: TextReader
    TextReader() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private System.Func`2<System.Object,System.String> _ReadLineDelegate
    static System::Func_2<::Il2CppObject*, ::Il2CppString*>* _get__ReadLineDelegate();
    // Set static field: static private System.Func`2<System.Object,System.String> _ReadLineDelegate
    static void _set__ReadLineDelegate(System::Func_2<::Il2CppObject*, ::Il2CppString*>* value);
    // Get static field: static private System.Func`2<System.Object,System.Int32> _ReadDelegate
    static System::Func_2<::Il2CppObject*, int>* _get__ReadDelegate();
    // Set static field: static private System.Func`2<System.Object,System.Int32> _ReadDelegate
    static void _set__ReadDelegate(System::Func_2<::Il2CppObject*, int>* value);
    // Get static field: static public readonly System.IO.TextReader Null
    static System::IO::TextReader* _get_Null();
    // Set static field: static public readonly System.IO.TextReader Null
    static void _set_Null(System::IO::TextReader* value);
    // public System.Void Close()
    // Offset: 0x181838C
    void Close();
    // public System.Void Dispose()
    // Offset: 0x1818408
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x18177B0
    void Dispose(bool disposing);
    // public System.Int32 Peek()
    // Offset: 0x1818484
    int Peek();
    // public System.Int32 Read()
    // Offset: 0x181848C
    int Read();
    // public System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1818494
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public System.String ReadToEnd()
    // Offset: 0x1818698
    ::Il2CppString* ReadToEnd();
    // public System.String ReadLine()
    // Offset: 0x1818790
    ::Il2CppString* ReadLine();
    // static public System.IO.TextReader Synchronized(System.IO.TextReader reader)
    // Offset: 0x1818894
    static System::IO::TextReader* Synchronized(System::IO::TextReader* reader);
    // static private System.Void .cctor()
    // Offset: 0x18189C0
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1817790
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextReader*, creationType>()));
    }
  }; // System.IO.TextReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader*, "System.IO", "TextReader");
// Writing MetadataGetter for method: System::IO::TextReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextReader::*)()>(&System::IO::TextReader::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextReader::*)()>(&System::IO::TextReader::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextReader::*)(bool)>(&System::IO::TextReader::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::*)()>(&System::IO::TextReader::Peek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::*)()>(&System::IO::TextReader::Read)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::TextReader::*)(::Array<::Il2CppChar>*&, int, int)>(&System::IO::TextReader::Read)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<::Il2CppChar>*>*)->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::TextReader::*)()>(&System::IO::TextReader::ReadToEnd)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::TextReader::*)()>(&System::IO::TextReader::ReadLine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::Synchronized
// Il2CppName: Synchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::TextReader* (*)(System::IO::TextReader*)>(&System::IO::TextReader::Synchronized)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.IO", "TextReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), "Synchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::TextReader::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextReader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
