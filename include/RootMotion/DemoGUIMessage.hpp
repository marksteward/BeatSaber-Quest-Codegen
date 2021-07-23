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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.DemoGUIMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class DemoGUIMessage : public UnityEngine::MonoBehaviour {
    public:
    // public System.String text
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: DemoGUIMessage
    DemoGUIMessage(::Il2CppString* text_ = {}, UnityEngine::Color color_ = {}) noexcept : text{text_}, color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public System.String text
    ::Il2CppString* _get_text();
    // Set instance field: public System.String text
    void _set_text(::Il2CppString* value);
    // Get instance field: public UnityEngine.Color color
    UnityEngine::Color _get_color();
    // Set instance field: public UnityEngine.Color color
    void _set_color(UnityEngine::Color value);
    // private System.Void OnGUI()
    // Offset: 0x1CDC674
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x1CDC7B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DemoGUIMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::DemoGUIMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DemoGUIMessage*, creationType>()));
    }
  }; // RootMotion.DemoGUIMessage
  #pragma pack(pop)
  static check_size<sizeof(DemoGUIMessage), 32 + sizeof(UnityEngine::Color)> __RootMotion_DemoGUIMessageSizeCheck;
  static_assert(sizeof(DemoGUIMessage) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::DemoGUIMessage*, "RootMotion", "DemoGUIMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::DemoGUIMessage::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::DemoGUIMessage::*)()>(&RootMotion::DemoGUIMessage::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::DemoGUIMessage*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::DemoGUIMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
