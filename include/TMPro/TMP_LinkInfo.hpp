// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_LinkInfo
  struct TMP_LinkInfo/*, public System::ValueType*/ {
    public:
    // public TMPro.TMP_Text textComponent
    // Size: 0x8
    // Offset: 0x0
    TMPro::TMP_Text* textComponent;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Text*) == 0x8);
    // public System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x8
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkIdFirstCharacterIndex
    // Size: 0x4
    // Offset: 0xC
    int linkIdFirstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkIdLength
    // Size: 0x4
    // Offset: 0x10
    int linkIdLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkTextfirstCharacterIndex
    // Size: 0x4
    // Offset: 0x14
    int linkTextfirstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkTextLength
    // Size: 0x4
    // Offset: 0x18
    int linkTextLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: linkTextLength and: linkID
    char __padding5[0x4] = {};
    // System.Char[] linkID
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppChar>* linkID;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // Creating value type constructor for type: TMP_LinkInfo
    constexpr TMP_LinkInfo(TMPro::TMP_Text* textComponent_ = {}, int hashCode_ = {}, int linkIdFirstCharacterIndex_ = {}, int linkIdLength_ = {}, int linkTextfirstCharacterIndex_ = {}, int linkTextLength_ = {}, ::Array<::Il2CppChar>* linkID_ = {}) noexcept : textComponent{textComponent_}, hashCode{hashCode_}, linkIdFirstCharacterIndex{linkIdFirstCharacterIndex_}, linkIdLength{linkIdLength_}, linkTextfirstCharacterIndex{linkTextfirstCharacterIndex_}, linkTextLength{linkTextLength_}, linkID{linkID_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void SetLinkID(System.Char[] text, System.Int32 startIndex, System.Int32 length)
    // Offset: 0xEE5C14
    void SetLinkID(::Array<::Il2CppChar>* text, int startIndex, int length);
    // public System.String GetLinkText()
    // Offset: 0xEE5C1C
    ::Il2CppString* GetLinkText();
    // public System.String GetLinkID()
    // Offset: 0xEE5C24
    ::Il2CppString* GetLinkID();
  }; // TMPro.TMP_LinkInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_LinkInfo), 32 + sizeof(::Array<::Il2CppChar>*)> __TMPro_TMP_LinkInfoSizeCheck;
  static_assert(sizeof(TMP_LinkInfo) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_LinkInfo, "TMPro", "TMP_LinkInfo");
// Writing MetadataGetter for method: TMPro::TMP_LinkInfo::SetLinkID
// Il2CppName: SetLinkID
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_LinkInfo::GetLinkText
// Il2CppName: GetLinkText
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TMP_LinkInfo::GetLinkID
// Il2CppName: GetLinkID
// Cannot perform method pointer template specialization from operators!
