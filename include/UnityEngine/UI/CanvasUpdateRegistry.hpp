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
// Forward declaring namespace: UnityEngine::UI::Collections
namespace UnityEngine::UI::Collections {
  // Forward declaring type: IndexedSet`1<T>
  template<typename T>
  class IndexedSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ICanvasElement
  class ICanvasElement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.CanvasUpdateRegistry
  class CanvasUpdateRegistry : public ::Il2CppObject {
    public:
    // private System.Boolean m_PerformingLayoutUpdate
    // Size: 0x1
    // Offset: 0x10
    bool m_PerformingLayoutUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_PerformingGraphicUpdate
    // Size: 0x1
    // Offset: 0x11
    bool m_PerformingGraphicUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_PerformingGraphicUpdate and: m_CanvasUpdateProfilerStrings
    char __padding1[0x6] = {};
    // private System.String[] m_CanvasUpdateProfilerStrings
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* m_CanvasUpdateProfilerStrings;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> m_LayoutRebuildQueue
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> m_GraphicRebuildQueue
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // Creating value type constructor for type: CanvasUpdateRegistry
    CanvasUpdateRegistry(bool m_PerformingLayoutUpdate_ = {}, bool m_PerformingGraphicUpdate_ = {}, ::Array<::Il2CppString*>* m_CanvasUpdateProfilerStrings_ = {}, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue_ = {}, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue_ = {}) noexcept : m_PerformingLayoutUpdate{m_PerformingLayoutUpdate_}, m_PerformingGraphicUpdate{m_PerformingGraphicUpdate_}, m_CanvasUpdateProfilerStrings{m_CanvasUpdateProfilerStrings_}, m_LayoutRebuildQueue{m_LayoutRebuildQueue_}, m_GraphicRebuildQueue{m_GraphicRebuildQueue_} {}
    // Get static field: static private UnityEngine.UI.CanvasUpdateRegistry s_Instance
    static UnityEngine::UI::CanvasUpdateRegistry* _get_s_Instance();
    // Set static field: static private UnityEngine.UI.CanvasUpdateRegistry s_Instance
    static void _set_s_Instance(UnityEngine::UI::CanvasUpdateRegistry* value);
    // static field const value: static private System.String m_CullingUpdateProfilerString
    static constexpr const char* m_CullingUpdateProfilerString = "ClipperRegistry.Cull";
    // Get static field: static private System.String m_CullingUpdateProfilerString
    static ::Il2CppString* _get_m_CullingUpdateProfilerString();
    // Set static field: static private System.String m_CullingUpdateProfilerString
    static void _set_m_CullingUpdateProfilerString(::Il2CppString* value);
    // Get static field: static private readonly System.Comparison`1<UnityEngine.UI.ICanvasElement> s_SortLayoutFunction
    static System::Comparison_1<UnityEngine::UI::ICanvasElement*>* _get_s_SortLayoutFunction();
    // Set static field: static private readonly System.Comparison`1<UnityEngine.UI.ICanvasElement> s_SortLayoutFunction
    static void _set_s_SortLayoutFunction(System::Comparison_1<UnityEngine::UI::ICanvasElement*>* value);
    // static public UnityEngine.UI.CanvasUpdateRegistry get_instance()
    // Offset: 0x14398B0
    static UnityEngine::UI::CanvasUpdateRegistry* get_instance();
    // private System.Boolean ObjectValidForUpdate(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1439970
    bool ObjectValidForUpdate(UnityEngine::UI::ICanvasElement* element);
    // private System.Void CleanInvalidItems()
    // Offset: 0x1439A50
    void CleanInvalidItems();
    // private System.Void PerformUpdate()
    // Offset: 0x1439D4C
    void PerformUpdate();
    // static private System.Int32 ParentCount(UnityEngine.Transform child)
    // Offset: 0x143A62C
    static int ParentCount(UnityEngine::Transform* child);
    // static private System.Int32 SortLayoutList(UnityEngine.UI.ICanvasElement x, UnityEngine.UI.ICanvasElement y)
    // Offset: 0x143A70C
    static int SortLayoutList(UnityEngine::UI::ICanvasElement* x, UnityEngine::UI::ICanvasElement* y);
    // static public System.Void RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143A878
    static void RegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143A984
    static bool TryRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143A8E8
    bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143A9F4
    static void RegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143AB34
    static bool TryRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143AA64
    bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143ABA4
    static void UnRegisterCanvasElementForRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143AC24
    void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x143AD84
    void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean IsRebuildingLayout()
    // Offset: 0x143AEE4
    static bool IsRebuildingLayout();
    // static public System.Boolean IsRebuildingGraphics()
    // Offset: 0x143AF50
    static bool IsRebuildingGraphics();
    // static private System.Void .cctor()
    // Offset: 0x143AFBC
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x14396AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CanvasUpdateRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CanvasUpdateRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CanvasUpdateRegistry*, creationType>()));
    }
  }; // UnityEngine.UI.CanvasUpdateRegistry
  #pragma pack(pop)
  static check_size<sizeof(CanvasUpdateRegistry), 40 + sizeof(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>*)> __UnityEngine_UI_CanvasUpdateRegistrySizeCheck;
  static_assert(sizeof(CanvasUpdateRegistry) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasUpdateRegistry*, "UnityEngine.UI", "CanvasUpdateRegistry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::CanvasUpdateRegistry* (*)()>(&UnityEngine::UI::CanvasUpdateRegistry::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::ObjectValidForUpdate
// Il2CppName: ObjectValidForUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CanvasUpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::ObjectValidForUpdate)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "ObjectValidForUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::CleanInvalidItems
// Il2CppName: CleanInvalidItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasUpdateRegistry::*)()>(&UnityEngine::UI::CanvasUpdateRegistry::CleanInvalidItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "CleanInvalidItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::PerformUpdate
// Il2CppName: PerformUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasUpdateRegistry::*)()>(&UnityEngine::UI::CanvasUpdateRegistry::PerformUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "PerformUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::ParentCount
// Il2CppName: ParentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::Transform*)>(&UnityEngine::UI::CanvasUpdateRegistry::ParentCount)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "ParentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::SortLayoutList
// Il2CppName: SortLayoutList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::UI::ICanvasElement*, UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::SortLayoutList)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "SortLayoutList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild
// Il2CppName: RegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "RegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild
// Il2CppName: TryRegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "TryRegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild
// Il2CppName: InternalRegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CanvasUpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "InternalRegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild
// Il2CppName: RegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "RegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild
// Il2CppName: TryRegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "TryRegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild
// Il2CppName: InternalRegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CanvasUpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "InternalRegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild
// Il2CppName: UnRegisterCanvasElementForRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "UnRegisterCanvasElementForRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild
// Il2CppName: InternalUnRegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasUpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "InternalUnRegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild
// Il2CppName: InternalUnRegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasUpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&UnityEngine::UI::CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "InternalUnRegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingLayout
// Il2CppName: IsRebuildingLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "IsRebuildingLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingGraphics
// Il2CppName: IsRebuildingGraphics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::UI::CanvasUpdateRegistry::IsRebuildingGraphics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), "IsRebuildingGraphics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::CanvasUpdateRegistry::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CanvasUpdateRegistry*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CanvasUpdateRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
