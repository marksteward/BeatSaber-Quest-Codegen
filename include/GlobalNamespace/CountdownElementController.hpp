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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CountdownElementController
  // [TokenAttribute] Offset: FFFFFFFF
  class CountdownElementController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // Creating value type constructor for type: CountdownElementController
    CountdownElementController(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::Animation* animation_ = {}) noexcept : text{text_}, animation{animation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private TMPro.TextMeshProUGUI _text
    TMPro::TextMeshProUGUI* _get__text();
    // Set instance field: private TMPro.TextMeshProUGUI _text
    void _set__text(TMPro::TextMeshProUGUI* value);
    // Get instance field: private UnityEngine.Animation _animation
    UnityEngine::Animation* _get__animation();
    // Set instance field: private UnityEngine.Animation _animation
    void _set__animation(UnityEngine::Animation* value);
    // public System.Void SetTextAndRunAnimation(System.String text)
    // Offset: 0x10821A8
    void SetTextAndRunAnimation(::Il2CppString* text);
    // public System.Void StopAndHide()
    // Offset: 0x1082208
    void StopAndHide();
    // public System.Void .ctor()
    // Offset: 0x10822A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownElementController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CountdownElementController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownElementController*, creationType>()));
    }
  }; // CountdownElementController
  #pragma pack(pop)
  static check_size<sizeof(CountdownElementController), 32 + sizeof(UnityEngine::Animation*)> __GlobalNamespace_CountdownElementControllerSizeCheck;
  static_assert(sizeof(CountdownElementController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CountdownElementController*, "", "CountdownElementController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CountdownElementController::SetTextAndRunAnimation
// Il2CppName: SetTextAndRunAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownElementController::*)(::Il2CppString*)>(&GlobalNamespace::CountdownElementController::SetTextAndRunAnimation)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownElementController*), "SetTextAndRunAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownElementController::StopAndHide
// Il2CppName: StopAndHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownElementController::*)()>(&GlobalNamespace::CountdownElementController::StopAndHide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownElementController*), "StopAndHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownElementController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
