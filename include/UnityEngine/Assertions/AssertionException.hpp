// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Autogenerated type: UnityEngine.Assertions.AssertionException
  class AssertionException : public System::Exception {
    public:
    // private System.String m_UserMessage
    // Offset: 0x88
    ::Il2CppString* m_UserMessage;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const {
      return m_UserMessage;
    }
    // public System.Void .ctor(System.String message, System.String userMessage)
    // Offset: 0x1305408
    static AssertionException* New_ctor(::Il2CppString* message, ::Il2CppString* userMessage);
    // public override System.String get_Message()
    // Offset: 0x130584C
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
  }; // UnityEngine.Assertions.AssertionException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Assertions::AssertionException*, "UnityEngine.Assertions", "AssertionException");
#pragma pack(pop)
