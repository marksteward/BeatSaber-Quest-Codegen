// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizationAsset
  class LocalizationAsset;
  // Forward declaring type: Localization
  class Localization;
  // Forward declaring type: GoogleDriveDownloadFormat
  struct GoogleDriveDownloadFormat;
  // Forward declaring type: LocalizationDocument
  class LocalizationDocument;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizationImporter
  class LocalizationImporter : public ::Il2CppObject {
    public:
    // Nested type: Polyglot::LocalizationImporter::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Polyglot::LocalizationImporter::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Creating value type constructor for type: LocalizationImporter
    LocalizationImporter() noexcept {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> languageStrings
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* _get_languageStrings();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> languageStrings
    static void _set_languageStrings(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* value);
    // Get static field: static private System.Collections.Generic.List`1<System.String> EmptyList
    static System::Collections::Generic::List_1<::Il2CppString*>* _get_EmptyList();
    // Set static field: static private System.Collections.Generic.List`1<System.String> EmptyList
    static void _set_EmptyList(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // Get static field: static private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> InputFiles
    static System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* _get_InputFiles();
    // Set static field: static private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> InputFiles
    static void _set_InputFiles(System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* value);
    // static private System.Void .cctor()
    // Offset: 0x234F328
    static void _cctor();
    // static private System.Void Initialize()
    // Offset: 0x234F3FC
    static void Initialize();
    // static private System.Void ImportFromGoogle(Polyglot.Localization settings)
    // Offset: 0x234F5B0
    static void ImportFromGoogle(Polyglot::Localization* settings);
    // static private System.Void Import(System.String text, Polyglot.GoogleDriveDownloadFormat format)
    // Offset: 0x234F6D4
    static void Import(::Il2CppString* text, Polyglot::GoogleDriveDownloadFormat format);
    // static private System.Collections.IEnumerator Download(Polyglot.LocalizationDocument document, System.Action`1<System.String> done, System.Func`2<System.Single,System.Boolean> progressbar)
    // Offset: 0x234F6AC
    static System::Collections::IEnumerator* Download(Polyglot::LocalizationDocument* document, System::Action_1<::Il2CppString*>* done, System::Func_2<float, bool>* progressbar);
    // static public System.Collections.IEnumerator DownloadCustomSheet(System.Func`2<System.Single,System.Boolean> progressbar)
    // Offset: 0x234FBC0
    static System::Collections::IEnumerator* DownloadCustomSheet(System::Func_2<float, bool>* progressbar);
    // static private System.Void ImportFromFiles(Polyglot.Localization settings)
    // Offset: 0x234F504
    static void ImportFromFiles(Polyglot::Localization* settings);
    // static private System.Void ImportInputFiles()
    // Offset: 0x234FD28
    static void ImportInputFiles();
    // static private System.Void ImportTextFile(System.String text, Polyglot.GoogleDriveDownloadFormat format)
    // Offset: 0x234F748
    static void ImportTextFile(::Il2CppString* text, Polyglot::GoogleDriveDownloadFormat format);
    // static public System.Boolean IsLineBreak(System.String currentString)
    // Offset: 0x234EDF4
    static bool IsLineBreak(::Il2CppString* currentString);
    // static public System.Collections.Generic.List`1<System.String> GetLanguages(System.String key, System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages)
    // Offset: 0x234E4FC
    static System::Collections::Generic::List_1<::Il2CppString*>* GetLanguages(::Il2CppString* key, System::Collections::Generic::List_1<Polyglot::Language>* supportedLanguages);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> GetLanguagesStartsWith(System.String key)
    // Offset: 0x23500BC
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* GetLanguagesStartsWith(::Il2CppString* key);
    // static public System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> GetLanguagesContains(System.String key)
    // Offset: 0x235032C
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<::Il2CppString*>*>* GetLanguagesContains(::Il2CppString* key);
    // static public System.Void Refresh()
    // Offset: 0x235059C
    static void Refresh();
    // static public System.Collections.Generic.List`1<System.String> GetKeys()
    // Offset: 0x234EFA4
    static System::Collections::Generic::List_1<::Il2CppString*>* GetKeys();
  }; // Polyglot.LocalizationImporter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationImporter*, "Polyglot", "LocalizationImporter");
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Initialize
// Il2CppName: Initialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportFromGoogle
// Il2CppName: ImportFromGoogle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Import
// Il2CppName: Import
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Download
// Il2CppName: Download
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::DownloadCustomSheet
// Il2CppName: DownloadCustomSheet
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportFromFiles
// Il2CppName: ImportFromFiles
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportInputFiles
// Il2CppName: ImportInputFiles
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::ImportTextFile
// Il2CppName: ImportTextFile
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::IsLineBreak
// Il2CppName: IsLineBreak
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetLanguages
// Il2CppName: GetLanguages
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetLanguagesStartsWith
// Il2CppName: GetLanguagesStartsWith
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetLanguagesContains
// Il2CppName: GetLanguagesContains
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Polyglot::LocalizationImporter::GetKeys
// Il2CppName: GetKeys
// Cannot perform method pointer template specialization from operators!
