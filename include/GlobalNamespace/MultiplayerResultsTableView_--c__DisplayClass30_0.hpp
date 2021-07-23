// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsTableView
#include "GlobalNamespace/MultiplayerResultsTableView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsTableCell
  class MultiplayerResultsTableCell;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsTableView/<>c__DisplayClass30_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerResultsTableView::$$c__DisplayClass30_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.RectTransform rectTransform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // public MultiplayerResultsTableCell cell
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerResultsTableCell* cell;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsTableCell*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass30_0
    $$c__DisplayClass30_0(UnityEngine::RectTransform* rectTransform_ = {}, GlobalNamespace::MultiplayerResultsTableCell* cell_ = {}) noexcept : rectTransform{rectTransform_}, cell{cell_} {}
    // Get instance field: public UnityEngine.RectTransform rectTransform
    UnityEngine::RectTransform* _get_rectTransform();
    // Set instance field: public UnityEngine.RectTransform rectTransform
    void _set_rectTransform(UnityEngine::RectTransform* value);
    // Get instance field: public MultiplayerResultsTableCell cell
    GlobalNamespace::MultiplayerResultsTableCell* _get_cell();
    // Set instance field: public MultiplayerResultsTableCell cell
    void _set_cell(GlobalNamespace::MultiplayerResultsTableCell* value);
    // System.Void <StartAnimation>b__0(UnityEngine.Vector2 val)
    // Offset: 0x1007A88
    void $StartAnimation$b__0(UnityEngine::Vector2 val);
    // System.Void <StartAnimation>b__2(System.Single val)
    // Offset: 0x1007AA4
    void $StartAnimation$b__2(float val);
    // public System.Void .ctor()
    // Offset: 0x1007884
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsTableView::$$c__DisplayClass30_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsTableView::$$c__DisplayClass30_0*, creationType>()));
    }
  }; // MultiplayerResultsTableView/<>c__DisplayClass30_0
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsTableView::$$c__DisplayClass30_0), 24 + sizeof(GlobalNamespace::MultiplayerResultsTableCell*)> __GlobalNamespace_MultiplayerResultsTableView_$$c__DisplayClass30_0SizeCheck;
  static_assert(sizeof(MultiplayerResultsTableView::$$c__DisplayClass30_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0*, "", "MultiplayerResultsTableView/<>c__DisplayClass30_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::$StartAnimation$b__0
// Il2CppName: <StartAnimation>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::*)(UnityEngine::Vector2)>(&GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::$StartAnimation$b__0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0*), "<StartAnimation>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::$StartAnimation$b__2
// Il2CppName: <StartAnimation>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::*)(float)>(&GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::$StartAnimation$b__2)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0*), "<StartAnimation>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass30_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
