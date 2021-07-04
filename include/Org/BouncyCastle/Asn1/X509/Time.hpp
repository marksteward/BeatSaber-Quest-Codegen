// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Choice
#include "Org/BouncyCastle/Asn1/IAsn1Choice.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.Time
  class Time : public Org::BouncyCastle::Asn1::Asn1Encodable/*, public Org::BouncyCastle::Asn1::IAsn1Choice*/ {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1Object time
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Object* time;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    // Creating value type constructor for type: Time
    Time(Org::BouncyCastle::Asn1::Asn1Object* time_ = {}) noexcept : time{time_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Choice
    operator Org::BouncyCastle::Asn1::IAsn1Choice() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Choice*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1Object*
    constexpr operator Org::BouncyCastle::Asn1::Asn1Object*() const noexcept {
      return time;
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Object time)
    // Offset: 0x1A0AB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Time* New_ctor(Org::BouncyCastle::Asn1::Asn1Object* time) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::Time::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Time*, creationType>(time)));
    }
    // static public Org.BouncyCastle.Asn1.X509.Time GetInstance(System.Object obj)
    // Offset: 0x1A05AB4
    static Org::BouncyCastle::Asn1::X509::Time* GetInstance(::Il2CppObject* obj);
    // public System.String GetTime()
    // Offset: 0x1A0ACB8
    ::Il2CppString* GetTime();
    // public System.DateTime ToDateTime()
    // Offset: 0x1A0ADA4
    System::DateTime ToDateTime();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A0AF78
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x1A0AF80
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.X509.Time
  #pragma pack(pop)
  static check_size<sizeof(Time), 16 + sizeof(Org::BouncyCastle::Asn1::Asn1Object*)> __Org_BouncyCastle_Asn1_X509_TimeSizeCheck;
  static_assert(sizeof(Time) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Time*, "Org.BouncyCastle.Asn1.X509", "Time");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::Time::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::Time::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::Time* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::Time::GetInstance)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::Time*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::Time::GetTime
// Il2CppName: GetTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::X509::Time::*)()>(&Org::BouncyCastle::Asn1::X509::Time::GetTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::Time*), "GetTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::Time::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::Asn1::X509::Time::*)()>(&Org::BouncyCastle::Asn1::X509::Time::ToDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::Time*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::Time::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::Time::*)()>(&Org::BouncyCastle::Asn1::X509::Time::ToAsn1Object)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::Time*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::Time::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::X509::Time::*)()>(&Org::BouncyCastle::Asn1::X509::Time::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::Time*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
