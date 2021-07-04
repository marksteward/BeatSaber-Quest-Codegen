// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
  class WNafPreCompInfo : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*/ {
    public:
    // System.Int32 m_promotionCountdown
    // Size: 0x4
    // Offset: 0x10
    int m_promotionCountdown;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_confWidth
    // Size: 0x4
    // Offset: 0x14
    int m_confWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected Org.BouncyCastle.Math.EC.ECPoint[] m_preComp
    // Size: 0x8
    // Offset: 0x18
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preComp;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECPoint[] m_preCompNeg
    // Size: 0x8
    // Offset: 0x20
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preCompNeg;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECPoint m_twice
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::EC::ECPoint* m_twice;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // protected System.Int32 m_width
    // Size: 0x4
    // Offset: 0x30
    int m_width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WNafPreCompInfo
    WNafPreCompInfo(int m_promotionCountdown_ = {}, int m_confWidth_ = {}, ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preComp_ = {}, ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preCompNeg_ = {}, Org::BouncyCastle::Math::EC::ECPoint* m_twice_ = {}, int m_width_ = {}) noexcept : m_promotionCountdown{m_promotionCountdown_}, m_confWidth{m_confWidth_}, m_preComp{m_preComp_}, m_preCompNeg{m_preCompNeg_}, m_twice{m_twice_}, m_width{m_width_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
    operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this);
    }
    // System.Int32 DecrementPromotionCountdown()
    // Offset: 0x1D26480
    int DecrementPromotionCountdown();
    // System.Int32 get_PromotionCountdown()
    // Offset: 0x1D264C4
    int get_PromotionCountdown();
    // System.Void set_PromotionCountdown(System.Int32 value)
    // Offset: 0x1D264E8
    void set_PromotionCountdown(int value);
    // public System.Boolean get_IsPromoted()
    // Offset: 0x1D26510
    bool get_IsPromoted();
    // public System.Int32 get_ConfWidth()
    // Offset: 0x1D26538
    int get_ConfWidth();
    // public System.Void set_ConfWidth(System.Int32 value)
    // Offset: 0x1D26540
    void set_ConfWidth(int value);
    // public Org.BouncyCastle.Math.EC.ECPoint[] get_PreComp()
    // Offset: 0x1D26548
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* get_PreComp();
    // public System.Void set_PreComp(Org.BouncyCastle.Math.EC.ECPoint[] value)
    // Offset: 0x1D26550
    void set_PreComp(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* value);
    // public Org.BouncyCastle.Math.EC.ECPoint[] get_PreCompNeg()
    // Offset: 0x1D26558
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* get_PreCompNeg();
    // public System.Void set_PreCompNeg(Org.BouncyCastle.Math.EC.ECPoint[] value)
    // Offset: 0x1D26560
    void set_PreCompNeg(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* value);
    // public Org.BouncyCastle.Math.EC.ECPoint get_Twice()
    // Offset: 0x1D26568
    Org::BouncyCastle::Math::EC::ECPoint* get_Twice();
    // public System.Void set_Twice(Org.BouncyCastle.Math.EC.ECPoint value)
    // Offset: 0x1D26570
    void set_Twice(Org::BouncyCastle::Math::EC::ECPoint* value);
    // public System.Int32 get_Width()
    // Offset: 0x1D26578
    int get_Width();
    // public System.Void set_Width(System.Int32 value)
    // Offset: 0x1D26580
    void set_Width(int value);
    // public System.Void .ctor()
    // Offset: 0x1D26588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WNafPreCompInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WNafPreCompInfo*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
  #pragma pack(pop)
  static check_size<sizeof(WNafPreCompInfo), 48 + sizeof(int)> __Org_BouncyCastle_Math_EC_Multiplier_WNafPreCompInfoSizeCheck;
  static_assert(sizeof(WNafPreCompInfo) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo");
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::DecrementPromotionCountdown
// Il2CppName: DecrementPromotionCountdown
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PromotionCountdown
// Il2CppName: get_PromotionCountdown
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PromotionCountdown
// Il2CppName: set_PromotionCountdown
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_IsPromoted
// Il2CppName: get_IsPromoted
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_ConfWidth
// Il2CppName: get_ConfWidth
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_ConfWidth
// Il2CppName: set_ConfWidth
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PreComp
// Il2CppName: get_PreComp
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PreComp
// Il2CppName: set_PreComp
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_PreCompNeg
// Il2CppName: get_PreCompNeg
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_PreCompNeg
// Il2CppName: set_PreCompNeg
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_Twice
// Il2CppName: get_Twice
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_Twice
// Il2CppName: set_Twice
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::get_Width
// Il2CppName: get_Width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::set_Width
// Il2CppName: set_Width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
