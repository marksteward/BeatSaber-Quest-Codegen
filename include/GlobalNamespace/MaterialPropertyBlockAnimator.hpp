// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  // Autogenerated type: MaterialPropertyBlockAnimator
  // [] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: DA4360
  class MaterialPropertyBlockAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _property
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* property;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // protected System.Int32 propertyId
    // Size: 0x4
    // Offset: 0x28
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x2C
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MaterialPropertyBlockAnimator
    MaterialPropertyBlockAnimator(::Il2CppString* property_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, int propertyId_ = {}, bool isInitialized_ = {}) noexcept : property{property_}, materialPropertyBlockController{materialPropertyBlockController_}, propertyId{propertyId_}, isInitialized{isInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MaterialPropertyBlockController get_materialPropertyBlockController()
    // Offset: 0x187DAE4
    GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();
    // public System.Void set_materialPropertyBlockController(MaterialPropertyBlockController value)
    // Offset: 0x187DAEC
    void set_materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController* value);
    // protected System.Void SetProperty()
    // Offset: 0x187DAF4
    void SetProperty();
    // protected System.Void Awake()
    // Offset: 0x187DAF8
    void Awake();
    // protected System.Void Update()
    // Offset: 0x187DB78
    void Update();
    // private System.Void LazyInit()
    // Offset: 0x187DB38
    void LazyInit();
    // public System.Void .ctor()
    // Offset: 0x187DC88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MaterialPropertyBlockAnimator").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockAnimator*, creationType>()));
    }
  }; // MaterialPropertyBlockAnimator
  static check_size<sizeof(MaterialPropertyBlockAnimator), 44 + sizeof(bool)> __GlobalNamespace_MaterialPropertyBlockAnimatorSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockAnimator) == 0x2D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockAnimator*, "", "MaterialPropertyBlockAnimator");
#pragma pack(pop)