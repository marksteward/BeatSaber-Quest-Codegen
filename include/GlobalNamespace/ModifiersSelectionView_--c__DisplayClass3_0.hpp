// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModifiersSelectionView
#include "GlobalNamespace/ModifiersSelectionView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: ModifiersSelectionView/<>c__DisplayClass3_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBFC74
  class ModifiersSelectionView::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParams
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParams;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParams_ = {}) noexcept : modifierParams{modifierParams_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*() const noexcept {
      return modifierParams;
    }
    // System.Void <SetGameplayModifiers>b__0(System.Int32 idx, GameplayModifierInfoListItem item)
    // Offset: 0xFA4EE4
    void $SetGameplayModifiers$b__0(int idx, GlobalNamespace::GameplayModifierInfoListItem* item);
    // public System.Void .ctor()
    // Offset: 0xFA4ED4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModifiersSelectionView::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ModifiersSelectionView::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModifiersSelectionView::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // ModifiersSelectionView/<>c__DisplayClass3_0
  static check_size<sizeof(ModifiersSelectionView::$$c__DisplayClass3_0), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*)> __GlobalNamespace_ModifiersSelectionView_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(ModifiersSelectionView::$$c__DisplayClass3_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ModifiersSelectionView::$$c__DisplayClass3_0*, "", "ModifiersSelectionView/<>c__DisplayClass3_0");
#pragma pack(pop)
