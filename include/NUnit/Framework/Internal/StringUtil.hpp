// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.StringUtil
  class StringUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StringUtil
    StringUtil() noexcept {}
    // static public System.Int32 Compare(System.String strA, System.String strB, System.Boolean ignoreCase)
    // Offset: 0x20900B0
    static int Compare(::Il2CppString* strA, ::Il2CppString* strB, bool ignoreCase);
    // static public System.Boolean StringsEqual(System.String strA, System.String strB, System.Boolean ignoreCase)
    // Offset: 0x20900BC
    static bool StringsEqual(::Il2CppString* strA, ::Il2CppString* strB, bool ignoreCase);
  }; // NUnit.Framework.Internal.StringUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::StringUtil*, "NUnit.Framework.Internal", "StringUtil");
