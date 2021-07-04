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
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.ResultProof
  class ResultProof : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE29A14
    // private System.String <proof>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* proof;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ResultProof
    ResultProof(::Il2CppString* proof_ = {}) noexcept : proof{proof_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return proof;
    }
    // public System.String get_proof()
    // Offset: 0x11BC6FC
    ::Il2CppString* get_proof();
    // public System.Void set_proof(System.String value)
    // Offset: 0x11BC704
    void set_proof(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x11BC70C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultProof* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::ResultProof::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultProof*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.ResultProof
  #pragma pack(pop)
  static check_size<sizeof(ResultProof), 16 + sizeof(::Il2CppString*)> __BeatSaberAPI_DataTransferObjects_ResultProofSizeCheck;
  static_assert(sizeof(ResultProof) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::ResultProof*, "BeatSaberAPI.DataTransferObjects", "ResultProof");
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::ResultProof::get_proof
// Il2CppName: get_proof
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::ResultProof::set_proof
// Il2CppName: set_proof
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::ResultProof::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
