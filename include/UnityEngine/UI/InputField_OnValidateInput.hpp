// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.InputField
#include "UnityEngine/UI/InputField.hpp"
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
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.InputField/OnValidateInput
  class InputField::OnValidateInput : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnValidateInput
    OnValidateInput() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19A7C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputField::OnValidateInput* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::InputField::OnValidateInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputField::OnValidateInput*, creationType>(object, method)));
    }
    // public System.Char Invoke(System.String text, System.Int32 charIndex, System.Char addedChar)
    // Offset: 0x19A7C1C
    ::Il2CppChar Invoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar);
    // public System.IAsyncResult BeginInvoke(System.String text, System.Int32 charIndex, System.Char addedChar, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19A8058
    System::IAsyncResult* BeginInvoke(::Il2CppString* text, int charIndex, ::Il2CppChar addedChar, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Char EndInvoke(System.IAsyncResult result)
    // Offset: 0x19A8114
    ::Il2CppChar EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.InputField/OnValidateInput
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::InputField::OnValidateInput*, "UnityEngine.UI", "InputField/OnValidateInput");
// Writing MetadataGetter for method: UnityEngine::UI::InputField::OnValidateInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::InputField::OnValidateInput::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (UnityEngine::UI::InputField::OnValidateInput::*)(::Il2CppString*, int, ::Il2CppChar)>(&UnityEngine::UI::InputField::OnValidateInput::Invoke)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addedChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::OnValidateInput*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, charIndex, addedChar});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::InputField::OnValidateInput::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::UI::InputField::OnValidateInput::*)(::Il2CppString*, int, ::Il2CppChar, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::UI::InputField::OnValidateInput::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addedChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::OnValidateInput*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, charIndex, addedChar, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::InputField::OnValidateInput::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (UnityEngine::UI::InputField::OnValidateInput::*)(System::IAsyncResult*)>(&UnityEngine::UI::InputField::OnValidateInput::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::InputField::OnValidateInput*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
