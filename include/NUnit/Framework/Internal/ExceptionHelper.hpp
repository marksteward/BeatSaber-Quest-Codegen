// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.ExceptionHelper
  class ExceptionHelper : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Internal::ExceptionHelper::$$c
    class $$c;
    // Creating value type constructor for type: ExceptionHelper
    ExceptionHelper() noexcept {}
    // Get static field: static private readonly System.Action`1<System.Exception> PreserveStackTrace
    static System::Action_1<System::Exception*>* _get_PreserveStackTrace();
    // Set static field: static private readonly System.Action`1<System.Exception> PreserveStackTrace
    static void _set_PreserveStackTrace(System::Action_1<System::Exception*>* value);
    // static private System.Void .cctor()
    // Offset: 0x15D4F50
    static void _cctor();
    // static public System.String BuildMessage(System.Exception exception)
    // Offset: 0x15D5148
    static ::Il2CppString* BuildMessage(System::Exception* exception);
    // static public System.String BuildStackTrace(System.Exception exception)
    // Offset: 0x15D5608
    static ::Il2CppString* BuildStackTrace(System::Exception* exception);
    // static public System.String GetStackTrace(System.Exception exception)
    // Offset: 0x15D5874
    static ::Il2CppString* GetStackTrace(System::Exception* exception);
    // static private System.Collections.Generic.List`1<System.Exception> FlattenExceptionHierarchy(System.Exception exception)
    // Offset: 0x15D5534
    static System::Collections::Generic::List_1<System::Exception*>* FlattenExceptionHierarchy(System::Exception* exception);
  }; // NUnit.Framework.Internal.ExceptionHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ExceptionHelper*, "NUnit.Framework.Internal", "ExceptionHelper");
