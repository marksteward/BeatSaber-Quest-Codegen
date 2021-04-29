// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.UnmanagedType
#include "System/Runtime/InteropServices/UnmanagedType.hpp"
// Including type: System.Runtime.InteropServices.VarEnum
#include "System/Runtime/InteropServices/VarEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x46
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.MarshalAsAttribute
  // [ComVisibleAttribute] Offset: CAA160
  // [AttributeUsageAttribute] Offset: CAA160
  class MarshalAsAttribute : public System::Attribute {
    public:
    // public System.String MarshalCookie
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* MarshalCookie;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [ComVisibleAttribute] Offset: 0xCAD00C
    // public System.String MarshalType
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* MarshalType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [ComVisibleAttribute] Offset: 0xCAD020
    // public System.Type MarshalTypeRef
    // Size: 0x8
    // Offset: 0x20
    System::Type* MarshalTypeRef;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Type SafeArrayUserDefinedSubType
    // Size: 0x8
    // Offset: 0x28
    System::Type* SafeArrayUserDefinedSubType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Runtime.InteropServices.UnmanagedType utype
    // Size: 0x4
    // Offset: 0x30
    System::Runtime::InteropServices::UnmanagedType utype;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::UnmanagedType) == 0x4);
    // public System.Runtime.InteropServices.UnmanagedType ArraySubType
    // Size: 0x4
    // Offset: 0x34
    System::Runtime::InteropServices::UnmanagedType ArraySubType;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::UnmanagedType) == 0x4);
    // public System.Runtime.InteropServices.VarEnum SafeArraySubType
    // Size: 0x4
    // Offset: 0x38
    System::Runtime::InteropServices::VarEnum SafeArraySubType;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::VarEnum) == 0x4);
    // public System.Int32 SizeConst
    // Size: 0x4
    // Offset: 0x3C
    int SizeConst;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 IidParameterIndex
    // Size: 0x4
    // Offset: 0x40
    int IidParameterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int16 SizeParamIndex
    // Size: 0x2
    // Offset: 0x44
    int16_t SizeParamIndex;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: MarshalAsAttribute
    MarshalAsAttribute(::Il2CppString* MarshalCookie_ = {}, ::Il2CppString* MarshalType_ = {}, System::Type* MarshalTypeRef_ = {}, System::Type* SafeArrayUserDefinedSubType_ = {}, System::Runtime::InteropServices::UnmanagedType utype_ = {}, System::Runtime::InteropServices::UnmanagedType ArraySubType_ = {}, System::Runtime::InteropServices::VarEnum SafeArraySubType_ = {}, int SizeConst_ = {}, int IidParameterIndex_ = {}, int16_t SizeParamIndex_ = {}) noexcept : MarshalCookie{MarshalCookie_}, MarshalType{MarshalType_}, MarshalTypeRef{MarshalTypeRef_}, SafeArrayUserDefinedSubType{SafeArrayUserDefinedSubType_}, utype{utype_}, ArraySubType{ArraySubType_}, SafeArraySubType{SafeArraySubType_}, SizeConst{SizeConst_}, IidParameterIndex{IidParameterIndex_}, SizeParamIndex{SizeParamIndex_} {}
    // System.Runtime.InteropServices.MarshalAsAttribute Copy()
    // Offset: 0x13230F4
    System::Runtime::InteropServices::MarshalAsAttribute* Copy();
  }; // System.Runtime.InteropServices.MarshalAsAttribute
  #pragma pack(pop)
  static check_size<sizeof(MarshalAsAttribute), 68 + sizeof(int16_t)> __System_Runtime_InteropServices_MarshalAsAttributeSizeCheck;
  static_assert(sizeof(MarshalAsAttribute) == 0x46);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::MarshalAsAttribute*, "System.Runtime.InteropServices", "MarshalAsAttribute");
