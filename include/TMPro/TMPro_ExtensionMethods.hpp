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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Color32
  struct Color32;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMPro_ExtensionMethods
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TMPro_ExtensionMethods : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TMPro_ExtensionMethods
    TMPro_ExtensionMethods() noexcept {}
    // static public System.String ArrayToString(System.Char[] chars)
    // Offset: 0x14017F8
    static ::Il2CppString* ArrayToString(::Array<::Il2CppChar>* chars);
    // static public System.String IntToString(System.Int32[] unicodes)
    // Offset: 0x14018BC
    static ::Il2CppString* IntToString(::Array<int>* unicodes);
    // static public System.String IntToString(System.Int32[] unicodes, System.Int32 start, System.Int32 length)
    // Offset: 0x140197C
    static ::Il2CppString* IntToString(::Array<int>* unicodes, int start, int length);
    // static public System.Int32 FindInstanceID(System.Collections.Generic.List`1<T> list, T target)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int FindInstanceID(System::Collections::Generic::List_1<T>* list, T target) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMPro_ExtensionMethods::FindInstanceID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("TMPro", "TMPro_ExtensionMethods", "FindInstanceID", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(target)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, target);
    }
    // static public System.Boolean Compare(UnityEngine.Color32 a, UnityEngine.Color32 b)
    // Offset: 0x1401AC4
    static bool Compare(UnityEngine::Color32 a, UnityEngine::Color32 b);
    // static public System.Boolean CompareRGB(UnityEngine.Color32 a, UnityEngine.Color32 b)
    // Offset: 0x1401B08
    static bool CompareRGB(UnityEngine::Color32 a, UnityEngine::Color32 b);
    // static public System.Boolean Compare(UnityEngine.Color a, UnityEngine.Color b)
    // Offset: 0x1401B40
    static bool Compare(UnityEngine::Color a, UnityEngine::Color b);
    // static public System.Boolean CompareRGB(UnityEngine.Color a, UnityEngine.Color b)
    // Offset: 0x1401B70
    static bool CompareRGB(UnityEngine::Color a, UnityEngine::Color b);
    // static public UnityEngine.Color32 Multiply(UnityEngine.Color32 c1, UnityEngine.Color32 c2)
    // Offset: 0x1401B98
    static UnityEngine::Color32 Multiply(UnityEngine::Color32 c1, UnityEngine::Color32 c2);
    // static public UnityEngine.Color32 Tint(UnityEngine.Color32 c1, UnityEngine.Color32 c2)
    // Offset: 0x1401C5C
    static UnityEngine::Color32 Tint(UnityEngine::Color32 c1, UnityEngine::Color32 c2);
    // static public UnityEngine.Color32 Tint(UnityEngine.Color32 c1, System.Single tint)
    // Offset: 0x1401D20
    static UnityEngine::Color32 Tint(UnityEngine::Color32 c1, float tint);
    // static public System.Boolean Compare(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2, System.Int32 accuracy)
    // Offset: 0x1401E7C
    static bool Compare(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, int accuracy);
    // static public System.Boolean Compare(UnityEngine.Quaternion q1, UnityEngine.Quaternion q2, System.Int32 accuracy)
    // Offset: 0x1401ED4
    static bool Compare(UnityEngine::Quaternion q1, UnityEngine::Quaternion q2, int accuracy);
  }; // TMPro.TMPro_ExtensionMethods
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro_ExtensionMethods*, "TMPro", "TMPro_ExtensionMethods");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::ArrayToString
// Il2CppName: ArrayToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<::Il2CppChar>*)>(&TMPro::TMPro_ExtensionMethods::ArrayToString)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "ArrayToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::IntToString
// Il2CppName: IntToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<int>*)>(&TMPro::TMPro_ExtensionMethods::IntToString)> {
  static const MethodInfo* get() {
    static auto* unicodes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "IntToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicodes});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::IntToString
// Il2CppName: IntToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<int>*, int, int)>(&TMPro::TMPro_ExtensionMethods::IntToString)> {
  static const MethodInfo* get() {
    static auto* unicodes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "IntToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicodes, start, length});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::FindInstanceID
// Il2CppName: FindInstanceID
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Color32, UnityEngine::Color32)>(&TMPro::TMPro_ExtensionMethods::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::CompareRGB
// Il2CppName: CompareRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Color32, UnityEngine::Color32)>(&TMPro::TMPro_ExtensionMethods::CompareRGB)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "CompareRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Color, UnityEngine::Color)>(&TMPro::TMPro_ExtensionMethods::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::CompareRGB
// Il2CppName: CompareRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Color, UnityEngine::Color)>(&TMPro::TMPro_ExtensionMethods::CompareRGB)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "CompareRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color32 (*)(UnityEngine::Color32, UnityEngine::Color32)>(&TMPro::TMPro_ExtensionMethods::Multiply)> {
  static const MethodInfo* get() {
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c1, c2});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::Tint
// Il2CppName: Tint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color32 (*)(UnityEngine::Color32, UnityEngine::Color32)>(&TMPro::TMPro_ExtensionMethods::Tint)> {
  static const MethodInfo* get() {
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* c2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "Tint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c1, c2});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::Tint
// Il2CppName: Tint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color32 (*)(UnityEngine::Color32, float)>(&TMPro::TMPro_ExtensionMethods::Tint)> {
  static const MethodInfo* get() {
    static auto* c1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* tint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "Tint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c1, tint});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, int)>(&TMPro::TMPro_ExtensionMethods::Compare)> {
  static const MethodInfo* get() {
    static auto* v1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* accuracy = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v1, v2, accuracy});
  }
};
// Writing MetadataGetter for method: TMPro::TMPro_ExtensionMethods::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Quaternion, UnityEngine::Quaternion, int)>(&TMPro::TMPro_ExtensionMethods::Compare)> {
  static const MethodInfo* get() {
    static auto* q1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* q2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* accuracy = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMPro_ExtensionMethods*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q1, q2, accuracy});
  }
};
