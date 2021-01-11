// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
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
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
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
  // Autogenerated type: System.IO.TextWriter
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39454
  class TextWriter : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // Nested type: System::IO::TextWriter::NullTextWriter
    class NullTextWriter;
    // Nested type: System::IO::TextWriter::SyncTextWriter
    class SyncTextWriter;
    // Nested type: System::IO::TextWriter::$$c
    class $$c;
    // protected System.Char[] CoreNewLine
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppChar>* CoreNewLine;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.IFormatProvider InternalFormatProvider
    // Size: 0x8
    // Offset: 0x20
    System::IFormatProvider* InternalFormatProvider;
    // Field size check
    static_assert(sizeof(System::IFormatProvider*) == 0x8);
    // Creating value type constructor for type: TextWriter
    TextWriter(::Array<::Il2CppChar>* CoreNewLine_ = {}, System::IFormatProvider* InternalFormatProvider_ = {}) noexcept : CoreNewLine{CoreNewLine_}, InternalFormatProvider{InternalFormatProvider_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.TextWriter Null
    static System::IO::TextWriter* _get_Null();
    // Set static field: static public readonly System.IO.TextWriter Null
    static void _set_Null(System::IO::TextWriter* value);
    // Get static field: static private System.Action`1<System.Object> _WriteCharDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteCharDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteCharDelegate
    static void _set__WriteCharDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteStringDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteStringDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteStringDelegate
    static void _set__WriteStringDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteCharArrayRangeDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteCharArrayRangeDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteCharArrayRangeDelegate
    static void _set__WriteCharArrayRangeDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineCharDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteLineCharDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineCharDelegate
    static void _set__WriteLineCharDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineStringDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteLineStringDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineStringDelegate
    static void _set__WriteLineStringDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineCharArrayRangeDelegate
    static System::Action_1<::Il2CppObject*>* _get__WriteLineCharArrayRangeDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineCharArrayRangeDelegate
    static void _set__WriteLineCharArrayRangeDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _FlushDelegate
    static System::Action_1<::Il2CppObject*>* _get__FlushDelegate();
    // Set static field: static private System.Action`1<System.Object> _FlushDelegate
    static void _set__FlushDelegate(System::Action_1<::Il2CppObject*>* value);
    // static private System.String get_InitialNewLine()
    // Offset: 0x13ACF44
    static ::Il2CppString* get_InitialNewLine();
    // protected System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0x13AA674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter* New_ctor(System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter*, creationType>(formatProvider)));
    }
    // public System.IFormatProvider get_FormatProvider()
    // Offset: 0x13ACFEC
    System::IFormatProvider* get_FormatProvider();
    // public System.Void Close()
    // Offset: 0x13AD018
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13AB248
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x13AD110
    void Flush();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0xFFFFFFFF
    System::Text::Encoding* get_Encoding();
    // static public System.IO.TextWriter Synchronized(System.IO.TextWriter writer)
    // Offset: 0x13AD114
    static System::IO::TextWriter* Synchronized(System::IO::TextWriter* writer);
    // public System.Void Write(System.Char value)
    // Offset: 0x13AD260
    void Write(::Il2CppChar value);
    // public System.Void Write(System.Char[] buffer)
    // Offset: 0x13AD264
    void Write(::Array<::Il2CppChar>* buffer);
    // public System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x13AD284
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public System.Void Write(System.String value)
    // Offset: 0x13AD490
    void Write(::Il2CppString* value);
    // public System.Void Write(System.String format, System.Object arg0)
    // Offset: 0x13AD4D4
    void Write(::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Void Write(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x13AD534
    void Write(::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public System.Void WriteLine()
    // Offset: 0x13AD5AC
    void WriteLine();
    // public System.Void WriteLine(System.Char value)
    // Offset: 0x13AD5C0
    void WriteLine(::Il2CppChar value);
    // public System.Void WriteLine(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x13AD5F8
    void WriteLine(::Array<::Il2CppChar>* buffer, int index, int count);
    // public System.Void WriteLine(System.String value)
    // Offset: 0x13AD634
    void WriteLine(::Il2CppString* value);
    // public System.Void WriteLine(System.String format, System.Object arg0)
    // Offset: 0x13AD7DC
    void WriteLine(::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Void WriteLine(System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0x13AD83C
    void WriteLine(::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Void WriteLine(System.String format, params System.Object[] arg)
    // Offset: 0x13AD8A4
    void WriteLine(::Il2CppString* format, ::Array<::Il2CppObject*>* arg);
    // Creating initializer_list -> params proxy for: System.Void WriteLine(System.String format, params System.Object[] arg)
    void WriteLine(::Il2CppString* format, std::initializer_list<::Il2CppObject*> arg);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteLine(System.String format, params System.Object[] arg)
    template<class ...TParams>
    void WriteLine(::Il2CppString* format, TParams&&... arg) {
      WriteLine(format, {arg...});
    }
    // static private System.Void .cctor()
    // Offset: 0x13AD904
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x13ACF4C
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x13AD094
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.IO.TextWriter
  static check_size<sizeof(TextWriter), 32 + sizeof(System::IFormatProvider*)> __System_IO_TextWriterSizeCheck;
  static_assert(sizeof(TextWriter) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextWriter*, "System.IO", "TextWriter");
