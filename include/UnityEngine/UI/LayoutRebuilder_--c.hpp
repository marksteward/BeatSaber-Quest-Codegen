// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.LayoutRebuilder
#include "UnityEngine/UI/LayoutRebuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.LayoutRebuilder/<>c
  // [CompilerGeneratedAttribute] Offset: DC5E7C
  class LayoutRebuilder::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.UI.LayoutRebuilder/<>c <>9
    static UnityEngine::UI::LayoutRebuilder::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.LayoutRebuilder/<>c <>9
    static void _set_$$9(UnityEngine::UI::LayoutRebuilder::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.Component> <>9__10_0
    static System::Predicate_1<UnityEngine::Component*>* _get_$$9__10_0();
    // Set static field: static public System.Predicate`1<UnityEngine.Component> <>9__10_0
    static void _set_$$9__10_0(System::Predicate_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_0
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_0();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_0
    static void _set_$$9__12_0(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_1
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_1();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_1
    static void _set_$$9__12_1(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_2
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_2();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_2
    static void _set_$$9__12_2(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_3
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_3();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_3
    static void _set_$$9__12_3(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // static private System.Void .cctor()
    // Offset: 0x19AADD8
    static void _cctor();
    // System.Void <.cctor>b__5_0(UnityEngine.UI.LayoutRebuilder x)
    // Offset: 0x19AAE44
    void $_cctor$b__5_0(UnityEngine::UI::LayoutRebuilder* x);
    // System.Boolean <StripDisabledBehavioursFromList>b__10_0(UnityEngine.Component e)
    // Offset: 0x19AAE60
    bool $StripDisabledBehavioursFromList$b__10_0(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_0(UnityEngine.Component e)
    // Offset: 0x19AAEF4
    void $Rebuild$b__12_0(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_1(UnityEngine.Component e)
    // Offset: 0x19AAFC0
    void $Rebuild$b__12_1(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_2(UnityEngine.Component e)
    // Offset: 0x19AB08C
    void $Rebuild$b__12_2(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_3(UnityEngine.Component e)
    // Offset: 0x19AB15C
    void $Rebuild$b__12_3(UnityEngine::Component* e);
    // public System.Void .ctor()
    // Offset: 0x19AAE3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayoutRebuilder::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::LayoutRebuilder::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayoutRebuilder::$$c*, creationType>()));
    }
  }; // UnityEngine.UI.LayoutRebuilder/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutRebuilder::$$c*, "UnityEngine.UI", "LayoutRebuilder/<>c");
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::LayoutRebuilder::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::$_cctor$b__5_0
// Il2CppName: <.cctor>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::$$c::*)(UnityEngine::UI::LayoutRebuilder*)>(&UnityEngine::UI::LayoutRebuilder::$$c::$_cctor$b__5_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "LayoutRebuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder::$$c*), "<.cctor>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::$StripDisabledBehavioursFromList$b__10_0
// Il2CppName: <StripDisabledBehavioursFromList>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::LayoutRebuilder::$$c::*)(UnityEngine::Component*)>(&UnityEngine::UI::LayoutRebuilder::$$c::$StripDisabledBehavioursFromList$b__10_0)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder::$$c*), "<StripDisabledBehavioursFromList>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_0
// Il2CppName: <Rebuild>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::$$c::*)(UnityEngine::Component*)>(&UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_0)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder::$$c*), "<Rebuild>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_1
// Il2CppName: <Rebuild>b__12_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::$$c::*)(UnityEngine::Component*)>(&UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_1)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder::$$c*), "<Rebuild>b__12_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_2
// Il2CppName: <Rebuild>b__12_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::$$c::*)(UnityEngine::Component*)>(&UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_2)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder::$$c*), "<Rebuild>b__12_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_3
// Il2CppName: <Rebuild>b__12_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutRebuilder::$$c::*)(UnityEngine::Component*)>(&UnityEngine::UI::LayoutRebuilder::$$c::$Rebuild$b__12_3)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutRebuilder::$$c*), "<Rebuild>b__12_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutRebuilder::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
