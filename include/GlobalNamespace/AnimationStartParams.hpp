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
  // Forward declaring type: Animation
  class Animation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AnimationStartParams
  class AnimationStartParams : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _timeOffset
    // Size: 0x4
    // Offset: 0x18
    float timeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x1C
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // Creating value type constructor for type: AnimationStartParams
    AnimationStartParams(float timeOffset_ = {}, float speed_ = {}, UnityEngine::Animation* animation_ = {}) noexcept : timeOffset{timeOffset_}, speed{speed_}, animation{animation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x123E954
    void Start();
    // public System.Void .ctor()
    // Offset: 0x123EBA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationStartParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AnimationStartParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationStartParams*, creationType>()));
    }
  }; // AnimationStartParams
  #pragma pack(pop)
  static check_size<sizeof(AnimationStartParams), 32 + sizeof(UnityEngine::Animation*)> __GlobalNamespace_AnimationStartParamsSizeCheck;
  static_assert(sizeof(AnimationStartParams) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnimationStartParams*, "", "AnimationStartParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnimationStartParams::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnimationStartParams::*)()>(&GlobalNamespace::AnimationStartParams::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnimationStartParams*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnimationStartParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
