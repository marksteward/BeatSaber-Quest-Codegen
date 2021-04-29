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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CuttableBySaber
  class CuttableBySaber : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate
    class WasCutBySaberDelegate;
    // [CompilerGeneratedAttribute] Offset: 0xD3EE78
    // private CuttableBySaber/WasCutBySaberDelegate wasCutBySaberEvent
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* wasCutBySaberEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate*) == 0x8);
    // Creating value type constructor for type: CuttableBySaber
    CuttableBySaber(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* wasCutBySaberEvent_ = {}) noexcept : wasCutBySaberEvent{wasCutBySaberEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_wasCutBySaberEvent(CuttableBySaber/WasCutBySaberDelegate value)
    // Offset: 0x1069AB4
    void add_wasCutBySaberEvent(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value);
    // public System.Void remove_wasCutBySaberEvent(CuttableBySaber/WasCutBySaberDelegate value)
    // Offset: 0x1069B58
    void remove_wasCutBySaberEvent(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value);
    // protected System.Void CallWasCutBySaberEvent(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x1069BFC
    void CallWasCutBySaberEvent(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public System.Boolean get_canBeCut()
    // Offset: 0xFFFFFFFF
    bool get_canBeCut();
    // public System.Void set_canBeCut(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_canBeCut(bool value);
    // public System.Single get_radius()
    // Offset: 0xFFFFFFFF
    float get_radius();
    // public System.Void Cut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xFFFFFFFF
    void Cut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // protected System.Void .ctor()
    // Offset: 0x106A1C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CuttableBySaber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CuttableBySaber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CuttableBySaber*, creationType>()));
    }
  }; // CuttableBySaber
  #pragma pack(pop)
  static check_size<sizeof(CuttableBySaber), 24 + sizeof(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate*)> __GlobalNamespace_CuttableBySaberSizeCheck;
  static_assert(sizeof(CuttableBySaber) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CuttableBySaber*, "", "CuttableBySaber");
