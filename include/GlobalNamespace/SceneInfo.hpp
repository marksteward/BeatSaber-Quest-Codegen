// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: SceneInfo
  class SceneInfo : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _sceneName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* sceneName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _disabledRootObjects
    // Size: 0x1
    // Offset: 0x20
    bool disabledRootObjects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SceneInfo
    SceneInfo(::Il2CppString* sceneName_ = {}, bool disabledRootObjects_ = {}) noexcept : sceneName{sceneName_}, disabledRootObjects{disabledRootObjects_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_sceneName()
    // Offset: 0x12528B8
    ::Il2CppString* get_sceneName();
    // public System.Boolean get_disabledRootObjects()
    // Offset: 0x12528C0
    bool get_disabledRootObjects();
    // public System.Void .ctor()
    // Offset: 0x12528C8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneInfo*, creationType>()));
    }
  }; // SceneInfo
  #pragma pack(pop)
  static check_size<sizeof(SceneInfo), 32 + sizeof(bool)> __GlobalNamespace_SceneInfoSizeCheck;
  static_assert(sizeof(SceneInfo) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneInfo*, "", "SceneInfo");
// Writing MetadataGetter for method: GlobalNamespace::SceneInfo::get_sceneName
// Il2CppName: get_sceneName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneInfo::get_disabledRootObjects
// Il2CppName: get_disabledRootObjects
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
