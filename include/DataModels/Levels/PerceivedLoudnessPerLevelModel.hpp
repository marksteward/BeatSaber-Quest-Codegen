// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PerceivedLoudnessPerLevelSO
  class PerceivedLoudnessPerLevelSO;
}
// Completed forward declares
// Type namespace: DataModels.Levels
namespace DataModels::Levels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DataModels.Levels.PerceivedLoudnessPerLevelModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PerceivedLoudnessPerLevelModel : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _loudnessLevelPerLevelId
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* loudnessLevelPerLevelId;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, float>*) == 0x8);
    // Creating value type constructor for type: PerceivedLoudnessPerLevelModel
    PerceivedLoudnessPerLevelModel(System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* loudnessLevelPerLevelId_ = {}) noexcept : loudnessLevelPerLevelId{loudnessLevelPerLevelId_} {}
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<::Il2CppString*, float>*
    constexpr operator System::Collections::Generic::Dictionary_2<::Il2CppString*, float>*() const noexcept {
      return loudnessLevelPerLevelId;
    }
    // static field const value: static private System.Single kDefaultLoudness
    static constexpr const float kDefaultLoudness = -6;
    // Get static field: static private System.Single kDefaultLoudness
    static float _get_kDefaultLoudness();
    // Set static field: static private System.Single kDefaultLoudness
    static void _set_kDefaultLoudness(float value);
    // static field const value: static private System.Single kPerceivedLoudnessTarget
    static constexpr const float kPerceivedLoudnessTarget = -11;
    // Get static field: static private System.Single kPerceivedLoudnessTarget
    static float _get_kPerceivedLoudnessTarget();
    // Set static field: static private System.Single kPerceivedLoudnessTarget
    static void _set_kPerceivedLoudnessTarget(float value);
    // static field const value: static private System.Single kPerceivedLoudnessToMaxSfxLevelDifference
    static constexpr const float kPerceivedLoudnessToMaxSfxLevelDifference = -10;
    // Get static field: static private System.Single kPerceivedLoudnessToMaxSfxLevelDifference
    static float _get_kPerceivedLoudnessToMaxSfxLevelDifference();
    // Set static field: static private System.Single kPerceivedLoudnessToMaxSfxLevelDifference
    static void _set_kPerceivedLoudnessToMaxSfxLevelDifference(float value);
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _loudnessLevelPerLevelId
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* _get__loudnessLevelPerLevelId();
    // Set instance field: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _loudnessLevelPerLevelId
    void _set__loudnessLevelPerLevelId(System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* value);
    // public System.Void .ctor(PerceivedLoudnessPerLevelSO loudnessPerLeveData)
    // Offset: 0x1087A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PerceivedLoudnessPerLevelModel* New_ctor(GlobalNamespace::PerceivedLoudnessPerLevelSO* loudnessPerLeveData) {
      static auto ___internal__logger = ::Logger::get().WithContext("DataModels::Levels::PerceivedLoudnessPerLevelModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PerceivedLoudnessPerLevelModel*, creationType>(loudnessPerLeveData)));
    }
    // public System.Boolean ContainsLevelId(System.String levelId)
    // Offset: 0x1087B18
    bool ContainsLevelId(::Il2CppString* levelId);
    // public System.Single GetLoudnessCorrectionByLevelId(System.String levelId)
    // Offset: 0x1087B80
    float GetLoudnessCorrectionByLevelId(::Il2CppString* levelId);
    // public System.Single GetMaxSfxVolumeByLevelId(System.String levelId)
    // Offset: 0x1087C98
    float GetMaxSfxVolumeByLevelId(::Il2CppString* levelId);
    // private System.Single GetLoudnessByLevelId(System.String levelId)
    // Offset: 0x1087C14
    float GetLoudnessByLevelId(::Il2CppString* levelId);
  }; // DataModels.Levels.PerceivedLoudnessPerLevelModel
  #pragma pack(pop)
  static check_size<sizeof(PerceivedLoudnessPerLevelModel), 16 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, float>*)> __DataModels_Levels_PerceivedLoudnessPerLevelModelSizeCheck;
  static_assert(sizeof(PerceivedLoudnessPerLevelModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(DataModels::Levels::PerceivedLoudnessPerLevelModel*, "DataModels.Levels", "PerceivedLoudnessPerLevelModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DataModels::Levels::PerceivedLoudnessPerLevelModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DataModels::Levels::PerceivedLoudnessPerLevelModel::ContainsLevelId
// Il2CppName: ContainsLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DataModels::Levels::PerceivedLoudnessPerLevelModel::*)(::Il2CppString*)>(&DataModels::Levels::PerceivedLoudnessPerLevelModel::ContainsLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DataModels::Levels::PerceivedLoudnessPerLevelModel*), "ContainsLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: DataModels::Levels::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId
// Il2CppName: GetLoudnessCorrectionByLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DataModels::Levels::PerceivedLoudnessPerLevelModel::*)(::Il2CppString*)>(&DataModels::Levels::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DataModels::Levels::PerceivedLoudnessPerLevelModel*), "GetLoudnessCorrectionByLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: DataModels::Levels::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId
// Il2CppName: GetMaxSfxVolumeByLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DataModels::Levels::PerceivedLoudnessPerLevelModel::*)(::Il2CppString*)>(&DataModels::Levels::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DataModels::Levels::PerceivedLoudnessPerLevelModel*), "GetMaxSfxVolumeByLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: DataModels::Levels::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId
// Il2CppName: GetLoudnessByLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DataModels::Levels::PerceivedLoudnessPerLevelModel::*)(::Il2CppString*)>(&DataModels::Levels::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DataModels::Levels::PerceivedLoudnessPerLevelModel*), "GetLoudnessByLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
