// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizationDocument
  class LocalizationDocument;
  // Forward declaring type: LocalizationAsset
  class LocalizationAsset;
  // Forward declaring type: LanguageDirection
  struct LanguageDirection;
  // Forward declaring type: ILocalize
  class ILocalize;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SystemLanguage
  struct SystemLanguage;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.Localization
  // [TokenAttribute] Offset: FFFFFFFF
  class Localization : public UnityEngine::ScriptableObject {
    public:
    // private Polyglot.LocalizationDocument customDocument
    // Size: 0x8
    // Offset: 0x18
    Polyglot::LocalizationDocument* customDocument;
    // Field size check
    static_assert(sizeof(Polyglot::LocalizationDocument*) == 0x8);
    // [TooltipAttribute] Offset: 0xDE60A0
    // private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> inputFiles
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* inputFiles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xDE60EC
    // [TooltipAttribute] Offset: 0xDE60EC
    // private System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<Polyglot::Language>* supportedLanguages;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Polyglot::Language>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDE615C
    // private Polyglot.Language selectedLanguage
    // Size: 0x4
    // Offset: 0x30
    Polyglot::Language selectedLanguage;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // [TooltipAttribute] Offset: 0xDE61A8
    // private Polyglot.Language fallbackLanguage
    // Size: 0x4
    // Offset: 0x34
    Polyglot::Language fallbackLanguage;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // [HeaderAttribute] Offset: 0xDE61F4
    // [TooltipAttribute] Offset: 0xDE61F4
    // public UnityEngine.Events.UnityEvent Localize
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Events::UnityEvent* Localize;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // private System.Globalization.CultureInfo selectedCultureInfo
    // Size: 0x8
    // Offset: 0x40
    System::Globalization::CultureInfo* selectedCultureInfo;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // Creating value type constructor for type: Localization
    Localization(Polyglot::LocalizationDocument* customDocument_ = {}, System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* inputFiles_ = {}, System::Collections::Generic::List_1<Polyglot::Language>* supportedLanguages_ = {}, Polyglot::Language selectedLanguage_ = {}, Polyglot::Language fallbackLanguage_ = {}, UnityEngine::Events::UnityEvent* Localize_ = {}, System::Globalization::CultureInfo* selectedCultureInfo_ = {}) noexcept : customDocument{customDocument_}, inputFiles{inputFiles_}, supportedLanguages{supportedLanguages_}, selectedLanguage{selectedLanguage_}, fallbackLanguage{fallbackLanguage_}, Localize{Localize_}, selectedCultureInfo{selectedCultureInfo_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String KeyNotFound
    static constexpr const char* KeyNotFound = "[{0}]";
    // Get static field: static private System.String KeyNotFound
    static ::Il2CppString* _get_KeyNotFound();
    // Set static field: static private System.String KeyNotFound
    static void _set_KeyNotFound(::Il2CppString* value);
    // Get static field: static private Polyglot.Localization instance
    static Polyglot::Localization* _get_instance();
    // Set static field: static private Polyglot.Localization instance
    static void _set_instance(Polyglot::Localization* value);
    // Get instance field: private Polyglot.LocalizationDocument customDocument
    Polyglot::LocalizationDocument* _get_customDocument();
    // Set instance field: private Polyglot.LocalizationDocument customDocument
    void _set_customDocument(Polyglot::LocalizationDocument* value);
    // Get instance field: private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> inputFiles
    System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* _get_inputFiles();
    // Set instance field: private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> inputFiles
    void _set_inputFiles(System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* value);
    // Get instance field: private System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages
    System::Collections::Generic::List_1<Polyglot::Language>* _get_supportedLanguages();
    // Set instance field: private System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages
    void _set_supportedLanguages(System::Collections::Generic::List_1<Polyglot::Language>* value);
    // Get instance field: private Polyglot.Language selectedLanguage
    Polyglot::Language _get_selectedLanguage();
    // Set instance field: private Polyglot.Language selectedLanguage
    void _set_selectedLanguage(Polyglot::Language value);
    // Get instance field: private Polyglot.Language fallbackLanguage
    Polyglot::Language _get_fallbackLanguage();
    // Set instance field: private Polyglot.Language fallbackLanguage
    void _set_fallbackLanguage(Polyglot::Language value);
    // Get instance field: public UnityEngine.Events.UnityEvent Localize
    UnityEngine::Events::UnityEvent* _get_Localize();
    // Set instance field: public UnityEngine.Events.UnityEvent Localize
    void _set_Localize(UnityEngine::Events::UnityEvent* value);
    // Get instance field: private System.Globalization.CultureInfo selectedCultureInfo
    System::Globalization::CultureInfo* _get_selectedCultureInfo();
    // Set instance field: private System.Globalization.CultureInfo selectedCultureInfo
    void _set_selectedCultureInfo(System::Globalization::CultureInfo* value);
    // public Polyglot.LocalizationDocument get_CustomDocument()
    // Offset: 0x232E6B0
    Polyglot::LocalizationDocument* get_CustomDocument();
    // public System.Collections.Generic.List`1<Polyglot.LocalizationAsset> get_InputFiles()
    // Offset: 0x232E6B8
    System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* get_InputFiles();
    // static public Polyglot.Localization get_Instance()
    // Offset: 0x232DA60
    static Polyglot::Localization* get_Instance();
    // static public System.Void set_Instance(Polyglot.Localization value)
    // Offset: 0x232E770
    static void set_Instance(Polyglot::Localization* value);
    // static private System.Boolean get_HasInstance()
    // Offset: 0x232E6C0
    static bool get_HasInstance();
    // public System.Collections.Generic.List`1<Polyglot.Language> get_SupportedLanguages()
    // Offset: 0x232E7C4
    System::Collections::Generic::List_1<Polyglot::Language>* get_SupportedLanguages();
    // public Polyglot.LanguageDirection get_SelectedLanguageDirection()
    // Offset: 0x232E7CC
    Polyglot::LanguageDirection get_SelectedLanguageDirection();
    // public System.Int32 get_SelectedLanguageIndex()
    // Offset: 0x232DD40
    int get_SelectedLanguageIndex();
    // public System.Globalization.CultureInfo get_SelectedCultureInfo()
    // Offset: 0x232E7FC
    System::Globalization::CultureInfo* get_SelectedCultureInfo();
    // public Polyglot.Language get_SelectedLanguage()
    // Offset: 0x232E804
    Polyglot::Language get_SelectedLanguage();
    // public System.Void set_SelectedLanguage(Polyglot.Language value)
    // Offset: 0x232E80C
    void set_SelectedLanguage(Polyglot::Language value);
    // public System.Collections.Generic.List`1<System.String> get_EnglishLanguageNames()
    // Offset: 0x232DCCC
    System::Collections::Generic::List_1<::Il2CppString*>* get_EnglishLanguageNames();
    // public System.Collections.Generic.List`1<System.String> get_LocalizedLanguageNames()
    // Offset: 0x232EC58
    System::Collections::Generic::List_1<::Il2CppString*>* get_LocalizedLanguageNames();
    // public System.String get_EnglishLanguageName()
    // Offset: 0x232ECCC
    ::Il2CppString* get_EnglishLanguageName();
    // public System.String get_LocalizedLanguageName()
    // Offset: 0x232ED44
    ::Il2CppString* get_LocalizedLanguageName();
    // private Polyglot.LanguageDirection GetLanguageDirection(Polyglot.Language language)
    // Offset: 0x232E7E0
    Polyglot::LanguageDirection GetLanguageDirection(Polyglot::Language language);
    // private System.Boolean IsLanguageSupported(Polyglot.Language language)
    // Offset: 0x232E928
    bool IsLanguageSupported(Polyglot::Language language);
    // public System.Void InvokeOnLocalize()
    // Offset: 0x232E9A8
    void InvokeOnLocalize();
    // public System.Void SelectLanguage(System.Int32 selected)
    // Offset: 0x232ED8C
    void SelectLanguage(int selected);
    // public System.Void SelectLanguage(Polyglot.Language selected)
    // Offset: 0x232EE14
    void SelectLanguage(Polyglot::Language selected);
    // public Polyglot.Language ConvertSystemLanguage(UnityEngine.SystemLanguage selected)
    // Offset: 0x232EE18
    Polyglot::Language ConvertSystemLanguage(UnityEngine::SystemLanguage selected);
    // public System.Void AddOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x232DAEC
    void AddOnLocalizeEvent(Polyglot::ILocalize* localize);
    // public System.Void RemoveOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x232EE54
    void RemoveOnLocalizeEvent(Polyglot::ILocalize* localize);
    // static public System.String Get(System.String key)
    // Offset: 0x232ED14
    static ::Il2CppString* Get(::Il2CppString* key);
    // static public System.String Get(System.String key, Polyglot.Language language)
    // Offset: 0x232EF40
    static ::Il2CppString* Get(::Il2CppString* key, Polyglot::Language language);
    // static public System.Boolean KeyExist(System.String key)
    // Offset: 0x232F354
    static bool KeyExist(::Il2CppString* key);
    // static public System.Collections.Generic.List`1<System.String> GetKeys()
    // Offset: 0x232F408
    static System::Collections::Generic::List_1<::Il2CppString*>* GetKeys();
    // static public System.String GetFormat(System.String key, params System.Object[] arguments)
    // Offset: 0x232F4F0
    static ::Il2CppString* GetFormat(::Il2CppString* key, ::Array<::Il2CppObject*>* arguments);
    // Creating initializer_list -> params proxy for: System.String GetFormat(System.String key, params System.Object[] arguments)
    static ::Il2CppString* GetFormat(::Il2CppString* key, std::initializer_list<::Il2CppObject*> arguments);
    // Creating TArgs -> initializer_list proxy for: System.String GetFormat(System.String key, params System.Object[] arguments)
    template<class ...TParams>
    static ::Il2CppString* GetFormat(::Il2CppString* key, TParams&&... arguments) {
      return GetFormat(key, {arguments...});
    }
    // public System.Boolean InputFilesContains(Polyglot.LocalizationDocument doc)
    // Offset: 0x232F56C
    bool InputFilesContains(Polyglot::LocalizationDocument* doc);
    // public System.Void .ctor()
    // Offset: 0x232F6D0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Localization* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::Localization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Localization*, creationType>()));
    }
  }; // Polyglot.Localization
  #pragma pack(pop)
  static check_size<sizeof(Localization), 64 + sizeof(System::Globalization::CultureInfo*)> __Polyglot_LocalizationSizeCheck;
  static_assert(sizeof(Localization) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::Localization*, "Polyglot", "Localization");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::Localization::get_CustomDocument
// Il2CppName: get_CustomDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::LocalizationDocument* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_CustomDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_CustomDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_InputFiles
// Il2CppName: get_InputFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_InputFiles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_InputFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::Localization* (*)()>(&Polyglot::Localization::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Polyglot::Localization*)>(&Polyglot::Localization::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Polyglot", "Localization")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_HasInstance
// Il2CppName: get_HasInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Polyglot::Localization::get_HasInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_HasInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SupportedLanguages
// Il2CppName: get_SupportedLanguages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Polyglot::Language>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SupportedLanguages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SupportedLanguages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguageDirection
// Il2CppName: get_SelectedLanguageDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::LanguageDirection (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedLanguageDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedLanguageDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguageIndex
// Il2CppName: get_SelectedLanguageIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedLanguageIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedLanguageIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedCultureInfo
// Il2CppName: get_SelectedCultureInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedCultureInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedCultureInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguage
// Il2CppName: get_SelectedLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::Language (Polyglot::Localization::*)()>(&Polyglot::Localization::get_SelectedLanguage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_SelectedLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::set_SelectedLanguage
// Il2CppName: set_SelectedLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(Polyglot::Language)>(&Polyglot::Localization::set_SelectedLanguage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "set_SelectedLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_EnglishLanguageNames
// Il2CppName: get_EnglishLanguageNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_EnglishLanguageNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_EnglishLanguageNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_LocalizedLanguageNames
// Il2CppName: get_LocalizedLanguageNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_LocalizedLanguageNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_LocalizedLanguageNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_EnglishLanguageName
// Il2CppName: get_EnglishLanguageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_EnglishLanguageName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_EnglishLanguageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::get_LocalizedLanguageName
// Il2CppName: get_LocalizedLanguageName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Polyglot::Localization::*)()>(&Polyglot::Localization::get_LocalizedLanguageName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "get_LocalizedLanguageName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::GetLanguageDirection
// Il2CppName: GetLanguageDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::LanguageDirection (Polyglot::Localization::*)(Polyglot::Language)>(&Polyglot::Localization::GetLanguageDirection)> {
  static const MethodInfo* get() {
    static auto* language = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "GetLanguageDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{language});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::IsLanguageSupported
// Il2CppName: IsLanguageSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::Localization::*)(Polyglot::Language)>(&Polyglot::Localization::IsLanguageSupported)> {
  static const MethodInfo* get() {
    static auto* language = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "IsLanguageSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{language});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::InvokeOnLocalize
// Il2CppName: InvokeOnLocalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)()>(&Polyglot::Localization::InvokeOnLocalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "InvokeOnLocalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::SelectLanguage
// Il2CppName: SelectLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(int)>(&Polyglot::Localization::SelectLanguage)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "SelectLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::SelectLanguage
// Il2CppName: SelectLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(Polyglot::Language)>(&Polyglot::Localization::SelectLanguage)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "SelectLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::ConvertSystemLanguage
// Il2CppName: ConvertSystemLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Polyglot::Language (Polyglot::Localization::*)(UnityEngine::SystemLanguage)>(&Polyglot::Localization::ConvertSystemLanguage)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("UnityEngine", "SystemLanguage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "ConvertSystemLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::AddOnLocalizeEvent
// Il2CppName: AddOnLocalizeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(Polyglot::ILocalize*)>(&Polyglot::Localization::AddOnLocalizeEvent)> {
  static const MethodInfo* get() {
    static auto* localize = &::il2cpp_utils::GetClassFromName("Polyglot", "ILocalize")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "AddOnLocalizeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localize});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::RemoveOnLocalizeEvent
// Il2CppName: RemoveOnLocalizeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::Localization::*)(Polyglot::ILocalize*)>(&Polyglot::Localization::RemoveOnLocalizeEvent)> {
  static const MethodInfo* get() {
    static auto* localize = &::il2cpp_utils::GetClassFromName("Polyglot", "ILocalize")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "RemoveOnLocalizeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localize});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&Polyglot::Localization::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, Polyglot::Language)>(&Polyglot::Localization::Get)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* language = &::il2cpp_utils::GetClassFromName("Polyglot", "Language")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, language});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::KeyExist
// Il2CppName: KeyExist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Polyglot::Localization::KeyExist)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "KeyExist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::GetKeys
// Il2CppName: GetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::Il2CppString*>* (*)()>(&Polyglot::Localization::GetKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "GetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::GetFormat
// Il2CppName: GetFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&Polyglot::Localization::GetFormat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "GetFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, arguments});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::InputFilesContains
// Il2CppName: InputFilesContains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::Localization::*)(Polyglot::LocalizationDocument*)>(&Polyglot::Localization::InputFilesContains)> {
  static const MethodInfo* get() {
    static auto* doc = &::il2cpp_utils::GetClassFromName("Polyglot", "LocalizationDocument")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::Localization*), "InputFilesContains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{doc});
  }
};
// Writing MetadataGetter for method: Polyglot::Localization::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
