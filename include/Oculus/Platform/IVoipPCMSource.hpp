// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.IVoipPCMSource
  class IVoipPCMSource {
    public:
    // Creating value type constructor for type: IVoipPCMSource
    IVoipPCMSource() noexcept {}
    // public System.Int32 GetPCM(System.Single[] dest, System.Int32 length)
    // Offset: 0xFFFFFFFF
    int GetPCM(::Array<float>* dest, int length);
    // public System.Void SetSenderID(System.UInt64 senderID)
    // Offset: 0xFFFFFFFF
    void SetSenderID(uint64_t senderID);
    // public System.Void Update()
    // Offset: 0xFFFFFFFF
    void Update();
    // public System.Int32 PeekSizeElements()
    // Offset: 0xFFFFFFFF
    int PeekSizeElements();
  }; // Oculus.Platform.IVoipPCMSource
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::IVoipPCMSource*, "Oculus.Platform", "IVoipPCMSource");
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::GetPCM
// Il2CppName: GetPCM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Platform::IVoipPCMSource::*)(::Array<float>*, int)>(&Oculus::Platform::IVoipPCMSource::GetPCM)> {
  const MethodInfo* get() {
    static auto* dest = &classof(::Array<::Array<float>*>*)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "GetPCM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, length});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::SetSenderID
// Il2CppName: SetSenderID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::IVoipPCMSource::*)(uint64_t)>(&Oculus::Platform::IVoipPCMSource::SetSenderID)> {
  const MethodInfo* get() {
    static auto* senderID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "SetSenderID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{senderID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::IVoipPCMSource::*)()>(&Oculus::Platform::IVoipPCMSource::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::IVoipPCMSource::PeekSizeElements
// Il2CppName: PeekSizeElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Platform::IVoipPCMSource::*)()>(&Oculus::Platform::IVoipPCMSource::PeekSizeElements)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::IVoipPCMSource*), "PeekSizeElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
