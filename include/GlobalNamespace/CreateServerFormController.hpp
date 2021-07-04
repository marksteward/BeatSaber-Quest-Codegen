// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FormattedFloatListSettingsController
  class FormattedFloatListSettingsController;
  // Forward declaring type: CreateServerFormData
  struct CreateServerFormData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: CreateServerFormController
  class CreateServerFormController : public UnityEngine::MonoBehaviour {
    public:
    // private FormattedFloatListSettingsController _maxPlayersList
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FormattedFloatListSettingsController* maxPlayersList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsController*) == 0x8);
    // private System.Boolean _netDiscoverable
    // Size: 0x1
    // Offset: 0x20
    bool netDiscoverable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CreateServerFormController
    CreateServerFormController(GlobalNamespace::FormattedFloatListSettingsController* maxPlayersList_ = {}, bool netDiscoverable_ = {}) noexcept : maxPlayersList{maxPlayersList_}, netDiscoverable{netDiscoverable_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMinPlayers
    static constexpr const int kMinPlayers = 2;
    // Get static field: static private System.Int32 kMinPlayers
    static int _get_kMinPlayers();
    // Set static field: static private System.Int32 kMinPlayers
    static void _set_kMinPlayers(int value);
    // static field const value: static private System.Int32 kMaxPlayers
    static constexpr const int kMaxPlayers = 5;
    // Get static field: static private System.Int32 kMaxPlayers
    static int _get_kMaxPlayers();
    // Set static field: static private System.Int32 kMaxPlayers
    static void _set_kMaxPlayers(int value);
    // public CreateServerFormData get_formData()
    // Offset: 0x1196AD8
    GlobalNamespace::CreateServerFormData get_formData();
    // public System.Void Setup(System.Int32 selectedNumberOfPlayers, System.Boolean netDiscoverable)
    // Offset: 0x1196BC4
    void Setup(int selectedNumberOfPlayers, bool netDiscoverable);
    // public System.Void .ctor()
    // Offset: 0x1196C08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateServerFormController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreateServerFormController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateServerFormController*, creationType>()));
    }
  }; // CreateServerFormController
  #pragma pack(pop)
  static check_size<sizeof(CreateServerFormController), 32 + sizeof(bool)> __GlobalNamespace_CreateServerFormControllerSizeCheck;
  static_assert(sizeof(CreateServerFormController) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerFormController*, "", "CreateServerFormController");
// Writing MetadataGetter for method: GlobalNamespace::CreateServerFormController::get_formData
// Il2CppName: get_formData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::CreateServerFormData (GlobalNamespace::CreateServerFormController::*)()>(&GlobalNamespace::CreateServerFormController::get_formData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerFormController*), "get_formData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerFormController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreateServerFormController::*)(int, bool)>(&GlobalNamespace::CreateServerFormController::Setup)> {
  const MethodInfo* get() {
    static auto* selectedNumberOfPlayers = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* netDiscoverable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreateServerFormController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedNumberOfPlayers, netDiscoverable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreateServerFormController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
