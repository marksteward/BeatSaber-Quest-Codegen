// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Bindings.CodegenOptions
#include "UnityEngine/Bindings/CodegenOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeTypeAttribute
  // [VisibleToOtherModulesAttribute] Offset: D8B8FC
  // [AttributeUsageAttribute] Offset: D8B8FC
  class NativeTypeAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD8BF0C
    // [DebuggerBrowsableAttribute] Offset: 0xD8BF0C
    // private System.String <Header>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Header;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8BF48
    // [DebuggerBrowsableAttribute] Offset: 0xD8BF48
    // private System.String <IntermediateScriptingStructName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* IntermediateScriptingStructName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8BF84
    // [DebuggerBrowsableAttribute] Offset: 0xD8BF84
    // private UnityEngine.Bindings.CodegenOptions <CodegenOptions>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::Bindings::CodegenOptions CodegenOptions;
    // Field size check
    static_assert(sizeof(UnityEngine::Bindings::CodegenOptions) == 0x4);
    // Creating value type constructor for type: NativeTypeAttribute
    NativeTypeAttribute(::Il2CppString* Header_ = {}, ::Il2CppString* IntermediateScriptingStructName_ = {}, UnityEngine::Bindings::CodegenOptions CodegenOptions_ = {}) noexcept : Header{Header_}, IntermediateScriptingStructName{IntermediateScriptingStructName_}, CodegenOptions{CodegenOptions_} {}
    // public System.Void set_Header(System.String value)
    // Offset: 0x23EC028
    void set_Header(::Il2CppString* value);
    // public System.Void set_IntermediateScriptingStructName(System.String value)
    // Offset: 0x23EC030
    void set_IntermediateScriptingStructName(::Il2CppString* value);
    // public System.Void set_CodegenOptions(UnityEngine.Bindings.CodegenOptions value)
    // Offset: 0x23EC038
    void set_CodegenOptions(UnityEngine::Bindings::CodegenOptions value);
    // public System.Void .ctor(UnityEngine.Bindings.CodegenOptions codegenOptions)
    // Offset: 0x23EC068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor(UnityEngine::Bindings::CodegenOptions codegenOptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>(codegenOptions)));
    }
    // public System.Void .ctor(System.String header)
    // Offset: 0x23EC094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor(::Il2CppString* header) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>(header)));
    }
    // public System.Void .ctor(UnityEngine.Bindings.CodegenOptions codegenOptions, System.String intermediateStructName)
    // Offset: 0x23EC188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor(UnityEngine::Bindings::CodegenOptions codegenOptions, ::Il2CppString* intermediateStructName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>(codegenOptions, intermediateStructName)));
    }
    // public System.Void .ctor()
    // Offset: 0x23EC040
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeTypeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::NativeTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeTypeAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.NativeTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeTypeAttribute), 32 + sizeof(UnityEngine::Bindings::CodegenOptions)> __UnityEngine_Bindings_NativeTypeAttributeSizeCheck;
  static_assert(sizeof(NativeTypeAttribute) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeTypeAttribute*, "UnityEngine.Bindings", "NativeTypeAttribute");
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::set_Header
// Il2CppName: set_Header
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::set_IntermediateScriptingStructName
// Il2CppName: set_IntermediateScriptingStructName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::set_CodegenOptions
// Il2CppName: set_CodegenOptions
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
