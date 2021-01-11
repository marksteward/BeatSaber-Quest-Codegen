// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimatorUpdateMode
  struct AnimatorUpdateMode;
  // Forward declaring type: StateMachineBehaviour
  class StateMachineBehaviour;
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: StateInfoIndex
  struct StateInfoIndex;
  // Forward declaring type: AnimatorStateInfo
  struct AnimatorStateInfo;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: HumanBodyBones
  struct HumanBodyBones;
  // Forward declaring type: AnimatorCullingMode
  struct AnimatorCullingMode;
  // Forward declaring type: RuntimeAnimatorController
  class RuntimeAnimatorController;
  // Forward declaring type: Avatar
  class Avatar;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animator
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D61EE8
  // [NativeHeaderAttribute] Offset: D61EE8
  // [UsedByNativeCodeAttribute] Offset: D61EE8
  // [NativeHeaderAttribute] Offset: D61EE8
  class Animator : public UnityEngine::Behaviour {
    public:
    // Creating value type constructor for type: Animator
    Animator() noexcept {}
    // public System.Boolean get_isHuman()
    // Offset: 0x19CA63C
    bool get_isHuman();
    // public System.Boolean get_hasRootMotion()
    // Offset: 0x19CA67C
    bool get_hasRootMotion();
    // public System.Single get_humanScale()
    // Offset: 0x19CA6BC
    float get_humanScale();
    // public System.Boolean GetBool(System.Int32 id)
    // Offset: 0x19CA6FC
    bool GetBool(int id);
    // public System.Void SetBool(System.String name, System.Boolean value)
    // Offset: 0x19CA79C
    void SetBool(::Il2CppString* name, bool value);
    // public System.Void SetBool(System.Int32 id, System.Boolean value)
    // Offset: 0x19CA84C
    void SetBool(int id, bool value);
    // public System.Void SetTrigger(System.String name)
    // Offset: 0x19CA8FC
    void SetTrigger(::Il2CppString* name);
    // public System.Void SetTrigger(System.Int32 id)
    // Offset: 0x19CA99C
    void SetTrigger(int id);
    // public System.Void ResetTrigger(System.String name)
    // Offset: 0x19CAA3C
    void ResetTrigger(::Il2CppString* name);
    // public System.Void set_applyRootMotion(System.Boolean value)
    // Offset: 0x19CAADC
    void set_applyRootMotion(bool value);
    // public UnityEngine.AnimatorUpdateMode get_updateMode()
    // Offset: 0x19CAB2C
    UnityEngine::AnimatorUpdateMode get_updateMode();
    // public System.Void set_updateMode(UnityEngine.AnimatorUpdateMode value)
    // Offset: 0x19CAB6C
    void set_updateMode(UnityEngine::AnimatorUpdateMode value);
    // static private T[] ConvertStateMachineBehaviour(UnityEngine.ScriptableObject[] rawObjects)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* ConvertStateMachineBehaviour(::Array<UnityEngine::ScriptableObject*>* rawObjects) {
      static_assert(std::is_convertible_v<T, UnityEngine::StateMachineBehaviour*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Animator::ConvertStateMachineBehaviour");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Animator", "ConvertStateMachineBehaviour", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(rawObjects)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, rawObjects);
    }
    // public T[] GetBehaviours()
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetBehaviours() {
      static_assert(std::is_convertible_v<T, UnityEngine::StateMachineBehaviour*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Animator::GetBehaviours");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetBehaviours", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method);
    }
    // UnityEngine.ScriptableObject[] InternalGetBehaviours(System.Type type)
    // Offset: 0x19CABBC
    ::Array<UnityEngine::ScriptableObject*>* InternalGetBehaviours(System::Type* type);
    // private System.Void GetAnimatorStateInfo(System.Int32 layerIndex, UnityEngine.StateInfoIndex stateInfoIndex, out UnityEngine.AnimatorStateInfo info)
    // Offset: 0x19CAC0C
    void GetAnimatorStateInfo(int layerIndex, UnityEngine::StateInfoIndex stateInfoIndex, UnityEngine::AnimatorStateInfo& info);
    // public UnityEngine.AnimatorStateInfo GetCurrentAnimatorStateInfo(System.Int32 layerIndex)
    // Offset: 0x19CAC74
    UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int layerIndex);
    // public System.Void set_speed(System.Single value)
    // Offset: 0x19CAD00
    void set_speed(float value);
    // public System.Void CrossFade(System.String stateName, System.Single normalizedTransitionDuration, System.Int32 layer, System.Single normalizedTimeOffset)
    // Offset: 0x19CAD50
    void CrossFade(::Il2CppString* stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset);
    // public System.Void CrossFade(System.String stateName, System.Single normalizedTransitionDuration, System.Int32 layer)
    // Offset: 0x19CAE04
    void CrossFade(::Il2CppString* stateName, float normalizedTransitionDuration, int layer);
    // public System.Void CrossFade(System.String stateName, System.Single normalizedTransitionDuration, System.Int32 layer, System.Single normalizedTimeOffset, System.Single normalizedTransitionTime)
    // Offset: 0x19CAD58
    void CrossFade(::Il2CppString* stateName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset, float normalizedTransitionTime);
    // public System.Void CrossFade(System.Int32 stateHashName, System.Single normalizedTransitionDuration, System.Int32 layer, System.Single normalizedTimeOffset, System.Single normalizedTransitionTime)
    // Offset: 0x19CAE54
    void CrossFade(int stateHashName, float normalizedTransitionDuration, int layer, float normalizedTimeOffset, float normalizedTransitionTime);
    // public System.Void Play(System.String stateName, System.Int32 layer, System.Single normalizedTime)
    // Offset: 0x19CAED4
    void Play(::Il2CppString* stateName, int layer, float normalizedTime);
    // public System.Void Play(System.Int32 stateNameHash, System.Int32 layer, System.Single normalizedTime)
    // Offset: 0x19CAF68
    void Play(int stateNameHash, int layer, float normalizedTime);
    // public UnityEngine.Transform GetBoneTransform(UnityEngine.HumanBodyBones humanBoneId)
    // Offset: 0x19CAFD0
    UnityEngine::Transform* GetBoneTransform(UnityEngine::HumanBodyBones humanBoneId);
    // UnityEngine.Transform GetBoneTransformInternal(System.Int32 humanBoneId)
    // Offset: 0x19CB12C
    UnityEngine::Transform* GetBoneTransformInternal(int humanBoneId);
    // public System.Void set_cullingMode(UnityEngine.AnimatorCullingMode value)
    // Offset: 0x19CB17C
    void set_cullingMode(UnityEngine::AnimatorCullingMode value);
    // public UnityEngine.RuntimeAnimatorController get_runtimeAnimatorController()
    // Offset: 0x19CB1CC
    UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController();
    // public System.Void set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController value)
    // Offset: 0x19CB20C
    void set_runtimeAnimatorController(UnityEngine::RuntimeAnimatorController* value);
    // public System.Boolean get_hasBoundPlayables()
    // Offset: 0x19CB25C
    bool get_hasBoundPlayables();
    // static public System.Int32 StringToHash(System.String name)
    // Offset: 0x19CAE14
    static int StringToHash(::Il2CppString* name);
    // public UnityEngine.Avatar get_avatar()
    // Offset: 0x19CB29C
    UnityEngine::Avatar* get_avatar();
    // private System.Void SetBoolString(System.String name, System.Boolean value)
    // Offset: 0x19CA7F4
    void SetBoolString(::Il2CppString* name, bool value);
    // private System.Void SetBoolID(System.Int32 id, System.Boolean value)
    // Offset: 0x19CA8A4
    void SetBoolID(int id, bool value);
    // private System.Boolean GetBoolID(System.Int32 id)
    // Offset: 0x19CA74C
    bool GetBoolID(int id);
    // private System.Void SetTriggerString(System.String name)
    // Offset: 0x19CA94C
    void SetTriggerString(::Il2CppString* name);
    // private System.Void SetTriggerID(System.Int32 id)
    // Offset: 0x19CA9EC
    void SetTriggerID(int id);
    // private System.Void ResetTriggerString(System.String name)
    // Offset: 0x19CAA8C
    void ResetTriggerString(::Il2CppString* name);
    // public System.Void set_keepAnimatorControllerStateOnDisable(System.Boolean value)
    // Offset: 0x19CB2DC
    void set_keepAnimatorControllerStateOnDisable(bool value);
    // public System.Void .ctor()
    // Offset: 0x19CB32C
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Animator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Animator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Animator*, creationType>()));
    }
  }; // UnityEngine.Animator
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animator*, "UnityEngine", "Animator");
