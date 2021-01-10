// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: PublicServerInfo
#include "GlobalNamespace/PublicServerInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: UnifiedNetworkPlayerModel/<>c__DisplayClass94_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF1B4
  class UnifiedNetworkPlayerModel::$$c__DisplayClass94_0 : public ::Il2CppObject {
    public:
    // public System.Boolean clearCurrentList
    // Size: 0x1
    // Offset: 0x10
    bool clearCurrentList;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: clearCurrentList and: $$4__this
    char __padding0[0x7] = {};
    // public UnifiedNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass94_0
    $$c__DisplayClass94_0(bool clearCurrentList_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this_ = {}) noexcept : clearCurrentList{clearCurrentList_}, $$4__this{$$4__this_} {}
    // System.Void <Refresh>b__0(System.Collections.Generic.IReadOnlyList`1<PublicServerInfo> servers)
    // Offset: 0xFFADAC
    void $Refresh$b__0(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>* servers);
    // System.Void <Refresh>b__1(ConnectionFailedReason reason)
    // Offset: 0xFFB13C
    void $Refresh$b__1(GlobalNamespace::ConnectionFailedReason reason);
    // public System.Void .ctor()
    // Offset: 0xFF8B70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::$$c__DisplayClass94_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass94_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::$$c__DisplayClass94_0*, creationType>()));
    }
  }; // UnifiedNetworkPlayerModel/<>c__DisplayClass94_0
  static check_size<sizeof(UnifiedNetworkPlayerModel::$$c__DisplayClass94_0), 24 + sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*)> __GlobalNamespace_UnifiedNetworkPlayerModel_$$c__DisplayClass94_0SizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::$$c__DisplayClass94_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass94_0*, "", "UnifiedNetworkPlayerModel/<>c__DisplayClass94_0");
#pragma pack(pop)
