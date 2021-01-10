// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x90
  // Autogenerated type: Mono.Xml.SmallXmlParserException
  // [] Offset: FFFFFFFF
  class SmallXmlParserException : public System::SystemException {
    public:
    // private System.Int32 line
    // Size: 0x4
    // Offset: 0x88
    int line;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 column
    // Size: 0x4
    // Offset: 0x8C
    int column;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SmallXmlParserException
    SmallXmlParserException(int line_ = {}, int column_ = {}) noexcept : line{line_}, column{column_} {}
    // public System.Void .ctor(System.String msg, System.Int32 line, System.Int32 column)
    // Offset: 0x15C346C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallXmlParserException* New_ctor(::Il2CppString* msg, int line, int column) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Xml::SmallXmlParserException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallXmlParserException*, creationType>(msg, line, column)));
    }
  }; // Mono.Xml.SmallXmlParserException
  static check_size<sizeof(SmallXmlParserException), 140 + sizeof(int)> __Mono_Xml_SmallXmlParserExceptionSizeCheck;
  static_assert(sizeof(SmallXmlParserException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParserException*, "Mono.Xml", "SmallXmlParserException");
#pragma pack(pop)
