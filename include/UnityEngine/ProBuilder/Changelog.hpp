// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ChangelogEntry
  class ChangelogEntry;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Changelog
  // [TokenAttribute] Offset: FFFFFFFF
  class Changelog : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.ChangelogEntry> m_Entries
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>* m_Entries;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>*) == 0x8);
    // Creating value type constructor for type: Changelog
    Changelog(System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>* m_Entries_ = {}) noexcept : m_Entries{m_Entries_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>*
    constexpr operator System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>*() const noexcept {
      return m_Entries;
    }
    // static field const value: static private System.String k_ChangelogEntryPattern
    static constexpr const char* k_ChangelogEntryPattern = "(##\\s\\[[0-9]+\\.[0-9]+\\.[0-9]+(\\-[a-zA-Z]+(\\.[0-9]+)*)*\\])";
    // Get static field: static private System.String k_ChangelogEntryPattern
    static ::Il2CppString* _get_k_ChangelogEntryPattern();
    // Set static field: static private System.String k_ChangelogEntryPattern
    static void _set_k_ChangelogEntryPattern(::Il2CppString* value);
    // static field const value: static private System.String k_VersionInfoPattern
    static constexpr const char* k_VersionInfoPattern = "(?<=##\\s\\[).*(?=\\])";
    // Get static field: static private System.String k_VersionInfoPattern
    static ::Il2CppString* _get_k_VersionInfoPattern();
    // Set static field: static private System.String k_VersionInfoPattern
    static void _set_k_VersionInfoPattern(::Il2CppString* value);
    // static field const value: static private System.String k_VersionDatePattern
    static constexpr const char* k_VersionDatePattern = "(?<=##\\s\\[.*\\]\\s-\\s)[0-9-]*";
    // Get static field: static private System.String k_VersionDatePattern
    static ::Il2CppString* _get_k_VersionDatePattern();
    // Set static field: static private System.String k_VersionDatePattern
    static void _set_k_VersionDatePattern(::Il2CppString* value);
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.ProBuilder.ChangelogEntry> m_Entries
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>* _get_m_Entries();
    // Set instance field: private System.Collections.Generic.List`1<UnityEngine.ProBuilder.ChangelogEntry> m_Entries
    void _set_m_Entries(System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>* value);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ProBuilder.ChangelogEntry> get_entries()
    // Offset: 0x1F33C3C
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::ChangelogEntry*>* get_entries();
    // public System.Void .ctor(System.String log)
    // Offset: 0x1F33CAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Changelog* New_ctor(::Il2CppString* log) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Changelog::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Changelog*, creationType>(log)));
    }
    // private UnityEngine.ProBuilder.ChangelogEntry CreateEntry(System.String version, System.String contents)
    // Offset: 0x1F33F20
    UnityEngine::ProBuilder::ChangelogEntry* CreateEntry(::Il2CppString* version, ::Il2CppString* contents);
  }; // UnityEngine.ProBuilder.Changelog
  #pragma pack(pop)
  static check_size<sizeof(Changelog), 16 + sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::ChangelogEntry*>*)> __UnityEngine_ProBuilder_ChangelogSizeCheck;
  static_assert(sizeof(Changelog) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Changelog*, "UnityEngine.ProBuilder", "Changelog");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Changelog::get_entries
// Il2CppName: get_entries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::ChangelogEntry*>* (UnityEngine::ProBuilder::Changelog::*)()>(&UnityEngine::ProBuilder::Changelog::get_entries)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Changelog*), "get_entries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Changelog::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Changelog::CreateEntry
// Il2CppName: CreateEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ChangelogEntry* (UnityEngine::ProBuilder::Changelog::*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ProBuilder::Changelog::CreateEntry)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Changelog*), "CreateEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, contents});
  }
};
