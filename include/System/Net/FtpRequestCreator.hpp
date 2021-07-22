// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IWebRequestCreate
#include "System/Net/IWebRequestCreate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpRequestCreator
  // [TokenAttribute] Offset: FFFFFFFF
  class FtpRequestCreator : public ::Il2CppObject/*, public System::Net::IWebRequestCreate*/ {
    public:
    // Creating value type constructor for type: FtpRequestCreator
    FtpRequestCreator() noexcept {}
    // Creating interface conversion operator: operator System::Net::IWebRequestCreate
    operator System::Net::IWebRequestCreate() noexcept {
      return *reinterpret_cast<System::Net::IWebRequestCreate*>(this);
    }
    // public System.Net.WebRequest Create(System.Uri uri)
    // Offset: 0x16A7FC8
    System::Net::WebRequest* Create(System::Uri* uri);
    // public System.Void .ctor()
    // Offset: 0x16A8104
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpRequestCreator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpRequestCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpRequestCreator*, creationType>()));
    }
  }; // System.Net.FtpRequestCreator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpRequestCreator*, "System.Net", "FtpRequestCreator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FtpRequestCreator::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebRequest* (System::Net::FtpRequestCreator::*)(System::Uri*)>(&System::Net::FtpRequestCreator::Create)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpRequestCreator*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::FtpRequestCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
