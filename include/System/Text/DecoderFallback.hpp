// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x11
  // Autogenerated type: System.Text.DecoderFallback
  // [] Offset: FFFFFFFF
  class DecoderFallback : public ::Il2CppObject {
    public:
    // System.Boolean bIsMicrosoftBestFitFallback
    // Size: 0x1
    // Offset: 0x10
    bool bIsMicrosoftBestFitFallback;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DecoderFallback
    DecoderFallback(bool bIsMicrosoftBestFitFallback_ = {}) noexcept : bIsMicrosoftBestFitFallback{bIsMicrosoftBestFitFallback_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return bIsMicrosoftBestFitFallback;
    }
    // Get static field: static private System.Text.DecoderFallback replacementFallback
    static System::Text::DecoderFallback* _get_replacementFallback();
    // Set static field: static private System.Text.DecoderFallback replacementFallback
    static void _set_replacementFallback(System::Text::DecoderFallback* value);
    // Get static field: static private System.Text.DecoderFallback exceptionFallback
    static System::Text::DecoderFallback* _get_exceptionFallback();
    // Set static field: static private System.Text.DecoderFallback exceptionFallback
    static void _set_exceptionFallback(System::Text::DecoderFallback* value);
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x159A238
    static ::Il2CppObject* get_InternalSyncObject();
    // static public System.Text.DecoderFallback get_ReplacementFallback()
    // Offset: 0x15971F8
    static System::Text::DecoderFallback* get_ReplacementFallback();
    // static public System.Text.DecoderFallback get_ExceptionFallback()
    // Offset: 0x159A31C
    static System::Text::DecoderFallback* get_ExceptionFallback();
    // public System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0xFFFFFFFF
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public System.Int32 get_MaxCharCount()
    // Offset: 0xFFFFFFFF
    int get_MaxCharCount();
    // protected System.Void .ctor()
    // Offset: 0x1599D60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderFallback*, creationType>()));
    }
  }; // System.Text.DecoderFallback
  static check_size<sizeof(DecoderFallback), 16 + sizeof(bool)> __System_Text_DecoderFallbackSizeCheck;
  static_assert(sizeof(DecoderFallback) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderFallback*, "System.Text", "DecoderFallback");
#pragma pack(pop)
