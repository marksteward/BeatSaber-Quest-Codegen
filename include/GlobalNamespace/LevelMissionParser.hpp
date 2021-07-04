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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LevelMissionParser
  class LevelMissionParser : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::LevelMissionParser::ParserFunction
    class ParserFunction;
    // private System.Collections.Generic.Dictionary`2<System.String,LevelMissionParser/ParserFunction> _functions
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>* functions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>*) == 0x8);
    // Creating value type constructor for type: LevelMissionParser
    LevelMissionParser(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>* functions_ = {}) noexcept : functions{functions_} {}
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>*
    constexpr operator System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>*() const noexcept {
      return functions;
    }
    // public System.Void AddFunction(System.String name, LevelMissionParser/ParserFunction function)
    // Offset: 0x11FC700
    void AddFunction(::Il2CppString* name, GlobalNamespace::LevelMissionParser::ParserFunction* function);
    // public System.Boolean Parse(System.String s)
    // Offset: 0x11FC770
    bool Parse(::Il2CppString* s);
    // private System.Boolean Parse(System.String s, System.Int32 start, System.Int32 length)
    // Offset: 0x11FC78C
    bool Parse(::Il2CppString* s, int start, int length);
    // private System.Boolean ParseFunction(System.String s, System.Int32 start, System.Int32 length)
    // Offset: 0x11FCA68
    bool ParseFunction(::Il2CppString* s, int start, int length);
    // public System.Void .ctor()
    // Offset: 0x11FC688
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelMissionParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelMissionParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelMissionParser*, creationType>()));
    }
  }; // LevelMissionParser
  #pragma pack(pop)
  static check_size<sizeof(LevelMissionParser), 16 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelMissionParser::ParserFunction*>*)> __GlobalNamespace_LevelMissionParserSizeCheck;
  static_assert(sizeof(LevelMissionParser) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelMissionParser*, "", "LevelMissionParser");
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::AddFunction
// Il2CppName: AddFunction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::ParseFunction
// Il2CppName: ParseFunction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LevelMissionParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
