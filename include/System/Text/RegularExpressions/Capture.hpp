// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Capture
  class Capture : public ::Il2CppObject {
    public:
    // System.String _text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _length
    // Size: 0x4
    // Offset: 0x1C
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Capture
    Capture(::Il2CppString* text_ = {}, int index_ = {}, int length_ = {}) noexcept : text{text_}, index{index_}, length{length_} {}
    // System.Void .ctor(System.String text, System.Int32 i, System.Int32 l)
    // Offset: 0x1853CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Capture* New_ctor(::Il2CppString* text, int i, int l) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Capture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Capture*, creationType>(text, i, l)));
    }
    // public System.Int32 get_Index()
    // Offset: 0x1853CF0
    int get_Index();
    // public System.Int32 get_Length()
    // Offset: 0x1853CF8
    int get_Length();
    // public System.String get_Value()
    // Offset: 0x1853D00
    ::Il2CppString* get_Value();
    // public override System.String ToString()
    // Offset: 0x1853D24
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // System.Void .ctor()
    // Offset: 0x1853D28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Capture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Capture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Capture*, creationType>()));
    }
  }; // System.Text.RegularExpressions.Capture
  #pragma pack(pop)
  static check_size<sizeof(Capture), 28 + sizeof(int)> __System_Text_RegularExpressions_CaptureSizeCheck;
  static_assert(sizeof(Capture) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Capture*, "System.Text.RegularExpressions", "Capture");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::get_Index
// Il2CppName: get_Index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::get_Index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "get_Index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::RegularExpressions::Capture::*)()>(&System::Text::RegularExpressions::Capture::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Capture*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Capture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
