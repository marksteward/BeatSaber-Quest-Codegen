// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: UnityEngine::UI::Collections
namespace UnityEngine::UI::Collections {
  // Forward declaring type: IndexedSet`1<T>
  template<typename T>
  class IndexedSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.GraphicRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  class GraphicRegistry : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>> m_Graphics
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>* m_Graphics;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>*) == 0x8);
    // Creating value type constructor for type: GraphicRegistry
    GraphicRegistry(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>* m_Graphics_ = {}) noexcept : m_Graphics{m_Graphics_} {}
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>*
    constexpr operator System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>*() const noexcept {
      return m_Graphics;
    }
    // Get static field: static private UnityEngine.UI.GraphicRegistry s_Instance
    static UnityEngine::UI::GraphicRegistry* _get_s_Instance();
    // Set static field: static private UnityEngine.UI.GraphicRegistry s_Instance
    static void _set_s_Instance(UnityEngine::UI::GraphicRegistry* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_EmptyList
    static System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* _get_s_EmptyList();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_EmptyList
    static void _set_s_EmptyList(System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* value);
    // static public UnityEngine.UI.GraphicRegistry get_instance()
    // Offset: 0x18EAD78
    static UnityEngine::UI::GraphicRegistry* get_instance();
    // static private System.Void .cctor()
    // Offset: 0x18EAE38
    static void _cctor();
    // static public System.Void RegisterGraphicForCanvas(UnityEngine.Canvas c, UnityEngine.UI.Graphic graphic)
    // Offset: 0x18E6D70
    static void RegisterGraphicForCanvas(UnityEngine::Canvas* c, UnityEngine::UI::Graphic* graphic);
    // static public System.Void UnregisterGraphicForCanvas(UnityEngine.Canvas c, UnityEngine.UI.Graphic graphic)
    // Offset: 0x18E6A10
    static void UnregisterGraphicForCanvas(UnityEngine::Canvas* c, UnityEngine::UI::Graphic* graphic);
    // static public System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> GetGraphicsForCanvas(UnityEngine.Canvas canvas)
    // Offset: 0x18EA470
    static System::Collections::Generic::IList_1<UnityEngine::UI::Graphic*>* GetGraphicsForCanvas(UnityEngine::Canvas* canvas);
    // protected System.Void .ctor()
    // Offset: 0x18EAC58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphicRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::GraphicRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphicRegistry*, creationType>()));
    }
  }; // UnityEngine.UI.GraphicRegistry
  #pragma pack(pop)
  static check_size<sizeof(GraphicRegistry), 16 + sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>*)> __UnityEngine_UI_GraphicRegistrySizeCheck;
  static_assert(sizeof(GraphicRegistry) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRegistry*, "UnityEngine.UI", "GraphicRegistry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRegistry::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::GraphicRegistry* (*)()>(&UnityEngine::UI::GraphicRegistry::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRegistry*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRegistry::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::GraphicRegistry::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRegistry*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRegistry::RegisterGraphicForCanvas
// Il2CppName: RegisterGraphicForCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Canvas*, UnityEngine::UI::Graphic*)>(&UnityEngine::UI::GraphicRegistry::RegisterGraphicForCanvas)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    static auto* graphic = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRegistry*), "RegisterGraphicForCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, graphic});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRegistry::UnregisterGraphicForCanvas
// Il2CppName: UnregisterGraphicForCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Canvas*, UnityEngine::UI::Graphic*)>(&UnityEngine::UI::GraphicRegistry::UnregisterGraphicForCanvas)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    static auto* graphic = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRegistry*), "UnregisterGraphicForCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, graphic});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRegistry::GetGraphicsForCanvas
// Il2CppName: GetGraphicsForCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::UI::Graphic*>* (*)(UnityEngine::Canvas*)>(&UnityEngine::UI::GraphicRegistry::GetGraphicsForCanvas)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRegistry*), "GetGraphicsForCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
