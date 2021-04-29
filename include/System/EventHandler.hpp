// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: EventArgs
  class EventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.EventHandler
  // [ComVisibleAttribute] Offset: CA4424
  class EventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: EventHandler
    EventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x165AA9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::EventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.EventArgs e)
    // Offset: 0x165AAAC
    void Invoke(::Il2CppObject* sender, System::EventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.EventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x165AE94
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::EventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x165AEC4
    void EndInvoke(System::IAsyncResult* result);
  }; // System.EventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::EventHandler*, "System", "EventHandler");
