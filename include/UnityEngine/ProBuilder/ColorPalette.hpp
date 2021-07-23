// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.ProBuilder.IHasDefault
#include "UnityEngine/ProBuilder/IHasDefault.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ColorPalette
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E24410
  class ColorPalette : public UnityEngine::ScriptableObject/*, public UnityEngine::ProBuilder::IHasDefault*/ {
    public:
    // private UnityEngine.Color <current>k__BackingField
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color current;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xE24F28
    // private System.Collections.Generic.List`1<UnityEngine.Color> m_Colors
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::Color>* m_Colors;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Color>*) == 0x8);
    // Creating value type constructor for type: ColorPalette
    ColorPalette(UnityEngine::Color current_ = {}, System::Collections::Generic::List_1<UnityEngine::Color>* m_Colors_ = {}) noexcept : current{current_}, m_Colors{m_Colors_} {}
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::IHasDefault
    operator UnityEngine::ProBuilder::IHasDefault() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::IHasDefault*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Color <current>k__BackingField
    UnityEngine::Color _get_$current$k__BackingField();
    // Set instance field: private UnityEngine.Color <current>k__BackingField
    void _set_$current$k__BackingField(UnityEngine::Color value);
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.Color> m_Colors
    System::Collections::Generic::List_1<UnityEngine::Color>* _get_m_Colors();
    // Set instance field: private System.Collections.Generic.List`1<UnityEngine.Color> m_Colors
    void _set_m_Colors(System::Collections::Generic::List_1<UnityEngine::Color>* value);
    // public UnityEngine.Color get_current()
    // Offset: 0x1F34688
    UnityEngine::Color get_current();
    // public System.Void set_current(UnityEngine.Color value)
    // Offset: 0x1F34694
    void set_current(UnityEngine::Color value);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color> get_colors()
    // Offset: 0x1F346A0
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color>* get_colors();
    // public UnityEngine.Color get_Item(System.Int32 i)
    // Offset: 0x1F34C14
    UnityEngine::Color get_Item(int i);
    // public System.Void set_Item(System.Int32 i, UnityEngine.Color value)
    // Offset: 0x1F34C90
    void set_Item(int i, UnityEngine::Color value);
    // public System.Int32 get_Count()
    // Offset: 0x1F34D28
    int get_Count();
    // public System.Void SetColors(System.Collections.Generic.IEnumerable`1<UnityEngine.Color> colors)
    // Offset: 0x1F34710
    void SetColors(System::Collections::Generic::IEnumerable_1<UnityEngine::Color>* colors);
    // public System.Void SetDefaultValues()
    // Offset: 0x1F347B4
    void SetDefaultValues();
    // public System.Void .ctor()
    // Offset: 0x1F34D78
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorPalette* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ColorPalette::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorPalette*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ColorPalette
  #pragma pack(pop)
  static check_size<sizeof(ColorPalette), 40 + sizeof(System::Collections::Generic::List_1<UnityEngine::Color>*)> __UnityEngine_ProBuilder_ColorPaletteSizeCheck;
  static_assert(sizeof(ColorPalette) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColorPalette*, "UnityEngine.ProBuilder", "ColorPalette");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::ProBuilder::ColorPalette::*)()>(&UnityEngine::ProBuilder::ColorPalette::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColorPalette::*)(UnityEngine::Color)>(&UnityEngine::ProBuilder::ColorPalette::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::get_colors
// Il2CppName: get_colors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color>* (UnityEngine::ProBuilder::ColorPalette::*)()>(&UnityEngine::ProBuilder::ColorPalette::get_colors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "get_colors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::ProBuilder::ColorPalette::*)(int)>(&UnityEngine::ProBuilder::ColorPalette::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColorPalette::*)(int, UnityEngine::Color)>(&UnityEngine::ProBuilder::ColorPalette::set_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::ColorPalette::*)()>(&UnityEngine::ProBuilder::ColorPalette::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColorPalette::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::Color>*)>(&UnityEngine::ProBuilder::ColorPalette::SetColors)> {
  static const MethodInfo* get() {
    static auto* colors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::SetDefaultValues
// Il2CppName: SetDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColorPalette::*)()>(&UnityEngine::ProBuilder::ColorPalette::SetDefaultValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColorPalette*), "SetDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColorPalette::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
