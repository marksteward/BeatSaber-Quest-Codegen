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
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MissionStageLockView
  class MissionStageLockView : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TMP_Text _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TMP_Text* text;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Text*) == 0x8);
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private System.Single _dstPosY
    // Size: 0x4
    // Offset: 0x28
    float dstPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x2C
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startAnimationTime
    // Size: 0x4
    // Offset: 0x30
    float startAnimationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MissionStageLockView
    MissionStageLockView(TMPro::TMP_Text* text_ = {}, UnityEngine::RectTransform* rectTransform_ = {}, float dstPosY_ = {}, float animationDuration_ = {}, float startAnimationTime_ = {}) noexcept : text{text_}, rectTransform{rectTransform_}, dstPosY{dstPosY_}, animationDuration{animationDuration_}, startAnimationTime{startAnimationTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void UpdateLocalPositionY(System.Single dstPosY, System.Boolean animated, System.Single animationDuration)
    // Offset: 0x109CFF0
    void UpdateLocalPositionY(float dstPosY, bool animated, float animationDuration);
    // protected System.Void Update()
    // Offset: 0x109D094
    void Update();
    // public System.Void UpdateStageLockText(System.String text)
    // Offset: 0x109D1E8
    void UpdateStageLockText(::Il2CppString* text);
    // public System.Void .ctor()
    // Offset: 0x109D204
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionStageLockView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionStageLockView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionStageLockView*, creationType>()));
    }
  }; // MissionStageLockView
  #pragma pack(pop)
  static check_size<sizeof(MissionStageLockView), 48 + sizeof(float)> __GlobalNamespace_MissionStageLockViewSizeCheck;
  static_assert(sizeof(MissionStageLockView) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStageLockView*, "", "MissionStageLockView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::UpdateLocalPositionY
// Il2CppName: UpdateLocalPositionY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStageLockView::*)(float, bool, float)>(&GlobalNamespace::MissionStageLockView::UpdateLocalPositionY)> {
  static const MethodInfo* get() {
    static auto* dstPosY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* animationDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStageLockView*), "UpdateLocalPositionY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dstPosY, animated, animationDuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStageLockView::*)()>(&GlobalNamespace::MissionStageLockView::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStageLockView*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::UpdateStageLockText
// Il2CppName: UpdateStageLockText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStageLockView::*)(::Il2CppString*)>(&GlobalNamespace::MissionStageLockView::UpdateStageLockText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStageLockView*), "UpdateStageLockText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStageLockView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
