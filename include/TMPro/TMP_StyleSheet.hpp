// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Style
  class TMP_Style;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_StyleSheet
  class TMP_StyleSheet : public UnityEngine::ScriptableObject {
    public:
    // private System.Collections.Generic.List`1<TMPro.TMP_Style> m_StyleList
    // Offset: 0x18
    System::Collections::Generic::List_1<TMPro::TMP_Style*>* m_StyleList;
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style> m_StyleDictionary
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<int, TMPro::TMP_Style*>* m_StyleDictionary;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // Get static field: static private TMPro.TMP_StyleSheet s_Instance
    static TMPro::TMP_StyleSheet* _get_s_Instance();
    // Set static field: static private TMPro.TMP_StyleSheet s_Instance
    static void _set_s_Instance(TMPro::TMP_StyleSheet* value);
    // static public TMPro.TMP_StyleSheet get_instance()
    // Offset: 0xBB5FFC
    static TMPro::TMP_StyleSheet* get_instance();
    // static public TMPro.TMP_StyleSheet LoadDefaultStyleSheet()
    // Offset: 0xBB62EC
    static TMPro::TMP_StyleSheet* LoadDefaultStyleSheet();
    // static public TMPro.TMP_Style GetStyle(System.Int32 hashCode)
    // Offset: 0xBB62F0
    static TMPro::TMP_Style* GetStyle(int hashCode);
    // private TMPro.TMP_Style GetStyleInternal(System.Int32 hashCode)
    // Offset: 0xBB631C
    TMPro::TMP_Style* GetStyleInternal(int hashCode);
    // public System.Void UpdateStyleDictionaryKey(System.Int32 old_key, System.Int32 new_key)
    // Offset: 0xBB639C
    void UpdateStyleDictionaryKey(int old_key, int new_key);
    // static public System.Void UpdateStyleSheet()
    // Offset: 0xBB6478
    static void UpdateStyleSheet();
    // static public System.Void RefreshStyles()
    // Offset: 0xBB64D0
    static void RefreshStyles();
    // private System.Void LoadStyleDictionaryInternal()
    // Offset: 0xBB6174
    void LoadStyleDictionaryInternal();
    // public System.Void .ctor()
    // Offset: 0xBB64EC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_StyleSheet* New_ctor();
  }; // TMPro.TMP_StyleSheet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_StyleSheet*, "TMPro", "TMP_StyleSheet");
#pragma pack(pop)
