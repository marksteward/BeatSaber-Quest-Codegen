// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IHealthCheckService
  class IHealthCheckService/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IHealthCheckService
    IHealthCheckService() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate();
  }; // IHealthCheckService
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IHealthCheckService*, "", "IHealthCheckService");
// Writing MetadataGetter for method: GlobalNamespace::IHealthCheckService::PollUpdate
// Il2CppName: PollUpdate
// Cannot perform method pointer template specialization from operators!
