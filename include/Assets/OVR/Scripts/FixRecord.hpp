// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Assets.OVR.Scripts.Record
#include "Assets/OVR/Scripts/Record.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Assets::OVR::Scripts
namespace Assets::OVR::Scripts {
  // Forward declaring type: FixMethodDelegate
  class FixMethodDelegate;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: Assets.OVR.Scripts.FixRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class FixRecord : public Assets::OVR::Scripts::Record {
    public:
    // public Assets.OVR.Scripts.FixMethodDelegate fixMethod
    // Size: 0x8
    // Offset: 0x20
    Assets::OVR::Scripts::FixMethodDelegate* fixMethod;
    // Field size check
    static_assert(sizeof(Assets::OVR::Scripts::FixMethodDelegate*) == 0x8);
    // public UnityEngine.Object targetObject
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Object* targetObject;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // public System.String[] buttonNames
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* buttonNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Boolean editModeRequired
    // Size: 0x1
    // Offset: 0x38
    bool editModeRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean complete
    // Size: 0x1
    // Offset: 0x39
    bool complete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FixRecord
    FixRecord(Assets::OVR::Scripts::FixMethodDelegate* fixMethod_ = {}, UnityEngine::Object* targetObject_ = {}, ::Array<::Il2CppString*>* buttonNames_ = {}, bool editModeRequired_ = {}, bool complete_ = {}) noexcept : fixMethod{fixMethod_}, targetObject{targetObject_}, buttonNames{buttonNames_}, editModeRequired{editModeRequired_}, complete{complete_} {}
    // public System.Void .ctor(System.String cat, System.String msg, Assets.OVR.Scripts.FixMethodDelegate fix, UnityEngine.Object target, System.Boolean editRequired, System.String[] buttons)
    // Offset: 0x1575B00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixRecord* New_ctor(::Il2CppString* cat, ::Il2CppString* msg, Assets::OVR::Scripts::FixMethodDelegate* fix, UnityEngine::Object* target, bool editRequired, ::Array<::Il2CppString*>* buttons) {
      static auto ___internal__logger = ::Logger::get().WithContext("Assets::OVR::Scripts::FixRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixRecord*, creationType>(cat, msg, fix, target, editRequired, buttons)));
    }
  }; // Assets.OVR.Scripts.FixRecord
  #pragma pack(pop)
  static check_size<sizeof(FixRecord), 57 + sizeof(bool)> __Assets_OVR_Scripts_FixRecordSizeCheck;
  static_assert(sizeof(FixRecord) == 0x3A);
}
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::FixRecord*, "Assets.OVR.Scripts", "FixRecord");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Assets::OVR::Scripts::FixRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
