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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONNumber
  // [] Offset: FFFFFFFF
  class JSONNumber : public OVRSimpleJSON::JSONNode {
    public:
    // private System.Double m_Data
    // Size: 0x8
    // Offset: 0x10
    double m_Data;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: JSONNumber
    JSONNumber(double m_Data_ = {}) noexcept : m_Data{m_Data_} {}
    // Creating conversion operator: operator double
    constexpr operator double() const noexcept {
      return m_Data;
    }
    // public System.Void .ctor(System.Double aData)
    // Offset: 0x12E8338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNumber* New_ctor(double aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNumber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNumber*, creationType>(aData)));
    }
    // public System.Void .ctor(System.String aData)
    // Offset: 0x12ED920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNumber* New_ctor(::Il2CppString* aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNumber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNumber*, creationType>(aData)));
    }
    // static private System.Boolean IsNumeric(System.Object value)
    // Offset: 0x12ED9E8
    static bool IsNumeric(::Il2CppObject* value);
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x12ED78C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsNumber()
    // Offset: 0x12ED794
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsNumber()
    bool get_IsNumber();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x12ED79C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.String get_Value()
    // Offset: 0x12ED7BC
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::Il2CppString* get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x12ED834
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::Il2CppString* value);
    // public override System.Double get_AsDouble()
    // Offset: 0x12ED8F8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Double JSONNode::get_AsDouble()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0x12ED900
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsDouble(System.Double value)
    void set_AsDouble(double value);
    // public override System.Int64 get_AsLong()
    // Offset: 0x12ED908
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int64 JSONNode::get_AsLong()
    int64_t get_AsLong();
    // public override System.Void set_AsLong(System.Int64 value)
    // Offset: 0x12ED914
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_AsLong(System.Int64 value)
    void set_AsLong(int64_t value);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x12ED9A8
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x12EDB18
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12EDC44
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
  }; // OVRSimpleJSON.JSONNumber
  static check_size<sizeof(JSONNumber), 16 + sizeof(double)> __OVRSimpleJSON_JSONNumberSizeCheck;
  static_assert(sizeof(JSONNumber) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNumber*, "OVRSimpleJSON", "JSONNumber");
