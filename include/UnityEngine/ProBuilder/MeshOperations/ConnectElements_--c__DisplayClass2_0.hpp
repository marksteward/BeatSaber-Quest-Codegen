// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectElements
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ConnectElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConnectElements::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, int>* lookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(System::Collections::Generic::Dictionary_2<int, int>* lookup_ = {}, UnityEngine::ProBuilder::ProBuilderMesh* mesh_ = {}) noexcept : lookup{lookup_}, mesh{mesh_} {}
    // Get instance field: public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup
    System::Collections::Generic::Dictionary_2<int, int>* _get_lookup();
    // Set instance field: public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup
    void _set_lookup(System::Collections::Generic::Dictionary_2<int, int>* value);
    // Get instance field: public UnityEngine.ProBuilder.ProBuilderMesh mesh
    UnityEngine::ProBuilder::ProBuilderMesh* _get_mesh();
    // Set instance field: public UnityEngine.ProBuilder.ProBuilderMesh mesh
    void _set_mesh(UnityEngine::ProBuilder::ProBuilderMesh* value);
    // System.Int32 <Connect>b__0(System.Int32 x)
    // Offset: 0x151DCD4
    int $Connect$b__0(int x);
    // System.Int32 <Connect>b__3(System.Int32 x)
    // Offset: 0x151DD3C
    int $Connect$b__3(int x);
    // public System.Void .ctor()
    // Offset: 0x151B97C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectElements::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectElements::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.ConnectElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(ConnectElements::$$c__DisplayClass2_0), 24 + sizeof(UnityEngine::ProBuilder::ProBuilderMesh*)> __UnityEngine_ProBuilder_MeshOperations_ConnectElements_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(ConnectElements::$$c__DisplayClass2_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c__DisplayClass2_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::$Connect$b__0
// Il2CppName: <Connect>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::$Connect$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0*), "<Connect>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::$Connect$b__3
// Il2CppName: <Connect>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::*)(int)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::$Connect$b__3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0*), "<Connect>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
