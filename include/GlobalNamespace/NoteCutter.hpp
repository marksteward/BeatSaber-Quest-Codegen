// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutter
  class NoteCutter : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::NoteCutter::CuttableBySaberSortParams
    class CuttableBySaberSortParams;
    // Nested type: GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer
    class CuttableBySaberSortParamsComparer;
    // private readonly UnityEngine.Collider[] _colliders
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::Collider*>* colliders;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Collider*>*) == 0x8);
    // private readonly NoteCutter/CuttableBySaberSortParams[] _cuttableBySaberSortParams
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>* cuttableBySaberSortParams;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>*) == 0x8);
    // private readonly NoteCutter/CuttableBySaberSortParamsComparer _comparer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer* comparer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer*) == 0x8);
    // Creating value type constructor for type: NoteCutter
    NoteCutter(::Array<UnityEngine::Collider*>* colliders_ = {}, ::Array<GlobalNamespace::NoteCutter::CuttableBySaberSortParams*>* cuttableBySaberSortParams_ = {}, GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer* comparer_ = {}) noexcept : colliders{colliders_}, cuttableBySaberSortParams{cuttableBySaberSortParams_}, comparer{comparer_} {}
    // static field const value: static private System.Int32 kMaxNumberOfColliders
    static constexpr const int kMaxNumberOfColliders = 16;
    // Get static field: static private System.Int32 kMaxNumberOfColliders
    static int _get_kMaxNumberOfColliders();
    // Set static field: static private System.Int32 kMaxNumberOfColliders
    static void _set_kMaxNumberOfColliders(int value);
    // public System.Void Cut(Saber saber)
    // Offset: 0x11D6150
    void Cut(GlobalNamespace::Saber* saber);
    // public System.Void .ctor()
    // Offset: 0x11D6018
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutter*, creationType>()));
    }
  }; // NoteCutter
  #pragma pack(pop)
  static check_size<sizeof(NoteCutter), 32 + sizeof(GlobalNamespace::NoteCutter::CuttableBySaberSortParamsComparer*)> __GlobalNamespace_NoteCutterSizeCheck;
  static_assert(sizeof(NoteCutter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutter*, "", "NoteCutter");
// Writing MetadataGetter for method: GlobalNamespace::NoteCutter::Cut
// Il2CppName: Cut
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::NoteCutter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
