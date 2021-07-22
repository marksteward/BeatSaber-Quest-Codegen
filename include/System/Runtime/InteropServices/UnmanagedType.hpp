// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.UnmanagedType
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6C6B0
  struct UnmanagedType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UnmanagedType
    constexpr UnmanagedType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType Bool
    static constexpr const int Bool = 2;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType Bool
    static System::Runtime::InteropServices::UnmanagedType _get_Bool();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType Bool
    static void _set_Bool(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType I1
    static constexpr const int I1 = 3;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType I1
    static System::Runtime::InteropServices::UnmanagedType _get_I1();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType I1
    static void _set_I1(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType U1
    static constexpr const int U1 = 4;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType U1
    static System::Runtime::InteropServices::UnmanagedType _get_U1();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType U1
    static void _set_U1(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType I2
    static constexpr const int I2 = 5;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType I2
    static System::Runtime::InteropServices::UnmanagedType _get_I2();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType I2
    static void _set_I2(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType U2
    static constexpr const int U2 = 6;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType U2
    static System::Runtime::InteropServices::UnmanagedType _get_U2();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType U2
    static void _set_U2(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType I4
    static constexpr const int I4 = 7;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType I4
    static System::Runtime::InteropServices::UnmanagedType _get_I4();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType I4
    static void _set_I4(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType U4
    static constexpr const int U4 = 8;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType U4
    static System::Runtime::InteropServices::UnmanagedType _get_U4();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType U4
    static void _set_U4(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType I8
    static constexpr const int I8 = 9;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType I8
    static System::Runtime::InteropServices::UnmanagedType _get_I8();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType I8
    static void _set_I8(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType U8
    static constexpr const int U8 = 10;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType U8
    static System::Runtime::InteropServices::UnmanagedType _get_U8();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType U8
    static void _set_U8(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType R4
    static constexpr const int R4 = 11;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType R4
    static System::Runtime::InteropServices::UnmanagedType _get_R4();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType R4
    static void _set_R4(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType R8
    static constexpr const int R8 = 12;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType R8
    static System::Runtime::InteropServices::UnmanagedType _get_R8();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType R8
    static void _set_R8(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType Currency
    static constexpr const int Currency = 15;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType Currency
    static System::Runtime::InteropServices::UnmanagedType _get_Currency();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType Currency
    static void _set_Currency(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType BStr
    static constexpr const int BStr = 19;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType BStr
    static System::Runtime::InteropServices::UnmanagedType _get_BStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType BStr
    static void _set_BStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType LPStr
    static constexpr const int LPStr = 20;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType LPStr
    static System::Runtime::InteropServices::UnmanagedType _get_LPStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType LPStr
    static void _set_LPStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType LPWStr
    static constexpr const int LPWStr = 21;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType LPWStr
    static System::Runtime::InteropServices::UnmanagedType _get_LPWStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType LPWStr
    static void _set_LPWStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType LPTStr
    static constexpr const int LPTStr = 22;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType LPTStr
    static System::Runtime::InteropServices::UnmanagedType _get_LPTStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType LPTStr
    static void _set_LPTStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType ByValTStr
    static constexpr const int ByValTStr = 23;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType ByValTStr
    static System::Runtime::InteropServices::UnmanagedType _get_ByValTStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType ByValTStr
    static void _set_ByValTStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType IUnknown
    static constexpr const int IUnknown = 25;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType IUnknown
    static System::Runtime::InteropServices::UnmanagedType _get_IUnknown();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType IUnknown
    static void _set_IUnknown(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType IDispatch
    static constexpr const int IDispatch = 26;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType IDispatch
    static System::Runtime::InteropServices::UnmanagedType _get_IDispatch();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType IDispatch
    static void _set_IDispatch(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType Struct
    static constexpr const int Struct = 27;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType Struct
    static System::Runtime::InteropServices::UnmanagedType _get_Struct();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType Struct
    static void _set_Struct(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType Interface
    static constexpr const int Interface = 28;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType Interface
    static System::Runtime::InteropServices::UnmanagedType _get_Interface();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType Interface
    static void _set_Interface(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType SafeArray
    static constexpr const int SafeArray = 29;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType SafeArray
    static System::Runtime::InteropServices::UnmanagedType _get_SafeArray();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType SafeArray
    static void _set_SafeArray(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType ByValArray
    static constexpr const int ByValArray = 30;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType ByValArray
    static System::Runtime::InteropServices::UnmanagedType _get_ByValArray();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType ByValArray
    static void _set_ByValArray(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType SysInt
    static constexpr const int SysInt = 31;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType SysInt
    static System::Runtime::InteropServices::UnmanagedType _get_SysInt();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType SysInt
    static void _set_SysInt(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType SysUInt
    static constexpr const int SysUInt = 32;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType SysUInt
    static System::Runtime::InteropServices::UnmanagedType _get_SysUInt();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType SysUInt
    static void _set_SysUInt(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType VBByRefStr
    static constexpr const int VBByRefStr = 34;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType VBByRefStr
    static System::Runtime::InteropServices::UnmanagedType _get_VBByRefStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType VBByRefStr
    static void _set_VBByRefStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType AnsiBStr
    static constexpr const int AnsiBStr = 35;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType AnsiBStr
    static System::Runtime::InteropServices::UnmanagedType _get_AnsiBStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType AnsiBStr
    static void _set_AnsiBStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType TBStr
    static constexpr const int TBStr = 36;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType TBStr
    static System::Runtime::InteropServices::UnmanagedType _get_TBStr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType TBStr
    static void _set_TBStr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType VariantBool
    static constexpr const int VariantBool = 37;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType VariantBool
    static System::Runtime::InteropServices::UnmanagedType _get_VariantBool();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType VariantBool
    static void _set_VariantBool(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType FunctionPtr
    static constexpr const int FunctionPtr = 38;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType FunctionPtr
    static System::Runtime::InteropServices::UnmanagedType _get_FunctionPtr();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType FunctionPtr
    static void _set_FunctionPtr(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType AsAny
    static constexpr const int AsAny = 40;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType AsAny
    static System::Runtime::InteropServices::UnmanagedType _get_AsAny();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType AsAny
    static void _set_AsAny(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType LPArray
    static constexpr const int LPArray = 42;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType LPArray
    static System::Runtime::InteropServices::UnmanagedType _get_LPArray();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType LPArray
    static void _set_LPArray(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType LPStruct
    static constexpr const int LPStruct = 43;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType LPStruct
    static System::Runtime::InteropServices::UnmanagedType _get_LPStruct();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType LPStruct
    static void _set_LPStruct(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType CustomMarshaler
    static constexpr const int CustomMarshaler = 44;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType CustomMarshaler
    static System::Runtime::InteropServices::UnmanagedType _get_CustomMarshaler();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType CustomMarshaler
    static void _set_CustomMarshaler(System::Runtime::InteropServices::UnmanagedType value);
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType Error
    static constexpr const int Error = 45;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType Error
    static System::Runtime::InteropServices::UnmanagedType _get_Error();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType Error
    static void _set_Error(System::Runtime::InteropServices::UnmanagedType value);
    // [ComVisibleAttribute] Offset: 0xD6F924
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType IInspectable
    static constexpr const int IInspectable = 46;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType IInspectable
    static System::Runtime::InteropServices::UnmanagedType _get_IInspectable();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType IInspectable
    static void _set_IInspectable(System::Runtime::InteropServices::UnmanagedType value);
    // [ComVisibleAttribute] Offset: 0xD6F938
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType HString
    static constexpr const int HString = 47;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType HString
    static System::Runtime::InteropServices::UnmanagedType _get_HString();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType HString
    static void _set_HString(System::Runtime::InteropServices::UnmanagedType value);
    // [ComVisibleAttribute] Offset: 0xD6F94C
    // static field const value: static public System.Runtime.InteropServices.UnmanagedType LPUTF8Str
    static constexpr const int LPUTF8Str = 48;
    // Get static field: static public System.Runtime.InteropServices.UnmanagedType LPUTF8Str
    static System::Runtime::InteropServices::UnmanagedType _get_LPUTF8Str();
    // Set static field: static public System.Runtime.InteropServices.UnmanagedType LPUTF8Str
    static void _set_LPUTF8Str(System::Runtime::InteropServices::UnmanagedType value);
  }; // System.Runtime.InteropServices.UnmanagedType
  #pragma pack(pop)
  static check_size<sizeof(UnmanagedType), 0 + sizeof(int)> __System_Runtime_InteropServices_UnmanagedTypeSizeCheck;
  static_assert(sizeof(UnmanagedType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::UnmanagedType, "System.Runtime.InteropServices", "UnmanagedType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
