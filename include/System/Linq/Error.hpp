// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Error
  class Error : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Error
    Error() noexcept {}
    // static System.Exception ArgumentNull(System.String s)
    // Offset: 0x215CE48
    static System::Exception* ArgumentNull(::Il2CppString* s);
    // static System.Exception ArgumentOutOfRange(System.String s)
    // Offset: 0x215D770
    static System::Exception* ArgumentOutOfRange(::Il2CppString* s);
    // static System.Exception MoreThanOneElement()
    // Offset: 0x215D7D4
    static System::Exception* MoreThanOneElement();
    // static System.Exception MoreThanOneMatch()
    // Offset: 0x215D83C
    static System::Exception* MoreThanOneMatch();
    // static System.Exception NoElements()
    // Offset: 0x215D174
    static System::Exception* NoElements();
    // static System.Exception NoMatch()
    // Offset: 0x215D8A4
    static System::Exception* NoMatch();
    // static System.Exception NotSupported()
    // Offset: 0x215D90C
    static System::Exception* NotSupported();
  }; // System.Linq.Error
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Error*, "System.Linq", "Error");
