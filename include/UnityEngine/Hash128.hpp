// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Hash128
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E2981C
  // [UsedByNativeCodeAttribute] Offset: E2981C
  struct Hash128/*, public System::ValueType, public System::IComparable_1<UnityEngine::Hash128>, public System::IEquatable_1<UnityEngine::Hash128>, public System::IComparable*/ {
    public:
    // private System.UInt32 m_u32_0
    // Size: 0x4
    // Offset: 0x0
    uint m_u32_0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 m_u32_1
    // Size: 0x4
    // Offset: 0x4
    uint m_u32_1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 m_u32_2
    // Size: 0x4
    // Offset: 0x8
    uint m_u32_2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 m_u32_3
    // Size: 0x4
    // Offset: 0xC
    uint m_u32_3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Hash128
    constexpr Hash128(uint m_u32_0_ = {}, uint m_u32_1_ = {}, uint m_u32_2_ = {}, uint m_u32_3_ = {}) noexcept : m_u32_0{m_u32_0_}, m_u32_1{m_u32_1_}, m_u32_2{m_u32_2_}, m_u32_3{m_u32_3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<UnityEngine::Hash128>
    operator System::IComparable_1<UnityEngine::Hash128>() noexcept {
      return *reinterpret_cast<System::IComparable_1<UnityEngine::Hash128>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Hash128>
    operator System::IEquatable_1<UnityEngine::Hash128>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Hash128>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Get instance field: private System.UInt32 m_u32_0
    uint _get_m_u32_0();
    // Set instance field: private System.UInt32 m_u32_0
    void _set_m_u32_0(uint value);
    // Get instance field: private System.UInt32 m_u32_1
    uint _get_m_u32_1();
    // Set instance field: private System.UInt32 m_u32_1
    void _set_m_u32_1(uint value);
    // Get instance field: private System.UInt32 m_u32_2
    uint _get_m_u32_2();
    // Set instance field: private System.UInt32 m_u32_2
    void _set_m_u32_2(uint value);
    // Get instance field: private System.UInt32 m_u32_3
    uint _get_m_u32_3();
    // Set instance field: private System.UInt32 m_u32_3
    void _set_m_u32_3(uint value);
    // public System.Boolean get_isValid()
    // Offset: 0xD83020
    bool get_isValid();
    // public System.Int32 CompareTo(UnityEngine.Hash128 rhs)
    // Offset: 0xD83050
    int CompareTo(UnityEngine::Hash128 rhs);
    // static public UnityEngine.Hash128 Parse(System.String hashString)
    // Offset: 0x17E0884
    static UnityEngine::Hash128 Parse(::Il2CppString* hashString);
    // static System.String Internal_Hash128ToString(UnityEngine.Hash128 hash128)
    // Offset: 0x17E0838
    static ::Il2CppString* Internal_Hash128ToString(UnityEngine::Hash128 hash128);
    // static public UnityEngine.Hash128 Compute(System.String hashString)
    // Offset: 0x17E096C
    static UnityEngine::Hash128 Compute(::Il2CppString* hashString);
    // public System.Boolean Equals(UnityEngine.Hash128 obj)
    // Offset: 0xD8306C
    bool Equals(UnityEngine::Hash128 obj);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0xD830B8
    int CompareTo(::Il2CppObject* obj);
    // static private System.Void Parse_Injected(System.String hashString, out UnityEngine.Hash128 ret)
    // Offset: 0x17E08DC
    static void Parse_Injected(::Il2CppString* hashString, ByRef<UnityEngine::Hash128> ret);
    // static private System.String Internal_Hash128ToString_Injected(ref UnityEngine.Hash128 hash128)
    // Offset: 0x17E092C
    static ::Il2CppString* Internal_Hash128ToString_Injected(ByRef<UnityEngine::Hash128> hash128);
    // static private System.Void Compute_Injected(System.String hashString, out UnityEngine.Hash128 ret)
    // Offset: 0x17E09C4
    static void Compute_Injected(::Il2CppString* hashString, ByRef<UnityEngine::Hash128> ret);
    // public override System.String ToString()
    // Offset: 0xD83058
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xD83064
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xD830B0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Hash128
  #pragma pack(pop)
  static check_size<sizeof(Hash128), 12 + sizeof(uint)> __UnityEngine_Hash128SizeCheck;
  static_assert(sizeof(Hash128) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.Hash128 hash1, UnityEngine.Hash128 hash2)
  // Offset: 0x17E0AC8
  bool operator ==(const UnityEngine::Hash128& hash1, const UnityEngine::Hash128& hash2);
  // static public System.Boolean op_LessThan(UnityEngine.Hash128 x, UnityEngine.Hash128 y)
  // Offset: 0x17E0794
  bool operator <(const UnityEngine::Hash128& x, const UnityEngine::Hash128& y);
  // static public System.Boolean op_GreaterThan(UnityEngine.Hash128 x, UnityEngine.Hash128 y)
  // Offset: 0x17E07C8
  bool operator >(const UnityEngine::Hash128& x, const UnityEngine::Hash128& y);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Hash128, "UnityEngine", "Hash128");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Hash128::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Hash128::*)()>(&UnityEngine::Hash128::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Hash128::*)(UnityEngine::Hash128)>(&UnityEngine::Hash128::CompareTo)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Hash128 (*)(::Il2CppString*)>(&UnityEngine::Hash128::Parse)> {
  static const MethodInfo* get() {
    static auto* hashString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashString});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Internal_Hash128ToString
// Il2CppName: Internal_Hash128ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(UnityEngine::Hash128)>(&UnityEngine::Hash128::Internal_Hash128ToString)> {
  static const MethodInfo* get() {
    static auto* hash128 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Internal_Hash128ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash128});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Compute
// Il2CppName: Compute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Hash128 (*)(::Il2CppString*)>(&UnityEngine::Hash128::Compute)> {
  static const MethodInfo* get() {
    static auto* hashString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Compute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashString});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Hash128::*)(UnityEngine::Hash128)>(&UnityEngine::Hash128::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Hash128::*)(::Il2CppObject*)>(&UnityEngine::Hash128::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Parse_Injected
// Il2CppName: Parse_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ByRef<UnityEngine::Hash128>)>(&UnityEngine::Hash128::Parse_Injected)> {
  static const MethodInfo* get() {
    static auto* hashString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Parse_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashString, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Internal_Hash128ToString_Injected
// Il2CppName: Internal_Hash128ToString_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(ByRef<UnityEngine::Hash128>)>(&UnityEngine::Hash128::Internal_Hash128ToString_Injected)> {
  static const MethodInfo* get() {
    static auto* hash128 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Internal_Hash128ToString_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash128});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Compute_Injected
// Il2CppName: Compute_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ByRef<UnityEngine::Hash128>)>(&UnityEngine::Hash128::Compute_Injected)> {
  static const MethodInfo* get() {
    static auto* hashString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Compute_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashString, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Hash128::*)()>(&UnityEngine::Hash128::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Hash128::*)(::Il2CppObject*)>(&UnityEngine::Hash128::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Hash128::*)()>(&UnityEngine::Hash128::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Hash128), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Hash128::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Hash128::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Hash128::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
