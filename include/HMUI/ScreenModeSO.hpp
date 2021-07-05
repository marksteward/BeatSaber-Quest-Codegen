// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScreenModeData
  class ScreenModeData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScreenModeSO
  class ScreenModeSO : public UnityEngine::ScriptableObject {
    public:
    // private HMUI.ScreenModeData _data
    // Size: 0x8
    // Offset: 0x18
    HMUI::ScreenModeData* data;
    // Field size check
    static_assert(sizeof(HMUI::ScreenModeData*) == 0x8);
    // Creating value type constructor for type: ScreenModeSO
    ScreenModeSO(HMUI::ScreenModeData* data_ = {}) noexcept : data{data_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public HMUI.ScreenModeData get_data()
    // Offset: 0x12B59CC
    HMUI::ScreenModeData* get_data();
    // public System.Void .ctor()
    // Offset: 0x12B59D4
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenModeSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScreenModeSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenModeSO*, creationType>()));
    }
  }; // HMUI.ScreenModeSO
  #pragma pack(pop)
  static check_size<sizeof(ScreenModeSO), 24 + sizeof(HMUI::ScreenModeData*)> __HMUI_ScreenModeSOSizeCheck;
  static_assert(sizeof(ScreenModeSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScreenModeSO*, "HMUI", "ScreenModeSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScreenModeSO::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ScreenModeData* (HMUI::ScreenModeSO::*)()>(&HMUI::ScreenModeSO::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenModeSO*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenModeSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
