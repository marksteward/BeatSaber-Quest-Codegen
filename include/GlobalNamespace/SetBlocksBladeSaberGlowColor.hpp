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
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: BlocksBlade
  class BlocksBlade;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SetBlocksBladeSaberGlowColor
  // [TokenAttribute] Offset: FFFFFFFF
  class SetBlocksBladeSaberGlowColor : public UnityEngine::MonoBehaviour {
    public:
    // private SaberTypeObject _saber
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberTypeObject* saber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private BlocksBlade _blocksBlade
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BlocksBlade* blocksBlade;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BlocksBlade*) == 0x8);
    // Creating value type constructor for type: SetBlocksBladeSaberGlowColor
    SetBlocksBladeSaberGlowColor(GlobalNamespace::SaberTypeObject* saber_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, GlobalNamespace::BlocksBlade* blocksBlade_ = {}) noexcept : saber{saber_}, colorManager{colorManager_}, blocksBlade{blocksBlade_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private SaberTypeObject _saber
    GlobalNamespace::SaberTypeObject* _get__saber();
    // Set instance field: private SaberTypeObject _saber
    void _set__saber(GlobalNamespace::SaberTypeObject* value);
    // Get instance field: private ColorManager _colorManager
    GlobalNamespace::ColorManager* _get__colorManager();
    // Set instance field: private ColorManager _colorManager
    void _set__colorManager(GlobalNamespace::ColorManager* value);
    // Get instance field: private BlocksBlade _blocksBlade
    GlobalNamespace::BlocksBlade* _get__blocksBlade();
    // Set instance field: private BlocksBlade _blocksBlade
    void _set__blocksBlade(GlobalNamespace::BlocksBlade* value);
    // protected System.Void Start()
    // Offset: 0x105237C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x10523C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetBlocksBladeSaberGlowColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetBlocksBladeSaberGlowColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetBlocksBladeSaberGlowColor*, creationType>()));
    }
  }; // SetBlocksBladeSaberGlowColor
  #pragma pack(pop)
  static check_size<sizeof(SetBlocksBladeSaberGlowColor), 40 + sizeof(GlobalNamespace::BlocksBlade*)> __GlobalNamespace_SetBlocksBladeSaberGlowColorSizeCheck;
  static_assert(sizeof(SetBlocksBladeSaberGlowColor) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetBlocksBladeSaberGlowColor*, "", "SetBlocksBladeSaberGlowColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetBlocksBladeSaberGlowColor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetBlocksBladeSaberGlowColor::*)()>(&GlobalNamespace::SetBlocksBladeSaberGlowColor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetBlocksBladeSaberGlowColor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetBlocksBladeSaberGlowColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
