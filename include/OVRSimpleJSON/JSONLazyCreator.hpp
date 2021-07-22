// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONArray
  class JSONArray;
  // Forward declaring type: JSONObject
  class JSONObject;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONLazyCreator
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DBA36C
  class JSONLazyCreator : public OVRSimpleJSON::JSONNode {
    public:
    // private OVRSimpleJSON.JSONNode m_Node
    // Size: 0x8
    // Offset: 0x10
    OVRSimpleJSON::JSONNode* m_Node;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode*) == 0x8);
    // private System.String m_Key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_Key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: JSONLazyCreator
    JSONLazyCreator(OVRSimpleJSON::JSONNode* m_Node_ = {}, ::Il2CppString* m_Key_ = {}) noexcept : m_Node{m_Node_}, m_Key{m_Key_} {}
    // public System.Void .ctor(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x15FD6E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONLazyCreator* New_ctor(OVRSimpleJSON::JSONNode* aNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONLazyCreator*, creationType>(aNode)));
    }
    // public System.Void .ctor(OVRSimpleJSON.JSONNode aNode, System.String aKey)
    // Offset: 0x15FE614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONLazyCreator* New_ctor(OVRSimpleJSON::JSONNode* aNode, ::Il2CppString* aKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONLazyCreator*, creationType>(aNode, aKey)));
    }
    // private T Set(T aVal)
    // Offset: 0xFFFFFFFF
    template<class T>
    T Set(T aVal) {
      static_assert(std::is_convertible_v<T, OVRSimpleJSON::JSONNode*>);
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONLazyCreator::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aVal)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method, aVal);
    }
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x15FE5EC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override OVRSimpleJSON.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x15FE694
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    // Offset: 0x15FE6F4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    void set_Item(int aIndex, OVRSimpleJSON::JSONNode* value);
    // public override OVRSimpleJSON.JSONNode get_Item(System.String aKey)
    // Offset: 0x15FE788
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.String aKey)
    OVRSimpleJSON::JSONNode* get_Item(::Il2CppString* aKey);
    // public override System.Void set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    // Offset: 0x15FE7F8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    void set_Item(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* value);
    // public override System.Int32 get_AsInt()
    // Offset: 0x15FEA1C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::get_AsInt()
    int get_AsInt();
    // public override System.Void set_AsInt(System.Int32 value)
    // Offset: 0x15FEA98
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsInt(System.Int32 value)
    void set_AsInt(int value);
    // public override System.Single get_AsFloat()
    // Offset: 0x15FEB18
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Single JSONNode::get_AsFloat()
    float get_AsFloat();
    // public override System.Void set_AsFloat(System.Single value)
    // Offset: 0x15FEB94
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsFloat(System.Single value)
    void set_AsFloat(float value);
    // public override System.Double get_AsDouble()
    // Offset: 0x15FEC14
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Double JSONNode::get_AsDouble()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0x15FEC90
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsDouble(System.Double value)
    void set_AsDouble(double value);
    // public override System.Int64 get_AsLong()
    // Offset: 0x15FED10
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int64 JSONNode::get_AsLong()
    int64_t get_AsLong();
    // public override System.Void set_AsLong(System.Int64 value)
    // Offset: 0x15FEDF0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsLong(System.Int64 value)
    void set_AsLong(int64_t value);
    // public override System.Boolean get_AsBool()
    // Offset: 0x15FEF00
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_AsBool()
    bool get_AsBool();
    // public override System.Void set_AsBool(System.Boolean value)
    // Offset: 0x15FEF78
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsBool(System.Boolean value)
    void set_AsBool(bool value);
    // public override OVRSimpleJSON.JSONArray get_AsArray()
    // Offset: 0x15FEFF4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONArray JSONNode::get_AsArray()
    OVRSimpleJSON::JSONArray* get_AsArray();
    // public override OVRSimpleJSON.JSONObject get_AsObject()
    // Offset: 0x15FF060
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONObject JSONNode::get_AsObject()
    OVRSimpleJSON::JSONObject* get_AsObject();
    // public override OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator GetEnumerator()
    // Offset: 0x15FE5F4
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.Void Add(OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x15FE898
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add(OVRSimpleJSON.JSONNode aItem)
    void Add(OVRSimpleJSON::JSONNode* aItem);
    // public override System.Void Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x15FE92C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    void Add(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* aItem);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15FE9FC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15FEA14
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x15FF0D0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
  }; // OVRSimpleJSON.JSONLazyCreator
  #pragma pack(pop)
  static check_size<sizeof(JSONLazyCreator), 24 + sizeof(::Il2CppString*)> __OVRSimpleJSON_JSONLazyCreatorSizeCheck;
  static_assert(sizeof(JSONLazyCreator) == 0x20);
  // static public System.Boolean op_Equality(OVRSimpleJSON.JSONLazyCreator a, System.Object b)
  // Offset: 0x15FE9CC
  bool operator ==(OVRSimpleJSON::JSONLazyCreator* a, ::Il2CppObject& b);
  // static public System.Boolean op_Inequality(OVRSimpleJSON.JSONLazyCreator a, System.Object b)
  // Offset: 0x15FE9E4
  bool operator !=(OVRSimpleJSON::JSONLazyCreator* a, ::Il2CppObject& b);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONLazyCreator*, "OVRSimpleJSON", "JSONLazyCreator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::Set
// Il2CppName: Set
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNodeType (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONLazyCreator::*)(int)>(&OVRSimpleJSON::JSONLazyCreator::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(int, OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONLazyCreator::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONLazyCreator::*)(::Il2CppString*)>(&OVRSimpleJSON::JSONLazyCreator::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(::Il2CppString*, OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONLazyCreator::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_AsInt
// Il2CppName: get_AsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_AsInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_AsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::set_AsInt
// Il2CppName: set_AsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(int)>(&OVRSimpleJSON::JSONLazyCreator::set_AsInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "set_AsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_AsFloat
// Il2CppName: get_AsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_AsFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_AsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::set_AsFloat
// Il2CppName: set_AsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(float)>(&OVRSimpleJSON::JSONLazyCreator::set_AsFloat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "set_AsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_AsDouble
// Il2CppName: get_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_AsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::set_AsDouble
// Il2CppName: set_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(double)>(&OVRSimpleJSON::JSONLazyCreator::set_AsDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "set_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_AsLong
// Il2CppName: get_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_AsLong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::set_AsLong
// Il2CppName: set_AsLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(int64_t)>(&OVRSimpleJSON::JSONLazyCreator::set_AsLong)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "set_AsLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_AsBool
// Il2CppName: get_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_AsBool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::set_AsBool
// Il2CppName: set_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(bool)>(&OVRSimpleJSON::JSONLazyCreator::set_AsBool)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "set_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_AsArray
// Il2CppName: get_AsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONArray* (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_AsArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_AsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::get_AsObject
// Il2CppName: get_AsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONObject* (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::get_AsObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "get_AsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode::Enumerator (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONLazyCreator::Add)> {
  static const MethodInfo* get() {
    static auto* aItem = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aItem});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(::Il2CppString*, OVRSimpleJSON::JSONNode*)>(&OVRSimpleJSON::JSONLazyCreator::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONLazyCreator::*)(::Il2CppObject*)>(&OVRSimpleJSON::JSONLazyCreator::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSimpleJSON::JSONLazyCreator::*)()>(&OVRSimpleJSON::JSONLazyCreator::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::WriteToStringBuilder
// Il2CppName: WriteToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONLazyCreator::*)(System::Text::StringBuilder*, int, int, OVRSimpleJSON::JSONTextMode)>(&OVRSimpleJSON::JSONLazyCreator::WriteToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* aSB = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* aIndent = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aIndentInc = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* aMode = &::il2cpp_utils::GetClassFromName("OVRSimpleJSON", "JSONTextMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONLazyCreator*), "WriteToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aSB, aIndent, aIndentInc, aMode});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONLazyCreator::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
