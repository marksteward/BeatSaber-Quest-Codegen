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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollView
  class ScrollView;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollToTopOnEnable
  // [] Offset: FFFFFFFF
  class ScrollToTopOnEnable : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.ScrollView _scrollView
    // Size: 0x8
    // Offset: 0x18
    HMUI::ScrollView* scrollView;
    // Field size check
    static_assert(sizeof(HMUI::ScrollView*) == 0x8);
    // Creating value type constructor for type: ScrollToTopOnEnable
    ScrollToTopOnEnable(HMUI::ScrollView* scrollView_ = {}) noexcept : scrollView{scrollView_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x107F5C0
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x107F65C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollToTopOnEnable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollToTopOnEnable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollToTopOnEnable*, creationType>()));
    }
  }; // HMUI.ScrollToTopOnEnable
  static check_size<sizeof(ScrollToTopOnEnable), 24 + sizeof(HMUI::ScrollView*)> __HMUI_ScrollToTopOnEnableSizeCheck;
  static_assert(sizeof(ScrollToTopOnEnable) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollToTopOnEnable*, "HMUI", "ScrollToTopOnEnable");
