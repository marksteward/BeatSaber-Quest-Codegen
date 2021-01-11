// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRSettings
  // [] Offset: FFFFFFFF
  class CVRSettings : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRSettings FnTable
    // Size: 0x60
    // Offset: 0x10
    Valve::VR::IVRSettings FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSettings) == 0x60);
    // Creating value type constructor for type: CVRSettings
    CVRSettings(Valve::VR::IVRSettings FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRSettings
    constexpr operator Valve::VR::IVRSettings() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x136BAB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSettings* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSettings*, creationType>(pInterface)));
    }
    // public System.String GetSettingsErrorNameFromEnum(Valve.VR.EVRSettingsError eError)
    // Offset: 0x136BBC8
    ::Il2CppString* GetSettingsErrorNameFromEnum(Valve::VR::EVRSettingsError eError);
    // public System.Boolean Sync(System.Boolean bForce, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BC5C
    bool Sync(bool bForce, Valve::VR::EVRSettingsError& peError);
    // public System.Void SetBool(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BC7C
    void SetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, Valve::VR::EVRSettingsError& peError);
    // public System.Void SetInt32(System.String pchSection, System.String pchSettingsKey, System.Int32 nValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BC9C
    void SetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, int nValue, Valve::VR::EVRSettingsError& peError);
    // public System.Void SetFloat(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BCB8
    void SetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, Valve::VR::EVRSettingsError& peError);
    // public System.Void SetString(System.String pchSection, System.String pchSettingsKey, System.String pchValue, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BCD4
    void SetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ::Il2CppString* pchValue, Valve::VR::EVRSettingsError& peError);
    // public System.Boolean GetBool(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BCF0
    bool GetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, Valve::VR::EVRSettingsError& peError);
    // public System.Int32 GetInt32(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BD0C
    int GetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, Valve::VR::EVRSettingsError& peError);
    // public System.Single GetFloat(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BD28
    float GetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, Valve::VR::EVRSettingsError& peError);
    // public System.Void GetString(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BD44
    void GetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, Valve::VR::EVRSettingsError& peError);
    // public System.Void RemoveSection(System.String pchSection, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BD60
    void RemoveSection(::Il2CppString* pchSection, Valve::VR::EVRSettingsError& peError);
    // public System.Void RemoveKeyInSection(System.String pchSection, System.String pchSettingsKey, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x136BD7C
    void RemoveKeyInSection(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, Valve::VR::EVRSettingsError& peError);
  }; // Valve.VR.CVRSettings
  static check_size<sizeof(CVRSettings), 16 + sizeof(Valve::VR::IVRSettings)> __Valve_VR_CVRSettingsSizeCheck;
  static_assert(sizeof(CVRSettings) == 0x70);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSettings*, "Valve.VR", "CVRSettings");
