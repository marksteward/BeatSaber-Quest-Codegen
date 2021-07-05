// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SelectionCaret
  class TMP_SelectionCaret : public UnityEngine::UI::MaskableGraphic {
    public:
    // Creating value type constructor for type: TMP_SelectionCaret
    TMP_SelectionCaret() noexcept {}
    // public override System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x116DEAC
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // public System.Void .ctor()
    // Offset: 0x116DEB0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SelectionCaret* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SelectionCaret::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SelectionCaret*, creationType>()));
    }
  }; // TMPro.TMP_SelectionCaret
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SelectionCaret*, "TMPro", "TMP_SelectionCaret");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_SelectionCaret::Cull
// Il2CppName: Cull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SelectionCaret::*)(UnityEngine::Rect, bool)>(&TMPro::TMP_SelectionCaret::Cull)> {
  static const MethodInfo* get() {
    static auto* clipRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* validRect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SelectionCaret*), "Cull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clipRect, validRect});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SelectionCaret::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
