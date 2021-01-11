// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Runtime.InteropServices._ConstructorInfo
#include "System/Runtime/InteropServices/_ConstructorInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ConstructorInfo
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D38CBC
  // [ClassInterfaceAttribute] Offset: D38CBC
  // [ComDefaultInterfaceAttribute] Offset: D38CBC
  class ConstructorInfo : public System::Reflection::MethodBase/*, public System::Runtime::InteropServices::_ConstructorInfo*/ {
    public:
    // Creating value type constructor for type: ConstructorInfo
    ConstructorInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_ConstructorInfo
    operator System::Runtime::InteropServices::_ConstructorInfo() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_ConstructorInfo*>(this);
    }
    // [ComVisibleAttribute] Offset: 0xD3E23C
    // Get static field: static public readonly System.String ConstructorName
    static ::Il2CppString* _get_ConstructorName();
    // Set static field: static public readonly System.String ConstructorName
    static void _set_ConstructorName(::Il2CppString* value);
    // [ComVisibleAttribute] Offset: 0xD3E250
    // Get static field: static public readonly System.String TypeConstructorName
    static ::Il2CppString* _get_TypeConstructorName();
    // Set static field: static public readonly System.String TypeConstructorName
    static void _set_TypeConstructorName(::Il2CppString* value);
    // public System.Object Invoke(System.Object[] parameters)
    // Offset: 0x1721994
    ::Il2CppObject* Invoke(::Array<::Il2CppObject*>* parameters);
    // public System.Object Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Invoke(System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // static private System.Void .cctor()
    // Offset: 0x1721AFC
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1721984
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructorInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::ConstructorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructorInfo*, creationType>()));
    }
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x172198C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1721A40
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1721A4C
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.ConstructorInfo
  // static public System.Boolean op_Equality(System.Reflection.ConstructorInfo left, System.Reflection.ConstructorInfo right)
  // Offset: 0x1721A54
  bool operator ==(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.ConstructorInfo left, System.Reflection.ConstructorInfo right)
  // Offset: 0x1721AA0
  bool operator !=(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo& right);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ConstructorInfo*, "System.Reflection", "ConstructorInfo");
