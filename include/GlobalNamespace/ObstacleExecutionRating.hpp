// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Rating because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleExecutionRating
  class ObstacleExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
    public:
    // Nested type: GlobalNamespace::ObstacleExecutionRating::Rating
    struct Rating;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: ObstacleExecutionRating/Rating
    struct Rating/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Rating
      constexpr Rating(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ObstacleExecutionRating/Rating OK
      static constexpr const int OK = 0;
      // Get static field: static public ObstacleExecutionRating/Rating OK
      static GlobalNamespace::ObstacleExecutionRating::Rating _get_OK();
      // Set static field: static public ObstacleExecutionRating/Rating OK
      static void _set_OK(GlobalNamespace::ObstacleExecutionRating::Rating value);
      // static field const value: static public ObstacleExecutionRating/Rating NotGood
      static constexpr const int NotGood = 1;
      // Get static field: static public ObstacleExecutionRating/Rating NotGood
      static GlobalNamespace::ObstacleExecutionRating::Rating _get_NotGood();
      // Set static field: static public ObstacleExecutionRating/Rating NotGood
      static void _set_NotGood(GlobalNamespace::ObstacleExecutionRating::Rating value);
    }; // ObstacleExecutionRating/Rating
    #pragma pack(pop)
    static check_size<sizeof(ObstacleExecutionRating::Rating), 0 + sizeof(int)> __GlobalNamespace_ObstacleExecutionRating_RatingSizeCheck;
    static_assert(sizeof(ObstacleExecutionRating::Rating) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE180D0
    // private ObstacleExecutionRating/Rating <rating>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::ObstacleExecutionRating::Rating rating;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleExecutionRating::Rating) == 0x4);
    // Creating value type constructor for type: ObstacleExecutionRating
    ObstacleExecutionRating(GlobalNamespace::ObstacleExecutionRating::Rating rating_ = {}) noexcept : rating{rating_} {}
    // Creating conversion operator: operator GlobalNamespace::ObstacleExecutionRating::Rating
    constexpr operator GlobalNamespace::ObstacleExecutionRating::Rating() const noexcept {
      return rating;
    }
    // public ObstacleExecutionRating/Rating get_rating()
    // Offset: 0x11DDA78
    GlobalNamespace::ObstacleExecutionRating::Rating get_rating();
    // public System.Void set_rating(ObstacleExecutionRating/Rating value)
    // Offset: 0x11DDA80
    void set_rating(GlobalNamespace::ObstacleExecutionRating::Rating value);
    // public System.Void .ctor(System.Single time, ObstacleExecutionRating/Rating rating)
    // Offset: 0x11DDA88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleExecutionRating* New_ctor(float time, GlobalNamespace::ObstacleExecutionRating::Rating rating) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleExecutionRating::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleExecutionRating*, creationType>(time, rating)));
    }
  }; // ObstacleExecutionRating
  #pragma pack(pop)
  static check_size<sizeof(ObstacleExecutionRating), 24 + sizeof(GlobalNamespace::ObstacleExecutionRating::Rating)> __GlobalNamespace_ObstacleExecutionRatingSizeCheck;
  static_assert(sizeof(ObstacleExecutionRating) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleExecutionRating*, "", "ObstacleExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleExecutionRating::Rating, "", "ObstacleExecutionRating/Rating");
// Writing MetadataGetter for method: GlobalNamespace::ObstacleExecutionRating::get_rating
// Il2CppName: get_rating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleExecutionRating::Rating (GlobalNamespace::ObstacleExecutionRating::*)()>(&GlobalNamespace::ObstacleExecutionRating::get_rating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleExecutionRating*), "get_rating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleExecutionRating::set_rating
// Il2CppName: set_rating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleExecutionRating::*)(GlobalNamespace::ObstacleExecutionRating::Rating)>(&GlobalNamespace::ObstacleExecutionRating::set_rating)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ObstacleExecutionRating/Rating")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleExecutionRating*), "set_rating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleExecutionRating::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
