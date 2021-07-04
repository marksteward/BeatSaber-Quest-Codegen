// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Arrays
  class Arrays : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Arrays
    Arrays() noexcept {}
    // Get static field: static public readonly System.Byte[] EmptyBytes
    static ::Array<uint8_t>* _get_EmptyBytes();
    // Set static field: static public readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::Array<uint8_t>* value);
    // Get static field: static public readonly System.Int32[] EmptyInts
    static ::Array<int>* _get_EmptyInts();
    // Set static field: static public readonly System.Int32[] EmptyInts
    static void _set_EmptyInts(::Array<int>* value);
    // static public System.Boolean AreEqual(System.Byte[] a, System.Byte[] b)
    // Offset: 0x136E118
    static bool AreEqual(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static public System.Boolean ConstantTimeAreEqual(System.Byte[] a, System.Byte[] b)
    // Offset: 0x137DE44
    static bool ConstantTimeAreEqual(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static public System.Boolean ConstantTimeAreEqual(System.Int32 len, System.Byte[] a, System.Int32 aOff, System.Byte[] b, System.Int32 bOff)
    // Offset: 0x137DF68
    static bool ConstantTimeAreEqual(int len, ::Array<uint8_t>* a, int aOff, ::Array<uint8_t>* b, int bOff);
    // static public System.Boolean AreEqual(System.Int32[] a, System.Int32[] b)
    // Offset: 0x137E15C
    static bool AreEqual(::Array<int>* a, ::Array<int>* b);
    // static public System.Boolean AreEqual(System.UInt32[] a, System.UInt32[] b)
    // Offset: 0x137E270
    static bool AreEqual(::Array<uint>* a, ::Array<uint>* b);
    // static private System.Boolean HaveSameContents(System.Byte[] a, System.Byte[] b)
    // Offset: 0x137DDCC
    static bool HaveSameContents(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static private System.Boolean HaveSameContents(System.Int32[] a, System.Int32[] b)
    // Offset: 0x137E1F8
    static bool HaveSameContents(::Array<int>* a, ::Array<int>* b);
    // static private System.Boolean HaveSameContents(System.UInt32[] a, System.UInt32[] b)
    // Offset: 0x137E30C
    static bool HaveSameContents(::Array<uint>* a, ::Array<uint>* b);
    // static public System.Int32 GetHashCode(System.Byte[] data)
    // Offset: 0x137E384
    static int GetHashCode(::Array<uint8_t>* data);
    // static public System.Int32 GetHashCode(System.Int32[] data)
    // Offset: 0x137E3E4
    static int GetHashCode(::Array<int>* data);
    // static public System.Int32 GetHashCode(System.UInt32[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x137E444
    static int GetHashCode(::Array<uint>* data, int off, int len);
    // static public System.Int32 GetHashCode(System.UInt64[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x137E4A0
    static int GetHashCode(::Array<uint64_t>* data, int off, int len);
    // static public System.Byte[] Clone(System.Byte[] data)
    // Offset: 0x137E504
    static ::Array<uint8_t>* Clone(::Array<uint8_t>* data);
    // static public System.Int32[] Clone(System.Int32[] data)
    // Offset: 0x137E584
    static ::Array<int>* Clone(::Array<int>* data);
    // static public System.UInt32[] Clone(System.UInt32[] data)
    // Offset: 0x137E604
    static ::Array<uint>* Clone(::Array<uint>* data);
    // static public System.Int64[] Clone(System.Int64[] data)
    // Offset: 0x137E684
    static ::Array<int64_t>* Clone(::Array<int64_t>* data);
    // static public System.UInt64[] Clone(System.UInt64[] data)
    // Offset: 0x137E704
    static ::Array<uint64_t>* Clone(::Array<uint64_t>* data);
    // static public System.Boolean Contains(System.Byte[] a, System.Byte n)
    // Offset: 0x137E784
    static bool Contains(::Array<uint8_t>* a, uint8_t n);
    // static public System.Void Fill(System.Byte[] buf, System.Byte b)
    // Offset: 0x137E7E8
    static void Fill(::Array<uint8_t>* buf, uint8_t b);
    // static public System.Void Fill(System.Byte[] buf, System.Int32 from, System.Int32 to, System.Byte b)
    // Offset: 0x137E850
    static void Fill(::Array<uint8_t>* buf, int from, int to, uint8_t b);
    // static public System.Byte[] CopyOfRange(System.Byte[] data, System.Int32 from, System.Int32 to)
    // Offset: 0x137E8AC
    static ::Array<uint8_t>* CopyOfRange(::Array<uint8_t>* data, int from, int to);
    // static private System.Int32 GetLength(System.Int32 from, System.Int32 to)
    // Offset: 0x137E9A4
    static int GetLength(int from, int to);
    // static public System.Byte[] Prepend(System.Byte[] a, System.Byte b)
    // Offset: 0x137EA7C
    static ::Array<uint8_t>* Prepend(::Array<uint8_t>* a, uint8_t b);
    // static public System.Byte[] Reverse(System.Byte[] a)
    // Offset: 0x136FD48
    static ::Array<uint8_t>* Reverse(::Array<uint8_t>* a);
    // static public System.Boolean IsNullOrContainsNull(System.Object[] array)
    // Offset: 0x137EB48
    static bool IsNullOrContainsNull(::Array<::Il2CppObject*>* array);
    // static private System.Void .cctor()
    // Offset: 0x137EB84
    static void _cctor();
  }; // Org.BouncyCastle.Utilities.Arrays
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Arrays*, "Org.BouncyCastle.Utilities", "Arrays");
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::AreEqual
// Il2CppName: AreEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::ConstantTimeAreEqual
// Il2CppName: ConstantTimeAreEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::ConstantTimeAreEqual
// Il2CppName: ConstantTimeAreEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::AreEqual
// Il2CppName: AreEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::AreEqual
// Il2CppName: AreEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::HaveSameContents
// Il2CppName: HaveSameContents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::HaveSameContents
// Il2CppName: HaveSameContents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::HaveSameContents
// Il2CppName: HaveSameContents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Contains
// Il2CppName: Contains
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Fill
// Il2CppName: Fill
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Fill
// Il2CppName: Fill
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::CopyOfRange
// Il2CppName: CopyOfRange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetLength
// Il2CppName: GetLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Prepend
// Il2CppName: Prepend
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Reverse
// Il2CppName: Reverse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::IsNullOrContainsNull
// Il2CppName: IsNullOrContainsNull
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
