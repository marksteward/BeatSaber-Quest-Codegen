// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/<>c__DisplayClass92_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::$$c__DisplayClass92_0 : public ::Il2CppObject {
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
    // Creating value type constructor for type: $$c__DisplayClass92_0
    $$c__DisplayClass92_0(bool clearCurrentList_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this_ = {}) noexcept : clearCurrentList{clearCurrentList_}, $$4__this{$$4__this_} {}
    // Get instance field: public System.Boolean clearCurrentList
    bool _get_clearCurrentList();
    // Set instance field: public System.Boolean clearCurrentList
    void _set_clearCurrentList(bool value);
    // Get instance field: public UnifiedNetworkPlayerModel <>4__this
    GlobalNamespace::UnifiedNetworkPlayerModel* _get_$$4__this();
    // Set instance field: public UnifiedNetworkPlayerModel <>4__this
    void _set_$$4__this(GlobalNamespace::UnifiedNetworkPlayerModel* value);
    // System.Void <Refresh>b__0(System.Collections.Generic.IReadOnlyList`1<PublicServerInfo> servers)
    // Offset: 0x2067488
    void $Refresh$b__0(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>* servers);
    // System.Void <Refresh>b__1(ConnectionFailedReason reason)
    // Offset: 0x206782C
    void $Refresh$b__1(GlobalNamespace::ConnectionFailedReason reason);
    // public System.Void .ctor()
    // Offset: 0x2065E40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::$$c__DisplayClass92_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::$$c__DisplayClass92_0*, creationType>()));
    }
  }; // UnifiedNetworkPlayerModel/<>c__DisplayClass92_0
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::$$c__DisplayClass92_0), 24 + sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*)> __GlobalNamespace_UnifiedNetworkPlayerModel_$$c__DisplayClass92_0SizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::$$c__DisplayClass92_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0*, "", "UnifiedNetworkPlayerModel/<>c__DisplayClass92_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::$Refresh$b__0
// Il2CppName: <Refresh>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>*)>(&GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::$Refresh$b__0)> {
  static const MethodInfo* get() {
    static auto* servers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PublicServerInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0*), "<Refresh>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{servers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::$Refresh$b__1
// Il2CppName: <Refresh>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::$Refresh$b__1)> {
  static const MethodInfo* get() {
    static auto* reason = &::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0*), "<Refresh>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass92_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
