// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Util.Tokenizer
#include "System/Security/Util/Tokenizer.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.SharedStatics
  class SharedStatics : public ::Il2CppObject {
    public:
    // private System.Security.Util.Tokenizer/StringMaker _maker
    // Offset: 0x10
    System::Security::Util::Tokenizer::StringMaker* maker;
    // Creating conversion operator: operator System::Security::Util::Tokenizer::StringMaker*
    constexpr operator System::Security::Util::Tokenizer::StringMaker*() const noexcept {
      return maker;
    }
    // Get static field: static private readonly System.SharedStatics _sharedStatics
    static System::SharedStatics* _get__sharedStatics();
    // Set static field: static private readonly System.SharedStatics _sharedStatics
    static void _set__sharedStatics(System::SharedStatics* value);
    // static public System.Security.Util.Tokenizer/StringMaker GetSharedStringMaker()
    // Offset: 0x120E648
    static System::Security::Util::Tokenizer::StringMaker* GetSharedStringMaker();
    // static public System.Void ReleaseSharedStringMaker(ref System.Security.Util.Tokenizer/StringMaker maker)
    // Offset: 0x120EA94
    static void ReleaseSharedStringMaker(System::Security::Util::Tokenizer::StringMaker*& maker);
    // static private System.Void .cctor()
    // Offset: 0x1213E10
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1213E08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SharedStatics* New_ctor();
  }; // System.SharedStatics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::SharedStatics*, "System", "SharedStatics");
#pragma pack(pop)