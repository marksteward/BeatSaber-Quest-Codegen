// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: Valve.VR.HmdMatrix44_t
#include "Valve/VR/HmdMatrix44_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SteamVR_Utils/RigidTransform
  struct SteamVR_Utils::RigidTransform/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Vector3 pos
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 pos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rot
    // Size: 0x10
    // Offset: 0xC
    UnityEngine::Quaternion rot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: RigidTransform
    constexpr RigidTransform(UnityEngine::Vector3 pos_ = {}, UnityEngine::Quaternion rot_ = {}) noexcept : pos{pos_}, rot{rot_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static public SteamVR_Utils/RigidTransform get_identity()
    // Offset: 0x16C8B68
    static GlobalNamespace::SteamVR_Utils::RigidTransform get_identity();
    // static public SteamVR_Utils/RigidTransform FromLocal(UnityEngine.Transform t)
    // Offset: 0x16C8C38
    static GlobalNamespace::SteamVR_Utils::RigidTransform FromLocal(UnityEngine::Transform* t);
    // public System.Void .ctor(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0xEFA060
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  RigidTransform(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot)
    // public System.Void .ctor(UnityEngine.Transform t)
    // Offset: 0xEFA074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RigidTransform(UnityEngine::Transform* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Utils::RigidTransform::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, t);
    }
    // public System.Void .ctor(UnityEngine.Transform from, UnityEngine.Transform to)
    // Offset: 0xEFA07C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RigidTransform(UnityEngine::Transform* from, UnityEngine::Transform* to) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Utils::RigidTransform::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(from), ::il2cpp_utils::ExtractType(to)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, from, to);
    }
    // public System.Void .ctor(Valve.VR.HmdMatrix34_t pose)
    // Offset: 0xEFA084
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RigidTransform(Valve::VR::HmdMatrix34_t pose) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Utils::RigidTransform::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pose)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, pose);
    }
    // public System.Void .ctor(Valve.VR.HmdMatrix44_t pose)
    // Offset: 0xEFA0B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RigidTransform(Valve::VR::HmdMatrix44_t pose) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Utils::RigidTransform::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(pose)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, pose);
    }
    // public Valve.VR.HmdMatrix44_t ToHmdMatrix44()
    // Offset: 0xEFA0EC
    Valve::VR::HmdMatrix44_t ToHmdMatrix44();
    // public Valve.VR.HmdMatrix34_t ToHmdMatrix34()
    // Offset: 0xEFA0F4
    Valve::VR::HmdMatrix34_t ToHmdMatrix34();
    // public System.Void Inverse()
    // Offset: 0xEFA140
    void Inverse();
    // public SteamVR_Utils/RigidTransform GetInverse()
    // Offset: 0xEFA148
    GlobalNamespace::SteamVR_Utils::RigidTransform GetInverse();
    // public System.Void Multiply(SteamVR_Utils/RigidTransform a, SteamVR_Utils/RigidTransform b)
    // Offset: 0xEFA150
    void Multiply(GlobalNamespace::SteamVR_Utils::RigidTransform a, GlobalNamespace::SteamVR_Utils::RigidTransform b);
    // public UnityEngine.Vector3 InverseTransformPoint(UnityEngine.Vector3 point)
    // Offset: 0xEFA198
    UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 point);
    // public UnityEngine.Vector3 TransformPoint(UnityEngine.Vector3 point)
    // Offset: 0xEFA1A0
    UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 point);
    // static public SteamVR_Utils/RigidTransform Interpolate(SteamVR_Utils/RigidTransform a, SteamVR_Utils/RigidTransform b, System.Single t)
    // Offset: 0x16CA0CC
    static GlobalNamespace::SteamVR_Utils::RigidTransform Interpolate(GlobalNamespace::SteamVR_Utils::RigidTransform a, GlobalNamespace::SteamVR_Utils::RigidTransform b, float t);
    // public System.Void Interpolate(SteamVR_Utils/RigidTransform to, System.Single t)
    // Offset: 0xEFA1A8
    void Interpolate(GlobalNamespace::SteamVR_Utils::RigidTransform to, float t);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xEFA0FC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFA104
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // SteamVR_Utils/RigidTransform
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Utils::RigidTransform), 12 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_SteamVR_Utils_RigidTransformSizeCheck;
  static_assert(sizeof(SteamVR_Utils::RigidTransform) == 0x1C);
  // static public System.Boolean op_Equality(SteamVR_Utils/RigidTransform a, SteamVR_Utils/RigidTransform b)
  // Offset: 0x16C9834
  bool operator ==(const GlobalNamespace::SteamVR_Utils::RigidTransform& a, const GlobalNamespace::SteamVR_Utils::RigidTransform& b);
  // static public System.Boolean op_Inequality(SteamVR_Utils/RigidTransform a, SteamVR_Utils/RigidTransform b)
  // Offset: 0x16C996C
  bool operator !=(const GlobalNamespace::SteamVR_Utils::RigidTransform& a, const GlobalNamespace::SteamVR_Utils::RigidTransform& b);
  // static public SteamVR_Utils/RigidTransform op_Multiply(SteamVR_Utils/RigidTransform a, SteamVR_Utils/RigidTransform b)
  // Offset: 0x16C9AA4
  GlobalNamespace::SteamVR_Utils::RigidTransform operator*(const GlobalNamespace::SteamVR_Utils::RigidTransform& a, const GlobalNamespace::SteamVR_Utils::RigidTransform& b);
  // static public UnityEngine.Vector3 op_Multiply(SteamVR_Utils/RigidTransform t, UnityEngine.Vector3 v)
  // Offset: 0x16CA0C8
  UnityEngine::Vector3 operator*(const GlobalNamespace::SteamVR_Utils::RigidTransform& t, const UnityEngine::Vector3& v);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Utils::RigidTransform, "", "SteamVR_Utils/RigidTransform");
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Utils::RigidTransform (*)()>(&GlobalNamespace::SteamVR_Utils::RigidTransform::get_identity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::FromLocal
// Il2CppName: FromLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Utils::RigidTransform (*)(UnityEngine::Transform*)>(&GlobalNamespace::SteamVR_Utils::RigidTransform::FromLocal)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "FromLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::RigidTransform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::RigidTransform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::RigidTransform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::RigidTransform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::RigidTransform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::ToHmdMatrix44
// Il2CppName: ToHmdMatrix44
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdMatrix44_t (GlobalNamespace::SteamVR_Utils::RigidTransform::*)()>(&GlobalNamespace::SteamVR_Utils::RigidTransform::ToHmdMatrix44)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "ToHmdMatrix44", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::ToHmdMatrix34
// Il2CppName: ToHmdMatrix34
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdMatrix34_t (GlobalNamespace::SteamVR_Utils::RigidTransform::*)()>(&GlobalNamespace::SteamVR_Utils::RigidTransform::ToHmdMatrix34)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "ToHmdMatrix34", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Utils::RigidTransform::*)()>(&GlobalNamespace::SteamVR_Utils::RigidTransform::Inverse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::GetInverse
// Il2CppName: GetInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Utils::RigidTransform (GlobalNamespace::SteamVR_Utils::RigidTransform::*)()>(&GlobalNamespace::SteamVR_Utils::RigidTransform::GetInverse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "GetInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Utils::RigidTransform::*)(GlobalNamespace::SteamVR_Utils::RigidTransform, GlobalNamespace::SteamVR_Utils::RigidTransform)>(&GlobalNamespace::SteamVR_Utils::RigidTransform::Multiply)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("", "SteamVR_Utils/RigidTransform")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("", "SteamVR_Utils/RigidTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::InverseTransformPoint
// Il2CppName: InverseTransformPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SteamVR_Utils::RigidTransform::*)(UnityEngine::Vector3)>(&GlobalNamespace::SteamVR_Utils::RigidTransform::InverseTransformPoint)> {
  const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "InverseTransformPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::TransformPoint
// Il2CppName: TransformPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SteamVR_Utils::RigidTransform::*)(UnityEngine::Vector3)>(&GlobalNamespace::SteamVR_Utils::RigidTransform::TransformPoint)> {
  const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "TransformPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Utils::RigidTransform (*)(GlobalNamespace::SteamVR_Utils::RigidTransform, GlobalNamespace::SteamVR_Utils::RigidTransform, float)>(&GlobalNamespace::SteamVR_Utils::RigidTransform::Interpolate)> {
  const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("", "SteamVR_Utils/RigidTransform")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("", "SteamVR_Utils/RigidTransform")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Utils::RigidTransform::*)(GlobalNamespace::SteamVR_Utils::RigidTransform, float)>(&GlobalNamespace::SteamVR_Utils::RigidTransform::Interpolate)> {
  const MethodInfo* get() {
    static auto* to = &::il2cpp_utils::GetClassFromName("", "SteamVR_Utils/RigidTransform")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{to, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Utils::RigidTransform::*)(::Il2CppObject*)>(&GlobalNamespace::SteamVR_Utils::RigidTransform::Equals)> {
  const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SteamVR_Utils::RigidTransform::*)()>(&GlobalNamespace::SteamVR_Utils::RigidTransform::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::RigidTransform), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::RigidTransform::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
