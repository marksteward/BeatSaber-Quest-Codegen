// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cloth
  class Cloth;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: ClothRandomFluctuation
  // [TokenAttribute] Offset: FFFFFFFF
  class ClothRandomFluctuation : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ClothRandomFluctuation::SineLayer
    class SineLayer;
    // private UnityEngine.Cloth _cloth
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Cloth* cloth;
    // Field size check
    static_assert(sizeof(UnityEngine::Cloth*) == 0x8);
    // [HeaderAttribute] Offset: 0xEAB04C
    // private System.Boolean _useLocalExternalFluctuations
    // Size: 0x1
    // Offset: 0x20
    bool useLocalExternalFluctuations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLocalExternalFluctuations and: externalFluctuations
    char __padding1[0x3] = {};
    // private UnityEngine.Vector3 _externalFluctuations
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 externalFluctuations;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0xEAB0A8
    // private System.Boolean _useLocalRandomFluctuations
    // Size: 0x1
    // Offset: 0x30
    bool useLocalRandomFluctuations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLocalRandomFluctuations and: minFluctuations
    char __padding3[0x3] = {};
    // private UnityEngine.Vector3 _minFluctuations
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 minFluctuations;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _maxFluctuations
    // Size: 0xC
    // Offset: 0x40
    UnityEngine::Vector3 maxFluctuations;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: maxFluctuations and: compoundSins
    char __padding5[0x4] = {};
    // private System.Collections.Generic.List`1<ClothRandomFluctuation/SineLayer> _compoundSins
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::ClothRandomFluctuation::SineLayer*>* compoundSins;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::ClothRandomFluctuation::SineLayer*>*) == 0x8);
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x58
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ClothRandomFluctuation
    ClothRandomFluctuation(UnityEngine::Cloth* cloth_ = {}, bool useLocalExternalFluctuations_ = {}, UnityEngine::Vector3 externalFluctuations_ = {}, bool useLocalRandomFluctuations_ = {}, UnityEngine::Vector3 minFluctuations_ = {}, UnityEngine::Vector3 maxFluctuations_ = {}, System::Collections::Generic::List_1<GlobalNamespace::ClothRandomFluctuation::SineLayer*>* compoundSins_ = {}, float speed_ = {}) noexcept : cloth{cloth_}, useLocalExternalFluctuations{useLocalExternalFluctuations_}, externalFluctuations{externalFluctuations_}, useLocalRandomFluctuations{useLocalRandomFluctuations_}, minFluctuations{minFluctuations_}, maxFluctuations{maxFluctuations_}, compoundSins{compoundSins_}, speed{speed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Cloth _cloth
    UnityEngine::Cloth* _get__cloth();
    // Set instance field: private UnityEngine.Cloth _cloth
    void _set__cloth(UnityEngine::Cloth* value);
    // Get instance field: private System.Boolean _useLocalExternalFluctuations
    bool _get__useLocalExternalFluctuations();
    // Set instance field: private System.Boolean _useLocalExternalFluctuations
    void _set__useLocalExternalFluctuations(bool value);
    // Get instance field: private UnityEngine.Vector3 _externalFluctuations
    UnityEngine::Vector3 _get__externalFluctuations();
    // Set instance field: private UnityEngine.Vector3 _externalFluctuations
    void _set__externalFluctuations(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean _useLocalRandomFluctuations
    bool _get__useLocalRandomFluctuations();
    // Set instance field: private System.Boolean _useLocalRandomFluctuations
    void _set__useLocalRandomFluctuations(bool value);
    // Get instance field: private UnityEngine.Vector3 _minFluctuations
    UnityEngine::Vector3 _get__minFluctuations();
    // Set instance field: private UnityEngine.Vector3 _minFluctuations
    void _set__minFluctuations(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 _maxFluctuations
    UnityEngine::Vector3 _get__maxFluctuations();
    // Set instance field: private UnityEngine.Vector3 _maxFluctuations
    void _set__maxFluctuations(UnityEngine::Vector3 value);
    // Get instance field: private System.Collections.Generic.List`1<ClothRandomFluctuation/SineLayer> _compoundSins
    System::Collections::Generic::List_1<GlobalNamespace::ClothRandomFluctuation::SineLayer*>* _get__compoundSins();
    // Set instance field: private System.Collections.Generic.List`1<ClothRandomFluctuation/SineLayer> _compoundSins
    void _set__compoundSins(System::Collections::Generic::List_1<GlobalNamespace::ClothRandomFluctuation::SineLayer*>* value);
    // Get instance field: private System.Single _speed
    float _get__speed();
    // Set instance field: private System.Single _speed
    void _set__speed(float value);
    // protected System.Void Update()
    // Offset: 0x1EFCEC0
    void Update();
    // private System.Void FluctuateCloth(UnityEngine.Cloth cloth)
    // Offset: 0x1EFCEC8
    void FluctuateCloth(UnityEngine::Cloth* cloth);
    // private System.Single GetNoise(System.Single time, System.Single offset)
    // Offset: 0x1EFD0E4
    float GetNoise(float time, float offset);
    // public System.Void .ctor()
    // Offset: 0x1EFD230
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClothRandomFluctuation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ClothRandomFluctuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClothRandomFluctuation*, creationType>()));
    }
  }; // ClothRandomFluctuation
  #pragma pack(pop)
  static check_size<sizeof(ClothRandomFluctuation), 88 + sizeof(float)> __GlobalNamespace_ClothRandomFluctuationSizeCheck;
  static_assert(sizeof(ClothRandomFluctuation) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ClothRandomFluctuation*, "", "ClothRandomFluctuation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClothRandomFluctuation::*)()>(&GlobalNamespace::ClothRandomFluctuation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClothRandomFluctuation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::FluctuateCloth
// Il2CppName: FluctuateCloth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClothRandomFluctuation::*)(UnityEngine::Cloth*)>(&GlobalNamespace::ClothRandomFluctuation::FluctuateCloth)> {
  static const MethodInfo* get() {
    static auto* cloth = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cloth")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClothRandomFluctuation*), "FluctuateCloth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cloth});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::GetNoise
// Il2CppName: GetNoise
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ClothRandomFluctuation::*)(float, float)>(&GlobalNamespace::ClothRandomFluctuation::GetNoise)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClothRandomFluctuation*), "GetNoise", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
