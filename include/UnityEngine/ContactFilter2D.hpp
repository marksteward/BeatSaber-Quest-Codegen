// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ContactFilter2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: E4CC30
  // [NativeHeaderAttribute] Offset: E4CC30
  // [RequiredByNativeCodeAttribute] Offset: E4CC30
  struct ContactFilter2D/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xE4CF30
    // public System.Boolean useTriggers
    // Size: 0x1
    // Offset: 0x0
    bool useTriggers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE4CF68
    // public System.Boolean useLayerMask
    // Size: 0x1
    // Offset: 0x1
    bool useLayerMask;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE4CFA0
    // public System.Boolean useDepth
    // Size: 0x1
    // Offset: 0x2
    bool useDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE4CFD8
    // public System.Boolean useOutsideDepth
    // Size: 0x1
    // Offset: 0x3
    bool useOutsideDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE4D010
    // public System.Boolean useNormalAngle
    // Size: 0x1
    // Offset: 0x4
    bool useNormalAngle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xE4D048
    // public System.Boolean useOutsideNormalAngle
    // Size: 0x1
    // Offset: 0x5
    bool useOutsideNormalAngle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useOutsideNormalAngle and: layerMask
    char __padding5[0x2] = {};
    // [NativeNameAttribute] Offset: 0xE4D080
    // public UnityEngine.LayerMask layerMask
    // Size: 0x4
    // Offset: 0x8
    UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // [NativeNameAttribute] Offset: 0xE4D0B8
    // public System.Single minDepth
    // Size: 0x4
    // Offset: 0xC
    float minDepth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xE4D0F0
    // public System.Single maxDepth
    // Size: 0x4
    // Offset: 0x10
    float maxDepth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xE4D128
    // public System.Single minNormalAngle
    // Size: 0x4
    // Offset: 0x14
    float minNormalAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xE4D160
    // public System.Single maxNormalAngle
    // Size: 0x4
    // Offset: 0x18
    float maxNormalAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ContactFilter2D
    constexpr ContactFilter2D(bool useTriggers_ = {}, bool useLayerMask_ = {}, bool useDepth_ = {}, bool useOutsideDepth_ = {}, bool useNormalAngle_ = {}, bool useOutsideNormalAngle_ = {}, UnityEngine::LayerMask layerMask_ = {}, float minDepth_ = {}, float maxDepth_ = {}, float minNormalAngle_ = {}, float maxNormalAngle_ = {}) noexcept : useTriggers{useTriggers_}, useLayerMask{useLayerMask_}, useDepth{useDepth_}, useOutsideDepth{useOutsideDepth_}, useNormalAngle{useNormalAngle_}, useOutsideNormalAngle{useOutsideNormalAngle_}, layerMask{layerMask_}, minDepth{minDepth_}, maxDepth{maxDepth_}, minNormalAngle{minNormalAngle_}, maxNormalAngle{maxNormalAngle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public System.Boolean useTriggers
    bool _get_useTriggers();
    // Set instance field: public System.Boolean useTriggers
    void _set_useTriggers(bool value);
    // Get instance field: public System.Boolean useLayerMask
    bool _get_useLayerMask();
    // Set instance field: public System.Boolean useLayerMask
    void _set_useLayerMask(bool value);
    // Get instance field: public System.Boolean useDepth
    bool _get_useDepth();
    // Set instance field: public System.Boolean useDepth
    void _set_useDepth(bool value);
    // Get instance field: public System.Boolean useOutsideDepth
    bool _get_useOutsideDepth();
    // Set instance field: public System.Boolean useOutsideDepth
    void _set_useOutsideDepth(bool value);
    // Get instance field: public System.Boolean useNormalAngle
    bool _get_useNormalAngle();
    // Set instance field: public System.Boolean useNormalAngle
    void _set_useNormalAngle(bool value);
    // Get instance field: public System.Boolean useOutsideNormalAngle
    bool _get_useOutsideNormalAngle();
    // Set instance field: public System.Boolean useOutsideNormalAngle
    void _set_useOutsideNormalAngle(bool value);
    // Get instance field: public UnityEngine.LayerMask layerMask
    UnityEngine::LayerMask _get_layerMask();
    // Set instance field: public UnityEngine.LayerMask layerMask
    void _set_layerMask(UnityEngine::LayerMask value);
    // Get instance field: public System.Single minDepth
    float _get_minDepth();
    // Set instance field: public System.Single minDepth
    void _set_minDepth(float value);
    // Get instance field: public System.Single maxDepth
    float _get_maxDepth();
    // Set instance field: public System.Single maxDepth
    void _set_maxDepth(float value);
    // Get instance field: public System.Single minNormalAngle
    float _get_minNormalAngle();
    // Set instance field: public System.Single minNormalAngle
    void _set_minNormalAngle(float value);
    // Get instance field: public System.Single maxNormalAngle
    float _get_maxNormalAngle();
    // Set instance field: public System.Single maxNormalAngle
    void _set_maxNormalAngle(float value);
    // private System.Void CheckConsistency()
    // Offset: 0xD95284
    void CheckConsistency();
    // public System.Void SetLayerMask(UnityEngine.LayerMask layerMask)
    // Offset: 0xD952C4
    void SetLayerMask(UnityEngine::LayerMask layerMask);
    // public System.Void SetDepth(System.Single minDepth, System.Single maxDepth)
    // Offset: 0xD952D4
    void SetDepth(float minDepth, float maxDepth);
    // static UnityEngine.ContactFilter2D CreateLegacyFilter(System.Int32 layerMask, System.Single minDepth, System.Single maxDepth)
    // Offset: 0x1E375E8
    static UnityEngine::ContactFilter2D CreateLegacyFilter(int layerMask, float minDepth, float maxDepth);
    // static private System.Void CheckConsistency_Injected(ref UnityEngine.ContactFilter2D _unity_self)
    // Offset: 0x1E3754C
    static void CheckConsistency_Injected(ByRef<UnityEngine::ContactFilter2D> _unity_self);
  }; // UnityEngine.ContactFilter2D
  #pragma pack(pop)
  static check_size<sizeof(ContactFilter2D), 24 + sizeof(float)> __UnityEngine_ContactFilter2DSizeCheck;
  static_assert(sizeof(ContactFilter2D) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactFilter2D, "UnityEngine", "ContactFilter2D");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::CheckConsistency
// Il2CppName: CheckConsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ContactFilter2D::*)()>(&UnityEngine::ContactFilter2D::CheckConsistency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "CheckConsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::SetLayerMask
// Il2CppName: SetLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ContactFilter2D::*)(UnityEngine::LayerMask)>(&UnityEngine::ContactFilter2D::SetLayerMask)> {
  static const MethodInfo* get() {
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "SetLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::SetDepth
// Il2CppName: SetDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ContactFilter2D::*)(float, float)>(&UnityEngine::ContactFilter2D::SetDepth)> {
  static const MethodInfo* get() {
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "SetDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minDepth, maxDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::CreateLegacyFilter
// Il2CppName: CreateLegacyFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ContactFilter2D (*)(int, float, float)>(&UnityEngine::ContactFilter2D::CreateLegacyFilter)> {
  static const MethodInfo* get() {
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "CreateLegacyFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerMask, minDepth, maxDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactFilter2D::CheckConsistency_Injected
// Il2CppName: CheckConsistency_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ContactFilter2D>)>(&UnityEngine::ContactFilter2D::CheckConsistency_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactFilter2D), "CheckConsistency_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
