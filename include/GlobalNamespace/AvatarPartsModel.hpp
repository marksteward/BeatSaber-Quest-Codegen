// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPartCollection`1<T>
  template<typename T>
  class AvatarPartCollection_1;
  // Forward declaring type: AvatarMeshPartSO
  class AvatarMeshPartSO;
  // Forward declaring type: AvatarSpritePartSO
  class AvatarSpritePartSO;
  // Forward declaring type: SkinColorSO
  class SkinColorSO;
  // Forward declaring type: AvatarPartsModelSO
  class AvatarPartsModelSO;
  // Forward declaring type: SkinColorSetSO
  class SkinColorSetSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPartsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPartsModel : public ::Il2CppObject {
    public:
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <headTopCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* headTopCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private readonly AvatarPartCollection`1<AvatarSpritePartSO> <eyesCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* eyesCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>*) == 0x8);
    // private readonly AvatarPartCollection`1<AvatarSpritePartSO> <mouthCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* mouthCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>*) == 0x8);
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <glassesCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* glassesCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <facialHairCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* facialHairCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <handsCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* handsCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <clothesCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* clothesCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // private readonly SkinColorSO[] <skinColors>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::SkinColorSO*>* skinColors;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SkinColorSO*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Int32> _indexById
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* indexById;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*) == 0x8);
    // Creating value type constructor for type: AvatarPartsModel
    AvatarPartsModel(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* headTopCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* eyesCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* mouthCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* glassesCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* facialHairCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* handsCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* clothesCollection_ = {}, ::Array<GlobalNamespace::SkinColorSO*>* skinColors_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* indexById_ = {}) noexcept : headTopCollection{headTopCollection_}, eyesCollection{eyesCollection_}, mouthCollection{mouthCollection_}, glassesCollection{glassesCollection_}, facialHairCollection{facialHairCollection_}, handsCollection{handsCollection_}, clothesCollection{clothesCollection_}, skinColors{skinColors_}, indexById{indexById_} {}
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_headTopCollection()
    // Offset: 0x10DF5C4
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_headTopCollection();
    // public AvatarPartCollection`1<AvatarSpritePartSO> get_eyesCollection()
    // Offset: 0x10DF5CC
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* get_eyesCollection();
    // public AvatarPartCollection`1<AvatarSpritePartSO> get_mouthCollection()
    // Offset: 0x10DF5D4
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* get_mouthCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_glassesCollection()
    // Offset: 0x10DF5DC
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_glassesCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_facialHairCollection()
    // Offset: 0x10DF5E4
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_facialHairCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_handsCollection()
    // Offset: 0x10DF5EC
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_handsCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_clothesCollection()
    // Offset: 0x10DF5F4
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_clothesCollection();
    // public SkinColorSO[] get_skinColors()
    // Offset: 0x10DF5FC
    ::Array<GlobalNamespace::SkinColorSO*>* get_skinColors();
    // public System.Void .ctor(AvatarPartsModelSO avatarPartData, SkinColorSetSO skinColorSet)
    // Offset: 0x10DF604
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPartsModel* New_ctor(GlobalNamespace::AvatarPartsModelSO* avatarPartData, GlobalNamespace::SkinColorSetSO* skinColorSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPartsModel*, creationType>(avatarPartData, skinColorSet)));
    }
    // public System.Int32 GetColorIndexById(System.String id)
    // Offset: 0x10DF814
    int GetColorIndexById(::Il2CppString* id);
    // public SkinColorSO GetSkinColorById(System.String id)
    // Offset: 0x10DF8A0
    GlobalNamespace::SkinColorSO* GetSkinColorById(::Il2CppString* id);
    // public SkinColorSO GetRandomColor()
    // Offset: 0x10DE978
    GlobalNamespace::SkinColorSO* GetRandomColor();
  }; // AvatarPartsModel
  #pragma pack(pop)
  static check_size<sizeof(AvatarPartsModel), 80 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*)> __GlobalNamespace_AvatarPartsModelSizeCheck;
  static_assert(sizeof(AvatarPartsModel) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPartsModel*, "", "AvatarPartsModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_headTopCollection
// Il2CppName: get_headTopCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_headTopCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_headTopCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_eyesCollection
// Il2CppName: get_eyesCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_eyesCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_eyesCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_mouthCollection
// Il2CppName: get_mouthCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_mouthCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_mouthCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_glassesCollection
// Il2CppName: get_glassesCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_glassesCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_glassesCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_facialHairCollection
// Il2CppName: get_facialHairCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_facialHairCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_facialHairCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_handsCollection
// Il2CppName: get_handsCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_handsCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_handsCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_clothesCollection
// Il2CppName: get_clothesCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_clothesCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_clothesCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::get_skinColors
// Il2CppName: get_skinColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::SkinColorSO*>* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::get_skinColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "get_skinColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::GetColorIndexById
// Il2CppName: GetColorIndexById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AvatarPartsModel::*)(::Il2CppString*)>(&GlobalNamespace::AvatarPartsModel::GetColorIndexById)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "GetColorIndexById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::GetSkinColorById
// Il2CppName: GetSkinColorById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SkinColorSO* (GlobalNamespace::AvatarPartsModel::*)(::Il2CppString*)>(&GlobalNamespace::AvatarPartsModel::GetSkinColorById)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "GetSkinColorById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPartsModel::GetRandomColor
// Il2CppName: GetRandomColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SkinColorSO* (GlobalNamespace::AvatarPartsModel::*)()>(&GlobalNamespace::AvatarPartsModel::GetRandomColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPartsModel*), "GetRandomColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
