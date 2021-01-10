// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  // Autogenerated type: Oculus.Platform.Core
  // [] Offset: FFFFFFFF
  class Core : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Core
    Core() noexcept {}
    // Get static field: static private System.Boolean IsPlatformInitialized
    static bool _get_IsPlatformInitialized();
    // Set static field: static private System.Boolean IsPlatformInitialized
    static void _set_IsPlatformInitialized(bool value);
    // Get static field: static public System.Boolean LogMessages
    static bool _get_LogMessages();
    // Set static field: static public System.Boolean LogMessages
    static void _set_LogMessages(bool value);
    // static public System.Boolean IsInitialized()
    // Offset: 0x11CFB18
    static bool IsInitialized();
    // static System.Void ForceInitialized()
    // Offset: 0x11CFB80
    static void ForceInitialized();
    // static private System.String getAppID(System.String appId)
    // Offset: 0x11CFBEC
    static ::Il2CppString* getAppID(::Il2CppString* appId);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x11CFDE8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::Il2CppString* appId);
    // static public System.Void Initialize(System.String appId)
    // Offset: 0x11D01E8
    static void Initialize(::Il2CppString* appId);
    // static private System.String GetAppIDFromConfig()
    // Offset: 0x11CFD9C
    static ::Il2CppString* GetAppIDFromConfig();
    // static private System.Void .cctor()
    // Offset: 0x11D0504
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x11D04FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Core* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Core::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Core*, creationType>()));
    }
  }; // Oculus.Platform.Core
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Core*, "Oculus.Platform", "Core");
#pragma pack(pop)
