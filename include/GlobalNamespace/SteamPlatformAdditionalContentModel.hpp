// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: AdditionalContentModel/UpdateEntitlementsResult
#include "GlobalNamespace/AdditionalContentModel_UpdateEntitlementsResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SteamLevelProductsModelSO
  class SteamLevelProductsModelSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: SteamPlatformAdditionalContentModel
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamPlatformAdditionalContentModel : public GlobalNamespace::AdditionalContentModel {
    public:
    // Nested type: GlobalNamespace::SteamPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__6
    struct $GetLevelEntitlementStatusInternalAsync$d__6;
    // Nested type: GlobalNamespace::SteamPlatformAdditionalContentModel::$GetPackEntitlementStatusInternalAsync$d__7
    struct $GetPackEntitlementStatusInternalAsync$d__7;
    // Nested type: GlobalNamespace::SteamPlatformAdditionalContentModel::$DataIsValidAsync$d__8
    struct $DataIsValidAsync$d__8;
    // Nested type: GlobalNamespace::SteamPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__9
    struct $OpenLevelProductStoreAsync$d__9;
    // Nested type: GlobalNamespace::SteamPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10
    struct $OpenLevelPackProductStoreAsync$d__10;
    // Nested type: GlobalNamespace::SteamPlatformAdditionalContentModel::$CheckForNewEntitlementsAsync$d__14
    struct $CheckForNewEntitlementsAsync$d__14;
    // [InjectAttribute] Offset: 0xE00384
    // private SteamLevelProductsModelSO _steamLevelProductsModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamLevelProductsModelSO*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.UInt32> _entitlementsAppIds
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::HashSet_1<uint>* entitlementsAppIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<uint>*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> _dataIsValidTaskCompletionSource
    // Size: 0x8
    // Offset: 0x38
    System::Threading::Tasks::TaskCompletionSource_1<bool>* dataIsValidTaskCompletionSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // private System.Threading.SemaphoreSlim _semaphoreSlim
    // Size: 0x8
    // Offset: 0x40
    System::Threading::SemaphoreSlim* semaphoreSlim;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim*) == 0x8);
    // private System.Boolean _isDataValid
    // Size: 0x1
    // Offset: 0x48
    bool isDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SteamPlatformAdditionalContentModel
    SteamPlatformAdditionalContentModel(GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel_ = {}, System::Collections::Generic::HashSet_1<uint>* entitlementsAppIds_ = {}, System::Threading::Tasks::TaskCompletionSource_1<bool>* dataIsValidTaskCompletionSource_ = {}, System::Threading::SemaphoreSlim* semaphoreSlim_ = {}, bool isDataValid_ = {}) noexcept : steamLevelProductsModel{steamLevelProductsModel_}, entitlementsAppIds{entitlementsAppIds_}, dataIsValidTaskCompletionSource{dataIsValidTaskCompletionSource_}, semaphoreSlim{semaphoreSlim_}, isDataValid{isDataValid_} {}
    // Get instance field: private SteamLevelProductsModelSO _steamLevelProductsModel
    GlobalNamespace::SteamLevelProductsModelSO* _get__steamLevelProductsModel();
    // Set instance field: private SteamLevelProductsModelSO _steamLevelProductsModel
    void _set__steamLevelProductsModel(GlobalNamespace::SteamLevelProductsModelSO* value);
    // Get instance field: private System.Collections.Generic.HashSet`1<System.UInt32> _entitlementsAppIds
    System::Collections::Generic::HashSet_1<uint>* _get__entitlementsAppIds();
    // Set instance field: private System.Collections.Generic.HashSet`1<System.UInt32> _entitlementsAppIds
    void _set__entitlementsAppIds(System::Collections::Generic::HashSet_1<uint>* value);
    // Get instance field: private System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> _dataIsValidTaskCompletionSource
    System::Threading::Tasks::TaskCompletionSource_1<bool>* _get__dataIsValidTaskCompletionSource();
    // Set instance field: private System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> _dataIsValidTaskCompletionSource
    void _set__dataIsValidTaskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<bool>* value);
    // Get instance field: private System.Threading.SemaphoreSlim _semaphoreSlim
    System::Threading::SemaphoreSlim* _get__semaphoreSlim();
    // Set instance field: private System.Threading.SemaphoreSlim _semaphoreSlim
    void _set__semaphoreSlim(System::Threading::SemaphoreSlim* value);
    // Get instance field: private System.Boolean _isDataValid
    bool _get__isDataValid();
    // Set instance field: private System.Boolean _isDataValid
    void _set__isDataValid(bool value);
    // private System.Threading.Tasks.Task`1<System.Boolean> DataIsValidAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10674DC
    System::Threading::Tasks::Task_1<bool>* DataIsValidAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Void OpenProductStore(System.UInt32 appId)
    // Offset: 0x1067830
    void OpenProductStore(uint appId);
    // private System.Void OpenBundleUrl(System.UInt32 bundleId)
    // Offset: 0x1067838
    void OpenBundleUrl(uint bundleId);
    // private System.Threading.Tasks.Task`1<AdditionalContentModel/UpdateEntitlementsResult> CheckForNewEntitlementsAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10678AC
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* CheckForNewEntitlementsAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Boolean HasLevelEntitlement(System.String levelId)
    // Offset: 0x10679AC
    bool HasLevelEntitlement(::Il2CppString* levelId);
    // private System.Boolean HasLevelPackEntitlement(System.String levelPackId)
    // Offset: 0x1067A3C
    bool HasLevelPackEntitlement(::Il2CppString* levelPackId);
    // public System.Void .ctor()
    // Offset: 0x1067B14
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamPlatformAdditionalContentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamPlatformAdditionalContentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamPlatformAdditionalContentModel*, creationType>()));
    }
    // protected override System.Void InvalidateDataInternal()
    // Offset: 0x10672AC
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::InvalidateDataInternal()
    void InvalidateDataInternal();
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10672B4
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::Il2CppString* levelId, System::Threading::CancellationToken cancellationToken);
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusInternalAsync(System.String packId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10673C8
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetPackEntitlementStatusInternalAsync(System.String packId, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::Il2CppString* packId, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0x10675E8
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelProductStoreAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x106770C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x1067840
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> AdditionalContentModel::IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
  }; // SteamPlatformAdditionalContentModel
  #pragma pack(pop)
  static check_size<sizeof(SteamPlatformAdditionalContentModel), 72 + sizeof(bool)> __GlobalNamespace_SteamPlatformAdditionalContentModelSizeCheck;
  static_assert(sizeof(SteamPlatformAdditionalContentModel) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamPlatformAdditionalContentModel*, "", "SteamPlatformAdditionalContentModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::DataIsValidAsync
// Il2CppName: DataIsValidAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::DataIsValidAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "DataIsValidAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::OpenProductStore
// Il2CppName: OpenProductStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(uint)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::OpenProductStore)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "OpenProductStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::OpenBundleUrl
// Il2CppName: OpenBundleUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(uint)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::OpenBundleUrl)> {
  static const MethodInfo* get() {
    static auto* bundleId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "OpenBundleUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bundleId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::CheckForNewEntitlementsAsync
// Il2CppName: CheckForNewEntitlementsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::CheckForNewEntitlementsAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "CheckForNewEntitlementsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelEntitlement
// Il2CppName: HasLevelEntitlement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::Il2CppString*)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelEntitlement)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "HasLevelEntitlement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelPackEntitlement
// Il2CppName: HasLevelPackEntitlement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::Il2CppString*)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelPackEntitlement)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "HasLevelPackEntitlement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::InvalidateDataInternal
// Il2CppName: InvalidateDataInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamPlatformAdditionalContentModel::*)()>(&GlobalNamespace::SteamPlatformAdditionalContentModel::InvalidateDataInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "InvalidateDataInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync
// Il2CppName: GetLevelEntitlementStatusInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::Il2CppString*, System::Threading::CancellationToken)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "GetLevelEntitlementStatusInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync
// Il2CppName: GetPackEntitlementStatusInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::Il2CppString*, System::Threading::CancellationToken)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  static const MethodInfo* get() {
    static auto* packId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "GetPackEntitlementStatusInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packId, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelProductStoreAsync
// Il2CppName: OpenLevelProductStoreAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::Il2CppString*, System::Threading::CancellationToken)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "OpenLevelProductStoreAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, token});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync
// Il2CppName: OpenLevelPackProductStoreAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::Il2CppString*, System::Threading::CancellationToken)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId, token});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync
// Il2CppName: IsPackBetterBuyThanLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* (GlobalNamespace::SteamPlatformAdditionalContentModel::*)(::Il2CppString*, System::Threading::CancellationToken)>(&GlobalNamespace::SteamPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamPlatformAdditionalContentModel*), "IsPackBetterBuyThanLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId, token});
  }
};
