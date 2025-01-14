// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ICertificateEncryptionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ICertificateEncryptionProvider/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: ICertificateEncryptionProvider
    ICertificateEncryptionProvider() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Byte[] SignData(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* SignData(::Array<uint8_t>* data, int offset, int length);
  }; // ICertificateEncryptionProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICertificateEncryptionProvider*, "", "ICertificateEncryptionProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ICertificateEncryptionProvider::SignData
// Il2CppName: SignData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (GlobalNamespace::ICertificateEncryptionProvider::*)(::Array<uint8_t>*, int, int)>(&GlobalNamespace::ICertificateEncryptionProvider::SignData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ICertificateEncryptionProvider*), "SignData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
