// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.INotifyCompletion
  class INotifyCompletion {
    public:
    // Creating value type constructor for type: INotifyCompletion
    INotifyCompletion() noexcept {}
    // public System.Void OnCompleted(System.Action continuation)
    // Offset: 0xFFFFFFFF
    void OnCompleted(System::Action* continuation);
  }; // System.Runtime.CompilerServices.INotifyCompletion
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::INotifyCompletion*, "System.Runtime.CompilerServices", "INotifyCompletion");
// Writing MetadataGetter for method: System::Runtime::CompilerServices::INotifyCompletion::OnCompleted
// Il2CppName: OnCompleted
// Cannot perform method pointer template specialization from operators!
