// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PointLight
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DA42BC
  class PointLight : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Single intensity
    // Size: 0x4
    // Offset: 0x28
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: PointLight
    PointLight(UnityEngine::Color color_ = {}, float intensity_ = {}) noexcept : color{color_}, intensity{intensity_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Int32 kMaxLights
    static constexpr const int kMaxLights = 1;
    // Get static field: static public System.Int32 kMaxLights
    static int _get_kMaxLights();
    // Set static field: static public System.Int32 kMaxLights
    static void _set_kMaxLights(int value);
    // Get static field: static private System.Collections.Generic.List`1<PointLight> _lights
    static System::Collections::Generic::List_1<GlobalNamespace::PointLight*>* _get__lights();
    // Set static field: static private System.Collections.Generic.List`1<PointLight> _lights
    static void _set__lights(System::Collections::Generic::List_1<GlobalNamespace::PointLight*>* value);
    // static public System.Collections.Generic.List`1<PointLight> get_lights()
    // Offset: 0x1880508
    static System::Collections::Generic::List_1<GlobalNamespace::PointLight*>* get_lights();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1880570
    static void NoDomainReloadInit();
    // protected System.Void OnEnable()
    // Offset: 0x1880604
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1880688
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x188070C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PointLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointLight*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1880714
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // PointLight
  static check_size<sizeof(PointLight), 40 + sizeof(float)> __GlobalNamespace_PointLightSizeCheck;
  static_assert(sizeof(PointLight) == 0x2C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PointLight*, "", "PointLight");
