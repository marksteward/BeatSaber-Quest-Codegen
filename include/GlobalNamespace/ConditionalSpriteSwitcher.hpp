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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ConditionalSpriteSwitcher
  class ConditionalSpriteSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xE2050C
    // private UnityEngine.Sprite _sprite0
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* sprite0;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Material _material0
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material0;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // [HeaderAttribute] Offset: 0xE20568
    // private UnityEngine.Sprite _sprite1
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* sprite1;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Material _material1
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* material1;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // [SpaceAttribute] Offset: 0xE205C4
    // private BoolSO _value
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BoolSO* value;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // Creating value type constructor for type: ConditionalSpriteSwitcher
    ConditionalSpriteSwitcher(UnityEngine::Sprite* sprite0_ = {}, UnityEngine::Material* material0_ = {}, UnityEngine::Sprite* sprite1_ = {}, UnityEngine::Material* material1_ = {}, GlobalNamespace::BoolSO* value_ = {}, UnityEngine::SpriteRenderer* spriteRenderer_ = {}) noexcept : sprite0{sprite0_}, material0{material0_}, sprite1{sprite1_}, material1{material1_}, value{value_}, spriteRenderer{spriteRenderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Sprite get_falseSprite()
    // Offset: 0x1195788
    UnityEngine::Sprite* get_falseSprite();
    // public System.Void set_falseSprite(UnityEngine.Sprite value)
    // Offset: 0x1195790
    void set_falseSprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_trueSprite()
    // Offset: 0x1195798
    UnityEngine::Sprite* get_trueSprite();
    // public System.Void set_trueSprite(UnityEngine.Sprite value)
    // Offset: 0x11957A0
    void set_trueSprite(UnityEngine::Sprite* value);
    // protected System.Void Awake()
    // Offset: 0x11957A8
    void Awake();
    // public System.Void Apply()
    // Offset: 0x11957AC
    void Apply();
    // public System.Void .ctor()
    // Offset: 0x1195854
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalSpriteSwitcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConditionalSpriteSwitcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalSpriteSwitcher*, creationType>()));
    }
  }; // ConditionalSpriteSwitcher
  #pragma pack(pop)
  static check_size<sizeof(ConditionalSpriteSwitcher), 64 + sizeof(UnityEngine::SpriteRenderer*)> __GlobalNamespace_ConditionalSpriteSwitcherSizeCheck;
  static_assert(sizeof(ConditionalSpriteSwitcher) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalSpriteSwitcher*, "", "ConditionalSpriteSwitcher");
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::get_falseSprite
// Il2CppName: get_falseSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::get_falseSprite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "get_falseSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::set_falseSprite
// Il2CppName: set_falseSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)(UnityEngine::Sprite*)>(&GlobalNamespace::ConditionalSpriteSwitcher::set_falseSprite)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "set_falseSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::get_trueSprite
// Il2CppName: get_trueSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::get_trueSprite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "get_trueSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::set_trueSprite
// Il2CppName: set_trueSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)(UnityEngine::Sprite*)>(&GlobalNamespace::ConditionalSpriteSwitcher::set_trueSprite)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "set_trueSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&GlobalNamespace::ConditionalSpriteSwitcher::Apply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalSpriteSwitcher*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalSpriteSwitcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
