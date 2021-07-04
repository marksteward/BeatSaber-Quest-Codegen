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
  class Localization : public UnityEngine::ScriptableObject {
    public:
    // private Polyglot.LocalizationDocument customDocument
    // Size: 0x8
    // Offset: 0x18
    Polyglot::LocalizationDocument* customDocument;
    // Field size check
    static_assert(sizeof(Polyglot::LocalizationDocument*) == 0x8);
    // [TooltipAttribute] Offset: 0xDFC5E0
    // private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> inputFiles
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* inputFiles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xDFC62C
    // [TooltipAttribute] Offset: 0xDFC62C
    // private System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<Polyglot::Language>* supportedLanguages;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Polyglot::Language>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDFC69C
    // private Polyglot.Language selectedLanguage
    // Size: 0x4
    // Offset: 0x30
    Polyglot::Language selectedLanguage;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // [TooltipAttribute] Offset: 0xDFC6E8
    // private Polyglot.Language fallbackLanguage
    // Size: 0x4
    // Offset: 0x34
    Polyglot::Language fallbackLanguage;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // [HeaderAttribute] Offset: 0xDFC734
    // [TooltipAttribute] Offset: 0xDFC734
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
    // public Polyglot.LocalizationDocument get_CustomDocument()
    // Offset: 0x234E1F0
    Polyglot::LocalizationDocument* get_CustomDocument();
    // public System.Collections.Generic.List`1<Polyglot.LocalizationAsset> get_InputFiles()
    // Offset: 0x234E1F8
    System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* get_InputFiles();
    // static public Polyglot.Localization get_Instance()
    // Offset: 0x234D5A0
    static Polyglot::Localization* get_Instance();
    // static public System.Void set_Instance(Polyglot.Localization value)
    // Offset: 0x234E2B0
    static void set_Instance(Polyglot::Localization* value);
    // static private System.Boolean get_HasInstance()
    // Offset: 0x234E200
    static bool get_HasInstance();
    // public System.Collections.Generic.List`1<Polyglot.Language> get_SupportedLanguages()
    // Offset: 0x234E304
    System::Collections::Generic::List_1<Polyglot::Language>* get_SupportedLanguages();
    // public Polyglot.LanguageDirection get_SelectedLanguageDirection()
    // Offset: 0x234E30C
    Polyglot::LanguageDirection get_SelectedLanguageDirection();
    // private Polyglot.LanguageDirection GetLanguageDirection(Polyglot.Language language)
    // Offset: 0x234E320
    Polyglot::LanguageDirection GetLanguageDirection(Polyglot::Language language);
    // public System.Int32 get_SelectedLanguageIndex()
    // Offset: 0x234D880
    int get_SelectedLanguageIndex();
    // public System.Globalization.CultureInfo get_SelectedCultureInfo()
    // Offset: 0x234E33C
    System::Globalization::CultureInfo* get_SelectedCultureInfo();
    // public Polyglot.Language get_SelectedLanguage()
    // Offset: 0x234E344
    Polyglot::Language get_SelectedLanguage();
    // public System.Void set_SelectedLanguage(Polyglot.Language value)
    // Offset: 0x234E34C
    void set_SelectedLanguage(Polyglot::Language value);
    // private System.Boolean IsLanguageSupported(Polyglot.Language language)
    // Offset: 0x234E468
    bool IsLanguageSupported(Polyglot::Language language);
    // public System.Void InvokeOnLocalize()
    // Offset: 0x234E4E8
    void InvokeOnLocalize();
    // public System.Collections.Generic.List`1<System.String> get_EnglishLanguageNames()
    // Offset: 0x234D80C
    System::Collections::Generic::List_1<::Il2CppString*>* get_EnglishLanguageNames();
    // public System.Collections.Generic.List`1<System.String> get_LocalizedLanguageNames()
    // Offset: 0x234E798
    System::Collections::Generic::List_1<::Il2CppString*>* get_LocalizedLanguageNames();
    // public System.String get_EnglishLanguageName()
    // Offset: 0x234E80C
    ::Il2CppString* get_EnglishLanguageName();
    // public System.String get_LocalizedLanguageName()
    // Offset: 0x234E884
    ::Il2CppString* get_LocalizedLanguageName();
    // public System.Void SelectLanguage(System.Int32 selected)
    // Offset: 0x234E8CC
    void SelectLanguage(int selected);
    // public System.Void SelectLanguage(Polyglot.Language selected)
    // Offset: 0x234E954
    void SelectLanguage(Polyglot::Language selected);
    // public Polyglot.Language ConvertSystemLanguage(UnityEngine.SystemLanguage selected)
    // Offset: 0x234E958
    Polyglot::Language ConvertSystemLanguage(UnityEngine::SystemLanguage selected);
    // public System.Void AddOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x234D62C
    void AddOnLocalizeEvent(Polyglot::ILocalize* localize);
    // public System.Void RemoveOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x234E994
    void RemoveOnLocalizeEvent(Polyglot::ILocalize* localize);
    // static public System.String Get(System.String key)
    // Offset: 0x234E854
    static ::Il2CppString* Get(::Il2CppString* key);
    // static public System.String Get(System.String key, Polyglot.Language language)
    // Offset: 0x234EA80
    static ::Il2CppString* Get(::Il2CppString* key, Polyglot::Language language);
    // static public System.Boolean KeyExist(System.String key)
    // Offset: 0x234EE94
    static bool KeyExist(::Il2CppString* key);
    // static public System.Collections.Generic.List`1<System.String> GetKeys()
    // Offset: 0x234EF48
    static System::Collections::Generic::List_1<::Il2CppString*>* GetKeys();
    // static public System.String GetFormat(System.String key, params System.Object[] arguments)
    // Offset: 0x234F030
    static ::Il2CppString* GetFormat(::Il2CppString* key, ::Array<::Il2CppObject*>* arguments);
    // Creating initializer_list -> params proxy for: System.String GetFormat(System.String key, params System.Object[] arguments)
    static ::Il2CppString* GetFormat(::Il2CppString* key, std::initializer_list<::Il2CppObject*> arguments);
    // Creating TArgs -> initializer_list proxy for: System.String GetFormat(System.String key, params System.Object[] arguments)
    template<class ...TParams>
    static ::Il2CppString* GetFormat(::Il2CppString* key, TParams&&... arguments) {
      return GetFormat(key, {arguments...});
    }
    // public System.Boolean InputFilesContains(Polyglot.LocalizationDocument doc)
    // Offset: 0x234F0AC
    bool InputFilesContains(Polyglot::LocalizationDocument* doc);
    // public System.Void .ctor()
    // Offset: 0x234F210
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
// Writing MetadataGetter for method: Polyglot::Localization::get_CustomDocument
// Il2CppName: get_CustomDocument
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_InputFiles
// Il2CppName: get_InputFiles
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_Instance
// Il2CppName: get_Instance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::set_Instance
// Il2CppName: set_Instance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_HasInstance
// Il2CppName: get_HasInstance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_SupportedLanguages
// Il2CppName: get_SupportedLanguages
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguageDirection
// Il2CppName: get_SelectedLanguageDirection
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::GetLanguageDirection
// Il2CppName: GetLanguageDirection
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguageIndex
// Il2CppName: get_SelectedLanguageIndex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedCultureInfo
// Il2CppName: get_SelectedCultureInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_SelectedLanguage
// Il2CppName: get_SelectedLanguage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::set_SelectedLanguage
// Il2CppName: set_SelectedLanguage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::IsLanguageSupported
// Il2CppName: IsLanguageSupported
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::InvokeOnLocalize
// Il2CppName: InvokeOnLocalize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_EnglishLanguageNames
// Il2CppName: get_EnglishLanguageNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_LocalizedLanguageNames
// Il2CppName: get_LocalizedLanguageNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_EnglishLanguageName
// Il2CppName: get_EnglishLanguageName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::get_LocalizedLanguageName
// Il2CppName: get_LocalizedLanguageName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::SelectLanguage
// Il2CppName: SelectLanguage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::SelectLanguage
// Il2CppName: SelectLanguage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::ConvertSystemLanguage
// Il2CppName: ConvertSystemLanguage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::AddOnLocalizeEvent
// Il2CppName: AddOnLocalizeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::RemoveOnLocalizeEvent
// Il2CppName: RemoveOnLocalizeEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::Get
// Il2CppName: Get
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::Get
// Il2CppName: Get
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::KeyExist
// Il2CppName: KeyExist
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::GetKeys
// Il2CppName: GetKeys
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::GetFormat
// Il2CppName: GetFormat
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::InputFilesContains
// Il2CppName: InputFilesContains
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::Localization::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
