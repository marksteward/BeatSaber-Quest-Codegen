// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Gradient
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4C9A4
  // [RequiredByNativeCodeAttribute] Offset: D4C9A4
  class Gradient : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::Gradient*>*/ {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: Gradient
    Gradient(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Gradient*>
    operator System::IEquatable_1<UnityEngine::Gradient*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Gradient*>*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // static private System.IntPtr Init()
    // Offset: 0x168B6EC
    static System::IntPtr Init();
    // private System.Void Cleanup()
    // Offset: 0x168B720
    void Cleanup();
    // private System.Boolean Internal_Equals(System.IntPtr other)
    // Offset: 0x168B760
    bool Internal_Equals(System::IntPtr other);
    // public UnityEngine.Color Evaluate(System.Single time)
    // Offset: 0x168B888
    UnityEngine::Color Evaluate(float time);
    // private System.Void Evaluate_Injected(System.Single time, out UnityEngine.Color ret)
    // Offset: 0x168B8F4
    void Evaluate_Injected(float time, UnityEngine::Color& ret);
    // public System.Void .ctor()
    // Offset: 0x168B7B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Gradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gradient*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x168B7FC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x168B954
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public System.Boolean Equals(UnityEngine.Gradient other)
    // Offset: 0x168BA30
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Gradient other)
    bool Equals(UnityEngine::Gradient* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x168BB00
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Gradient
  static check_size<sizeof(Gradient), 16 + sizeof(System::IntPtr)> __UnityEngine_GradientSizeCheck;
  static_assert(sizeof(Gradient) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Gradient*, "UnityEngine", "Gradient");
#pragma pack(pop)
