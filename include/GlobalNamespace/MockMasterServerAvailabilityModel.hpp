// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMasterServerAvailabilityModel
#include "GlobalNamespace/IMasterServerAvailabilityModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockMasterServerAvailabilityModel
  class MockMasterServerAvailabilityModel : public ::Il2CppObject/*, public GlobalNamespace::IMasterServerAvailabilityModel*/ {
    public:
    // [InjectAttribute] Offset: 0xD3D150
    // private readonly MultiplayerMockSettings _mockSettings
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerMockSettings*) == 0x8);
    // Creating value type constructor for type: MockMasterServerAvailabilityModel
    MockMasterServerAvailabilityModel(GlobalNamespace::MultiplayerMockSettings* mockSettings_ = {}) noexcept : mockSettings{mockSettings_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMasterServerAvailabilityModel
    operator GlobalNamespace::IMasterServerAvailabilityModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMasterServerAvailabilityModel*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::MultiplayerMockSettings*
    constexpr operator GlobalNamespace::MultiplayerMockSettings*() const noexcept {
      return mockSettings;
    }
    // public System.Threading.Tasks.Task`1<MasterServerAvailabilityData> GetAvailabilityAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFB610C
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* GetAvailabilityAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xFB618C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockMasterServerAvailabilityModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMasterServerAvailabilityModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockMasterServerAvailabilityModel*, creationType>()));
    }
  }; // MockMasterServerAvailabilityModel
  #pragma pack(pop)
  static check_size<sizeof(MockMasterServerAvailabilityModel), 16 + sizeof(GlobalNamespace::MultiplayerMockSettings*)> __GlobalNamespace_MockMasterServerAvailabilityModelSizeCheck;
  static_assert(sizeof(MockMasterServerAvailabilityModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMasterServerAvailabilityModel*, "", "MockMasterServerAvailabilityModel");
