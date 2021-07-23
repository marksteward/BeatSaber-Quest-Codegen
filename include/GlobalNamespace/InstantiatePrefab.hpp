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
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: InstantiatePrefab
  // [TokenAttribute] Offset: FFFFFFFF
  class InstantiatePrefab : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject _prefab
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* prefab;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: InstantiatePrefab
    InstantiatePrefab(UnityEngine::GameObject* prefab_ = {}) noexcept : prefab{prefab_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public UnityEngine.GameObject _prefab
    UnityEngine::GameObject* _get__prefab();
    // Set instance field: public UnityEngine.GameObject _prefab
    void _set__prefab(UnityEngine::GameObject* value);
    // protected System.Void Awake()
    // Offset: 0x121AD44
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x121AE44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstantiatePrefab* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::InstantiatePrefab::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstantiatePrefab*, creationType>()));
    }
  }; // InstantiatePrefab
  #pragma pack(pop)
  static check_size<sizeof(InstantiatePrefab), 24 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_InstantiatePrefabSizeCheck;
  static_assert(sizeof(InstantiatePrefab) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstantiatePrefab*, "", "InstantiatePrefab");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InstantiatePrefab::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantiatePrefab::*)()>(&GlobalNamespace::InstantiatePrefab::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InstantiatePrefab*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InstantiatePrefab::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
