// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PromoViewController
#include "GlobalNamespace/PromoViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: PromoViewController/<>c__DisplayClass5_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBFC14
  class PromoViewController::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public PromoViewController/ButtonPromoTypePair item
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PromoViewController::ButtonPromoTypePair* item;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PromoViewController::ButtonPromoTypePair*) == 0x8);
    // public PromoViewController <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PromoViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PromoViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(GlobalNamespace::PromoViewController::ButtonPromoTypePair* item_ = {}, GlobalNamespace::PromoViewController* $$4__this_ = {}) noexcept : item{item_}, $$4__this{$$4__this_} {}
    // System.Void <DidActivate>b__0()
    // Offset: 0xF2DDA4
    void $DidActivate$b__0();
    // public System.Void .ctor()
    // Offset: 0xF2DD94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromoViewController::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PromoViewController::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromoViewController::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // PromoViewController/<>c__DisplayClass5_0
  static check_size<sizeof(PromoViewController::$$c__DisplayClass5_0), 24 + sizeof(GlobalNamespace::PromoViewController*)> __GlobalNamespace_PromoViewController_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(PromoViewController::$$c__DisplayClass5_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PromoViewController::$$c__DisplayClass5_0*, "", "PromoViewController/<>c__DisplayClass5_0");
#pragma pack(pop)
