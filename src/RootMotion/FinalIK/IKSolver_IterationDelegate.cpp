// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver/IterationDelegate
#include "RootMotion/FinalIK/IKSolver_IterationDelegate.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolver/IterationDelegate..ctor
RootMotion::FinalIK::IKSolver::IterationDelegate* RootMotion::FinalIK::IKSolver::IterationDelegate::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IKSolver::IterationDelegate*>(object, method));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver/IterationDelegate.Invoke
void RootMotion::FinalIK::IKSolver::IterationDelegate::Invoke(int i) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", i));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver/IterationDelegate.BeginInvoke
System::IAsyncResult* RootMotion::FinalIK::IKSolver::IterationDelegate::BeginInvoke(int i, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", i, callback, object));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver/IterationDelegate.EndInvoke
void RootMotion::FinalIK::IKSolver::IterationDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
