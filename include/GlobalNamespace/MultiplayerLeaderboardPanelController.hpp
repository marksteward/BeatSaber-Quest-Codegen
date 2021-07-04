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
  // Forward declaring type: MultiplayerLeaderboardPanelItem
  class MultiplayerLeaderboardPanelItem;
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLeaderboardPanelController
  class MultiplayerLeaderboardPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private MultiplayerLeaderboardPanelItem[] _items
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::MultiplayerLeaderboardPanelItem*>* items;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MultiplayerLeaderboardPanelItem*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE1BAFC
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // Creating value type constructor for type: MultiplayerLeaderboardPanelController
    MultiplayerLeaderboardPanelController(::Array<GlobalNamespace::MultiplayerLeaderboardPanelItem*>* items_ = {}, GlobalNamespace::MultiplayerScoreProvider* scoreProvider_ = {}) noexcept : items{items_}, scoreProvider{scoreProvider_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1020698
    void Start();
    // protected System.Void Update()
    // Offset: 0x102073C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1020CD0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLeaderboardPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLeaderboardPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLeaderboardPanelController*, creationType>()));
    }
  }; // MultiplayerLeaderboardPanelController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLeaderboardPanelController), 32 + sizeof(GlobalNamespace::MultiplayerScoreProvider*)> __GlobalNamespace_MultiplayerLeaderboardPanelControllerSizeCheck;
  static_assert(sizeof(MultiplayerLeaderboardPanelController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLeaderboardPanelController*, "", "MultiplayerLeaderboardPanelController");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
