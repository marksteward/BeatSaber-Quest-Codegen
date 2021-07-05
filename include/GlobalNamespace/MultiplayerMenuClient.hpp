// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuPlayerController
  class MenuPlayerController;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerMenuClient
  class MultiplayerMenuClient : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE23F04
    // private readonly MenuPlayerController _menuPlayerController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MenuPlayerController* menuPlayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuPlayerController*) == 0x8);
    // [InjectAttribute] Offset: 0xE23F14
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerMenuClient
    MultiplayerMenuClient(GlobalNamespace::MenuPlayerController* menuPlayerController_ = {}, GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager_ = {}) noexcept : menuPlayerController{menuPlayerController_}, nodePoseSyncStateManager{nodePoseSyncStateManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void LateUpdate()
    // Offset: 0x102FEE4
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x103028C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerMenuClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerMenuClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerMenuClient*, creationType>()));
    }
  }; // MultiplayerMenuClient
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerMenuClient), 32 + sizeof(GlobalNamespace::INodePoseSyncStateManager*)> __GlobalNamespace_MultiplayerMenuClientSizeCheck;
  static_assert(sizeof(MultiplayerMenuClient) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerMenuClient*, "", "MultiplayerMenuClient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMenuClient::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMenuClient::*)()>(&GlobalNamespace::MultiplayerMenuClient::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMenuClient*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMenuClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
