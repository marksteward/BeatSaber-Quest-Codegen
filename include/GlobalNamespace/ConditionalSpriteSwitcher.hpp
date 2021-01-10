// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: ConditionalSpriteSwitcher
  // [] Offset: FFFFFFFF
  class ConditionalSpriteSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xDCBCD8
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
    // [HeaderAttribute] Offset: 0xDCBD34
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
    // [SpaceAttribute] Offset: 0xDCBD90
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
    // public System.Void Awake()
    // Offset: 0x1A53A0C
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1A53AB4
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
  static check_size<sizeof(ConditionalSpriteSwitcher), 64 + sizeof(UnityEngine::SpriteRenderer*)> __GlobalNamespace_ConditionalSpriteSwitcherSizeCheck;
  static_assert(sizeof(ConditionalSpriteSwitcher) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalSpriteSwitcher*, "", "ConditionalSpriteSwitcher");
#pragma pack(pop)
