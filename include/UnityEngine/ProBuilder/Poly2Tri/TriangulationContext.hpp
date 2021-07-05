// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationMode
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationDebugContext
  class TriangulationDebugContext;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: Triangulatable
  class Triangulatable;
  // Forward declaring type: TriangulationConstraint
  class TriangulationConstraint;
  // Forward declaring type: DTSweepDebugContext
  class DTSweepDebugContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
  class TriangulationContext : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE03A3C
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext <DebugContext>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* DebugContext;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*) == 0x8);
    // public readonly System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Triangles
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*) == 0x8);
    // public readonly System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> Points
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE03A4C
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationMode <TriangulationMode>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode) == 0x4);
    // Padding between fields: TriangulationMode and: Triangulatable
    char __padding3[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE03A5C
    // private UnityEngine.ProBuilder.Poly2Tri.Triangulatable <Triangulatable>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ProBuilder::Poly2Tri::Triangulatable* Triangulatable;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::Triangulatable*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE03A6C
    // private System.Int32 <StepCount>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int StepCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE03A7C
    // private System.Boolean <IsDebugEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    bool IsDebugEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TriangulationContext
    TriangulationContext(UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* DebugContext_ = {}, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles_ = {}, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode_ = {}, UnityEngine::ProBuilder::Poly2Tri::Triangulatable* Triangulatable_ = {}, int StepCount_ = {}, bool IsDebugEnabled_ = {}) noexcept : DebugContext{DebugContext_}, Triangles{Triangles_}, Points{Points_}, TriangulationMode{TriangulationMode_}, Triangulatable{Triangulatable_}, StepCount{StepCount_}, IsDebugEnabled{IsDebugEnabled_} {}
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext get_DebugContext()
    // Offset: 0x239F1A8
    UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* get_DebugContext();
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x239F1B0
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
    // protected System.Void set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode value)
    // Offset: 0x239F1B8
    void set_TriangulationMode(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value);
    // public UnityEngine.ProBuilder.Poly2Tri.Triangulatable get_Triangulatable()
    // Offset: 0x239F1C0
    UnityEngine::ProBuilder::Poly2Tri::Triangulatable* get_Triangulatable();
    // private System.Void set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable value)
    // Offset: 0x239F1C8
    void set_Triangulatable(UnityEngine::ProBuilder::Poly2Tri::Triangulatable* value);
    // public System.Int32 get_StepCount()
    // Offset: 0x239F1D0
    int get_StepCount();
    // private System.Void set_StepCount(System.Int32 value)
    // Offset: 0x239F1D8
    void set_StepCount(int value);
    // public System.Void Done()
    // Offset: 0x23995AC
    void Done();
    // public System.Void PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    // Offset: 0x239D848
    void PrepareTriangulation(UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    // Offset: 0xFFFFFFFF
    UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);
    // public System.Void Update(System.String message)
    // Offset: 0x2399998
    void Update(::Il2CppString* message);
    // public System.Void Clear()
    // Offset: 0x239D5B0
    void Clear();
    // public System.Boolean get_IsDebugEnabled()
    // Offset: 0x239F1E0
    bool get_IsDebugEnabled();
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext get_DTDebugContext()
    // Offset: 0x23996F0
    UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* get_DTDebugContext();
    // protected System.Void .ctor()
    // Offset: 0x239D380
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangulationContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangulationContext*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
  #pragma pack(pop)
  static check_size<sizeof(TriangulationContext), 60 + sizeof(bool)> __UnityEngine_ProBuilder_Poly2Tri_TriangulationContextSizeCheck;
  static_assert(sizeof(TriangulationContext) == 0x3D);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_DebugContext
// Il2CppName: get_DebugContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_DebugContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "get_DebugContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_TriangulationMode
// Il2CppName: get_TriangulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_TriangulationMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "get_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::set_TriangulationMode
// Il2CppName: set_TriangulationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::set_TriangulationMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "set_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_Triangulatable
// Il2CppName: get_Triangulatable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::Triangulatable* (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_Triangulatable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "get_Triangulatable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::set_Triangulatable
// Il2CppName: set_Triangulatable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)(UnityEngine::ProBuilder::Poly2Tri::Triangulatable*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::set_Triangulatable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "Triangulatable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "set_Triangulatable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_StepCount
// Il2CppName: get_StepCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_StepCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "get_StepCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::set_StepCount
// Il2CppName: set_StepCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)(int)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::set_StepCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "set_StepCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::Done
// Il2CppName: Done
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::Done)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "Done", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::PrepareTriangulation
// Il2CppName: PrepareTriangulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)(UnityEngine::ProBuilder::Poly2Tri::Triangulatable*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::PrepareTriangulation)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "Triangulatable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "PrepareTriangulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::NewConstraint
// Il2CppName: NewConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::NewConstraint)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "NewConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)(::Il2CppString*)>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::Update)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_IsDebugEnabled
// Il2CppName: get_IsDebugEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_IsDebugEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "get_IsDebugEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_DTDebugContext
// Il2CppName: get_DTDebugContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* (UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::get_DTDebugContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*), "get_DTDebugContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::TriangulationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
