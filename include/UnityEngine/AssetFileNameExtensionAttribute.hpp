// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetFileNameExtensionAttribute
  // [VisibleToOtherModulesAttribute] Offset: D8B58C
  // [AttributeUsageAttribute] Offset: D8B58C
  class AssetFileNameExtensionAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD8BB88
    // [DebuggerBrowsableAttribute] Offset: 0xD8BB88
    // private readonly System.String <preferredExtension>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* preferredExtension;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xD8BBC4
    // [CompilerGeneratedAttribute] Offset: 0xD8BBC4
    // private readonly System.Collections.Generic.IEnumerable`1<System.String> <otherExtensions>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* otherExtensions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: AssetFileNameExtensionAttribute
    AssetFileNameExtensionAttribute(::Il2CppString* preferredExtension_ = {}, System::Collections::Generic::IEnumerable_1<::Il2CppString*>* otherExtensions_ = {}) noexcept : preferredExtension{preferredExtension_}, otherExtensions{otherExtensions_} {}
    // public System.Void .ctor(System.String preferredExtension, params System.String[] otherExtensions)
    // Offset: 0x23EBAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileNameExtensionAttribute* New_ctor(::Il2CppString* preferredExtension, ::Array<::Il2CppString*>* otherExtensions) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetFileNameExtensionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileNameExtensionAttribute*, creationType>(preferredExtension, otherExtensions)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String preferredExtension, params System.String[] otherExtensions)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileNameExtensionAttribute* New_ctor(::Il2CppString* preferredExtension, std::initializer_list<::Il2CppString*> otherExtensions) {
      return New_ctor<creationType>(preferredExtension, ::Array<::Il2CppString*>::New(otherExtensions));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String preferredExtension, params System.String[] otherExtensions)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static AssetFileNameExtensionAttribute* New_ctor(::Il2CppString* preferredExtension, TParams&&... otherExtensions) {
      return New_ctor<creationType>(preferredExtension, {otherExtensions...});
    }
  }; // UnityEngine.AssetFileNameExtensionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssetFileNameExtensionAttribute), 24 + sizeof(System::Collections::Generic::IEnumerable_1<::Il2CppString*>*)> __UnityEngine_AssetFileNameExtensionAttributeSizeCheck;
  static_assert(sizeof(AssetFileNameExtensionAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetFileNameExtensionAttribute*, "UnityEngine", "AssetFileNameExtensionAttribute");
// Writing MetadataGetter for method: UnityEngine::AssetFileNameExtensionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
