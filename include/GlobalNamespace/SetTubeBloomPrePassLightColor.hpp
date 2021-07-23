// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SetTubeBloomPrePassLightColor
  // [TokenAttribute] Offset: FFFFFFFF
  class SetTubeBloomPrePassLightColor : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _color
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* color;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private TubeBloomPrePassLight[] _tubeLights
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* tubeLights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::TubeBloomPrePassLight*>*) == 0x8);
    // Creating value type constructor for type: SetTubeBloomPrePassLightColor
    SetTubeBloomPrePassLightColor(GlobalNamespace::ColorSO* color_ = {}, ::Array<GlobalNamespace::TubeBloomPrePassLight*>* tubeLights_ = {}) noexcept : color{color_}, tubeLights{tubeLights_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private ColorSO _color
    GlobalNamespace::ColorSO* _get__color();
    // Set instance field: private ColorSO _color
    void _set__color(GlobalNamespace::ColorSO* value);
    // Get instance field: private TubeBloomPrePassLight[] _tubeLights
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* _get__tubeLights();
    // Set instance field: private TubeBloomPrePassLight[] _tubeLights
    void _set__tubeLights(::Array<GlobalNamespace::TubeBloomPrePassLight*>* value);
    // protected System.Void Start()
    // Offset: 0x105287C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1052900
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetTubeBloomPrePassLightColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetTubeBloomPrePassLightColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetTubeBloomPrePassLightColor*, creationType>()));
    }
  }; // SetTubeBloomPrePassLightColor
  #pragma pack(pop)
  static check_size<sizeof(SetTubeBloomPrePassLightColor), 32 + sizeof(::Array<GlobalNamespace::TubeBloomPrePassLight*>*)> __GlobalNamespace_SetTubeBloomPrePassLightColorSizeCheck;
  static_assert(sizeof(SetTubeBloomPrePassLightColor) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetTubeBloomPrePassLightColor*, "", "SetTubeBloomPrePassLightColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetTubeBloomPrePassLightColor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&GlobalNamespace::SetTubeBloomPrePassLightColor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetTubeBloomPrePassLightColor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetTubeBloomPrePassLightColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
