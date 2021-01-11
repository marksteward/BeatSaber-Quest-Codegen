// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/DidActivateDelegate
  // [] Offset: FFFFFFFF
  class ViewController::DidActivateDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: DidActivateDelegate
    DidActivateDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1981FB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController::DidActivateDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::DidActivateDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController::DidActivateDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1980D10
    void Invoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.IAsyncResult BeginInvoke(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1981FC8
    System::IAsyncResult* BeginInvoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1982090
    void EndInvoke(System::IAsyncResult* result);
  }; // HMUI.ViewController/DidActivateDelegate
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::DidActivateDelegate*, "HMUI", "ViewController/DidActivateDelegate");
