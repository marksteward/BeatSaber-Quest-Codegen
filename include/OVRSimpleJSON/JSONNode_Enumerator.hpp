// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: KeyValuePair`2 because it is already included!
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSimpleJSON.JSONNode/Enumerator
  struct JSONNode::Enumerator/*, public System::ValueType*/ {
    public:
    // Nested type: OVRSimpleJSON::JSONNode::Enumerator::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRSimpleJSON.JSONNode/Enumerator/Type
    struct Type/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRSimpleJSON.JSONNode/Enumerator/Type None
      static constexpr const int None = 0;
      // Get static field: static public OVRSimpleJSON.JSONNode/Enumerator/Type None
      static OVRSimpleJSON::JSONNode::Enumerator::Type _get_None();
      // Set static field: static public OVRSimpleJSON.JSONNode/Enumerator/Type None
      static void _set_None(OVRSimpleJSON::JSONNode::Enumerator::Type value);
      // static field const value: static public OVRSimpleJSON.JSONNode/Enumerator/Type Array
      static constexpr const int Array = 1;
      // Get static field: static public OVRSimpleJSON.JSONNode/Enumerator/Type Array
      static OVRSimpleJSON::JSONNode::Enumerator::Type _get_Array();
      // Set static field: static public OVRSimpleJSON.JSONNode/Enumerator/Type Array
      static void _set_Array(OVRSimpleJSON::JSONNode::Enumerator::Type value);
      // static field const value: static public OVRSimpleJSON.JSONNode/Enumerator/Type Object
      static constexpr const int Object = 2;
      // Get static field: static public OVRSimpleJSON.JSONNode/Enumerator/Type Object
      static OVRSimpleJSON::JSONNode::Enumerator::Type _get_Object();
      // Set static field: static public OVRSimpleJSON.JSONNode/Enumerator/Type Object
      static void _set_Object(OVRSimpleJSON::JSONNode::Enumerator::Type value);
    }; // OVRSimpleJSON.JSONNode/Enumerator/Type
    #pragma pack(pop)
    static check_size<sizeof(JSONNode::Enumerator::Type), 0 + sizeof(int)> __OVRSimpleJSON_JSONNode_Enumerator_TypeSizeCheck;
    static_assert(sizeof(JSONNode::Enumerator::Type) == 0x4);
    // private OVRSimpleJSON.JSONNode/Enumerator/Type type
    // Size: 0x4
    // Offset: 0x0
    OVRSimpleJSON::JSONNode::Enumerator::Type type;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode::Enumerator::Type) == 0x4);
    // private System.Collections.Generic.Dictionary`2/Enumerator<System.String,OVRSimpleJSON.JSONNode> m_Object
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator m_Object;
    // private System.Collections.Generic.List`1/Enumerator<OVRSimpleJSON.JSONNode> m_Array
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator m_Array;
    // Creating value type constructor for type: Enumerator
    constexpr Enumerator(OVRSimpleJSON::JSONNode::Enumerator::Type type_ = {}, typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator m_Object_ = {}, typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator m_Array_ = {}) noexcept : type{type_}, m_Object{m_Object_}, m_Array{m_Array_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Boolean get_IsValid()
    // Offset: 0xF0F56C
    bool get_IsValid();
    // public System.Void .ctor(System.Collections.Generic.List`1/Enumerator<OVRSimpleJSON.JSONNode> aArrayEnum)
    // Offset: 0xF0F57C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Enumerator(typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator aArrayEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::Enumerator::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aArrayEnum)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, aArrayEnum);
    }
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,OVRSimpleJSON.JSONNode> aDictEnum)
    // Offset: 0xF0F5B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Enumerator(typename System::Collections::Generic::Dictionary_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>::Enumerator aDictEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::Enumerator::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aDictEnum)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, aDictEnum);
    }
    // public System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode> get_Current()
    // Offset: 0xF0F5F4
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0xF0F5FC
    bool MoveNext();
  }; // OVRSimpleJSON.JSONNode/Enumerator
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::Enumerator, "OVRSimpleJSON", "JSONNode/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::Enumerator::Type, "OVRSimpleJSON", "JSONNode/Enumerator/Type");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::Enumerator::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::Enumerator::*)()>(&OVRSimpleJSON::JSONNode::Enumerator::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::Enumerator), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::Enumerator::Enumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::Enumerator::Enumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> (OVRSimpleJSON::JSONNode::Enumerator::*)()>(&OVRSimpleJSON::JSONNode::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::Enumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::Enumerator::*)()>(&OVRSimpleJSON::JSONNode::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::Enumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
