// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Runtime.ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Size: 0x20
  // Autogenerated type: System.Runtime.ExceptionServices.ExceptionDispatchInfo
  // [] Offset: FFFFFFFF
  class ExceptionDispatchInfo : public ::Il2CppObject {
    public:
    // private System.Exception m_Exception
    // Size: 0x8
    // Offset: 0x10
    System::Exception* m_Exception;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Object m_stackTrace
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_stackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: ExceptionDispatchInfo
    ExceptionDispatchInfo(System::Exception* m_Exception_ = {}, ::Il2CppObject* m_stackTrace_ = {}) noexcept : m_Exception{m_Exception_}, m_stackTrace{m_stackTrace_} {}
    // private System.Void .ctor(System.Exception exception)
    // Offset: 0x1163F74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExceptionDispatchInfo* New_ctor(System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::ExceptionServices::ExceptionDispatchInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExceptionDispatchInfo*, creationType>(exception)));
    }
    // System.Object get_BinaryStackTraceArray()
    // Offset: 0x11640BC
    ::Il2CppObject* get_BinaryStackTraceArray();
    // static public System.Runtime.ExceptionServices.ExceptionDispatchInfo Capture(System.Exception source)
    // Offset: 0x11640C4
    static System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(System::Exception* source);
    // public System.Exception get_SourceException()
    // Offset: 0x1164184
    System::Exception* get_SourceException();
    // public System.Void Throw()
    // Offset: 0x1162188
    void Throw();
  }; // System.Runtime.ExceptionServices.ExceptionDispatchInfo
  static check_size<sizeof(ExceptionDispatchInfo), 24 + sizeof(::Il2CppObject*)> __System_Runtime_ExceptionServices_ExceptionDispatchInfoSizeCheck;
  static_assert(sizeof(ExceptionDispatchInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ExceptionServices::ExceptionDispatchInfo*, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");
#pragma pack(pop)
