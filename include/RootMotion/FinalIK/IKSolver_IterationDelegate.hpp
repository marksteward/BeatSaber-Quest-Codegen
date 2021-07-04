// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolver/IterationDelegate
  class IKSolver::IterationDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: IterationDelegate
    IterationDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C6DE54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::IterationDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::IterationDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::IterationDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 i)
    // Offset: 0x1C6DE64
    void Invoke(int i);
    // public System.IAsyncResult BeginInvoke(System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C6E0C4
    System::IAsyncResult* BeginInvoke(int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C6E150
    void EndInvoke(System::IAsyncResult* result);
  }; // RootMotion.FinalIK.IKSolver/IterationDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::IterationDelegate*, "RootMotion.FinalIK", "IKSolver/IterationDelegate");
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::IterationDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::IterationDelegate::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::IterationDelegate::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::IterationDelegate::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
