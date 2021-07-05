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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ICanvasElement
  class ICanvasElement;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_UpdateRegistry
  class TMP_UpdateRegistry : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_LayoutRebuildQueue
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_LayoutQueueLookup
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_GraphicRebuildQueue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_GraphicQueueLookup
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // Creating value type constructor for type: TMP_UpdateRegistry
    TMP_UpdateRegistry(System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue_ = {}, System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup_ = {}, System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue_ = {}, System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup_ = {}) noexcept : m_LayoutRebuildQueue{m_LayoutRebuildQueue_}, m_LayoutQueueLookup{m_LayoutQueueLookup_}, m_GraphicRebuildQueue{m_GraphicRebuildQueue_}, m_GraphicQueueLookup{m_GraphicQueueLookup_} {}
    // Get static field: static private TMPro.TMP_UpdateRegistry s_Instance
    static TMPro::TMP_UpdateRegistry* _get_s_Instance();
    // Set static field: static private TMPro.TMP_UpdateRegistry s_Instance
    static void _set_s_Instance(TMPro::TMP_UpdateRegistry* value);
    // static public TMPro.TMP_UpdateRegistry get_instance()
    // Offset: 0x14004F8
    static TMPro::TMP_UpdateRegistry* get_instance();
    // static public System.Void RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1400684
    static void RegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x14006B0
    bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x14007B4
    static void RegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x14007E0
    bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void PerformUpdateForCanvasRendererObjects()
    // Offset: 0x14008E4
    void PerformUpdateForCanvasRendererObjects();
    // private System.Void PerformUpdateForMeshRendererObjects()
    // Offset: 0x1400B24
    void PerformUpdateForMeshRendererObjects();
    // static public System.Void UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1400B90
    static void UnRegisterCanvasElementForRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1400BCC
    void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1400CA0
    void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // protected System.Void .ctor()
    // Offset: 0x1400574
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_UpdateRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_UpdateRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_UpdateRegistry*, creationType>()));
    }
  }; // TMPro.TMP_UpdateRegistry
  #pragma pack(pop)
  static check_size<sizeof(TMP_UpdateRegistry), 40 + sizeof(System::Collections::Generic::Dictionary_2<int, int>*)> __TMPro_TMP_UpdateRegistrySizeCheck;
  static_assert(sizeof(TMP_UpdateRegistry) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_UpdateRegistry*, "TMPro", "TMP_UpdateRegistry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_UpdateRegistry* (*)()>(&TMPro::TMP_UpdateRegistry::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild
// Il2CppName: RegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "RegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild
// Il2CppName: InternalRegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_UpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalRegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild
// Il2CppName: RegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "RegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild
// Il2CppName: InternalRegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_UpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalRegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects
// Il2CppName: PerformUpdateForCanvasRendererObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)()>(&TMPro::TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "PerformUpdateForCanvasRendererObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects
// Il2CppName: PerformUpdateForMeshRendererObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)()>(&TMPro::TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "PerformUpdateForMeshRendererObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild
// Il2CppName: UnRegisterCanvasElementForRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "UnRegisterCanvasElementForRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild
// Il2CppName: InternalUnRegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalUnRegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild
// Il2CppName: InternalUnRegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)(UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalUnRegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
