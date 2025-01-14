// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: ColorScheme
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorScheme : public ::Il2CppObject {
    public:
    // private System.String _colorSchemeId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* colorSchemeId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0xE94F80
    // private System.String _colorSchemeNameLocalizationKey
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* colorSchemeNameLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _useNonLocalizedName
    // Size: 0x1
    // Offset: 0x20
    bool useNonLocalizedName;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useNonLocalizedName and: nonLocalizedName
    char __padding2[0x7] = {};
    // private System.String _nonLocalizedName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* nonLocalizedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _isEditable
    // Size: 0x1
    // Offset: 0x30
    bool isEditable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEditable and: saberAColor
    char __padding4[0x3] = {};
    // [SpaceAttribute] Offset: 0xE94FE8
    // private UnityEngine.Color _saberAColor
    // Size: 0x10
    // Offset: 0x34
    UnityEngine::Color saberAColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _saberBColor
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Color saberBColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xE95030
    // private UnityEngine.Color _obstaclesColor
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Color obstaclesColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xE95068
    // private UnityEngine.Color _environmentColor0
    // Size: 0x10
    // Offset: 0x64
    UnityEngine::Color environmentColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _environmentColor1
    // Size: 0x10
    // Offset: 0x74
    UnityEngine::Color environmentColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _supportsEnvironmentColorBoost
    // Size: 0x1
    // Offset: 0x84
    bool supportsEnvironmentColorBoost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: supportsEnvironmentColorBoost and: environmentColor0Boost
    char __padding10[0x3] = {};
    // private UnityEngine.Color _environmentColor0Boost
    // Size: 0x10
    // Offset: 0x88
    UnityEngine::Color environmentColor0Boost;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _environmentColor1Boost
    // Size: 0x10
    // Offset: 0x98
    UnityEngine::Color environmentColor1Boost;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: ColorScheme
    ColorScheme(::Il2CppString* colorSchemeId_ = {}, ::Il2CppString* colorSchemeNameLocalizationKey_ = {}, bool useNonLocalizedName_ = {}, ::Il2CppString* nonLocalizedName_ = {}, bool isEditable_ = {}, UnityEngine::Color saberAColor_ = {}, UnityEngine::Color saberBColor_ = {}, UnityEngine::Color obstaclesColor_ = {}, UnityEngine::Color environmentColor0_ = {}, UnityEngine::Color environmentColor1_ = {}, bool supportsEnvironmentColorBoost_ = {}, UnityEngine::Color environmentColor0Boost_ = {}, UnityEngine::Color environmentColor1Boost_ = {}) noexcept : colorSchemeId{colorSchemeId_}, colorSchemeNameLocalizationKey{colorSchemeNameLocalizationKey_}, useNonLocalizedName{useNonLocalizedName_}, nonLocalizedName{nonLocalizedName_}, isEditable{isEditable_}, saberAColor{saberAColor_}, saberBColor{saberBColor_}, obstaclesColor{obstaclesColor_}, environmentColor0{environmentColor0_}, environmentColor1{environmentColor1_}, supportsEnvironmentColorBoost{supportsEnvironmentColorBoost_}, environmentColor0Boost{environmentColor0Boost_}, environmentColor1Boost{environmentColor1Boost_} {}
    // Get instance field: private System.String _colorSchemeId
    ::Il2CppString* _get__colorSchemeId();
    // Set instance field: private System.String _colorSchemeId
    void _set__colorSchemeId(::Il2CppString* value);
    // Get instance field: private System.String _colorSchemeNameLocalizationKey
    ::Il2CppString* _get__colorSchemeNameLocalizationKey();
    // Set instance field: private System.String _colorSchemeNameLocalizationKey
    void _set__colorSchemeNameLocalizationKey(::Il2CppString* value);
    // Get instance field: private System.Boolean _useNonLocalizedName
    bool _get__useNonLocalizedName();
    // Set instance field: private System.Boolean _useNonLocalizedName
    void _set__useNonLocalizedName(bool value);
    // Get instance field: private System.String _nonLocalizedName
    ::Il2CppString* _get__nonLocalizedName();
    // Set instance field: private System.String _nonLocalizedName
    void _set__nonLocalizedName(::Il2CppString* value);
    // Get instance field: private System.Boolean _isEditable
    bool _get__isEditable();
    // Set instance field: private System.Boolean _isEditable
    void _set__isEditable(bool value);
    // Get instance field: private UnityEngine.Color _saberAColor
    UnityEngine::Color _get__saberAColor();
    // Set instance field: private UnityEngine.Color _saberAColor
    void _set__saberAColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _saberBColor
    UnityEngine::Color _get__saberBColor();
    // Set instance field: private UnityEngine.Color _saberBColor
    void _set__saberBColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _obstaclesColor
    UnityEngine::Color _get__obstaclesColor();
    // Set instance field: private UnityEngine.Color _obstaclesColor
    void _set__obstaclesColor(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _environmentColor0
    UnityEngine::Color _get__environmentColor0();
    // Set instance field: private UnityEngine.Color _environmentColor0
    void _set__environmentColor0(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _environmentColor1
    UnityEngine::Color _get__environmentColor1();
    // Set instance field: private UnityEngine.Color _environmentColor1
    void _set__environmentColor1(UnityEngine::Color value);
    // Get instance field: private System.Boolean _supportsEnvironmentColorBoost
    bool _get__supportsEnvironmentColorBoost();
    // Set instance field: private System.Boolean _supportsEnvironmentColorBoost
    void _set__supportsEnvironmentColorBoost(bool value);
    // Get instance field: private UnityEngine.Color _environmentColor0Boost
    UnityEngine::Color _get__environmentColor0Boost();
    // Set instance field: private UnityEngine.Color _environmentColor0Boost
    void _set__environmentColor0Boost(UnityEngine::Color value);
    // Get instance field: private UnityEngine.Color _environmentColor1Boost
    UnityEngine::Color _get__environmentColor1Boost();
    // Set instance field: private UnityEngine.Color _environmentColor1Boost
    void _set__environmentColor1Boost(UnityEngine::Color value);
    // public System.String get_colorSchemeId()
    // Offset: 0x1E3F528
    ::Il2CppString* get_colorSchemeId();
    // public System.String get_colorSchemeNameLocalizationKey()
    // Offset: 0x1E3F530
    ::Il2CppString* get_colorSchemeNameLocalizationKey();
    // public System.String get_nonLocalizedName()
    // Offset: 0x1E3F538
    ::Il2CppString* get_nonLocalizedName();
    // public System.Boolean get_useNonLocalizedName()
    // Offset: 0x1E3F540
    bool get_useNonLocalizedName();
    // public System.Boolean get_isEditable()
    // Offset: 0x1E3F548
    bool get_isEditable();
    // public UnityEngine.Color get_saberAColor()
    // Offset: 0x1E3F550
    UnityEngine::Color get_saberAColor();
    // public UnityEngine.Color get_saberBColor()
    // Offset: 0x1E3F55C
    UnityEngine::Color get_saberBColor();
    // public UnityEngine.Color get_environmentColor0()
    // Offset: 0x1E3F568
    UnityEngine::Color get_environmentColor0();
    // public UnityEngine.Color get_environmentColor1()
    // Offset: 0x1E3F574
    UnityEngine::Color get_environmentColor1();
    // public System.Boolean get_supportsEnvironmentColorBoost()
    // Offset: 0x1E3F580
    bool get_supportsEnvironmentColorBoost();
    // public UnityEngine.Color get_environmentColor0Boost()
    // Offset: 0x1E3F588
    UnityEngine::Color get_environmentColor0Boost();
    // public UnityEngine.Color get_environmentColor1Boost()
    // Offset: 0x1E3F594
    UnityEngine::Color get_environmentColor1Boost();
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x1E3F5A0
    UnityEngine::Color get_obstaclesColor();
    // public System.Void .ctor(System.String colorSchemeId, System.String colorSchemeNameLocalizationKey, System.Boolean useNonLocalizedName, System.String nonLocalizedName, System.Boolean isEditable, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, System.Boolean supportsEnvironmentColorBoost, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost, UnityEngine.Color obstaclesColor)
    // Offset: 0x1E3F5AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(::Il2CppString* colorSchemeId, ::Il2CppString* colorSchemeNameLocalizationKey, bool useNonLocalizedName, ::Il2CppString* nonLocalizedName, bool isEditable, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost, UnityEngine::Color obstaclesColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorSchemeId, colorSchemeNameLocalizationKey, useNonLocalizedName, nonLocalizedName, isEditable, saberAColor, saberBColor, environmentColor0, environmentColor1, supportsEnvironmentColorBoost, environmentColor0Boost, environmentColor1Boost, obstaclesColor)));
    }
    // public System.Void .ctor(ColorScheme colorScheme, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, System.Boolean supportsEnvironmentColorBoost, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost, UnityEngine.Color obstaclesColor)
    // Offset: 0x1E3F6C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(GlobalNamespace::ColorScheme* colorScheme, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost, UnityEngine::Color obstaclesColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorScheme, saberAColor, saberBColor, environmentColor0, environmentColor1, supportsEnvironmentColorBoost, environmentColor0Boost, environmentColor1Boost, obstaclesColor)));
    }
    // public System.Void .ctor(ColorScheme colorScheme)
    // Offset: 0x1E3F75C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(GlobalNamespace::ColorScheme* colorScheme) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorScheme)));
    }
    // public System.Void .ctor(ColorSchemeSO colorScheme)
    // Offset: 0x1E3F810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorScheme* New_ctor(GlobalNamespace::ColorSchemeSO* colorScheme) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorScheme*, creationType>(colorScheme)));
    }
  }; // ColorScheme
  #pragma pack(pop)
  static check_size<sizeof(ColorScheme), 152 + sizeof(UnityEngine::Color)> __GlobalNamespace_ColorSchemeSizeCheck;
  static_assert(sizeof(ColorScheme) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorScheme*, "", "ColorScheme");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_colorSchemeId
// Il2CppName: get_colorSchemeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_colorSchemeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_colorSchemeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_colorSchemeNameLocalizationKey
// Il2CppName: get_colorSchemeNameLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_colorSchemeNameLocalizationKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_colorSchemeNameLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_nonLocalizedName
// Il2CppName: get_nonLocalizedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_nonLocalizedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_nonLocalizedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_useNonLocalizedName
// Il2CppName: get_useNonLocalizedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_useNonLocalizedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_useNonLocalizedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_isEditable
// Il2CppName: get_isEditable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_isEditable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_isEditable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_saberAColor
// Il2CppName: get_saberAColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_saberAColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_saberAColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_saberBColor
// Il2CppName: get_saberBColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_saberBColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_saberBColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_environmentColor0
// Il2CppName: get_environmentColor0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_environmentColor0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_environmentColor0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_environmentColor1
// Il2CppName: get_environmentColor1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_environmentColor1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_environmentColor1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_supportsEnvironmentColorBoost
// Il2CppName: get_supportsEnvironmentColorBoost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_supportsEnvironmentColorBoost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_supportsEnvironmentColorBoost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_environmentColor0Boost
// Il2CppName: get_environmentColor0Boost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_environmentColor0Boost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_environmentColor0Boost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_environmentColor1Boost
// Il2CppName: get_environmentColor1Boost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_environmentColor1Boost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_environmentColor1Boost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::get_obstaclesColor
// Il2CppName: get_obstaclesColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorScheme::*)()>(&GlobalNamespace::ColorScheme::get_obstaclesColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorScheme*), "get_obstaclesColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
