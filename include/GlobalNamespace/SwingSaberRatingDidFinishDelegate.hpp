// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  // Autogenerated type: SwingSaberRatingDidFinishDelegate
  // [] Offset: FFFFFFFF
  class SwingSaberRatingDidFinishDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SwingSaberRatingDidFinishDelegate
    SwingSaberRatingDidFinishDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19A8288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SwingSaberRatingDidFinishDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SwingSaberRatingDidFinishDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SwingSaberRatingDidFinishDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(ISaberSwingRatingCounter afterCutRating)
    // Offset: 0x19A829C
    void Invoke(GlobalNamespace::ISaberSwingRatingCounter* afterCutRating);
    // public System.IAsyncResult BeginInvoke(ISaberSwingRatingCounter afterCutRating, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19A8654
    System::IAsyncResult* BeginInvoke(GlobalNamespace::ISaberSwingRatingCounter* afterCutRating, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x19A8678
    void EndInvoke(System::IAsyncResult* result);
  }; // SwingSaberRatingDidFinishDelegate
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SwingSaberRatingDidFinishDelegate*, "", "SwingSaberRatingDidFinishDelegate");
#pragma pack(pop)
