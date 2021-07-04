// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ResetPlayerPrefsOnButton
  class ResetPlayerPrefsOnButton : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.KeyCode _keyCode
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::KeyCode keyCode;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // Creating value type constructor for type: ResetPlayerPrefsOnButton
    ResetPlayerPrefsOnButton(UnityEngine::KeyCode keyCode_ = {}) noexcept : keyCode{keyCode_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Update()
    // Offset: 0x1252410
    void Update();
    // public System.Void .ctor()
    // Offset: 0x125243C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResetPlayerPrefsOnButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResetPlayerPrefsOnButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResetPlayerPrefsOnButton*, creationType>()));
    }
  }; // ResetPlayerPrefsOnButton
  #pragma pack(pop)
  static check_size<sizeof(ResetPlayerPrefsOnButton), 24 + sizeof(UnityEngine::KeyCode)> __GlobalNamespace_ResetPlayerPrefsOnButtonSizeCheck;
  static_assert(sizeof(ResetPlayerPrefsOnButton) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResetPlayerPrefsOnButton*, "", "ResetPlayerPrefsOnButton");
// Writing MetadataGetter for method: GlobalNamespace::ResetPlayerPrefsOnButton::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResetPlayerPrefsOnButton::*)()>(&GlobalNamespace::ResetPlayerPrefsOnButton::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResetPlayerPrefsOnButton*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResetPlayerPrefsOnButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
