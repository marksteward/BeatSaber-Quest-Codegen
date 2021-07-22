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
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.TokenizerShortBlock
  // [TokenAttribute] Offset: FFFFFFFF
  class TokenizerShortBlock : public ::Il2CppObject {
    public:
    // System.Int16[] m_block
    // Size: 0x8
    // Offset: 0x10
    ::Array<int16_t>* m_block;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // System.Security.Util.TokenizerShortBlock m_next
    // Size: 0x8
    // Offset: 0x18
    System::Security::Util::TokenizerShortBlock* m_next;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerShortBlock*) == 0x8);
    // Creating value type constructor for type: TokenizerShortBlock
    TokenizerShortBlock(::Array<int16_t>* m_block_ = {}, System::Security::Util::TokenizerShortBlock* m_next_ = {}) noexcept : m_block{m_block_}, m_next{m_next_} {}
    // public System.Void .ctor()
    // Offset: 0x1BC3AA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenizerShortBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::TokenizerShortBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenizerShortBlock*, creationType>()));
    }
  }; // System.Security.Util.TokenizerShortBlock
  #pragma pack(pop)
  static check_size<sizeof(TokenizerShortBlock), 24 + sizeof(System::Security::Util::TokenizerShortBlock*)> __System_Security_Util_TokenizerShortBlockSizeCheck;
  static_assert(sizeof(TokenizerShortBlock) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerShortBlock*, "System.Security.Util", "TokenizerShortBlock");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Util::TokenizerShortBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
