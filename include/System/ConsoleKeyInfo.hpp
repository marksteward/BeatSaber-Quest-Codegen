// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.ConsoleKey
#include "System/ConsoleKey.hpp"
// Including type: System.ConsoleModifiers
#include "System/ConsoleModifiers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ConsoleKeyInfo
  struct ConsoleKeyInfo/*, public System::ValueType*/ {
    public:
    // private System.Char _keyChar
    // Size: 0x2
    // Offset: 0x0
    ::Il2CppChar keyChar;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: keyChar and: key
    char __padding0[0x2] = {};
    // private System.ConsoleKey _key
    // Size: 0x4
    // Offset: 0x4
    System::ConsoleKey key;
    // Field size check
    static_assert(sizeof(System::ConsoleKey) == 0x4);
    // private System.ConsoleModifiers _mods
    // Size: 0x4
    // Offset: 0x8
    System::ConsoleModifiers mods;
    // Field size check
    static_assert(sizeof(System::ConsoleModifiers) == 0x4);
    // Creating value type constructor for type: ConsoleKeyInfo
    constexpr ConsoleKeyInfo(::Il2CppChar keyChar_ = {}, System::ConsoleKey key_ = {}, System::ConsoleModifiers mods_ = {}) noexcept : keyChar{keyChar_}, key{key_}, mods{mods_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Char keyChar, System.ConsoleKey key, System.Boolean shift, System.Boolean alt, System.Boolean control)
    // Offset: 0xF01FE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ConsoleKeyInfo(::Il2CppChar keyChar, System::ConsoleKey key, bool shift, bool alt, bool control) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ConsoleKeyInfo::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(keyChar), ::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(shift), ::il2cpp_utils::ExtractType(alt), ::il2cpp_utils::ExtractType(control)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, keyChar, key, shift, alt, control);
    }
    // public System.Char get_KeyChar()
    // Offset: 0xF01FF4
    ::Il2CppChar get_KeyChar();
    // public System.ConsoleKey get_Key()
    // Offset: 0xF01FFC
    System::ConsoleKey get_Key();
    // public System.Boolean Equals(System.ConsoleKeyInfo obj)
    // Offset: 0xF0200C
    bool Equals(System::ConsoleKeyInfo obj);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xF02004
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF02040
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.ConsoleKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(ConsoleKeyInfo), 8 + sizeof(System::ConsoleModifiers)> __System_ConsoleKeyInfoSizeCheck;
  static_assert(sizeof(ConsoleKeyInfo) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleKeyInfo, "System", "ConsoleKeyInfo");
// Writing MetadataGetter for method: System::ConsoleKeyInfo::ConsoleKeyInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ConsoleKeyInfo::get_KeyChar
// Il2CppName: get_KeyChar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::ConsoleKeyInfo::get_Key
// Il2CppName: get_Key
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::ConsoleKeyInfo::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::ConsoleKeyInfo::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::ConsoleKeyInfo::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
