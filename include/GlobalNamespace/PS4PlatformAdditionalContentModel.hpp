// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PS4PlatformAdditionalContentModel
  class PS4PlatformAdditionalContentModel : public GlobalNamespace::AdditionalContentModel {
    public:
    // Creating value type constructor for type: PS4PlatformAdditionalContentModel
    PS4PlatformAdditionalContentModel() noexcept {}
    // protected override System.Void InvalidateDataInternal()
    // Offset: 0x104AAC8
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::InvalidateDataInternal()
    void InvalidateDataInternal();
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0x104AACC
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusInternalAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x104AB38
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetPackEntitlementStatusInternalAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x104ABA4
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> AdditionalContentModel::IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0x104AC10
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelProductStoreAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x104AC7C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public System.Void .ctor()
    // Offset: 0x104ACE8
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4PlatformAdditionalContentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4PlatformAdditionalContentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4PlatformAdditionalContentModel*, creationType>()));
    }
  }; // PS4PlatformAdditionalContentModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4PlatformAdditionalContentModel*, "", "PS4PlatformAdditionalContentModel");
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::InvalidateDataInternal
// Il2CppName: InvalidateDataInternal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync
// Il2CppName: GetLevelEntitlementStatusInternalAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync
// Il2CppName: GetPackEntitlementStatusInternalAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync
// Il2CppName: IsPackBetterBuyThanLevelAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::OpenLevelProductStoreAsync
// Il2CppName: OpenLevelProductStoreAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::OpenLevelPackProductStoreAsync
// Il2CppName: OpenLevelPackProductStoreAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
