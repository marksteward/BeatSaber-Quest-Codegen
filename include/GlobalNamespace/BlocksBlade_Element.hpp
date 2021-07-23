// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BlocksBlade
#include "GlobalNamespace/BlocksBlade.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BlocksBlade/Element
  // [TokenAttribute] Offset: FFFFFFFF
  class BlocksBlade::Element : public ::Il2CppObject {
    public:
    // public System.Int32 idx
    // Size: 0x4
    // Offset: 0x10
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single velocity
    // Size: 0x4
    // Offset: 0x14
    float velocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Element
    Element(int idx_ = {}, float velocity_ = {}) noexcept : idx{idx_}, velocity{velocity_} {}
    // Get instance field: public System.Int32 idx
    int _get_idx();
    // Set instance field: public System.Int32 idx
    void _set_idx(int value);
    // Get instance field: public System.Single velocity
    float _get_velocity();
    // Set instance field: public System.Single velocity
    void _set_velocity(float value);
    // public System.Void .ctor()
    // Offset: 0x109C534
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlocksBlade::Element* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BlocksBlade::Element::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlocksBlade::Element*, creationType>()));
    }
  }; // BlocksBlade/Element
  #pragma pack(pop)
  static check_size<sizeof(BlocksBlade::Element), 20 + sizeof(float)> __GlobalNamespace_BlocksBlade_ElementSizeCheck;
  static_assert(sizeof(BlocksBlade::Element) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlocksBlade::Element*, "", "BlocksBlade/Element");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BlocksBlade::Element::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
