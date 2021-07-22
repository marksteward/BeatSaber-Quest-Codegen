// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.AssetReferenceUIRestriction
#include "UnityEngine/AssetReferenceUIRestriction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetReferenceUILabelRestriction
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DEC060
  class AssetReferenceUILabelRestriction : public UnityEngine::AssetReferenceUIRestriction {
    public:
    // public System.String[] m_AllowedLabels
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* m_AllowedLabels;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.String m_CachedToString
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_CachedToString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssetReferenceUILabelRestriction
    AssetReferenceUILabelRestriction(::Array<::Il2CppString*>* m_AllowedLabels_ = {}, ::Il2CppString* m_CachedToString_ = {}) noexcept : m_AllowedLabels{m_AllowedLabels_}, m_CachedToString{m_CachedToString_} {}
    // public System.Void .ctor(params System.String[] allowedLabels)
    // Offset: 0x2394EC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceUILabelRestriction* New_ctor(::Array<::Il2CppString*>* allowedLabels) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetReferenceUILabelRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceUILabelRestriction*, creationType>(allowedLabels)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params System.String[] allowedLabels)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceUILabelRestriction* New_ctor(std::initializer_list<::Il2CppString*> allowedLabels) {
      return New_ctor<creationType>(::Array<::Il2CppString*>::New(allowedLabels));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params System.String[] allowedLabels)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static AssetReferenceUILabelRestriction* New_ctor(TParams&&... allowedLabels) {
      return New_ctor<creationType>({allowedLabels...});
    }
    // public override System.Boolean ValidateAsset(UnityEngine.Object obj)
    // Offset: 0x2394EF4
    // Implemented from: UnityEngine.AssetReferenceUIRestriction
    // Base method: System.Boolean AssetReferenceUIRestriction::ValidateAsset(UnityEngine.Object obj)
    bool ValidateAsset(UnityEngine::Object* obj);
    // public override System.Boolean ValidateAsset(System.String path)
    // Offset: 0x2394EFC
    // Implemented from: UnityEngine.AssetReferenceUIRestriction
    // Base method: System.Boolean AssetReferenceUIRestriction::ValidateAsset(System.String path)
    bool ValidateAsset(::Il2CppString* path);
    // public override System.String ToString()
    // Offset: 0x2394F04
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.AssetReferenceUILabelRestriction
  #pragma pack(pop)
  static check_size<sizeof(AssetReferenceUILabelRestriction), 24 + sizeof(::Il2CppString*)> __UnityEngine_AssetReferenceUILabelRestrictionSizeCheck;
  static_assert(sizeof(AssetReferenceUILabelRestriction) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetReferenceUILabelRestriction*, "UnityEngine", "AssetReferenceUILabelRestriction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AssetReferenceUILabelRestriction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset
// Il2CppName: ValidateAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AssetReferenceUILabelRestriction::*)(UnityEngine::Object*)>(&UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetReferenceUILabelRestriction*), "ValidateAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset
// Il2CppName: ValidateAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AssetReferenceUILabelRestriction::*)(::Il2CppString*)>(&UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetReferenceUILabelRestriction*), "ValidateAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetReferenceUILabelRestriction::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AssetReferenceUILabelRestriction::*)()>(&UnityEngine::AssetReferenceUILabelRestriction::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetReferenceUILabelRestriction*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
