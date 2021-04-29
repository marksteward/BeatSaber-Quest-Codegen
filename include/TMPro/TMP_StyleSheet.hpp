// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Style
  class TMP_Style;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_StyleSheet
  class TMP_StyleSheet : public UnityEngine::ScriptableObject {
    public:
    // private System.Collections.Generic.List`1<TMPro.TMP_Style> m_StyleList
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<TMPro::TMP_Style*>* m_StyleList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Style*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style> m_StyleDictionary
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<int, TMPro::TMP_Style*>* m_StyleDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, TMPro::TMP_Style*>*) == 0x8);
    // Creating value type constructor for type: TMP_StyleSheet
    TMP_StyleSheet(System::Collections::Generic::List_1<TMPro::TMP_Style*>* m_StyleList_ = {}, System::Collections::Generic::Dictionary_2<int, TMPro::TMP_Style*>* m_StyleDictionary_ = {}) noexcept : m_StyleList{m_StyleList_}, m_StyleDictionary{m_StyleDictionary_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private TMPro.TMP_StyleSheet s_Instance
    static TMPro::TMP_StyleSheet* _get_s_Instance();
    // Set static field: static private TMPro.TMP_StyleSheet s_Instance
    static void _set_s_Instance(TMPro::TMP_StyleSheet* value);
    // static public TMPro.TMP_StyleSheet get_instance()
    // Offset: 0x1031788
    static TMPro::TMP_StyleSheet* get_instance();
    // static public TMPro.TMP_StyleSheet LoadDefaultStyleSheet()
    // Offset: 0x1031A68
    static TMPro::TMP_StyleSheet* LoadDefaultStyleSheet();
    // static public TMPro.TMP_Style GetStyle(System.Int32 hashCode)
    // Offset: 0x1031A6C
    static TMPro::TMP_Style* GetStyle(int hashCode);
    // private TMPro.TMP_Style GetStyleInternal(System.Int32 hashCode)
    // Offset: 0x1031A98
    TMPro::TMP_Style* GetStyleInternal(int hashCode);
    // public System.Void UpdateStyleDictionaryKey(System.Int32 old_key, System.Int32 new_key)
    // Offset: 0x1031B18
    void UpdateStyleDictionaryKey(int old_key, int new_key);
    // static public System.Void UpdateStyleSheet()
    // Offset: 0x1031BF4
    static void UpdateStyleSheet();
    // static public System.Void RefreshStyles()
    // Offset: 0x1031C44
    static void RefreshStyles();
    // private System.Void LoadStyleDictionaryInternal()
    // Offset: 0x10318F0
    void LoadStyleDictionaryInternal();
    // public System.Void .ctor()
    // Offset: 0x1031C60
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_StyleSheet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_StyleSheet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_StyleSheet*, creationType>()));
    }
  }; // TMPro.TMP_StyleSheet
  #pragma pack(pop)
  static check_size<sizeof(TMP_StyleSheet), 32 + sizeof(System::Collections::Generic::Dictionary_2<int, TMPro::TMP_Style*>*)> __TMPro_TMP_StyleSheetSizeCheck;
  static_assert(sizeof(TMP_StyleSheet) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_StyleSheet*, "TMPro", "TMP_StyleSheet");
