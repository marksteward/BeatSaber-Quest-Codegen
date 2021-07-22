// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaException
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaException : public System::Exception {
    public:
    // private System.String mJavaStackTrace
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* mJavaStackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AndroidJavaException
    AndroidJavaException(::Il2CppString* mJavaStackTrace_ = {}) noexcept : mJavaStackTrace{mJavaStackTrace_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return mJavaStackTrace;
    }
    // System.Void .ctor(System.String message, System.String javaStackTrace)
    // Offset: 0x234E71C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaException* New_ctor(::Il2CppString* message, ::Il2CppString* javaStackTrace) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaException*, creationType>(message, javaStackTrace)));
    }
    // public override System.String get_StackTrace()
    // Offset: 0x2352084
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::Il2CppString* get_StackTrace();
  }; // UnityEngine.AndroidJavaException
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaException), 136 + sizeof(::Il2CppString*)> __UnityEngine_AndroidJavaExceptionSizeCheck;
  static_assert(sizeof(AndroidJavaException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaException*, "UnityEngine", "AndroidJavaException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaException::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AndroidJavaException::*)()>(&UnityEngine::AndroidJavaException::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaException*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
