// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.ObsoleteAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D681FC
  // [AttributeUsageAttribute] Offset: D681FC
  class ObsoleteAttribute : public System::Attribute {
    public:
    // private System.String _message
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _error
    // Size: 0x1
    // Offset: 0x18
    bool error;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ObsoleteAttribute
    ObsoleteAttribute(::Il2CppString* message_ = {}, bool error_ = {}) noexcept : message{message_}, error{error_} {}
    // public System.String get_Message()
    // Offset: 0x1CA0B70
    ::Il2CppString* get_Message();
    // public System.Void .ctor(System.String message)
    // Offset: 0x1CA0B00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObsoleteAttribute* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObsoleteAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObsoleteAttribute*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Boolean error)
    // Offset: 0x1CA0B30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObsoleteAttribute* New_ctor(::Il2CppString* message, bool error) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObsoleteAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObsoleteAttribute*, creationType>(message, error)));
    }
    // public System.Void .ctor()
    // Offset: 0x1CA0AD4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObsoleteAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObsoleteAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObsoleteAttribute*, creationType>()));
    }
  }; // System.ObsoleteAttribute
  #pragma pack(pop)
  static check_size<sizeof(ObsoleteAttribute), 24 + sizeof(bool)> __System_ObsoleteAttributeSizeCheck;
  static_assert(sizeof(ObsoleteAttribute) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::ObsoleteAttribute*, "System", "ObsoleteAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ObsoleteAttribute::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::ObsoleteAttribute::*)()>(&System::ObsoleteAttribute::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ObsoleteAttribute*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ObsoleteAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObsoleteAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObsoleteAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
