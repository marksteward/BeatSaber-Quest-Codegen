// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.BaseVertexEffect
  // [ObsoleteAttribute] Offset: DC59E4
  class BaseVertexEffect : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BaseVertexEffect
    BaseVertexEffect() noexcept {}
    // public System.Void ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex> vertices)
    // Offset: 0xFFFFFFFF
    void ModifyVertices(System::Collections::Generic::List_1<UnityEngine::UIVertex>* vertices);
    // protected System.Void .ctor()
    // Offset: 0x1438A50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseVertexEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::BaseVertexEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseVertexEffect*, creationType>()));
    }
  }; // UnityEngine.UI.BaseVertexEffect
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::BaseVertexEffect*, "UnityEngine.UI", "BaseVertexEffect");
// Writing MetadataGetter for method: UnityEngine::UI::BaseVertexEffect::ModifyVertices
// Il2CppName: ModifyVertices
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::BaseVertexEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
