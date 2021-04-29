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
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Completed forward declares
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityDocument
  class SecurityDocument : public ::Il2CppObject {
    public:
    // System.Byte[] m_data
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* m_data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: SecurityDocument
    SecurityDocument(::Array<uint8_t>* m_data_ = {}) noexcept : m_data{m_data_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return m_data;
    }
    // public System.Void .ctor(System.Int32 numData)
    // Offset: 0x196FD4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityDocument* New_ctor(int numData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecurityDocument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityDocument*, creationType>(numData)));
    }
    // public System.Void GuaranteeSize(System.Int32 size)
    // Offset: 0x196FDBC
    void GuaranteeSize(int size);
    // public System.Void AddString(System.String str, ref System.Int32 position)
    // Offset: 0x196FE70
    void AddString(::Il2CppString* str, int& position);
    // public System.Void AppendString(System.String str, ref System.Int32 position)
    // Offset: 0x196FFD0
    void AppendString(::Il2CppString* str, int& position);
    // static public System.Int32 EncodedStringSize(System.String str)
    // Offset: 0x19700B4
    static int EncodedStringSize(::Il2CppString* str);
    // public System.String GetString(ref System.Int32 position, System.Boolean bCreate)
    // Offset: 0x19700D4
    ::Il2CppString* GetString(int& position, bool bCreate);
    // public System.Void AddToken(System.Byte b, ref System.Int32 position)
    // Offset: 0x19703FC
    void AddToken(uint8_t b, int& position);
    // public System.Security.SecurityElement GetRootElement()
    // Offset: 0x197046C
    System::Security::SecurityElement* GetRootElement();
    // public System.Security.SecurityElement GetElement(System.Int32 position, System.Boolean bCreate)
    // Offset: 0x1970494
    System::Security::SecurityElement* GetElement(int position, bool bCreate);
    // System.Security.SecurityElement InternalGetElement(ref System.Int32 position, System.Boolean bCreate)
    // Offset: 0x19704BC
    System::Security::SecurityElement* InternalGetElement(int& position, bool bCreate);
  }; // System.Security.SecurityDocument
  #pragma pack(pop)
  static check_size<sizeof(SecurityDocument), 16 + sizeof(::Array<uint8_t>*)> __System_Security_SecurityDocumentSizeCheck;
  static_assert(sizeof(SecurityDocument) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityDocument*, "System.Security", "SecurityDocument");
