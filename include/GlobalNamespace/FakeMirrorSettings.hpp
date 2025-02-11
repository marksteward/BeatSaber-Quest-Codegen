// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: FakeMirrorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class FakeMirrorSettings : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _fakeMirrorTransparency
    // Size: 0x4
    // Offset: 0x18
    float fakeMirrorTransparency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FakeMirrorSettings
    FakeMirrorSettings(float fakeMirrorTransparency_ = {}) noexcept : fakeMirrorTransparency{fakeMirrorTransparency_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE99190
    // Get static field: static private readonly System.Int32 _fakeMirrorTransparencyId
    static int _get__fakeMirrorTransparencyId();
    // Set static field: static private readonly System.Int32 _fakeMirrorTransparencyId
    static void _set__fakeMirrorTransparencyId(int value);
    // Get instance field: private System.Single _fakeMirrorTransparency
    float _get__fakeMirrorTransparency();
    // Set instance field: private System.Single _fakeMirrorTransparency
    void _set__fakeMirrorTransparency(float value);
    // public System.Single get_fakeMirrorTransparency()
    // Offset: 0x1DC4944
    float get_fakeMirrorTransparency();
    // public System.Void set_fakeMirrorTransparency(System.Single value)
    // Offset: 0x1DC494C
    void set_fakeMirrorTransparency(float value);
    // protected System.Void Start()
    // Offset: 0x1DC4954
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1DC49C8
    void OnEnable();
    // protected System.Void OnValidate()
    // Offset: 0x1DC4A3C
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x1DC4AB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FakeMirrorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FakeMirrorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FakeMirrorSettings*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DC4AC4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // FakeMirrorSettings
  #pragma pack(pop)
  static check_size<sizeof(FakeMirrorSettings), 24 + sizeof(float)> __GlobalNamespace_FakeMirrorSettingsSizeCheck;
  static_assert(sizeof(FakeMirrorSettings) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FakeMirrorSettings*, "", "FakeMirrorSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::get_fakeMirrorTransparency
// Il2CppName: get_fakeMirrorTransparency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::get_fakeMirrorTransparency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "get_fakeMirrorTransparency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::set_fakeMirrorTransparency
// Il2CppName: set_fakeMirrorTransparency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)(float)>(&GlobalNamespace::FakeMirrorSettings::set_fakeMirrorTransparency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "set_fakeMirrorTransparency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::FakeMirrorSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
