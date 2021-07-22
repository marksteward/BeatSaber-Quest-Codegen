// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.UIItemsList`1
#include "HMUI/UIItemsList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameplayModifierInfoListItemsList
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayModifierInfoListItemsList : public HMUI::UIItemsList_1<GlobalNamespace::GameplayModifierInfoListItem*> {
    public:
    // Creating value type constructor for type: GameplayModifierInfoListItemsList
    GameplayModifierInfoListItemsList() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x10B1648
    // Implemented from: HMUI.UIItemsList`1
    // Base method: System.Void UIItemsList_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifierInfoListItemsList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifierInfoListItemsList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifierInfoListItemsList*, creationType>()));
    }
  }; // GameplayModifierInfoListItemsList
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierInfoListItemsList*, "", "GameplayModifierInfoListItemsList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierInfoListItemsList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
