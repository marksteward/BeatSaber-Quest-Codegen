// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IfNotBoundBinder
  class IfNotBoundBinder : public ::Il2CppObject {
    public:
    // private Zenject.BindInfo <BindInfo>k__BackingField
    // Offset: 0x10
    Zenject::BindInfo* BindInfo;
    // Creating conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const {
      return BindInfo;
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xF3BD90
    static IfNotBoundBinder* New_ctor(Zenject::BindInfo* bindInfo);
    // public Zenject.BindInfo get_BindInfo()
    // Offset: 0xF3BDC4
    Zenject::BindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.BindInfo value)
    // Offset: 0xF3BDCC
    void set_BindInfo(Zenject::BindInfo* value);
    // public System.Void IfNotBound()
    // Offset: 0xF3BDD4
    void IfNotBound();
  }; // Zenject.IfNotBoundBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IfNotBoundBinder*, "Zenject", "IfNotBoundBinder");
#pragma pack(pop)
