// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
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
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.Edge
  // [] Offset: FFFFFFFF
  struct Edge/*, public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::Edge>*/ {
    public:
    // public System.Int32 a
    // Size: 0x4
    // Offset: 0x0
    int a;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 b
    // Size: 0x4
    // Offset: 0x4
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Edge
    constexpr Edge(int a_ = {}, int b_ = {}) noexcept : a{a_}, b{b_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::Edge>
    operator System::IEquatable_1<UnityEngine::ProBuilder::Edge>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::Edge>*>(this);
    }
    // Get static field: static public readonly UnityEngine.ProBuilder.Edge Empty
    static UnityEngine::ProBuilder::Edge _get_Empty();
    // Set static field: static public readonly UnityEngine.ProBuilder.Edge Empty
    static void _set_Empty(UnityEngine::ProBuilder::Edge value);
    // public System.Void .ctor(System.Int32 a, System.Int32 b)
    // Offset: 0xCAD04C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Edge(int a, int b)
    // public System.Boolean IsValid()
    // Offset: 0xCAD054
    bool IsValid();
    // static public UnityEngine.ProBuilder.Edge Add(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
    // Offset: 0x189BD54
    static UnityEngine::ProBuilder::Edge Add(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b);
    // static public UnityEngine.ProBuilder.Edge Subtract(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
    // Offset: 0x189BDD4
    static UnityEngine::ProBuilder::Edge Subtract(UnityEngine::ProBuilder::Edge a, UnityEngine::ProBuilder::Edge b);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Edge other, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0xCAD0FC
    bool Equals(UnityEngine::ProBuilder::Edge other, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // public System.Boolean Contains(System.Int32 index)
    // Offset: 0xCAD104
    bool Contains(int index);
    // public System.Boolean Contains(UnityEngine.ProBuilder.Edge other)
    // Offset: 0xCAD128
    bool Contains(UnityEngine::ProBuilder::Edge other);
    // System.Boolean Contains(System.Int32 index, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0xCAD158
    bool Contains(int index, System::Collections::Generic::Dictionary_2<int, int>* lookup);
    // static System.Void GetIndices(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x189C070
    static void GetIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::List_1<int>* indices);
    // static private System.Void .cctor()
    // Offset: 0x189C31C
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xCAD080
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.Edge other)
    // Offset: 0xCAD088
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.Edge other)
    bool Equals(UnityEngine::ProBuilder::Edge other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCAD0D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCAD0D8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Edge
  static check_size<sizeof(Edge), 4 + sizeof(int)> __UnityEngine_ProBuilder_EdgeSizeCheck;
  static_assert(sizeof(Edge) == 0x8);
  // static public UnityEngine.ProBuilder.Edge op_Addition(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x189BC24
  UnityEngine::ProBuilder::Edge operator+(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
  // static public UnityEngine.ProBuilder.Edge op_Subtraction(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x189BC3C
  UnityEngine::ProBuilder::Edge operator-(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
  // static public UnityEngine.ProBuilder.Edge op_Addition(UnityEngine.ProBuilder.Edge a, System.Int32 b)
  // Offset: 0x189BC54
  UnityEngine::ProBuilder::Edge operator+(const UnityEngine::ProBuilder::Edge& a, const int& b);
  // static public UnityEngine.ProBuilder.Edge op_Subtraction(UnityEngine.ProBuilder.Edge a, System.Int32 b)
  // Offset: 0x189BC68
  UnityEngine::ProBuilder::Edge operator-(const UnityEngine::ProBuilder::Edge& a, const int& b);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x189BC7C
  bool operator ==(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Edge a, UnityEngine.ProBuilder.Edge b)
  // Offset: 0x189BCB4
  bool operator !=(const UnityEngine::ProBuilder::Edge& a, const UnityEngine::ProBuilder::Edge& b);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Edge, "UnityEngine.ProBuilder", "Edge");
