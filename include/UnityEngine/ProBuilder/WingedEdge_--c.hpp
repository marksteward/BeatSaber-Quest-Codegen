// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.WingedEdge
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdge/UnityEngine.ProBuilder.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WingedEdge::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.WingedEdge/UnityEngine.ProBuilder.<>c <>9
    static UnityEngine::ProBuilder::WingedEdge::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.WingedEdge/UnityEngine.ProBuilder.<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::WingedEdge::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__32_1
    static System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* _get_$$9__32_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.WingedEdge,UnityEngine.ProBuilder.Edge> <>9__32_1
    static void _set_$$9__32_1(System::Func_2<UnityEngine::ProBuilder::WingedEdge*, UnityEngine::ProBuilder::Edge>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Edge,System.Int32> <>9__32_2
    static System::Func_2<UnityEngine::ProBuilder::Edge, int>* _get_$$9__32_2();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Edge,System.Int32> <>9__32_2
    static void _set_$$9__32_2(System::Func_2<UnityEngine::ProBuilder::Edge, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x22B3B04
    static void _cctor();
    // UnityEngine.ProBuilder.Edge <SortCommonIndexesByAdjacency>b__32_1(UnityEngine.ProBuilder.WingedEdge y)
    // Offset: 0x22B3B70
    UnityEngine::ProBuilder::Edge $SortCommonIndexesByAdjacency$b__32_1(UnityEngine::ProBuilder::WingedEdge* y);
    // System.Int32 <SortCommonIndexesByAdjacency>b__32_2(UnityEngine.ProBuilder.Edge x)
    // Offset: 0x22B3B88
    int $SortCommonIndexesByAdjacency$b__32_2(UnityEngine::ProBuilder::Edge x);
    // public System.Void .ctor()
    // Offset: 0x22B3B68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WingedEdge::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::WingedEdge::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WingedEdge::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.WingedEdge/UnityEngine.ProBuilder.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdge::$$c*, "UnityEngine.ProBuilder", "WingedEdge/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::WingedEdge::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::$$c::$SortCommonIndexesByAdjacency$b__32_1
// Il2CppName: <SortCommonIndexesByAdjacency>b__32_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::WingedEdge::$$c::*)(UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::WingedEdge::$$c::$SortCommonIndexesByAdjacency$b__32_1)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge::$$c*), "<SortCommonIndexesByAdjacency>b__32_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::$$c::$SortCommonIndexesByAdjacency$b__32_2
// Il2CppName: <SortCommonIndexesByAdjacency>b__32_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::WingedEdge::$$c::*)(UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::WingedEdge::$$c::$SortCommonIndexesByAdjacency$b__32_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge::$$c*), "<SortCommonIndexesByAdjacency>b__32_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
