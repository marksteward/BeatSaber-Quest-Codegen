// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IOAsyncCallback
  class IOAsyncCallback;
  // Forward declaring type: IOAsyncResult
  class IOAsyncResult;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.Socket/System.Net.Sockets.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Socket::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Net.Sockets.Socket/System.Net.Sockets.<>c <>9
    static System::Net::Sockets::Socket::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Sockets.Socket/System.Net.Sockets.<>c <>9
    static void _set_$$9(System::Net::Sockets::Socket::$$c* value);
    // Get static field: static public System.IOAsyncCallback <>9__241_0
    static System::IOAsyncCallback* _get_$$9__241_0();
    // Set static field: static public System.IOAsyncCallback <>9__241_0
    static void _set_$$9__241_0(System::IOAsyncCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x1589E94
    static void _cctor();
    // System.Void <BeginSend>b__241_0(System.IOAsyncResult s)
    // Offset: 0x1589F00
    void $BeginSend$b__241_0(System::IOAsyncResult* s);
    // System.Void <.cctor>b__309_0(System.IAsyncResult ares)
    // Offset: 0x1589F98
    void $_cctor$b__309_0(System::IAsyncResult* ares);
    // System.Void <.cctor>b__309_1(System.IOAsyncResult ares)
    // Offset: 0x158A250
    void $_cctor$b__309_1(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_2(System.IOAsyncResult ares)
    // Offset: 0x158A398
    void $_cctor$b__309_2(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_3(System.IAsyncResult ares)
    // Offset: 0x158A638
    void $_cctor$b__309_3(System::IAsyncResult* ares);
    // System.Void <.cctor>b__309_4(System.IOAsyncResult ares)
    // Offset: 0x158A880
    void $_cctor$b__309_4(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_5(System.IAsyncResult ares)
    // Offset: 0x158AD00
    void $_cctor$b__309_5(System::IAsyncResult* ares);
    // System.Void <.cctor>b__309_6(System.IOAsyncResult ares)
    // Offset: 0x158AF48
    void $_cctor$b__309_6(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_7(System.IAsyncResult ares)
    // Offset: 0x158B054
    void $_cctor$b__309_7(System::IAsyncResult* ares);
    // System.Void <.cctor>b__309_8(System.IOAsyncResult ares)
    // Offset: 0x158B2A4
    void $_cctor$b__309_8(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_9(System.IOAsyncResult ares)
    // Offset: 0x158B47C
    void $_cctor$b__309_9(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_10(System.IAsyncResult ares)
    // Offset: 0x158B594
    void $_cctor$b__309_10(System::IAsyncResult* ares);
    // System.Void <.cctor>b__309_11(System.IOAsyncResult ares)
    // Offset: 0x158B7E8
    void $_cctor$b__309_11(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_12(System.IAsyncResult ares)
    // Offset: 0x158B9C4
    void $_cctor$b__309_12(System::IAsyncResult* ares);
    // System.Void <.cctor>b__309_13(System.IOAsyncResult ares)
    // Offset: 0x158BC14
    void $_cctor$b__309_13(System::IOAsyncResult* ares);
    // System.Void <.cctor>b__309_14(System.IAsyncResult ares)
    // Offset: 0x158BD2C
    void $_cctor$b__309_14(System::IAsyncResult* ares);
    // public System.Void .ctor()
    // Offset: 0x1589EF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Socket::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::Socket::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Socket::$$c*, creationType>()));
    }
  }; // System.Net.Sockets.Socket/System.Net.Sockets.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::Socket::$$c*, "System.Net.Sockets", "Socket/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Sockets::Socket::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$BeginSend$b__241_0
// Il2CppName: <BeginSend>b__241_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$BeginSend$b__241_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<BeginSend>b__241_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_0
// Il2CppName: <.cctor>b__309_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_0)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_1
// Il2CppName: <.cctor>b__309_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_1)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_2
// Il2CppName: <.cctor>b__309_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_2)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_3
// Il2CppName: <.cctor>b__309_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_3)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_4
// Il2CppName: <.cctor>b__309_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_4)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_5
// Il2CppName: <.cctor>b__309_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_5)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_6
// Il2CppName: <.cctor>b__309_6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_6)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_7
// Il2CppName: <.cctor>b__309_7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_7)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_8
// Il2CppName: <.cctor>b__309_8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_8)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_9
// Il2CppName: <.cctor>b__309_9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_9)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_10
// Il2CppName: <.cctor>b__309_10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_10)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_11
// Il2CppName: <.cctor>b__309_11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_11)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_12
// Il2CppName: <.cctor>b__309_12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_12)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_13
// Il2CppName: <.cctor>b__309_13
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IOAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_13)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_13", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::$_cctor$b__309_14
// Il2CppName: <.cctor>b__309_14
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c::*)(System::IAsyncResult*)>(&System::Net::Sockets::Socket::$$c::$_cctor$b__309_14)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c*), "<.cctor>b__309_14", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
