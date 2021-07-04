// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RuntimePlatform
#include "UnityEngine/RuntimePlatform.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesPlatform
#include "UnityEngine/AddressableAssets/AddressablesPlatform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.PlatformMappingService
  class PlatformMappingService : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PlatformMappingService
    PlatformMappingService() noexcept {}
    // Get static field: static readonly System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,UnityEngine.AddressableAssets.AddressablesPlatform> s_RuntimeTargetMapping
    static System::Collections::Generic::Dictionary_2<UnityEngine::RuntimePlatform, UnityEngine::AddressableAssets::AddressablesPlatform>* _get_s_RuntimeTargetMapping();
    // Set static field: static readonly System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,UnityEngine.AddressableAssets.AddressablesPlatform> s_RuntimeTargetMapping
    static void _set_s_RuntimeTargetMapping(System::Collections::Generic::Dictionary_2<UnityEngine::RuntimePlatform, UnityEngine::AddressableAssets::AddressablesPlatform>* value);
    // static UnityEngine.AddressableAssets.AddressablesPlatform GetAddressablesPlatformInternal(UnityEngine.RuntimePlatform platform)
    // Offset: 0x13F62EC
    static UnityEngine::AddressableAssets::AddressablesPlatform GetAddressablesPlatformInternal(UnityEngine::RuntimePlatform platform);
    // static System.String GetAddressablesPlatformPathInternal(UnityEngine.RuntimePlatform platform)
    // Offset: 0x13F63C0
    static ::Il2CppString* GetAddressablesPlatformPathInternal(UnityEngine::RuntimePlatform platform);
    // static public UnityEngine.AddressableAssets.AddressablesPlatform GetPlatform()
    // Offset: 0x13F6520
    static UnityEngine::AddressableAssets::AddressablesPlatform GetPlatform();
    // static public System.String GetPlatformPathSubFolder()
    // Offset: 0x13E9288
    static ::Il2CppString* GetPlatformPathSubFolder();
    // static private System.Void .cctor()
    // Offset: 0x13F6598
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13F6590
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformMappingService* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::PlatformMappingService::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformMappingService*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.PlatformMappingService
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::PlatformMappingService*, "UnityEngine.AddressableAssets", "PlatformMappingService");
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal
// Il2CppName: GetAddressablesPlatformInternal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal
// Il2CppName: GetAddressablesPlatformPathInternal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetPlatform
// Il2CppName: GetPlatform
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder
// Il2CppName: GetPlatformPathSubFolder
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::PlatformMappingService::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
