// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.SecureStringHasher
#include "System/Xml/SecureStringHasher.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.SecureStringHasher/HashCodeOfStringDelegate
  class SecureStringHasher::HashCodeOfStringDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: HashCodeOfStringDelegate
    HashCodeOfStringDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x17A9010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureStringHasher::HashCodeOfStringDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::SecureStringHasher::HashCodeOfStringDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureStringHasher::HashCodeOfStringDelegate*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy)
    // Offset: 0x17A8B5C
    int Invoke(::Il2CppString* s, int sLen, int64_t additionalEntropy);
    // public System.IAsyncResult BeginInvoke(System.String s, System.Int32 sLen, System.Int64 additionalEntropy, System.AsyncCallback callback, System.Object object)
    // Offset: 0x17A9020
    System::IAsyncResult* BeginInvoke(::Il2CppString* s, int sLen, int64_t additionalEntropy, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x17A90D8
    int EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.SecureStringHasher/HashCodeOfStringDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::SecureStringHasher::HashCodeOfStringDelegate*, "System.Xml", "SecureStringHasher/HashCodeOfStringDelegate");
