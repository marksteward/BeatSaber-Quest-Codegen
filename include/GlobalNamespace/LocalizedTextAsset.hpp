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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedTextAsset
  class LocalizedTextAsset : public UnityEngine::ScriptableObject {
    public:
    // Nested type: GlobalNamespace::LocalizedTextAsset::TextInfo
    class TextInfo;
    // Nested type: GlobalNamespace::LocalizedTextAsset::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: GlobalNamespace::LocalizedTextAsset::$$c
    class $$c;
    // private LocalizedTextAsset/TextInfo[] _textInfos
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::LocalizedTextAsset::TextInfo*>* textInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LocalizedTextAsset::TextInfo*>*) == 0x8);
    // private LocalizedTextAsset/TextInfo _lastTextInfo
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LocalizedTextAsset::TextInfo* lastTextInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalizedTextAsset::TextInfo*) == 0x8);
    // Creating value type constructor for type: LocalizedTextAsset
    LocalizedTextAsset(::Array<GlobalNamespace::LocalizedTextAsset::TextInfo*>* textInfos_ = {}, GlobalNamespace::LocalizedTextAsset::TextInfo* lastTextInfo_ = {}) noexcept : textInfos{textInfos_}, lastTextInfo{lastTextInfo_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public LocalizedTextAsset/TextInfo[] get_textInfos()
    // Offset: 0x23FFC8C
    ::Array<GlobalNamespace::LocalizedTextAsset::TextInfo*>* get_textInfos();
    // public System.String get_localizedText()
    // Offset: 0x23FFC94
    ::Il2CppString* get_localizedText();
    // public System.Void .ctor()
    // Offset: 0x23FFF94
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizedTextAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextAsset*, creationType>()));
    }
  }; // LocalizedTextAsset
  #pragma pack(pop)
  static check_size<sizeof(LocalizedTextAsset), 32 + sizeof(GlobalNamespace::LocalizedTextAsset::TextInfo*)> __GlobalNamespace_LocalizedTextAssetSizeCheck;
  static_assert(sizeof(LocalizedTextAsset) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedTextAsset*, "", "LocalizedTextAsset");
// Writing MetadataGetter for method: GlobalNamespace::LocalizedTextAsset::get_textInfos
// Il2CppName: get_textInfos
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalizedTextAsset::get_localizedText
// Il2CppName: get_localizedText
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LocalizedTextAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
