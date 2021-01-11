// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddComponentMenu
  // [] Offset: FFFFFFFF
  class AddComponentMenu : public System::Attribute {
    public:
    // private System.String m_AddComponentMenu
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_AddComponentMenu;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 m_Ordering
    // Size: 0x4
    // Offset: 0x18
    int m_Ordering;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AddComponentMenu
    AddComponentMenu(::Il2CppString* m_AddComponentMenu_ = {}, int m_Ordering_ = {}) noexcept : m_AddComponentMenu{m_AddComponentMenu_}, m_Ordering{m_Ordering_} {}
    // public System.Void .ctor(System.String menuName)
    // Offset: 0x1679DF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddComponentMenu* New_ctor(::Il2CppString* menuName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddComponentMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddComponentMenu*, creationType>(menuName)));
    }
    // public System.Void .ctor(System.String menuName, System.Int32 order)
    // Offset: 0x1679E2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddComponentMenu* New_ctor(::Il2CppString* menuName, int order) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddComponentMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddComponentMenu*, creationType>(menuName, order)));
    }
  }; // UnityEngine.AddComponentMenu
  static check_size<sizeof(AddComponentMenu), 24 + sizeof(int)> __UnityEngine_AddComponentMenuSizeCheck;
  static_assert(sizeof(AddComponentMenu) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddComponentMenu*, "UnityEngine", "AddComponentMenu");
