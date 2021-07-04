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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollViewItemForVisibilityController
  class ScrollViewItemForVisibilityController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollViewItemsVisibilityController
  class ScrollViewItemsVisibilityController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::ScrollViewItemsVisibilityController::$$c
    class $$c;
    // private UnityEngine.RectTransform _viewport
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* viewport;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _contentRectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* contentRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private HMUI.ScrollViewItemForVisibilityController[] _items
    // Size: 0x8
    // Offset: 0x28
    ::Array<HMUI::ScrollViewItemForVisibilityController*>* items;
    // Field size check
    static_assert(sizeof(::Array<HMUI::ScrollViewItemForVisibilityController*>*) == 0x8);
    // private System.Single _lastContentAnchoredPositionY
    // Size: 0x4
    // Offset: 0x30
    float lastContentAnchoredPositionY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastContentAnchoredPositionY and: viewportWorldCorners
    char __padding3[0x4] = {};
    // private UnityEngine.Vector3[] _viewportWorldCorners
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Vector3>* viewportWorldCorners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _upperItemsCornes
    // Size: 0x8
    // Offset: 0x40
    ::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>* upperItemsCornes;
    // Field size check
    static_assert(sizeof(::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>*) == 0x8);
    // private System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>[] _lowerItemsCornes
    // Size: 0x8
    // Offset: 0x48
    ::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>* lowerItemsCornes;
    // Field size check
    static_assert(sizeof(::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>*) == 0x8);
    // private System.Int32 _lowerLastVisibleIndex
    // Size: 0x4
    // Offset: 0x50
    int lowerLastVisibleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _upperLastVisibleIndex
    // Size: 0x4
    // Offset: 0x54
    int upperLastVisibleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _contentMaxY
    // Size: 0x4
    // Offset: 0x58
    float contentMaxY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _contentMinY
    // Size: 0x4
    // Offset: 0x5C
    float contentMinY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ScrollViewItemsVisibilityController
    ScrollViewItemsVisibilityController(UnityEngine::RectTransform* viewport_ = {}, UnityEngine::RectTransform* contentRectTransform_ = {}, ::Array<HMUI::ScrollViewItemForVisibilityController*>* items_ = {}, float lastContentAnchoredPositionY_ = {}, ::Array<UnityEngine::Vector3>* viewportWorldCorners_ = {}, ::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>* upperItemsCornes_ = {}, ::Array<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*>* lowerItemsCornes_ = {}, int lowerLastVisibleIndex_ = {}, int upperLastVisibleIndex_ = {}, float contentMaxY_ = {}, float contentMinY_ = {}) noexcept : viewport{viewport_}, contentRectTransform{contentRectTransform_}, items{items_}, lastContentAnchoredPositionY{lastContentAnchoredPositionY_}, viewportWorldCorners{viewportWorldCorners_}, upperItemsCornes{upperItemsCornes_}, lowerItemsCornes{lowerItemsCornes_}, lowerLastVisibleIndex{lowerLastVisibleIndex_}, upperLastVisibleIndex{upperLastVisibleIndex_}, contentMaxY{contentMaxY_}, contentMinY{contentMinY_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x12B7F78
    void Start();
    // protected System.Void Update()
    // Offset: 0x12B8608
    void Update();
    // private System.Void UpdateVisibilityUpDirection(System.Single newContentAnchoredPositionY)
    // Offset: 0x12B8450
    void UpdateVisibilityUpDirection(float newContentAnchoredPositionY);
    // private System.Void UpdateVisibilityDownDirection(System.Single newContentAnchoredPositionY)
    // Offset: 0x12B86F8
    void UpdateVisibilityDownDirection(float newContentAnchoredPositionY);
    // public System.Void .ctor()
    // Offset: 0x12B889C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollViewItemsVisibilityController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollViewItemsVisibilityController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollViewItemsVisibilityController*, creationType>()));
    }
  }; // HMUI.ScrollViewItemsVisibilityController
  #pragma pack(pop)
  static check_size<sizeof(ScrollViewItemsVisibilityController), 92 + sizeof(float)> __HMUI_ScrollViewItemsVisibilityControllerSizeCheck;
  static_assert(sizeof(ScrollViewItemsVisibilityController) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollViewItemsVisibilityController*, "HMUI", "ScrollViewItemsVisibilityController");
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)()>(&HMUI::ScrollViewItemsVisibilityController::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)()>(&HMUI::ScrollViewItemsVisibilityController::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityUpDirection
// Il2CppName: UpdateVisibilityUpDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)(float)>(&HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityUpDirection)> {
  const MethodInfo* get() {
    static auto* newContentAnchoredPositionY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "UpdateVisibilityUpDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newContentAnchoredPositionY});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityDownDirection
// Il2CppName: UpdateVisibilityDownDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemsVisibilityController::*)(float)>(&HMUI::ScrollViewItemsVisibilityController::UpdateVisibilityDownDirection)> {
  const MethodInfo* get() {
    static auto* newContentAnchoredPositionY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController*), "UpdateVisibilityDownDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newContentAnchoredPositionY});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
