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
  // Forward declaring type: Mirror
  class Mirror;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DisableWhenMirrorIsEnabled
  class DisableWhenMirrorIsEnabled : public UnityEngine::MonoBehaviour {
    public:
    // private Mirror _mirror
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Mirror* mirror;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Mirror*) == 0x8);
    // Creating value type constructor for type: DisableWhenMirrorIsEnabled
    DisableWhenMirrorIsEnabled(GlobalNamespace::Mirror* mirror_ = {}) noexcept : mirror{mirror_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public Mirror get_mirror()
    // Offset: 0x10359F4
    GlobalNamespace::Mirror* get_mirror();
    // public System.Void set_mirror(Mirror value)
    // Offset: 0x10359FC
    void set_mirror(GlobalNamespace::Mirror* value);
    // protected System.Void Start()
    // Offset: 0x1035A04
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1035AE4
    void OnDestroy();
    // private System.Void HandleMirrorDidChangeEnabledState(System.Boolean isEnabled)
    // Offset: 0x1035AAC
    void HandleMirrorDidChangeEnabledState(bool isEnabled);
    // public System.Void .ctor()
    // Offset: 0x1035BC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableWhenMirrorIsEnabled* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisableWhenMirrorIsEnabled::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableWhenMirrorIsEnabled*, creationType>()));
    }
  }; // DisableWhenMirrorIsEnabled
  #pragma pack(pop)
  static check_size<sizeof(DisableWhenMirrorIsEnabled), 24 + sizeof(GlobalNamespace::Mirror*)> __GlobalNamespace_DisableWhenMirrorIsEnabledSizeCheck;
  static_assert(sizeof(DisableWhenMirrorIsEnabled) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableWhenMirrorIsEnabled*, "", "DisableWhenMirrorIsEnabled");
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::get_mirror
// Il2CppName: get_mirror
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::set_mirror
// Il2CppName: set_mirror
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::HandleMirrorDidChangeEnabledState
// Il2CppName: HandleMirrorDidChangeEnabledState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
