// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifierParamsSO
  class GameplayModifierParamsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // [LocalizationKeyAttribute] Offset: 0xE162C0
    // private System.String _modifierNameLocalizationKey
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* modifierNameLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0xE162F8
    // private System.String _descriptionLocalizationKey
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* descriptionLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _multiplier
    // Size: 0x4
    // Offset: 0x28
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _multiplierConditionallyValid
    // Size: 0x1
    // Offset: 0x2C
    bool multiplierConditionallyValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: multiplierConditionallyValid and: icon
    char __padding3[0x3] = {};
    // private UnityEngine.Sprite _icon
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private GameplayModifierParamsSO[] _mutuallyExclusives
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* mutuallyExclusives;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // private GameplayModifierParamsSO[] _requires
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* _requires;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // private GameplayModifierParamsSO[] _requiredBy
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* requiredBy;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // private System.Boolean _isInBeta
    // Size: 0x1
    // Offset: 0x50
    bool isInBeta;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameplayModifierParamsSO
    GameplayModifierParamsSO(::Il2CppString* modifierNameLocalizationKey_ = {}, ::Il2CppString* descriptionLocalizationKey_ = {}, float multiplier_ = {}, bool multiplierConditionallyValid_ = {}, UnityEngine::Sprite* icon_ = {}, ::Array<GlobalNamespace::GameplayModifierParamsSO*>* mutuallyExclusives_ = {}, ::Array<GlobalNamespace::GameplayModifierParamsSO*>* _requires_ = {}, ::Array<GlobalNamespace::GameplayModifierParamsSO*>* requiredBy_ = {}, bool isInBeta_ = {}) noexcept : modifierNameLocalizationKey{modifierNameLocalizationKey_}, descriptionLocalizationKey{descriptionLocalizationKey_}, multiplier{multiplier_}, multiplierConditionallyValid{multiplierConditionallyValid_}, icon{icon_}, mutuallyExclusives{mutuallyExclusives_}, _requires{_requires_}, requiredBy{requiredBy_}, isInBeta{isInBeta_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_modifierNameLocalizationKey()
    // Offset: 0x1089604
    ::Il2CppString* get_modifierNameLocalizationKey();
    // public System.String get_descriptionLocalizationKey()
    // Offset: 0x108960C
    ::Il2CppString* get_descriptionLocalizationKey();
    // public System.Single get_multiplier()
    // Offset: 0x1089614
    float get_multiplier();
    // public System.Boolean get_multiplierConditionallyValid()
    // Offset: 0x108961C
    bool get_multiplierConditionallyValid();
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x1089624
    UnityEngine::Sprite* get_icon();
    // public GameplayModifierParamsSO[] get_mutuallyExclusives()
    // Offset: 0x108962C
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* get_mutuallyExclusives();
    // public GameplayModifierParamsSO[] get_requires()
    // Offset: 0x1089634
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* get_requires();
    // public GameplayModifierParamsSO[] get_requiredBy()
    // Offset: 0x108963C
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* get_requiredBy();
    // public System.Boolean get_isInBeta()
    // Offset: 0x1089644
    bool get_isInBeta();
    // public System.Void .ctor()
    // Offset: 0x108964C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifierParamsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifierParamsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifierParamsSO*, creationType>()));
    }
  }; // GameplayModifierParamsSO
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifierParamsSO), 80 + sizeof(bool)> __GlobalNamespace_GameplayModifierParamsSOSizeCheck;
  static_assert(sizeof(GameplayModifierParamsSO) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierParamsSO*, "", "GameplayModifierParamsSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_modifierNameLocalizationKey
// Il2CppName: get_modifierNameLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_modifierNameLocalizationKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_modifierNameLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_descriptionLocalizationKey
// Il2CppName: get_descriptionLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_descriptionLocalizationKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_descriptionLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_multiplier
// Il2CppName: get_multiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_multiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_multiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_multiplierConditionallyValid
// Il2CppName: get_multiplierConditionallyValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_multiplierConditionallyValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_multiplierConditionallyValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_icon
// Il2CppName: get_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_icon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_mutuallyExclusives
// Il2CppName: get_mutuallyExclusives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::GameplayModifierParamsSO*>* (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_mutuallyExclusives)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_mutuallyExclusives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_requires
// Il2CppName: get_requires
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::GameplayModifierParamsSO*>* (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_requires)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_requires", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_requiredBy
// Il2CppName: get_requiredBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::GameplayModifierParamsSO*>* (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_requiredBy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_requiredBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::get_isInBeta
// Il2CppName: get_isInBeta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifierParamsSO::*)()>(&GlobalNamespace::GameplayModifierParamsSO::get_isInBeta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierParamsSO*), "get_isInBeta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierParamsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
