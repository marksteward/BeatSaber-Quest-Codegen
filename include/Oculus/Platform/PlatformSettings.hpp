// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x29
  // Autogenerated type: Oculus.Platform.PlatformSettings
  // [] Offset: FFFFFFFF
  class PlatformSettings : public UnityEngine::ScriptableObject {
    public:
    // private System.String ovrAppID
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* ovrAppID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String ovrMobileAppID
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* ovrMobileAppID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean ovrUseStandalonePlatform
    // Size: 0x1
    // Offset: 0x28
    bool ovrUseStandalonePlatform;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlatformSettings
    PlatformSettings(::Il2CppString* ovrAppID_ = {}, ::Il2CppString* ovrMobileAppID_ = {}, bool ovrUseStandalonePlatform_ = {}) noexcept : ovrAppID{ovrAppID_}, ovrMobileAppID{ovrMobileAppID_}, ovrUseStandalonePlatform{ovrUseStandalonePlatform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private Oculus.Platform.PlatformSettings instance
    static Oculus::Platform::PlatformSettings* _get_instance();
    // Set static field: static private Oculus.Platform.PlatformSettings instance
    static void _set_instance(Oculus::Platform::PlatformSettings* value);
    // static public System.String get_AppID()
    // Offset: 0x11D04DC
    static ::Il2CppString* get_AppID();
    // static public System.Void set_AppID(System.String value)
    // Offset: 0x11E3F2C
    static void set_AppID(::Il2CppString* value);
    // static public System.String get_MobileAppID()
    // Offset: 0x11D04BC
    static ::Il2CppString* get_MobileAppID();
    // static public System.Void set_MobileAppID(System.String value)
    // Offset: 0x11E3F5C
    static void set_MobileAppID(::Il2CppString* value);
    // static public System.Boolean get_UseStandalonePlatform()
    // Offset: 0x11D0078
    static bool get_UseStandalonePlatform();
    // static public System.Void set_UseStandalonePlatform(System.Boolean value)
    // Offset: 0x11E3F8C
    static void set_UseStandalonePlatform(bool value);
    // static public Oculus.Platform.PlatformSettings get_Instance()
    // Offset: 0x11E3E00
    static Oculus::Platform::PlatformSettings* get_Instance();
    // static public System.Void set_Instance(Oculus.Platform.PlatformSettings value)
    // Offset: 0x11E3FBC
    static void set_Instance(Oculus::Platform::PlatformSettings* value);
    // public System.Void .ctor()
    // Offset: 0x11E4014
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::PlatformSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformSettings*, creationType>()));
    }
  }; // Oculus.Platform.PlatformSettings
  static check_size<sizeof(PlatformSettings), 40 + sizeof(bool)> __Oculus_Platform_PlatformSettingsSizeCheck;
  static_assert(sizeof(PlatformSettings) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformSettings*, "Oculus.Platform", "PlatformSettings");
#pragma pack(pop)
