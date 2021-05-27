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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LightmapDataSO
  class LightmapDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Texture2D _lightmap1
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Texture2D* lightmap1;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Texture2D _lightmap2
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Texture2D* lightmap2;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // Creating value type constructor for type: LightmapDataSO
    LightmapDataSO(UnityEngine::Texture2D* lightmap1_ = {}, UnityEngine::Texture2D* lightmap2_ = {}) noexcept : lightmap1{lightmap1_}, lightmap2{lightmap2_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Texture2D get_lightmap1()
    // Offset: 0x1200EC8
    UnityEngine::Texture2D* get_lightmap1();
    // public System.Void set_lightmap1(UnityEngine.Texture2D value)
    // Offset: 0x1200ED0
    void set_lightmap1(UnityEngine::Texture2D* value);
    // public UnityEngine.Texture2D get_lightmap2()
    // Offset: 0x1200ED8
    UnityEngine::Texture2D* get_lightmap2();
    // public System.Void set_lightmap2(UnityEngine.Texture2D value)
    // Offset: 0x1200EE0
    void set_lightmap2(UnityEngine::Texture2D* value);
    // public System.Void .ctor()
    // Offset: 0x1200EE8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightmapDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapDataSO*, creationType>()));
    }
  }; // LightmapDataSO
  #pragma pack(pop)
  static check_size<sizeof(LightmapDataSO), 32 + sizeof(UnityEngine::Texture2D*)> __GlobalNamespace_LightmapDataSOSizeCheck;
  static_assert(sizeof(LightmapDataSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightmapDataSO*, "", "LightmapDataSO");