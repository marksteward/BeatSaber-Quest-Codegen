// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageData
  class CloudStorageData;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithCloudStorageData
  class MessageWithCloudStorageData : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageData*> {
    public:
    // Creating value type constructor for type: MessageWithCloudStorageData
    MessageWithCloudStorageData() noexcept {}
    // protected Oculus.Platform.Models.CloudStorageData GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CE2A0
    Oculus::Platform::Models::CloudStorageData* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA5B8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithCloudStorageData* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithCloudStorageData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithCloudStorageData*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.CloudStorageData GetCloudStorageData()
    // Offset: 0x14CE25C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.CloudStorageData Message::GetCloudStorageData()
    Oculus::Platform::Models::CloudStorageData* GetCloudStorageData();
  }; // Oculus.Platform.MessageWithCloudStorageData
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageData*, "Oculus.Platform", "MessageWithCloudStorageData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageData::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageData* (Oculus::Platform::MessageWithCloudStorageData::*)(System::IntPtr)>(&Oculus::Platform::MessageWithCloudStorageData::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageData*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithCloudStorageData::GetCloudStorageData
// Il2CppName: GetCloudStorageData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::CloudStorageData* (Oculus::Platform::MessageWithCloudStorageData::*)()>(&Oculus::Platform::MessageWithCloudStorageData::GetCloudStorageData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithCloudStorageData*), "GetCloudStorageData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
