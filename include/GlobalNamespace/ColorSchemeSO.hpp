// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeSO
  class ColorSchemeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // Creating value type constructor for type: ColorSchemeSO
    ColorSchemeSO(GlobalNamespace::ColorScheme* colorScheme_ = {}) noexcept : colorScheme{colorScheme_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public ColorScheme get_colorScheme()
    // Offset: 0x23F2310
    GlobalNamespace::ColorScheme* get_colorScheme();
    // public System.Void .ctor()
    // Offset: 0x23F2318
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeSO*, creationType>()));
    }
  }; // ColorSchemeSO
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeSO), 24 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_ColorSchemeSOSizeCheck;
  static_assert(sizeof(ColorSchemeSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeSO*, "", "ColorSchemeSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeSO::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorScheme* (GlobalNamespace::ColorSchemeSO::*)()>(&GlobalNamespace::ColorSchemeSO::get_colorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeSO*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
