// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser/MD5
#include "System/Net/Http/Headers/Parser_MD5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/MD5/<>c
  // [CompilerGeneratedAttribute] Offset: D0AD7C
  class Parser::MD5::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Net.Http.Headers.Parser/MD5/<>c <>9
    static System::Net::Http::Headers::Parser::MD5::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Http.Headers.Parser/MD5/<>c <>9
    static void _set_$$9(System::Net::Http::Headers::Parser::MD5::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x14020D0
    static void _cctor();
    // System.String <.cctor>b__2_0(System.Object l)
    // Offset: 0x140213C
    ::Il2CppString* $_cctor$b__2_0(::Il2CppObject* l);
    // public System.Void .ctor()
    // Offset: 0x1402134
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser::MD5::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::Parser::MD5::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser::MD5::$$c*, creationType>()));
    }
  }; // System.Net.Http.Headers.Parser/MD5/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::MD5::$$c*, "System.Net.Http.Headers", "Parser/MD5/<>c");
