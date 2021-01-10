// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x19
  // Autogenerated type: OVRSimpleJSON.JSONArray
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D83C04
  class JSONArray : public OVRSimpleJSON::JSONNode {
    public:
    // Nested type: OVRSimpleJSON::JSONArray::$get_Children$d__22
    class $get_Children$d__22;
    // private System.Collections.Generic.List`1<OVRSimpleJSON.JSONNode> m_List
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>* m_List;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>*) == 0x8);
    // private System.Boolean inline
    // Size: 0x1
    // Offset: 0x18
    bool _inline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: JSONArray
    JSONArray(System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>* m_List_ = {}, bool _inline_ = {}) noexcept : m_List{m_List_}, _inline{_inline_} {}
    // public override System.Boolean get_Inline()
    // Offset: 0x12E6C60
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_Inline()
    bool get_Inline();
    // public override System.Void set_Inline(System.Boolean value)
    // Offset: 0x12E6C68
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Inline(System.Boolean value)
    void set_Inline(bool value);
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x12E6C74
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsArray()
    // Offset: 0x12E6C7C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsArray()
    bool get_IsArray();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x12E6C84
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override OVRSimpleJSON.JSONNode get_Item(System.Int32 aIndex)
    // Offset: 0x12E6D5C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    // Offset: 0x12E6E94
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.Int32 aIndex, OVRSimpleJSON.JSONNode value)
    void set_Item(int aIndex, OVRSimpleJSON::JSONNode* value);
    // public override OVRSimpleJSON.JSONNode get_Item(System.String aKey)
    // Offset: 0x12E71C0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::get_Item(System.String aKey)
    OVRSimpleJSON::JSONNode* get_Item(::Il2CppString* aKey);
    // public override System.Void set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    // Offset: 0x12E7220
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Item(System.String aKey, OVRSimpleJSON.JSONNode value)
    void set_Item(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x12E72E0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::get_Count()
    int get_Count();
    // public override System.Void Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    // Offset: 0x12E7330
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::Add(System.String aKey, OVRSimpleJSON.JSONNode aItem)
    void Add(::Il2CppString* aKey, OVRSimpleJSON::JSONNode* aItem);
    // public override OVRSimpleJSON.JSONNode Remove(System.Int32 aIndex)
    // Offset: 0x12E73F0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(System.Int32 aIndex)
    OVRSimpleJSON::JSONNode* Remove(int aIndex);
    // public override OVRSimpleJSON.JSONNode Remove(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x12E749C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode JSONNode::Remove(OVRSimpleJSON.JSONNode aNode)
    OVRSimpleJSON::JSONNode* Remove(OVRSimpleJSON::JSONNode* aNode);
    // public override System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> get_Children()
    // Offset: 0x12E750C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Collections.Generic.IEnumerable`1<OVRSimpleJSON.JSONNode> JSONNode::get_Children()
    System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>* get_Children();
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x12E75D0
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public System.Void .ctor()
    // Offset: 0x12E7748
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONArray*, creationType>()));
    }
  }; // OVRSimpleJSON.JSONArray
  static check_size<sizeof(JSONArray), 24 + sizeof(bool)> __OVRSimpleJSON_JSONArraySizeCheck;
  static_assert(sizeof(JSONArray) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONArray*, "OVRSimpleJSON", "JSONArray");
#pragma pack(pop)
