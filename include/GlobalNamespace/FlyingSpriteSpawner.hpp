// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IFlyingObjectEffectDidFinishEvent
#include "GlobalNamespace/IFlyingObjectEffectDidFinishEvent.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: FlyingSpriteEffect
#include "GlobalNamespace/FlyingSpriteEffect.hpp"
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
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: FlyingObjectEffect because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: FlyingSpriteSpawner
  class FlyingSpriteSpawner : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IFlyingObjectEffectDidFinishEvent*/ {
    public:
    // private UnityEngine.Sprite _sprite
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* sprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _xSpread
    // Size: 0x4
    // Offset: 0x2C
    float xSpread;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetYPos
    // Size: 0x4
    // Offset: 0x30
    float targetYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetZPos
    // Size: 0x4
    // Offset: 0x34
    float targetZPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _shake
    // Size: 0x1
    // Offset: 0x48
    bool shake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shake and: flyingSpriteEffectPool
    char __padding7[0x7] = {};
    // [InjectAttribute] Offset: 0xE19D54
    // private readonly FlyingSpriteEffect/Pool _flyingSpriteEffectPool
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::FlyingSpriteEffect::Pool* flyingSpriteEffectPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingSpriteEffect::Pool*) == 0x8);
    // Creating value type constructor for type: FlyingSpriteSpawner
    FlyingSpriteSpawner(UnityEngine::Sprite* sprite_ = {}, UnityEngine::Material* material_ = {}, float duration_ = {}, float xSpread_ = {}, float targetYPos_ = {}, float targetZPos_ = {}, UnityEngine::Color color_ = {}, bool shake_ = {}, GlobalNamespace::FlyingSpriteEffect::Pool* flyingSpriteEffectPool_ = {}) noexcept : sprite{sprite_}, material{material_}, duration{duration_}, xSpread{xSpread_}, targetYPos{targetYPos_}, targetZPos{targetZPos_}, color{color_}, shake{shake_}, flyingSpriteEffectPool{flyingSpriteEffectPool_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent
    operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SpawnFlyingSprite(UnityEngine.Vector3 pos, UnityEngine.Quaternion rotation, UnityEngine.Quaternion inverseRotation)
    // Offset: 0x107BB80
    void SpawnFlyingSprite(UnityEngine::Vector3 pos, UnityEngine::Quaternion rotation, UnityEngine::Quaternion inverseRotation);
    // public System.Void HandleFlyingObjectEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0x107BDF0
    void HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
    // public System.Void .ctor()
    // Offset: 0x107BF0C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingSpriteSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingSpriteSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingSpriteSpawner*, creationType>()));
    }
  }; // FlyingSpriteSpawner
  #pragma pack(pop)
  static check_size<sizeof(FlyingSpriteSpawner), 80 + sizeof(GlobalNamespace::FlyingSpriteEffect::Pool*)> __GlobalNamespace_FlyingSpriteSpawnerSizeCheck;
  static_assert(sizeof(FlyingSpriteSpawner) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingSpriteSpawner*, "", "FlyingSpriteSpawner");
// Writing MetadataGetter for method: GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite
// Il2CppName: SpawnFlyingSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::FlyingSpriteSpawner::HandleFlyingObjectEffectDidFinish
// Il2CppName: HandleFlyingObjectEffectDidFinish
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::FlyingSpriteSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
