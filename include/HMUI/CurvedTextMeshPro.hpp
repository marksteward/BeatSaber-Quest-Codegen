// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.CurvedTextMeshPro
  // [DisallowMultipleComponent] Offset: DF7594
  // [ExecuteAlways] Offset: DF7594
  class CurvedTextMeshPro : public TMPro::TextMeshProUGUI {
    public:
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Size: 0x8
    // Offset: 0xBE0
    HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // Field size check
    static_assert(sizeof(HMUI::CurvedCanvasSettingsHelper*) == 0x8);
    // Creating value type constructor for type: CurvedTextMeshPro
    CurvedTextMeshPro(HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper_ = {}) noexcept : curvedCanvasSettingsHelper{curvedCanvasSettingsHelper_} {}
    // protected override System.Void OnEnable()
    // Offset: 0x130F518
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::OnEnable()
    void OnEnable();
    // protected override System.Void GenerateTextMesh()
    // Offset: 0x130F558
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::GenerateTextMesh()
    void GenerateTextMesh();
    // public System.Void .ctor()
    // Offset: 0x130F860
    // Implemented from: TMPro.TextMeshProUGUI
    // Base method: System.Void TextMeshProUGUI::.ctor()
    // Base method: System.Void TMP_Text::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurvedTextMeshPro* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CurvedTextMeshPro::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurvedTextMeshPro*, creationType>()));
    }
  }; // HMUI.CurvedTextMeshPro
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedTextMeshPro*, "HMUI", "CurvedTextMeshPro");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedTextMeshPro::*)()>(&HMUI::CurvedTextMeshPro::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::GenerateTextMesh
// Il2CppName: GenerateTextMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedTextMeshPro::*)()>(&HMUI::CurvedTextMeshPro::GenerateTextMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::CurvedTextMeshPro*), "GenerateTextMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::CurvedTextMeshPro::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
