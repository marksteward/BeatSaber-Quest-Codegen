// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.IAsyncLocal
  class IAsyncLocal {
    public:
    // Creating value type constructor for type: IAsyncLocal
    IAsyncLocal() noexcept {}
    // public System.Void OnValueChanged(System.Object previousValue, System.Object currentValue, System.Boolean contextChanged)
    // Offset: 0xFFFFFFFF
    void OnValueChanged(::Il2CppObject* previousValue, ::Il2CppObject* currentValue, bool contextChanged);
  }; // System.Threading.IAsyncLocal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::IAsyncLocal*, "System.Threading", "IAsyncLocal");
// Writing MetadataGetter for method: System::Threading::IAsyncLocal::OnValueChanged
// Il2CppName: OnValueChanged
// Cannot perform method pointer template specialization from operators!
