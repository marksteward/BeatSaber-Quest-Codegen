// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.AnimatedSwitchView
#include "HMUI/AnimatedSwitchView.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
  // Autogenerated type: HMUI.AnimatedSwitchView/GetColorDelegate
  class AnimatedSwitchView::GetColorDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetColorDelegate
    GetColorDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x130AE68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedSwitchView::GetColorDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::AnimatedSwitchView::GetColorDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedSwitchView::GetColorDelegate*, creationType>(object, method)));
    }
    // public UnityEngine.Color Invoke(HMUI.AnimatedSwitchView/ColorBlock colorBlock)
    // Offset: 0x130B044
    UnityEngine::Color Invoke(HMUI::AnimatedSwitchView::ColorBlock* colorBlock);
    // public System.IAsyncResult BeginInvoke(HMUI.AnimatedSwitchView/ColorBlock colorBlock, System.AsyncCallback callback, System.Object object)
    // Offset: 0x130B6C8
    System::IAsyncResult* BeginInvoke(HMUI::AnimatedSwitchView::ColorBlock* colorBlock, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.Color EndInvoke(System.IAsyncResult result)
    // Offset: 0x130B6EC
    UnityEngine::Color EndInvoke(System::IAsyncResult* result);
  }; // HMUI.AnimatedSwitchView/GetColorDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView::GetColorDelegate*, "HMUI", "AnimatedSwitchView/GetColorDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::GetColorDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::GetColorDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::AnimatedSwitchView::GetColorDelegate::*)(HMUI::AnimatedSwitchView::ColorBlock*)>(&HMUI::AnimatedSwitchView::GetColorDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* colorBlock = &::il2cpp_utils::GetClassFromName("HMUI", "AnimatedSwitchView/ColorBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView::GetColorDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorBlock});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::GetColorDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (HMUI::AnimatedSwitchView::GetColorDelegate::*)(HMUI::AnimatedSwitchView::ColorBlock*, System::AsyncCallback*, ::Il2CppObject*)>(&HMUI::AnimatedSwitchView::GetColorDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* colorBlock = &::il2cpp_utils::GetClassFromName("HMUI", "AnimatedSwitchView/ColorBlock")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView::GetColorDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorBlock, callback, object});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::GetColorDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::AnimatedSwitchView::GetColorDelegate::*)(System::IAsyncResult*)>(&HMUI::AnimatedSwitchView::GetColorDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView::GetColorDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
