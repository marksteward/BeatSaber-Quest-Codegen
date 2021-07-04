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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemesListSO
  class ColorSchemesListSO : public UnityEngine::ScriptableObject {
    public:
    // private ColorSchemeSO[] _colorSchemes
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::ColorSchemeSO*>* colorSchemes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::ColorSchemeSO*>*) == 0x8);
    // Creating value type constructor for type: ColorSchemesListSO
    ColorSchemesListSO(::Array<GlobalNamespace::ColorSchemeSO*>* colorSchemes_ = {}) noexcept : colorSchemes{colorSchemes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public ColorSchemeSO[] get_colorSchemes()
    // Offset: 0x23F2320
    ::Array<GlobalNamespace::ColorSchemeSO*>* get_colorSchemes();
    // public System.Void .ctor()
    // Offset: 0x23F2328
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemesListSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemesListSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemesListSO*, creationType>()));
    }
  }; // ColorSchemesListSO
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemesListSO), 24 + sizeof(::Array<GlobalNamespace::ColorSchemeSO*>*)> __GlobalNamespace_ColorSchemesListSOSizeCheck;
  static_assert(sizeof(ColorSchemesListSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemesListSO*, "", "ColorSchemesListSO");
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemesListSO::get_colorSchemes
// Il2CppName: get_colorSchemes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemesListSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
