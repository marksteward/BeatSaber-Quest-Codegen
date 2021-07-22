// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.GUILayoutEntry
#include "UnityEngine/GUILayoutEntry.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
  // Forward declaring type: GUIStyle
  class GUIStyle;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class GUILayoutGroup : public UnityEngine::GUILayoutEntry {
    public:
    // public System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> entries
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<UnityEngine::GUILayoutEntry*>* entries;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::GUILayoutEntry*>*) == 0x8);
    // public System.Boolean isVertical
    // Size: 0x1
    // Offset: 0x50
    bool isVertical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean resetCoords
    // Size: 0x1
    // Offset: 0x51
    bool resetCoords;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resetCoords and: spacing
    char __padding2[0x2] = {};
    // public System.Single spacing
    // Size: 0x4
    // Offset: 0x54
    float spacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean sameSize
    // Size: 0x1
    // Offset: 0x58
    bool sameSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isWindow
    // Size: 0x1
    // Offset: 0x59
    bool isWindow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isWindow and: windowID
    char __padding5[0x2] = {};
    // public System.Int32 windowID
    // Size: 0x4
    // Offset: 0x5C
    int windowID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Cursor
    // Size: 0x4
    // Offset: 0x60
    int m_Cursor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_StretchableCountX
    // Size: 0x4
    // Offset: 0x64
    int m_StretchableCountX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_StretchableCountY
    // Size: 0x4
    // Offset: 0x68
    int m_StretchableCountY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean m_UserSpecifiedWidth
    // Size: 0x1
    // Offset: 0x6C
    bool m_UserSpecifiedWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_UserSpecifiedHeight
    // Size: 0x1
    // Offset: 0x6D
    bool m_UserSpecifiedHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UserSpecifiedHeight and: m_ChildMinWidth
    char __padding11[0x2] = {};
    // protected System.Single m_ChildMinWidth
    // Size: 0x4
    // Offset: 0x70
    float m_ChildMinWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single m_ChildMaxWidth
    // Size: 0x4
    // Offset: 0x74
    float m_ChildMaxWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single m_ChildMinHeight
    // Size: 0x4
    // Offset: 0x78
    float m_ChildMinHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single m_ChildMaxHeight
    // Size: 0x4
    // Offset: 0x7C
    float m_ChildMaxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Int32 m_MarginLeft
    // Size: 0x4
    // Offset: 0x80
    int m_MarginLeft;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_MarginRight
    // Size: 0x4
    // Offset: 0x84
    int m_MarginRight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_MarginTop
    // Size: 0x4
    // Offset: 0x88
    int m_MarginTop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_MarginBottom
    // Size: 0x4
    // Offset: 0x8C
    int m_MarginBottom;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GUILayoutGroup
    GUILayoutGroup(System::Collections::Generic::List_1<UnityEngine::GUILayoutEntry*>* entries_ = {}, bool isVertical_ = {}, bool resetCoords_ = {}, float spacing_ = {}, bool sameSize_ = {}, bool isWindow_ = {}, int windowID_ = {}, int m_Cursor_ = {}, int m_StretchableCountX_ = {}, int m_StretchableCountY_ = {}, bool m_UserSpecifiedWidth_ = {}, bool m_UserSpecifiedHeight_ = {}, float m_ChildMinWidth_ = {}, float m_ChildMaxWidth_ = {}, float m_ChildMinHeight_ = {}, float m_ChildMaxHeight_ = {}, int m_MarginLeft_ = {}, int m_MarginRight_ = {}, int m_MarginTop_ = {}, int m_MarginBottom_ = {}) noexcept : entries{entries_}, isVertical{isVertical_}, resetCoords{resetCoords_}, spacing{spacing_}, sameSize{sameSize_}, isWindow{isWindow_}, windowID{windowID_}, m_Cursor{m_Cursor_}, m_StretchableCountX{m_StretchableCountX_}, m_StretchableCountY{m_StretchableCountY_}, m_UserSpecifiedWidth{m_UserSpecifiedWidth_}, m_UserSpecifiedHeight{m_UserSpecifiedHeight_}, m_ChildMinWidth{m_ChildMinWidth_}, m_ChildMaxWidth{m_ChildMaxWidth_}, m_ChildMinHeight{m_ChildMinHeight_}, m_ChildMaxHeight{m_ChildMaxHeight_}, m_MarginLeft{m_MarginLeft_}, m_MarginRight{m_MarginRight_}, m_MarginTop{m_MarginTop_}, m_MarginBottom{m_MarginBottom_} {}
    // public System.Void ResetCursor()
    // Offset: 0x1AA6138
    void ResetCursor();
    // public UnityEngine.GUILayoutEntry GetNext()
    // Offset: 0x1AA6140
    UnityEngine::GUILayoutEntry* GetNext();
    // public System.Void Add(UnityEngine.GUILayoutEntry e)
    // Offset: 0x1AA63CC
    void Add(UnityEngine::GUILayoutEntry* e);
    // public override System.Int32 get_marginLeft()
    // Offset: 0x1AA5E78
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Int32 GUILayoutEntry::get_marginLeft()
    int get_marginLeft();
    // public override System.Int32 get_marginRight()
    // Offset: 0x1AA5E80
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Int32 GUILayoutEntry::get_marginRight()
    int get_marginRight();
    // public override System.Int32 get_marginTop()
    // Offset: 0x1AA5E88
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Int32 GUILayoutEntry::get_marginTop()
    int get_marginTop();
    // public override System.Int32 get_marginBottom()
    // Offset: 0x1AA5E90
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Int32 GUILayoutEntry::get_marginBottom()
    int get_marginBottom();
    // public System.Void .ctor()
    // Offset: 0x1AA5E98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUILayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUILayoutGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUILayoutGroup*, creationType>()));
    }
    // public override System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1AA5F90
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[] options)
    void ApplyOptions(::Array<UnityEngine::GUILayoutOption*>* options);
    // protected override System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
    // Offset: 0x1AA60C0
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle style)
    void ApplyStyleSettings(UnityEngine::GUIStyle* style);
    // public override System.Void CalcWidth()
    // Offset: 0x1AA6434
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::CalcWidth()
    void CalcWidth();
    // public override System.Void SetHorizontal(System.Single x, System.Single width)
    // Offset: 0x1AA6BF8
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::SetHorizontal(System.Single x, System.Single width)
    void SetHorizontal(float x, float width);
    // public override System.Void CalcHeight()
    // Offset: 0x1AA7500
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::CalcHeight()
    void CalcHeight();
    // public override System.Void SetVertical(System.Single y, System.Single height)
    // Offset: 0x1AA7BA8
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.Void GUILayoutEntry::SetVertical(System.Single y, System.Single height)
    void SetVertical(float y, float height);
    // public override System.String ToString()
    // Offset: 0x1AA84AC
    // Implemented from: UnityEngine.GUILayoutEntry
    // Base method: System.String GUILayoutEntry::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.GUILayoutGroup
  #pragma pack(pop)
  static check_size<sizeof(GUILayoutGroup), 140 + sizeof(int)> __UnityEngine_GUILayoutGroupSizeCheck;
  static_assert(sizeof(GUILayoutGroup) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutGroup*, "UnityEngine", "GUILayoutGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::ResetCursor
// Il2CppName: ResetCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::ResetCursor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "ResetCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::GetNext
// Il2CppName: GetNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GUILayoutEntry* (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::GetNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "GetNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)(UnityEngine::GUILayoutEntry*)>(&UnityEngine::GUILayoutGroup::Add)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::get_marginLeft
// Il2CppName: get_marginLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::get_marginLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "get_marginLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::get_marginRight
// Il2CppName: get_marginRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::get_marginRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "get_marginRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::get_marginTop
// Il2CppName: get_marginTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::get_marginTop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "get_marginTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::get_marginBottom
// Il2CppName: get_marginBottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::get_marginBottom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "get_marginBottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::ApplyOptions
// Il2CppName: ApplyOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)(::Array<UnityEngine::GUILayoutOption*>*)>(&UnityEngine::GUILayoutGroup::ApplyOptions)> {
  static const MethodInfo* get() {
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "ApplyOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::ApplyStyleSettings
// Il2CppName: ApplyStyleSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)(UnityEngine::GUIStyle*)>(&UnityEngine::GUILayoutGroup::ApplyStyleSettings)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "ApplyStyleSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::CalcWidth
// Il2CppName: CalcWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::CalcWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "CalcWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::SetHorizontal
// Il2CppName: SetHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)(float, float)>(&UnityEngine::GUILayoutGroup::SetHorizontal)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "SetHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, width});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::CalcHeight
// Il2CppName: CalcHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::CalcHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "CalcHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::SetVertical
// Il2CppName: SetVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutGroup::*)(float, float)>(&UnityEngine::GUILayoutGroup::SetVertical)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "SetVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutGroup::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::GUILayoutGroup::*)()>(&UnityEngine::GUILayoutGroup::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutGroup*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
