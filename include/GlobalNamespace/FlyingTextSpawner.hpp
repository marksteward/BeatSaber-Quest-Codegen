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
// Including type: FlyingTextEffect
#include "GlobalNamespace/FlyingTextEffect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FlyingTextSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingTextSpawner : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IFlyingObjectEffectDidFinishEvent*/ {
    public:
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x18
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _xSpread
    // Size: 0x4
    // Offset: 0x1C
    float xSpread;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetYPos
    // Size: 0x4
    // Offset: 0x20
    float targetYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetZPos
    // Size: 0x4
    // Offset: 0x24
    float targetZPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _fontSize
    // Size: 0x4
    // Offset: 0x38
    float fontSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _shake
    // Size: 0x1
    // Offset: 0x3C
    bool shake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shake and: flyingTextEffectPool
    char __padding6[0x3] = {};
    // [InjectAttribute] Offset: 0xE042C0
    // private readonly FlyingTextEffect/Pool _flyingTextEffectPool
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::FlyingTextEffect::Pool* flyingTextEffectPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingTextEffect::Pool*) == 0x8);
    // Creating value type constructor for type: FlyingTextSpawner
    FlyingTextSpawner(float duration_ = {}, float xSpread_ = {}, float targetYPos_ = {}, float targetZPos_ = {}, UnityEngine::Color color_ = {}, float fontSize_ = {}, bool shake_ = {}, GlobalNamespace::FlyingTextEffect::Pool* flyingTextEffectPool_ = {}) noexcept : duration{duration_}, xSpread{xSpread_}, targetYPos{targetYPos_}, targetZPos{targetZPos_}, color{color_}, fontSize{fontSize_}, shake{shake_}, flyingTextEffectPool{flyingTextEffectPool_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent
    operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Single _duration
    float _get__duration();
    // Set instance field: private System.Single _duration
    void _set__duration(float value);
    // Get instance field: private System.Single _xSpread
    float _get__xSpread();
    // Set instance field: private System.Single _xSpread
    void _set__xSpread(float value);
    // Get instance field: private System.Single _targetYPos
    float _get__targetYPos();
    // Set instance field: private System.Single _targetYPos
    void _set__targetYPos(float value);
    // Get instance field: private System.Single _targetZPos
    float _get__targetZPos();
    // Set instance field: private System.Single _targetZPos
    void _set__targetZPos(float value);
    // Get instance field: private UnityEngine.Color _color
    UnityEngine::Color _get__color();
    // Set instance field: private UnityEngine.Color _color
    void _set__color(UnityEngine::Color value);
    // Get instance field: private System.Single _fontSize
    float _get__fontSize();
    // Set instance field: private System.Single _fontSize
    void _set__fontSize(float value);
    // Get instance field: private System.Boolean _shake
    bool _get__shake();
    // Set instance field: private System.Boolean _shake
    void _set__shake(bool value);
    // Get instance field: private readonly FlyingTextEffect/Pool _flyingTextEffectPool
    GlobalNamespace::FlyingTextEffect::Pool* _get__flyingTextEffectPool();
    // Set instance field: private readonly FlyingTextEffect/Pool _flyingTextEffectPool
    void _set__flyingTextEffectPool(GlobalNamespace::FlyingTextEffect::Pool* value);
    // public System.Void SpawnText(UnityEngine.Vector3 pos, UnityEngine.Quaternion rotation, UnityEngine.Quaternion inverseRotation, System.String text)
    // Offset: 0x102B97C
    void SpawnText(UnityEngine::Vector3 pos, UnityEngine::Quaternion rotation, UnityEngine::Quaternion inverseRotation, ::Il2CppString* text);
    // public System.Void HandleFlyingObjectEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0x102BBB4
    void HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
    // public System.Void .ctor()
    // Offset: 0x102BCD0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingTextSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingTextSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingTextSpawner*, creationType>()));
    }
  }; // FlyingTextSpawner
  #pragma pack(pop)
  static check_size<sizeof(FlyingTextSpawner), 64 + sizeof(GlobalNamespace::FlyingTextEffect::Pool*)> __GlobalNamespace_FlyingTextSpawnerSizeCheck;
  static_assert(sizeof(FlyingTextSpawner) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingTextSpawner*, "", "FlyingTextSpawner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingTextSpawner::SpawnText
// Il2CppName: SpawnText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextSpawner::*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Quaternion, ::Il2CppString*)>(&GlobalNamespace::FlyingTextSpawner::SpawnText)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* inverseRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingTextSpawner*), "SpawnText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, rotation, inverseRotation, text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish
// Il2CppName: HandleFlyingObjectEffectDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextSpawner::*)(GlobalNamespace::FlyingObjectEffect*)>(&GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish)> {
  static const MethodInfo* get() {
    static auto* flyingObjectEffect = &::il2cpp_utils::GetClassFromName("", "FlyingObjectEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingTextSpawner*), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flyingObjectEffect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingTextSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
