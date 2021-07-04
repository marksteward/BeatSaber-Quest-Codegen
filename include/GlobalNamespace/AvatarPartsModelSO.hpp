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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarMeshPartSO
  class AvatarMeshPartSO;
  // Forward declaring type: AvatarSpritePartSO
  class AvatarSpritePartSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPartsModelSO
  class AvatarPartsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private AvatarMeshPartSO[] _headTops
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* headTops;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private AvatarSpritePartSO[] _eyes
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::AvatarSpritePartSO*>* eyes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AvatarSpritePartSO*>*) == 0x8);
    // private AvatarSpritePartSO[] _mouths
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::AvatarSpritePartSO*>* mouths;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AvatarSpritePartSO*>*) == 0x8);
    // private AvatarMeshPartSO[] _glasses
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* glasses;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private AvatarMeshPartSO[] _facialHair
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* facialHair;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private AvatarMeshPartSO[] _hands
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* hands;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private AvatarMeshPartSO[] _clothes
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* clothes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // Creating value type constructor for type: AvatarPartsModelSO
    AvatarPartsModelSO(::Array<GlobalNamespace::AvatarMeshPartSO*>* headTops_ = {}, ::Array<GlobalNamespace::AvatarSpritePartSO*>* eyes_ = {}, ::Array<GlobalNamespace::AvatarSpritePartSO*>* mouths_ = {}, ::Array<GlobalNamespace::AvatarMeshPartSO*>* glasses_ = {}, ::Array<GlobalNamespace::AvatarMeshPartSO*>* facialHair_ = {}, ::Array<GlobalNamespace::AvatarMeshPartSO*>* hands_ = {}, ::Array<GlobalNamespace::AvatarMeshPartSO*>* clothes_ = {}) noexcept : headTops{headTops_}, eyes{eyes_}, mouths{mouths_}, glasses{glasses_}, facialHair{facialHair_}, hands{hands_}, clothes{clothes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public AvatarMeshPartSO[] get_headTops()
    // Offset: 0x1135758
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* get_headTops();
    // public AvatarSpritePartSO[] get_Eyes()
    // Offset: 0x1135760
    ::Array<GlobalNamespace::AvatarSpritePartSO*>* get_Eyes();
    // public AvatarSpritePartSO[] get_Mouths()
    // Offset: 0x1135768
    ::Array<GlobalNamespace::AvatarSpritePartSO*>* get_Mouths();
    // public AvatarMeshPartSO[] get_Glasses()
    // Offset: 0x1135770
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* get_Glasses();
    // public AvatarMeshPartSO[] get_FacialHair()
    // Offset: 0x1135778
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* get_FacialHair();
    // public AvatarMeshPartSO[] get_Hands()
    // Offset: 0x1135780
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* get_Hands();
    // public AvatarMeshPartSO[] get_Clothes()
    // Offset: 0x1135788
    ::Array<GlobalNamespace::AvatarMeshPartSO*>* get_Clothes();
    // public System.Void .ctor()
    // Offset: 0x1135790
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPartsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPartsModelSO*, creationType>()));
    }
  }; // AvatarPartsModelSO
  #pragma pack(pop)
  static check_size<sizeof(AvatarPartsModelSO), 72 + sizeof(::Array<GlobalNamespace::AvatarMeshPartSO*>*)> __GlobalNamespace_AvatarPartsModelSOSizeCheck;
  static_assert(sizeof(AvatarPartsModelSO) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPartsModelSO*, "", "AvatarPartsModelSO");
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_headTops
// Il2CppName: get_headTops
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Eyes
// Il2CppName: get_Eyes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Mouths
// Il2CppName: get_Mouths
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Glasses
// Il2CppName: get_Glasses
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_FacialHair
// Il2CppName: get_FacialHair
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Hands
// Il2CppName: get_Hands
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::get_Clothes
// Il2CppName: get_Clothes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
