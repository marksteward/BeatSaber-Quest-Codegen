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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassEffectSO
  class BloomPrePassEffectSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BloomPrePassEffectSO _bloomPrePassEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectSO*) == 0x8);
    // Creating value type constructor for type: BloomPrePassEffectContainerSO
    BloomPrePassEffectContainerSO(GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect_ = {}) noexcept : bloomPrePassEffect{bloomPrePassEffect_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BloomPrePassEffectSO get_bloomPrePassEffect()
    // Offset: 0x1D86B40
    GlobalNamespace::BloomPrePassEffectSO* get_bloomPrePassEffect();
    // public System.Void Init(BloomPrePassEffectSO bloomPrePassEffect)
    // Offset: 0x1D86B48
    void Init(GlobalNamespace::BloomPrePassEffectSO* bloomPrePassEffect);
    // public System.Void .ctor()
    // Offset: 0x1D86B50
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassEffectContainerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassEffectContainerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassEffectContainerSO*, creationType>()));
    }
  }; // BloomPrePassEffectContainerSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassEffectContainerSO), 24 + sizeof(GlobalNamespace::BloomPrePassEffectSO*)> __GlobalNamespace_BloomPrePassEffectContainerSOSizeCheck;
  static_assert(sizeof(BloomPrePassEffectContainerSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassEffectContainerSO*, "", "BloomPrePassEffectContainerSO");
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect
// Il2CppName: get_bloomPrePassEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BloomPrePassEffectSO* (GlobalNamespace::BloomPrePassEffectContainerSO::*)()>(&GlobalNamespace::BloomPrePassEffectContainerSO::get_bloomPrePassEffect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectContainerSO*), "get_bloomPrePassEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectContainerSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassEffectContainerSO::*)(GlobalNamespace::BloomPrePassEffectSO*)>(&GlobalNamespace::BloomPrePassEffectContainerSO::Init)> {
  const MethodInfo* get() {
    static auto* bloomPrePassEffect = &::il2cpp_utils::GetClassFromName("", "BloomPrePassEffectSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectContainerSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bloomPrePassEffect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectContainerSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
