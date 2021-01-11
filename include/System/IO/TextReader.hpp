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
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39430
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
    // Offset: 0x13AC3FC
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13A92FC
    void Dispose(bool disposing);
    // public System.Int32 Peek()
    // Offset: 0x13AC4F4
    int Peek();
    // public System.Int32 Read()
    // Offset: 0x13AC4FC
    int Read();
    // public System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x13AC504
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public System.String ReadToEnd()
    // Offset: 0x13AC708
    ::Il2CppString* ReadToEnd();
    // public System.String ReadLine()
    // Offset: 0x13AC800
    ::Il2CppString* ReadLine();
    // static public System.IO.TextReader Synchronized(System.IO.TextReader reader)
    // Offset: 0x13AC904
    static System::IO::TextReader* Synchronized(System::IO::TextReader* reader);
    // static private System.Void .cctor()
    // Offset: 0x13ACA38
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x13A89F0
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextReader*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x13AC478
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.IO.TextReader
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader*, "System.IO", "TextReader");
