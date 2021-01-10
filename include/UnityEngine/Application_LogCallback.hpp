// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Application
#include "UnityEngine/Application.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  // Autogenerated type: UnityEngine.Application/LogCallback
  // [] Offset: FFFFFFFF
  class Application::LogCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: LogCallback
    LogCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x167C330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Application::LogCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Application::LogCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Application::LogCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String condition, System.String stackTrace, UnityEngine.LogType type)
    // Offset: 0x167B184
    void Invoke(::Il2CppString* condition, ::Il2CppString* stackTrace, UnityEngine::LogType type);
    // public System.IAsyncResult BeginInvoke(System.String condition, System.String stackTrace, UnityEngine.LogType type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x167C344
    System::IAsyncResult* BeginInvoke(::Il2CppString* condition, ::Il2CppString* stackTrace, UnityEngine::LogType type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x167C3E4
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Application/LogCallback
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Application::LogCallback*, "UnityEngine", "Application/LogCallback");
#pragma pack(pop)
