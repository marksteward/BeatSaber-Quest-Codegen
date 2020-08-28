// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Autogenerated type: UnityEngine.TextCore.FaceInfo
  struct FaceInfo : public System::ValueType {
    public:
    // private System.String m_FamilyName
    // Offset: 0x0
    ::Il2CppString* m_FamilyName;
    // private System.String m_StyleName
    // Offset: 0x8
    ::Il2CppString* m_StyleName;
    // private System.Int32 m_PointSize
    // Offset: 0x10
    int m_PointSize;
    // private System.Single m_Scale
    // Offset: 0x14
    float m_Scale;
    // private System.Single m_LineHeight
    // Offset: 0x18
    float m_LineHeight;
    // private System.Single m_AscentLine
    // Offset: 0x1C
    float m_AscentLine;
    // private System.Single m_CapLine
    // Offset: 0x20
    float m_CapLine;
    // private System.Single m_MeanLine
    // Offset: 0x24
    float m_MeanLine;
    // private System.Single m_Baseline
    // Offset: 0x28
    float m_Baseline;
    // private System.Single m_DescentLine
    // Offset: 0x2C
    float m_DescentLine;
    // private System.Single m_SuperscriptOffset
    // Offset: 0x30
    float m_SuperscriptOffset;
    // private System.Single m_SuperscriptSize
    // Offset: 0x34
    float m_SuperscriptSize;
    // private System.Single m_SubscriptOffset
    // Offset: 0x38
    float m_SubscriptOffset;
    // private System.Single m_SubscriptSize
    // Offset: 0x3C
    float m_SubscriptSize;
    // private System.Single m_UnderlineOffset
    // Offset: 0x40
    float m_UnderlineOffset;
    // private System.Single m_UnderlineThickness
    // Offset: 0x44
    float m_UnderlineThickness;
    // private System.Single m_StrikethroughOffset
    // Offset: 0x48
    float m_StrikethroughOffset;
    // private System.Single m_StrikethroughThickness
    // Offset: 0x4C
    float m_StrikethroughThickness;
    // private System.Single m_TabWidth
    // Offset: 0x50
    float m_TabWidth;
    // Creating value type constructor for type: FaceInfo
    constexpr FaceInfo(::Il2CppString* m_FamilyName_ = {}, ::Il2CppString* m_StyleName_ = {}, int m_PointSize_ = {}, float m_Scale_ = {}, float m_LineHeight_ = {}, float m_AscentLine_ = {}, float m_CapLine_ = {}, float m_MeanLine_ = {}, float m_Baseline_ = {}, float m_DescentLine_ = {}, float m_SuperscriptOffset_ = {}, float m_SuperscriptSize_ = {}, float m_SubscriptOffset_ = {}, float m_SubscriptSize_ = {}, float m_UnderlineOffset_ = {}, float m_UnderlineThickness_ = {}, float m_StrikethroughOffset_ = {}, float m_StrikethroughThickness_ = {}, float m_TabWidth_ = {}) : m_FamilyName{m_FamilyName_}, m_StyleName{m_StyleName_}, m_PointSize{m_PointSize_}, m_Scale{m_Scale_}, m_LineHeight{m_LineHeight_}, m_AscentLine{m_AscentLine_}, m_CapLine{m_CapLine_}, m_MeanLine{m_MeanLine_}, m_Baseline{m_Baseline_}, m_DescentLine{m_DescentLine_}, m_SuperscriptOffset{m_SuperscriptOffset_}, m_SuperscriptSize{m_SuperscriptSize_}, m_SubscriptOffset{m_SubscriptOffset_}, m_SubscriptSize{m_SubscriptSize_}, m_UnderlineOffset{m_UnderlineOffset_}, m_UnderlineThickness{m_UnderlineThickness_}, m_StrikethroughOffset{m_StrikethroughOffset_}, m_StrikethroughThickness{m_StrikethroughThickness_}, m_TabWidth{m_TabWidth_} {}
    // public System.Void set_familyName(System.String value)
    // Offset: 0xA5E808
    void set_familyName(::Il2CppString* value);
    // public System.Void set_styleName(System.String value)
    // Offset: 0xA5E810
    void set_styleName(::Il2CppString* value);
    // public System.Int32 get_pointSize()
    // Offset: 0xA5E818
    int get_pointSize();
    // public System.Void set_pointSize(System.Int32 value)
    // Offset: 0xA5E820
    void set_pointSize(int value);
    // public System.Single get_scale()
    // Offset: 0xA5E828
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0xA5E830
    void set_scale(float value);
    // public System.Single get_lineHeight()
    // Offset: 0xA5E838
    float get_lineHeight();
    // public System.Void set_lineHeight(System.Single value)
    // Offset: 0xA5E840
    void set_lineHeight(float value);
    // public System.Single get_ascentLine()
    // Offset: 0xA5E848
    float get_ascentLine();
    // public System.Void set_ascentLine(System.Single value)
    // Offset: 0xA5E850
    void set_ascentLine(float value);
    // public System.Single get_capLine()
    // Offset: 0xA5E858
    float get_capLine();
    // public System.Void set_capLine(System.Single value)
    // Offset: 0xA5E860
    void set_capLine(float value);
    // public System.Void set_meanLine(System.Single value)
    // Offset: 0xA5E868
    void set_meanLine(float value);
    // public System.Single get_baseline()
    // Offset: 0xA5E870
    float get_baseline();
    // public System.Void set_baseline(System.Single value)
    // Offset: 0xA5E878
    void set_baseline(float value);
    // public System.Single get_descentLine()
    // Offset: 0xA5E880
    float get_descentLine();
    // public System.Void set_descentLine(System.Single value)
    // Offset: 0xA5E888
    void set_descentLine(float value);
    // public System.Single get_superscriptOffset()
    // Offset: 0xA5E890
    float get_superscriptOffset();
    // public System.Void set_superscriptOffset(System.Single value)
    // Offset: 0xA5E898
    void set_superscriptOffset(float value);
    // public System.Single get_superscriptSize()
    // Offset: 0xA5E8A0
    float get_superscriptSize();
    // public System.Void set_superscriptSize(System.Single value)
    // Offset: 0xA5E8A8
    void set_superscriptSize(float value);
    // public System.Single get_subscriptOffset()
    // Offset: 0xA5E8B0
    float get_subscriptOffset();
    // public System.Void set_subscriptOffset(System.Single value)
    // Offset: 0xA5E8B8
    void set_subscriptOffset(float value);
    // public System.Single get_subscriptSize()
    // Offset: 0xA5E8C0
    float get_subscriptSize();
    // public System.Void set_subscriptSize(System.Single value)
    // Offset: 0xA5E8C8
    void set_subscriptSize(float value);
    // public System.Single get_underlineOffset()
    // Offset: 0xA5E8D0
    float get_underlineOffset();
    // public System.Void set_underlineOffset(System.Single value)
    // Offset: 0xA5E8D8
    void set_underlineOffset(float value);
    // public System.Single get_underlineThickness()
    // Offset: 0xA5E8E0
    float get_underlineThickness();
    // public System.Void set_underlineThickness(System.Single value)
    // Offset: 0xA5E8E8
    void set_underlineThickness(float value);
    // public System.Single get_strikethroughOffset()
    // Offset: 0xA5E8F0
    float get_strikethroughOffset();
    // public System.Void set_strikethroughOffset(System.Single value)
    // Offset: 0xA5E8F8
    void set_strikethroughOffset(float value);
    // public System.Void set_strikethroughThickness(System.Single value)
    // Offset: 0xA5E900
    void set_strikethroughThickness(float value);
    // public System.Single get_tabWidth()
    // Offset: 0xA5E908
    float get_tabWidth();
    // public System.Void set_tabWidth(System.Single value)
    // Offset: 0xA5E910
    void set_tabWidth(float value);
  }; // UnityEngine.TextCore.FaceInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::FaceInfo, "UnityEngine.TextCore", "FaceInfo");
#pragma pack(pop)
