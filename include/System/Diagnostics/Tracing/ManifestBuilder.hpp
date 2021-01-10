// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventManifestOptions
#include "System/Diagnostics/Tracing/EventManifestOptions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventAttribute
  class EventAttribute;
  // Forward declaring type: EventLevel
  struct EventLevel;
  // Forward declaring type: EventTask
  struct EventTask;
  // Forward declaring type: EventOpcode
  struct EventOpcode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x88
  // Autogenerated type: System.Diagnostics.Tracing.ManifestBuilder
  // [] Offset: FFFFFFFF
  class ManifestBuilder : public ::Il2CppObject {
    public:
    // Nested type: System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1
    class $$c__DisplayClass22_1;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> opcodeTab
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* opcodeTab;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> taskTab
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* taskTab;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.UInt64,System.String> keywordTab
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<uint64_t, ::Il2CppString*>* keywordTab;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint64_t, ::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Type> mapsTab
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Type*>* mapsTab;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Type*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> stringTab
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* stringTab;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*) == 0x8);
    // private System.Text.StringBuilder sb
    // Size: 0x8
    // Offset: 0x38
    System::Text::StringBuilder* sb;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Text.StringBuilder events
    // Size: 0x8
    // Offset: 0x40
    System::Text::StringBuilder* events;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Text.StringBuilder templates
    // Size: 0x8
    // Offset: 0x48
    System::Text::StringBuilder* templates;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Resources.ResourceManager resources
    // Size: 0x8
    // Offset: 0x50
    System::Resources::ResourceManager* resources;
    // Field size check
    static_assert(sizeof(System::Resources::ResourceManager*) == 0x8);
    // private System.Diagnostics.Tracing.EventManifestOptions flags
    // Size: 0x4
    // Offset: 0x58
    System::Diagnostics::Tracing::EventManifestOptions flags;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventManifestOptions) == 0x4);
    // Padding between fields: flags and: errors
    char __padding9[0x4] = {};
    // private System.Collections.Generic.IList`1<System.String> errors
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::IList_1<::Il2CppString*>* errors;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> perEventByteArrayArgIndices
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<int>*>* perEventByteArrayArgIndices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<int>*>*) == 0x8);
    // private System.String eventName
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* eventName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 numParams
    // Size: 0x4
    // Offset: 0x78
    int numParams;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numParams and: byteArrArgIndices
    char __padding13[0x4] = {};
    // private System.Collections.Generic.List`1<System.Int32> byteArrArgIndices
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::List_1<int>* byteArrArgIndices;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // Creating value type constructor for type: ManifestBuilder
    ManifestBuilder(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* opcodeTab_ = {}, System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* taskTab_ = {}, System::Collections::Generic::Dictionary_2<uint64_t, ::Il2CppString*>* keywordTab_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Type*>* mapsTab_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* stringTab_ = {}, System::Text::StringBuilder* sb_ = {}, System::Text::StringBuilder* events_ = {}, System::Text::StringBuilder* templates_ = {}, System::Resources::ResourceManager* resources_ = {}, System::Diagnostics::Tracing::EventManifestOptions flags_ = {}, System::Collections::Generic::IList_1<::Il2CppString*>* errors_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<int>*>* perEventByteArrayArgIndices_ = {}, ::Il2CppString* eventName_ = {}, int numParams_ = {}, System::Collections::Generic::List_1<int>* byteArrArgIndices_ = {}) noexcept : opcodeTab{opcodeTab_}, taskTab{taskTab_}, keywordTab{keywordTab_}, mapsTab{mapsTab_}, stringTab{stringTab_}, sb{sb_}, events{events_}, templates{templates_}, resources{resources_}, flags{flags_}, errors{errors_}, perEventByteArrayArgIndices{perEventByteArrayArgIndices_}, eventName{eventName_}, numParams{numParams_}, byteArrArgIndices{byteArrArgIndices_} {}
    // public System.Void .ctor(System.String providerName, System.Guid providerGuid, System.String dllName, System.Resources.ResourceManager resources, System.Diagnostics.Tracing.EventManifestOptions flags)
    // Offset: 0x111A4A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBuilder* New_ctor(::Il2CppString* providerName, System::Guid providerGuid, ::Il2CppString* dllName, System::Resources::ResourceManager* resources, System::Diagnostics::Tracing::EventManifestOptions flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::ManifestBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBuilder*, creationType>(providerName, providerGuid, dllName, resources, flags)));
    }
    // public System.Void AddOpcode(System.String name, System.Int32 value)
    // Offset: 0x111A850
    void AddOpcode(::Il2CppString* name, int value);
    // public System.Void AddTask(System.String name, System.Int32 value)
    // Offset: 0x111AC9C
    void AddTask(::Il2CppString* name, int value);
    // public System.Void AddKeyword(System.String name, System.UInt64 value)
    // Offset: 0x111AF90
    void AddKeyword(::Il2CppString* name, uint64_t value);
    // public System.Void StartEvent(System.String eventName, System.Diagnostics.Tracing.EventAttribute eventAttribute)
    // Offset: 0x111B448
    void StartEvent(::Il2CppString* eventName, System::Diagnostics::Tracing::EventAttribute* eventAttribute);
    // public System.Void AddEventParameter(System.Type type, System.String name)
    // Offset: 0x111BF94
    void AddEventParameter(System::Type* type, ::Il2CppString* name);
    // public System.Void EndEvent()
    // Offset: 0x111C918
    void EndEvent();
    // public System.Byte[] CreateManifest()
    // Offset: 0x111D418
    ::Array<uint8_t>* CreateManifest();
    // public System.Collections.Generic.IList`1<System.String> get_Errors()
    // Offset: 0x111E888
    System::Collections::Generic::IList_1<::Il2CppString*>* get_Errors();
    // public System.Void ManifestError(System.String msg, System.Boolean runtimeCritical)
    // Offset: 0x111AB84
    void ManifestError(::Il2CppString* msg, bool runtimeCritical);
    // private System.String CreateManifestString()
    // Offset: 0x111D458
    ::Il2CppString* CreateManifestString();
    // private System.Void WriteNameAndMessageAttribs(System.Text.StringBuilder stringBuilder, System.String elementName, System.String name)
    // Offset: 0x111E890
    void WriteNameAndMessageAttribs(System::Text::StringBuilder* stringBuilder, ::Il2CppString* elementName, ::Il2CppString* name);
    // private System.Void WriteMessageAttrib(System.Text.StringBuilder stringBuilder, System.String elementName, System.String name, System.String value)
    // Offset: 0x111B7F0
    void WriteMessageAttrib(System::Text::StringBuilder* stringBuilder, ::Il2CppString* elementName, ::Il2CppString* name, ::Il2CppString* value);
    // System.String GetLocalizedMessage(System.String key, System.Globalization.CultureInfo ci, System.Boolean etwFormat)
    // Offset: 0x111EAFC
    ::Il2CppString* GetLocalizedMessage(::Il2CppString* key, System::Globalization::CultureInfo* ci, bool etwFormat);
    // static private System.Collections.Generic.List`1<System.Globalization.CultureInfo> GetSupportedCultures(System.Resources.ResourceManager resources)
    // Offset: 0x111E948
    static System::Collections::Generic::List_1<System::Globalization::CultureInfo*>* GetSupportedCultures(System::Resources::ResourceManager* resources);
    // static private System.String GetLevelName(System.Diagnostics.Tracing.EventLevel level)
    // Offset: 0x111B72C
    static ::Il2CppString* GetLevelName(System::Diagnostics::Tracing::EventLevel level);
    // private System.String GetTaskName(System.Diagnostics.Tracing.EventTask task, System.String eventName)
    // Offset: 0x111BE94
    ::Il2CppString* GetTaskName(System::Diagnostics::Tracing::EventTask task, ::Il2CppString* eventName);
    // private System.String GetOpcodeName(System.Diagnostics.Tracing.EventOpcode opcode, System.String eventName)
    // Offset: 0x111BC80
    ::Il2CppString* GetOpcodeName(System::Diagnostics::Tracing::EventOpcode opcode, ::Il2CppString* eventName);
    // private System.String GetKeywords(System.UInt64 keywords, System.String eventName)
    // Offset: 0x111BA00
    ::Il2CppString* GetKeywords(uint64_t keywords, ::Il2CppString* eventName);
    // private System.String GetTypeName(System.Type type)
    // Offset: 0x111C4C4
    ::Il2CppString* GetTypeName(System::Type* type);
    // static private System.Void UpdateStringBuilder(ref System.Text.StringBuilder stringBuilder, System.String eventMessage, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x111EC18
    static void UpdateStringBuilder(System::Text::StringBuilder*& stringBuilder, ::Il2CppString* eventMessage, int startIndex, int count);
    // private System.String TranslateToManifestConvention(System.String eventMessage, System.String evtName)
    // Offset: 0x111CAFC
    ::Il2CppString* TranslateToManifestConvention(::Il2CppString* eventMessage, ::Il2CppString* evtName);
    // private System.Int32 TranslateIndexToManifestConvention(System.Int32 idx, System.String evtName)
    // Offset: 0x111ECD4
    int TranslateIndexToManifestConvention(int idx, ::Il2CppString* evtName);
  }; // System.Diagnostics.Tracing.ManifestBuilder
  static check_size<sizeof(ManifestBuilder), 128 + sizeof(System::Collections::Generic::List_1<int>*)> __System_Diagnostics_Tracing_ManifestBuilderSizeCheck;
  static_assert(sizeof(ManifestBuilder) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ManifestBuilder*, "System.Diagnostics.Tracing", "ManifestBuilder");
#pragma pack(pop)
