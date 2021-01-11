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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.UnityAction
  // [] Offset: FFFFFFFF
  class UnityAction : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UnityAction
    UnityAction() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16876B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityAction* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityAction*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x167D9E4
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x16876C4
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16876F0
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Events.UnityAction
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityAction*, "UnityEngine.Events", "UnityAction");
