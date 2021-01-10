// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Size: 0x40
  // Autogenerated type: LineLight
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DA4340
  class LineLight : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector3 _p0
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 p0;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _p1
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 p1;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: LineLight
    LineLight(UnityEngine::Vector3 p0_ = {}, UnityEngine::Vector3 p1_ = {}, UnityEngine::Color color_ = {}) noexcept : p0{p0_}, p1{p1_}, color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.List`1<LineLight> _lineLights
    static System::Collections::Generic::List_1<GlobalNamespace::LineLight*>* _get__lineLights();
    // Set static field: static private System.Collections.Generic.List`1<LineLight> _lineLights
    static void _set__lineLights(System::Collections::Generic::List_1<GlobalNamespace::LineLight*>* value);
    // public UnityEngine.Vector3 get_p0()
    // Offset: 0x187CF9C
    UnityEngine::Vector3 get_p0();
    // public UnityEngine.Vector3 get_p1()
    // Offset: 0x187CFA8
    UnityEngine::Vector3 get_p1();
    // public UnityEngine.Color get_color()
    // Offset: 0x187CFB4
    UnityEngine::Color get_color();
    // static public System.Collections.Generic.List`1<LineLight> get_lineLights()
    // Offset: 0x187CFC0
    static System::Collections::Generic::List_1<GlobalNamespace::LineLight*>* get_lineLights();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x187D028
    static void NoDomainReloadInit();
    // protected System.Void OnEnable()
    // Offset: 0x187D0BC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x187D140
    void OnDisable();
    // protected System.Void OnDrawGizmos()
    // Offset: 0x187D1C4
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x187D258
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LineLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LineLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LineLight*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x187D260
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // LineLight
  static check_size<sizeof(LineLight), 48 + sizeof(UnityEngine::Color)> __GlobalNamespace_LineLightSizeCheck;
  static_assert(sizeof(LineLight) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LineLight*, "", "LineLight");
#pragma pack(pop)
