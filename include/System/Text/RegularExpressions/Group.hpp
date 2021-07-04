// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.Capture
#include "System/Text/RegularExpressions/Capture.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Group
  class Group : public System::Text::RegularExpressions::Capture {
    public:
    // System.Int32[] _caps
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* caps;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32 _capcount
    // Size: 0x4
    // Offset: 0x28
    int capcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capcount and: name
    char __padding1[0x4] = {};
    // [OptionalFieldAttribute] Offset: 0xD88844
    // System.String _name
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Group
    Group(::Array<int>* caps_ = {}, int capcount_ = {}, ::Il2CppString* name_ = {}) noexcept : caps{caps_}, capcount{capcount_}, name{name_} {}
    // Get static field: static System.Text.RegularExpressions.Group _emptygroup
    static System::Text::RegularExpressions::Group* _get__emptygroup();
    // Set static field: static System.Text.RegularExpressions.Group _emptygroup
    static void _set__emptygroup(System::Text::RegularExpressions::Group* value);
    // System.Void .ctor(System.String text, System.Int32[] caps, System.Int32 capcount, System.String name)
    // Offset: 0x1853ECC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Group* New_ctor(::Il2CppString* text, ::Array<int>* caps, int capcount, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Group::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Group*, creationType>(text, caps, capcount, name)));
    }
    // public System.Boolean get_Success()
    // Offset: 0x1853F7C
    bool get_Success();
    // static private System.Void .cctor()
    // Offset: 0x1853F8C
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x1854048
    // Implemented from: System.Text.RegularExpressions.Capture
    // Base method: System.Void Capture::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Group* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Group::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Group*, creationType>()));
    }
  }; // System.Text.RegularExpressions.Group
  #pragma pack(pop)
  static check_size<sizeof(Group), 48 + sizeof(::Il2CppString*)> __System_Text_RegularExpressions_GroupSizeCheck;
  static_assert(sizeof(Group) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Group*, "System.Text.RegularExpressions", "Group");
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::get_Success
// Il2CppName: get_Success
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Group::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
