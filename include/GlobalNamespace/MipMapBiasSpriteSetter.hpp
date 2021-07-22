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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MipMapBiasSpriteSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class MipMapBiasSpriteSetter : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Sprite[] _sprites
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Sprite*>* sprites;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Sprite*>*) == 0x8);
    // private System.Single _mipMapBias
    // Size: 0x4
    // Offset: 0x20
    float mipMapBias;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MipMapBiasSpriteSetter
    MipMapBiasSpriteSetter(::Array<UnityEngine::Sprite*>* sprites_ = {}, float mipMapBias_ = {}) noexcept : sprites{sprites_}, mipMapBias{mipMapBias_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x121BE84
    void Start();
    // public System.Void .ctor()
    // Offset: 0x121BF0C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MipMapBiasSpriteSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MipMapBiasSpriteSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MipMapBiasSpriteSetter*, creationType>()));
    }
  }; // MipMapBiasSpriteSetter
  #pragma pack(pop)
  static check_size<sizeof(MipMapBiasSpriteSetter), 32 + sizeof(float)> __GlobalNamespace_MipMapBiasSpriteSetterSizeCheck;
  static_assert(sizeof(MipMapBiasSpriteSetter) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MipMapBiasSpriteSetter*, "", "MipMapBiasSpriteSetter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MipMapBiasSpriteSetter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MipMapBiasSpriteSetter::*)()>(&GlobalNamespace::MipMapBiasSpriteSetter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MipMapBiasSpriteSetter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MipMapBiasSpriteSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
