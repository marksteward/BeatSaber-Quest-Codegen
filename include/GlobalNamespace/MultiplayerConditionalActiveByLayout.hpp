// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerPlayerLayout
#include "GlobalNamespace/MultiplayerPlayerLayout.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConditionalActiveByLayout
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConditionalActiveByLayout : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition
    struct Condition;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerConditionalActiveByLayout/Condition
    // [TokenAttribute] Offset: FFFFFFFF
    struct Condition/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Condition
      constexpr Condition(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerConditionalActiveByLayout/Condition ShowIf
      static constexpr const int ShowIf = 0;
      // Get static field: static public MultiplayerConditionalActiveByLayout/Condition ShowIf
      static GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition _get_ShowIf();
      // Set static field: static public MultiplayerConditionalActiveByLayout/Condition ShowIf
      static void _set_ShowIf(GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition value);
      // static field const value: static public MultiplayerConditionalActiveByLayout/Condition HideIf
      static constexpr const int HideIf = 1;
      // Get static field: static public MultiplayerConditionalActiveByLayout/Condition HideIf
      static GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition _get_HideIf();
      // Set static field: static public MultiplayerConditionalActiveByLayout/Condition HideIf
      static void _set_HideIf(GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // MultiplayerConditionalActiveByLayout/Condition
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerConditionalActiveByLayout::Condition), 0 + sizeof(int)> __GlobalNamespace_MultiplayerConditionalActiveByLayout_ConditionSizeCheck;
    static_assert(sizeof(MultiplayerConditionalActiveByLayout::Condition) == 0x4);
    // private MultiplayerConditionalActiveByLayout/Condition _condition
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition condition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition) == 0x4);
    // private MultiplayerPlayerLayout _layout
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::MultiplayerPlayerLayout layout;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayerLayout) == 0x4);
    // [InjectAttribute] Offset: 0xE07F30
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // Creating value type constructor for type: MultiplayerConditionalActiveByLayout
    MultiplayerConditionalActiveByLayout(GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition condition_ = {}, GlobalNamespace::MultiplayerPlayerLayout layout_ = {}, GlobalNamespace::MultiplayerLayoutProvider* layoutProvider_ = {}) noexcept : condition{condition_}, layout{layout_}, layoutProvider{layoutProvider_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private MultiplayerConditionalActiveByLayout/Condition _condition
    GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition _get__condition();
    // Set instance field: private MultiplayerConditionalActiveByLayout/Condition _condition
    void _set__condition(GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition value);
    // Get instance field: private MultiplayerPlayerLayout _layout
    GlobalNamespace::MultiplayerPlayerLayout _get__layout();
    // Set instance field: private MultiplayerPlayerLayout _layout
    void _set__layout(GlobalNamespace::MultiplayerPlayerLayout value);
    // Get instance field: private readonly MultiplayerLayoutProvider _layoutProvider
    GlobalNamespace::MultiplayerLayoutProvider* _get__layoutProvider();
    // Set instance field: private readonly MultiplayerLayoutProvider _layoutProvider
    void _set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider* value);
    // private System.Void Start()
    // Offset: 0x119FBE0
    void Start();
    // private System.Void HandlePlayersLayoutWasCalculated(MultiplayerPlayerLayout layout, System.Int32 playersCount)
    // Offset: 0x119FC8C
    void HandlePlayersLayoutWasCalculated(GlobalNamespace::MultiplayerPlayerLayout layout, int playersCount);
    // public System.Void .ctor()
    // Offset: 0x119FCF0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConditionalActiveByLayout* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConditionalActiveByLayout::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConditionalActiveByLayout*, creationType>()));
    }
  }; // MultiplayerConditionalActiveByLayout
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConditionalActiveByLayout), 32 + sizeof(GlobalNamespace::MultiplayerLayoutProvider*)> __GlobalNamespace_MultiplayerConditionalActiveByLayoutSizeCheck;
  static_assert(sizeof(MultiplayerConditionalActiveByLayout) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConditionalActiveByLayout*, "", "MultiplayerConditionalActiveByLayout");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConditionalActiveByLayout::Condition, "", "MultiplayerConditionalActiveByLayout/Condition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConditionalActiveByLayout::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(&GlobalNamespace::MultiplayerConditionalActiveByLayout::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConditionalActiveByLayout*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated
// Il2CppName: HandlePlayersLayoutWasCalculated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConditionalActiveByLayout::*)(GlobalNamespace::MultiplayerPlayerLayout, int)>(&GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated)> {
  static const MethodInfo* get() {
    static auto* layout = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerLayout")->byval_arg;
    static auto* playersCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConditionalActiveByLayout*), "HandlePlayersLayoutWasCalculated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layout, playersCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConditionalActiveByLayout::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
