// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Globalization.CultureNotFoundException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6A2CC
  class CultureNotFoundException : public System::ArgumentException {
    public:
    // private System.String m_invalidCultureName
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* m_invalidCultureName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Nullable`1<System.Int32> m_invalidCultureId
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    System::Nullable_1<int> m_invalidCultureId;
    // Creating value type constructor for type: CultureNotFoundException
    CultureNotFoundException(::Il2CppString* m_invalidCultureName_ = {}, System::Nullable_1<int> m_invalidCultureId_ = {}) noexcept : m_invalidCultureName{m_invalidCultureName_}, m_invalidCultureId{m_invalidCultureId_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // Get instance field: private System.String m_invalidCultureName
    ::Il2CppString* _get_m_invalidCultureName();
    // Set instance field: private System.String m_invalidCultureName
    void _set_m_invalidCultureName(::Il2CppString* value);
    // Get instance field: private System.Nullable`1<System.Int32> m_invalidCultureId
    System::Nullable_1<int> _get_m_invalidCultureId();
    // Set instance field: private System.Nullable`1<System.Int32> m_invalidCultureId
    void _set_m_invalidCultureId(System::Nullable_1<int> value);
    // public System.Nullable`1<System.Int32> get_InvalidCultureId()
    // Offset: 0x17D3EE4
    System::Nullable_1<int> get_InvalidCultureId();
    // public System.String get_InvalidCultureName()
    // Offset: 0x17D3EEC
    ::Il2CppString* get_InvalidCultureName();
    // static private System.String get_DefaultMessage()
    // Offset: 0x17D3B9C
    static ::Il2CppString* get_DefaultMessage();
    // private System.String get_FormatedInvalidCultureId()
    // Offset: 0x17D3EF4
    ::Il2CppString* get_FormatedInvalidCultureId();
    // public System.Void .ctor(System.String paramName, System.String invalidCultureName, System.String message)
    // Offset: 0x17D3BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureNotFoundException* New_ctor(::Il2CppString* paramName, ::Il2CppString* invalidCultureName, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CultureNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureNotFoundException*, creationType>(paramName, invalidCultureName, message)));
    }
    // public override System.String get_Message()
    // Offset: 0x17D3FFC
    // Implemented from: System.ArgumentException
    // Base method: System.String ArgumentException::get_Message()
    ::Il2CppString* get_Message();
    // public System.Void .ctor()
    // Offset: 0x17D3B48
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureNotFoundException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CultureNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureNotFoundException*, creationType>()));
    }
    // public System.Void .ctor(System.String paramName, System.String message)
    // Offset: 0x17D1150
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName, System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureNotFoundException* New_ctor(::Il2CppString* paramName, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CultureNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureNotFoundException*, creationType>(paramName, message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x17D3C18
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureNotFoundException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CultureNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureNotFoundException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x17D3D7C
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Globalization.CultureNotFoundException
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureNotFoundException*, "System.Globalization", "CultureNotFoundException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::get_InvalidCultureId
// Il2CppName: get_InvalidCultureId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int> (System::Globalization::CultureNotFoundException::*)()>(&System::Globalization::CultureNotFoundException::get_InvalidCultureId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CultureNotFoundException*), "get_InvalidCultureId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::get_InvalidCultureName
// Il2CppName: get_InvalidCultureName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::CultureNotFoundException::*)()>(&System::Globalization::CultureNotFoundException::get_InvalidCultureName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CultureNotFoundException*), "get_InvalidCultureName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::get_DefaultMessage
// Il2CppName: get_DefaultMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::Globalization::CultureNotFoundException::get_DefaultMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CultureNotFoundException*), "get_DefaultMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::get_FormatedInvalidCultureId
// Il2CppName: get_FormatedInvalidCultureId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::CultureNotFoundException::*)()>(&System::Globalization::CultureNotFoundException::get_FormatedInvalidCultureId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CultureNotFoundException*), "get_FormatedInvalidCultureId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Globalization::CultureNotFoundException::*)()>(&System::Globalization::CultureNotFoundException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CultureNotFoundException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CultureNotFoundException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureNotFoundException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Globalization::CultureNotFoundException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CultureNotFoundException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
