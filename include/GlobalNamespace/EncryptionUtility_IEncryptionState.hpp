// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: EncryptionUtility/IEncryptionState
  class EncryptionUtility::IEncryptionState/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IEncryptionState
    IEncryptionState() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Boolean get_isValid()
    // Offset: 0xFFFFFFFF
    bool get_isValid();
    // public System.Void EncryptData(System.Byte[] data, ref System.Int32 offset, ref System.Int32 length, System.Int32 extraPrefixBytes)
    // Offset: 0xFFFFFFFF
    void EncryptData(::Array<uint8_t>* data, int& offset, int& length, int extraPrefixBytes);
    // public System.Boolean TryDecryptData(System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0xFFFFFFFF
    bool TryDecryptData(::Array<uint8_t>* data, int& offset, int& length);
  }; // EncryptionUtility/IEncryptionState
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EncryptionUtility::IEncryptionState*, "", "EncryptionUtility/IEncryptionState");
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::IEncryptionState::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EncryptionUtility::IEncryptionState::*)()>(&GlobalNamespace::EncryptionUtility::IEncryptionState::get_isValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::IEncryptionState*), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::IEncryptionState::EncryptData
// Il2CppName: EncryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EncryptionUtility::IEncryptionState::*)(::Array<uint8_t>*, int&, int&, int)>(&GlobalNamespace::EncryptionUtility::IEncryptionState::EncryptData)> {
  const MethodInfo* get() {
    static auto* data = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* extraPrefixBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::IEncryptionState*), "EncryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length, extraPrefixBytes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::IEncryptionState::TryDecryptData
// Il2CppName: TryDecryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EncryptionUtility::IEncryptionState::*)(::Array<uint8_t>*, int&, int&)>(&GlobalNamespace::EncryptionUtility::IEncryptionState::TryDecryptData)> {
  const MethodInfo* get() {
    static auto* data = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::IEncryptionState*), "TryDecryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
