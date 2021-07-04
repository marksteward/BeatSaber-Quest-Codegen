// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CreditsData
#include "GlobalNamespace/CreditsData.hpp"
// Including type: CreditsData/TextStyle
#include "GlobalNamespace/CreditsData_TextStyle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData/Text
  class CreditsData::Text : public ::Il2CppObject {
    public:
    // public System.String text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean localized
    // Size: 0x1
    // Offset: 0x18
    bool localized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: localized and: style
    char __padding1[0x3] = {};
    // public CreditsData/TextStyle style
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::CreditsData::TextStyle style;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsData::TextStyle) == 0x4);
    // Creating value type constructor for type: Text
    Text(::Il2CppString* text_ = {}, bool localized_ = {}, GlobalNamespace::CreditsData::TextStyle style_ = {}) noexcept : text{text_}, localized{localized_}, style{style_} {}
    // public System.Boolean IsEmpty()
    // Offset: 0x1197E10
    bool IsEmpty();
    // public override System.String ToString()
    // Offset: 0x1197E30
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x1197EDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsData::Text* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreditsData::Text::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsData::Text*, creationType>()));
    }
  }; // CreditsData/Text
  #pragma pack(pop)
  static check_size<sizeof(CreditsData::Text), 28 + sizeof(GlobalNamespace::CreditsData::TextStyle)> __GlobalNamespace_CreditsData_TextSizeCheck;
  static_assert(sizeof(CreditsData::Text) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsData::Text*, "", "CreditsData/Text");
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Text::IsEmpty
// Il2CppName: IsEmpty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Text::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CreditsData::Text::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
