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
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.TailoringInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class TailoringInfo : public ::Il2CppObject {
    public:
    // public readonly System.Int32 LCID
    // Size: 0x4
    // Offset: 0x10
    int LCID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 TailoringIndex
    // Size: 0x4
    // Offset: 0x14
    int TailoringIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 TailoringCount
    // Size: 0x4
    // Offset: 0x18
    int TailoringCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean FrenchSort
    // Size: 0x1
    // Offset: 0x1C
    bool FrenchSort;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TailoringInfo
    TailoringInfo(int LCID_ = {}, int TailoringIndex_ = {}, int TailoringCount_ = {}, bool FrenchSort_ = {}) noexcept : LCID{LCID_}, TailoringIndex{TailoringIndex_}, TailoringCount{TailoringCount_}, FrenchSort{FrenchSort_} {}
    // Get instance field: public readonly System.Int32 LCID
    int _get_LCID();
    // Set instance field: public readonly System.Int32 LCID
    void _set_LCID(int value);
    // Get instance field: public readonly System.Int32 TailoringIndex
    int _get_TailoringIndex();
    // Set instance field: public readonly System.Int32 TailoringIndex
    void _set_TailoringIndex(int value);
    // Get instance field: public readonly System.Int32 TailoringCount
    int _get_TailoringCount();
    // Set instance field: public readonly System.Int32 TailoringCount
    void _set_TailoringCount(int value);
    // Get instance field: public readonly System.Boolean FrenchSort
    bool _get_FrenchSort();
    // Set instance field: public readonly System.Boolean FrenchSort
    void _set_FrenchSort(bool value);
    // public System.Void .ctor(System.Int32 lcid, System.Int32 tailoringIndex, System.Int32 tailoringCount, System.Boolean frenchSort)
    // Offset: 0x1A14F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TailoringInfo* New_ctor(int lcid, int tailoringIndex, int tailoringCount, bool frenchSort) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::TailoringInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TailoringInfo*, creationType>(lcid, tailoringIndex, tailoringCount, frenchSort)));
    }
  }; // Mono.Globalization.Unicode.TailoringInfo
  #pragma pack(pop)
  static check_size<sizeof(TailoringInfo), 28 + sizeof(bool)> __Mono_Globalization_Unicode_TailoringInfoSizeCheck;
  static_assert(sizeof(TailoringInfo) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::TailoringInfo*, "Mono.Globalization.Unicode", "TailoringInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::TailoringInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
