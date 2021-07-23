// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Error
  // [TokenAttribute] Offset: FFFFFFFF
  class Error : public ::Il2CppObject {
    public:
    // public readonly System.Int32 Code
    // Size: 0x4
    // Offset: 0x10
    int Code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 HttpCode
    // Size: 0x4
    // Offset: 0x14
    int HttpCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String Message
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Error
    Error(int Code_ = {}, int HttpCode_ = {}, ::Il2CppString* Message_ = {}) noexcept : Code{Code_}, HttpCode{HttpCode_}, Message{Message_} {}
    // Get instance field: public readonly System.Int32 Code
    int _get_Code();
    // Set instance field: public readonly System.Int32 Code
    void _set_Code(int value);
    // Get instance field: public readonly System.Int32 HttpCode
    int _get_HttpCode();
    // Set instance field: public readonly System.Int32 HttpCode
    void _set_HttpCode(int value);
    // Get instance field: public readonly System.String Message
    ::Il2CppString* _get_Message();
    // Set instance field: public readonly System.String Message
    void _set_Message(::Il2CppString* value);
    // public System.Void .ctor(System.Int32 code, System.String message, System.Int32 httpCode)
    // Offset: 0x149B664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Error* New_ctor(int code, ::Il2CppString* message, int httpCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::Error::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Error*, creationType>(code, message, httpCode)));
    }
  }; // Oculus.Platform.Models.Error
  #pragma pack(pop)
  static check_size<sizeof(Error), 24 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_ErrorSizeCheck;
  static_assert(sizeof(Error) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Error*, "Oculus.Platform.Models", "Error");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Error::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
