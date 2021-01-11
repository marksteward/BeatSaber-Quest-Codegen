// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Warning
#include "RootMotion/Warning.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Warning/Logger
  // [] Offset: FFFFFFFF
  class Warning::Logger : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Logger
    Logger() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F6018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Warning::Logger* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Warning::Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Warning::Logger*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String message)
    // Offset: 0x15F5C60
    void Invoke(::Il2CppString* message);
    // public System.IAsyncResult BeginInvoke(System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F602C
    System::IAsyncResult* BeginInvoke(::Il2CppString* message, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15F6050
    void EndInvoke(System::IAsyncResult* result);
  }; // RootMotion.Warning/Logger
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Warning::Logger*, "RootMotion", "Warning/Logger");
