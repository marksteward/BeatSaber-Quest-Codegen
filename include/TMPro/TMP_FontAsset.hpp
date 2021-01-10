// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Asset
#include "TMPro/TMP_Asset.hpp"
// Including type: TMPro.AtlasPopulationMode
#include "TMPro/AtlasPopulationMode.hpp"
// Including type: UnityEngine.TextCore.FaceInfo
#include "UnityEngine/TextCore/FaceInfo.hpp"
// Including type: UnityEngine.TextCore.GlyphRect
#include "UnityEngine/TextCore/GlyphRect.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphRenderMode
#include "UnityEngine/TextCore/LowLevel/GlyphRenderMode.hpp"
// Including type: TMPro.FontAssetCreationSettings
#include "TMPro/FontAssetCreationSettings.hpp"
// Including type: TMPro.TMP_FontWeightPair
#include "TMPro/TMP_FontWeightPair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Character
  class TMP_Character;
  // Forward declaring type: FaceInfo_Legacy
  class FaceInfo_Legacy;
  // Forward declaring type: TMP_Glyph
  class TMP_Glyph;
  // Forward declaring type: KerningTable
  class KerningTable;
  // Forward declaring type: TMP_FontFeatureTable
  class TMP_FontFeatureTable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x1E0
  // Autogenerated type: TMPro.TMP_FontAsset
  // [] Offset: FFFFFFFF
  class TMP_FontAsset : public TMPro::TMP_Asset {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: TMPro::TMP_FontAsset::$$c
    class $$c;
    // private System.String m_Version
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_Version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String m_SourceFontFileGUID
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_SourceFontFileGUID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Font m_SourceFontFile
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Font* m_SourceFontFile;
    // Field size check
    static_assert(sizeof(UnityEngine::Font*) == 0x8);
    // private TMPro.AtlasPopulationMode m_AtlasPopulationMode
    // Size: 0x4
    // Offset: 0x48
    TMPro::AtlasPopulationMode m_AtlasPopulationMode;
    // Field size check
    static_assert(sizeof(TMPro::AtlasPopulationMode) == 0x4);
    // Padding between fields: m_AtlasPopulationMode and: m_FaceInfo
    char __padding3[0x4] = {};
    // private UnityEngine.TextCore.FaceInfo m_FaceInfo
    // Size: 0x54
    // Offset: 0x50
    UnityEngine::TextCore::FaceInfo m_FaceInfo;
    // Field size check
    static_assert(sizeof(UnityEngine::TextCore::FaceInfo) == 0x54);
    // Padding between fields: m_FaceInfo and: m_GlyphTable
    char __padding4[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphTable
    // Size: 0x8
    // Offset: 0xA8
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphTable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> m_GlyphLookupDictionary
    // Size: 0x8
    // Offset: 0xB0
    System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TMP_Character> m_CharacterTable
    // Size: 0x8
    // Offset: 0xB8
    System::Collections::Generic::List_1<TMPro::TMP_Character*>* m_CharacterTable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Character*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> m_CharacterLookupDictionary
    // Size: 0x8
    // Offset: 0xC0
    System::Collections::Generic::Dictionary_2<uint, TMPro::TMP_Character*>* m_CharacterLookupDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<uint, TMPro::TMP_Character*>*) == 0x8);
    // private UnityEngine.Texture2D m_AtlasTexture
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::Texture2D* m_AtlasTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Texture2D[] m_AtlasTextures
    // Size: 0x8
    // Offset: 0xD0
    ::Array<UnityEngine::Texture2D*>* m_AtlasTextures;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Texture2D*>*) == 0x8);
    // System.Int32 m_AtlasTextureIndex
    // Size: 0x4
    // Offset: 0xD8
    int m_AtlasTextureIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_AtlasTextureIndex and: m_UsedGlyphRects
    char __padding11[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> m_UsedGlyphRects
    // Size: 0x8
    // Offset: 0xE0
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> m_FreeGlyphRects
    // Size: 0x8
    // Offset: 0xE8
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>*) == 0x8);
    // private TMPro.FaceInfo_Legacy m_fontInfo
    // Size: 0x8
    // Offset: 0xF0
    TMPro::FaceInfo_Legacy* m_fontInfo;
    // Field size check
    static_assert(sizeof(TMPro::FaceInfo_Legacy*) == 0x8);
    // public UnityEngine.Texture2D atlas
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::Texture2D* atlas;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private System.Int32 m_AtlasWidth
    // Size: 0x4
    // Offset: 0x100
    int m_AtlasWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_AtlasHeight
    // Size: 0x4
    // Offset: 0x104
    int m_AtlasHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_AtlasPadding
    // Size: 0x4
    // Offset: 0x108
    int m_AtlasPadding;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.TextCore.LowLevel.GlyphRenderMode m_AtlasRenderMode
    // Size: 0x4
    // Offset: 0x10C
    UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode;
    // Field size check
    static_assert(sizeof(UnityEngine::TextCore::LowLevel::GlyphRenderMode) == 0x4);
    // System.Collections.Generic.List`1<TMPro.TMP_Glyph> m_glyphInfoList
    // Size: 0x8
    // Offset: 0x110
    System::Collections::Generic::List_1<TMPro::TMP_Glyph*>* m_glyphInfoList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Glyph*>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD8B6C0
    // TMPro.KerningTable m_KerningTable
    // Size: 0x8
    // Offset: 0x118
    TMPro::KerningTable* m_KerningTable;
    // Field size check
    static_assert(sizeof(TMPro::KerningTable*) == 0x8);
    // private TMPro.TMP_FontFeatureTable m_FontFeatureTable
    // Size: 0x8
    // Offset: 0x120
    TMPro::TMP_FontFeatureTable* m_FontFeatureTable;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontFeatureTable*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TMP_FontAsset> fallbackFontAssets
    // Size: 0x8
    // Offset: 0x128
    System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fallbackFontAssets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>*) == 0x8);
    // public System.Collections.Generic.List`1<TMPro.TMP_FontAsset> m_FallbackFontAssetTable
    // Size: 0x8
    // Offset: 0x130
    System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* m_FallbackFontAssetTable;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>*) == 0x8);
    // TMPro.FontAssetCreationSettings m_CreationSettings
    // Size: 0x55
    // Offset: 0x138
    TMPro::FontAssetCreationSettings m_CreationSettings;
    // Field size check
    static_assert(sizeof(TMPro::FontAssetCreationSettings) == 0x55);
    // Padding between fields: m_CreationSettings and: m_FontWeightTable
    char __padding25[0x3] = {};
    // private TMPro.TMP_FontWeightPair[] m_FontWeightTable
    // Size: 0x8
    // Offset: 0x190
    ::Array<TMPro::TMP_FontWeightPair>* m_FontWeightTable;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_FontWeightPair>*) == 0x8);
    // private TMPro.TMP_FontWeightPair[] fontWeights
    // Size: 0x8
    // Offset: 0x198
    ::Array<TMPro::TMP_FontWeightPair>* fontWeights;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_FontWeightPair>*) == 0x8);
    // public System.Single normalStyle
    // Size: 0x4
    // Offset: 0x1A0
    float normalStyle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single normalSpacingOffset
    // Size: 0x4
    // Offset: 0x1A4
    float normalSpacingOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single boldStyle
    // Size: 0x4
    // Offset: 0x1A8
    float boldStyle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single boldSpacing
    // Size: 0x4
    // Offset: 0x1AC
    float boldSpacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Byte italicStyle
    // Size: 0x1
    // Offset: 0x1B0
    uint8_t italicStyle;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte tabSize
    // Size: 0x1
    // Offset: 0x1B1
    uint8_t tabSize;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_oldTabSize
    // Size: 0x1
    // Offset: 0x1B2
    uint8_t m_oldTabSize;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Boolean m_IsFontAssetLookupTablesDirty
    // Size: 0x1
    // Offset: 0x1B3
    bool m_IsFontAssetLookupTablesDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsFontAssetLookupTablesDirty and: m_GlyphsToPack
    char __padding35[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphsToPack
    // Size: 0x8
    // Offset: 0x1B8
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsToPack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphsPacked
    // Size: 0x8
    // Offset: 0x1C0
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsPacked;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> m_GlyphsToRender
    // Size: 0x8
    // Offset: 0x1C8
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsToRender;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.UInt32> m_GlyphIndexList
    // Size: 0x8
    // Offset: 0x1D0
    System::Collections::Generic::List_1<uint>* m_GlyphIndexList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<uint>*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TMP_Character> m_CharactersToAdd
    // Size: 0x8
    // Offset: 0x1D8
    System::Collections::Generic::List_1<TMPro::TMP_Character*>* m_CharactersToAdd;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Character*>*) == 0x8);
    // Creating value type constructor for type: TMP_FontAsset
    TMP_FontAsset(::Il2CppString* m_Version_ = {}, ::Il2CppString* m_SourceFontFileGUID_ = {}, UnityEngine::Font* m_SourceFontFile_ = {}, TMPro::AtlasPopulationMode m_AtlasPopulationMode_ = {}, UnityEngine::TextCore::FaceInfo m_FaceInfo_ = {}, System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphTable_ = {}, System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary_ = {}, System::Collections::Generic::List_1<TMPro::TMP_Character*>* m_CharacterTable_ = {}, System::Collections::Generic::Dictionary_2<uint, TMPro::TMP_Character*>* m_CharacterLookupDictionary_ = {}, UnityEngine::Texture2D* m_AtlasTexture_ = {}, ::Array<UnityEngine::Texture2D*>* m_AtlasTextures_ = {}, int m_AtlasTextureIndex_ = {}, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects_ = {}, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects_ = {}, TMPro::FaceInfo_Legacy* m_fontInfo_ = {}, UnityEngine::Texture2D* atlas_ = {}, int m_AtlasWidth_ = {}, int m_AtlasHeight_ = {}, int m_AtlasPadding_ = {}, UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode_ = {}, System::Collections::Generic::List_1<TMPro::TMP_Glyph*>* m_glyphInfoList_ = {}, TMPro::KerningTable* m_KerningTable_ = {}, TMPro::TMP_FontFeatureTable* m_FontFeatureTable_ = {}, System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fallbackFontAssets_ = {}, System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* m_FallbackFontAssetTable_ = {}, TMPro::FontAssetCreationSettings m_CreationSettings_ = {}, ::Array<TMPro::TMP_FontWeightPair>* m_FontWeightTable_ = {}, ::Array<TMPro::TMP_FontWeightPair>* fontWeights_ = {}, float normalStyle_ = {}, float normalSpacingOffset_ = {}, float boldStyle_ = {}, float boldSpacing_ = {}, uint8_t italicStyle_ = {}, uint8_t tabSize_ = {}, uint8_t m_oldTabSize_ = {}, bool m_IsFontAssetLookupTablesDirty_ = {}, System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsToPack_ = {}, System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsPacked_ = {}, System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* m_GlyphsToRender_ = {}, System::Collections::Generic::List_1<uint>* m_GlyphIndexList_ = {}, System::Collections::Generic::List_1<TMPro::TMP_Character*>* m_CharactersToAdd_ = {}) noexcept : m_Version{m_Version_}, m_SourceFontFileGUID{m_SourceFontFileGUID_}, m_SourceFontFile{m_SourceFontFile_}, m_AtlasPopulationMode{m_AtlasPopulationMode_}, m_FaceInfo{m_FaceInfo_}, m_GlyphTable{m_GlyphTable_}, m_GlyphLookupDictionary{m_GlyphLookupDictionary_}, m_CharacterTable{m_CharacterTable_}, m_CharacterLookupDictionary{m_CharacterLookupDictionary_}, m_AtlasTexture{m_AtlasTexture_}, m_AtlasTextures{m_AtlasTextures_}, m_AtlasTextureIndex{m_AtlasTextureIndex_}, m_UsedGlyphRects{m_UsedGlyphRects_}, m_FreeGlyphRects{m_FreeGlyphRects_}, m_fontInfo{m_fontInfo_}, atlas{atlas_}, m_AtlasWidth{m_AtlasWidth_}, m_AtlasHeight{m_AtlasHeight_}, m_AtlasPadding{m_AtlasPadding_}, m_AtlasRenderMode{m_AtlasRenderMode_}, m_glyphInfoList{m_glyphInfoList_}, m_KerningTable{m_KerningTable_}, m_FontFeatureTable{m_FontFeatureTable_}, fallbackFontAssets{fallbackFontAssets_}, m_FallbackFontAssetTable{m_FallbackFontAssetTable_}, m_CreationSettings{m_CreationSettings_}, m_FontWeightTable{m_FontWeightTable_}, fontWeights{fontWeights_}, normalStyle{normalStyle_}, normalSpacingOffset{normalSpacingOffset_}, boldStyle{boldStyle_}, boldSpacing{boldSpacing_}, italicStyle{italicStyle_}, tabSize{tabSize_}, m_oldTabSize{m_oldTabSize_}, m_IsFontAssetLookupTablesDirty{m_IsFontAssetLookupTablesDirty_}, m_GlyphsToPack{m_GlyphsToPack_}, m_GlyphsPacked{m_GlyphsPacked_}, m_GlyphsToRender{m_GlyphsToRender_}, m_GlyphIndexList{m_GlyphIndexList_}, m_CharactersToAdd{m_CharactersToAdd_} {}
    // Get static field: static System.UInt32[] s_GlyphIndexArray
    static ::Array<uint>* _get_s_GlyphIndexArray();
    // Set static field: static System.UInt32[] s_GlyphIndexArray
    static void _set_s_GlyphIndexArray(::Array<uint>* value);
    // Get static field: static System.Collections.Generic.List`1<System.UInt32> s_MissingCharacterList
    static System::Collections::Generic::List_1<uint>* _get_s_MissingCharacterList();
    // Set static field: static System.Collections.Generic.List`1<System.UInt32> s_MissingCharacterList
    static void _set_s_MissingCharacterList(System::Collections::Generic::List_1<uint>* value);
    // public System.String get_version()
    // Offset: 0xF57A18
    ::Il2CppString* get_version();
    // System.Void set_version(System.String value)
    // Offset: 0xF57A20
    void set_version(::Il2CppString* value);
    // public UnityEngine.Font get_sourceFontFile()
    // Offset: 0xF57A28
    UnityEngine::Font* get_sourceFontFile();
    // System.Void set_sourceFontFile(UnityEngine.Font value)
    // Offset: 0xF57A30
    void set_sourceFontFile(UnityEngine::Font* value);
    // public TMPro.AtlasPopulationMode get_atlasPopulationMode()
    // Offset: 0xF57A38
    TMPro::AtlasPopulationMode get_atlasPopulationMode();
    // public System.Void set_atlasPopulationMode(TMPro.AtlasPopulationMode value)
    // Offset: 0xF57A40
    void set_atlasPopulationMode(TMPro::AtlasPopulationMode value);
    // public UnityEngine.TextCore.FaceInfo get_faceInfo()
    // Offset: 0xF57A48
    UnityEngine::TextCore::FaceInfo get_faceInfo();
    // System.Void set_faceInfo(UnityEngine.TextCore.FaceInfo value)
    // Offset: 0xF57A58
    void set_faceInfo(UnityEngine::TextCore::FaceInfo value);
    // public System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> get_glyphTable()
    // Offset: 0xF57A88
    System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* get_glyphTable();
    // System.Void set_glyphTable(System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> value)
    // Offset: 0xF57A90
    void set_glyphTable(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* value);
    // public System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> get_glyphLookupTable()
    // Offset: 0xF57A98
    System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>* get_glyphLookupTable();
    // public System.Collections.Generic.List`1<TMPro.TMP_Character> get_characterTable()
    // Offset: 0xF5825C
    System::Collections::Generic::List_1<TMPro::TMP_Character*>* get_characterTable();
    // System.Void set_characterTable(System.Collections.Generic.List`1<TMPro.TMP_Character> value)
    // Offset: 0xF58264
    void set_characterTable(System::Collections::Generic::List_1<TMPro::TMP_Character*>* value);
    // public System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> get_characterLookupTable()
    // Offset: 0xF5826C
    System::Collections::Generic::Dictionary_2<uint, TMPro::TMP_Character*>* get_characterLookupTable();
    // public UnityEngine.Texture2D get_atlasTexture()
    // Offset: 0xF5829C
    UnityEngine::Texture2D* get_atlasTexture();
    // public UnityEngine.Texture2D[] get_atlasTextures()
    // Offset: 0xF58354
    ::Array<UnityEngine::Texture2D*>* get_atlasTextures();
    // public System.Void set_atlasTextures(UnityEngine.Texture2D[] value)
    // Offset: 0xF5835C
    void set_atlasTextures(::Array<UnityEngine::Texture2D*>* value);
    // System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> get_usedGlyphRects()
    // Offset: 0xF58364
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();
    // System.Void set_usedGlyphRects(System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> value)
    // Offset: 0xF5836C
    void set_usedGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* value);
    // System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> get_freeGlyphRects()
    // Offset: 0xF58374
    System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();
    // System.Void set_freeGlyphRects(System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> value)
    // Offset: 0xF5837C
    void set_freeGlyphRects(System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* value);
    // public TMPro.FaceInfo_Legacy get_fontInfo()
    // Offset: 0xF58384
    TMPro::FaceInfo_Legacy* get_fontInfo();
    // public System.Int32 get_atlasWidth()
    // Offset: 0xF5838C
    int get_atlasWidth();
    // System.Void set_atlasWidth(System.Int32 value)
    // Offset: 0xF58394
    void set_atlasWidth(int value);
    // public System.Int32 get_atlasHeight()
    // Offset: 0xF5839C
    int get_atlasHeight();
    // System.Void set_atlasHeight(System.Int32 value)
    // Offset: 0xF583A4
    void set_atlasHeight(int value);
    // public System.Int32 get_atlasPadding()
    // Offset: 0xF583AC
    int get_atlasPadding();
    // System.Void set_atlasPadding(System.Int32 value)
    // Offset: 0xF583B4
    void set_atlasPadding(int value);
    // public UnityEngine.TextCore.LowLevel.GlyphRenderMode get_atlasRenderMode()
    // Offset: 0xF583BC
    UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();
    // System.Void set_atlasRenderMode(UnityEngine.TextCore.LowLevel.GlyphRenderMode value)
    // Offset: 0xF583C4
    void set_atlasRenderMode(UnityEngine::TextCore::LowLevel::GlyphRenderMode value);
    // public TMPro.TMP_FontFeatureTable get_fontFeatureTable()
    // Offset: 0xF583CC
    TMPro::TMP_FontFeatureTable* get_fontFeatureTable();
    // System.Void set_fontFeatureTable(TMPro.TMP_FontFeatureTable value)
    // Offset: 0xF583D4
    void set_fontFeatureTable(TMPro::TMP_FontFeatureTable* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_FontAsset> get_fallbackFontAssetTable()
    // Offset: 0xF583E4
    System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* get_fallbackFontAssetTable();
    // public System.Void set_fallbackFontAssetTable(System.Collections.Generic.List`1<TMPro.TMP_FontAsset> value)
    // Offset: 0xF583EC
    void set_fallbackFontAssetTable(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* value);
    // public TMPro.FontAssetCreationSettings get_creationSettings()
    // Offset: 0xF583FC
    TMPro::FontAssetCreationSettings get_creationSettings();
    // public System.Void set_creationSettings(TMPro.FontAssetCreationSettings value)
    // Offset: 0xF5840C
    void set_creationSettings(TMPro::FontAssetCreationSettings value);
    // public TMPro.TMP_FontWeightPair[] get_fontWeightTable()
    // Offset: 0xF5843C
    ::Array<TMPro::TMP_FontWeightPair>* get_fontWeightTable();
    // System.Void set_fontWeightTable(TMPro.TMP_FontWeightPair[] value)
    // Offset: 0xF58444
    void set_fontWeightTable(::Array<TMPro::TMP_FontWeightPair>* value);
    // static public TMPro.TMP_FontAsset CreateFontAsset(UnityEngine.Font font)
    // Offset: 0xF58454
    static TMPro::TMP_FontAsset* CreateFontAsset(UnityEngine::Font* font);
    // static public TMPro.TMP_FontAsset CreateFontAsset(UnityEngine.Font font, System.Int32 samplingPointSize, System.Int32 atlasPadding, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, System.Int32 atlasWidth, System.Int32 atlasHeight, TMPro.AtlasPopulationMode atlasPopulationMode)
    // Offset: 0xF584D0
    static TMPro::TMP_FontAsset* CreateFontAsset(UnityEngine::Font* font, int samplingPointSize, int atlasPadding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, TMPro::AtlasPopulationMode atlasPopulationMode);
    // private System.Void Awake()
    // Offset: 0xF5890C
    void Awake();
    // System.Void InitializeDictionaryLookupTables()
    // Offset: 0xF59388
    void InitializeDictionaryLookupTables();
    // public System.Void ReadFontAssetDefinition()
    // Offset: 0xF57AC8
    void ReadFontAssetDefinition();
    // System.Void SortCharacterTable()
    // Offset: 0xF59A20
    void SortCharacterTable();
    // System.Void SortGlyphTable()
    // Offset: 0xF59B64
    void SortGlyphTable();
    // System.Void SortGlyphAndCharacterTables()
    // Offset: 0xF59CA8
    void SortGlyphAndCharacterTables();
    // public System.Boolean HasCharacter(System.Int32 character)
    // Offset: 0xF59CCC
    bool HasCharacter(int character);
    // public System.Boolean HasCharacter(System.Char character)
    // Offset: 0xF59D40
    bool HasCharacter(::Il2CppChar character);
    // public System.Boolean HasCharacter(System.Char character, System.Boolean searchFallbacks)
    // Offset: 0xF59DB4
    bool HasCharacter(::Il2CppChar character, bool searchFallbacks);
    // private System.Boolean HasCharacter_Internal(System.Char character, System.Boolean searchFallbacks)
    // Offset: 0xF5A7B4
    bool HasCharacter_Internal(::Il2CppChar character, bool searchFallbacks);
    // public System.Boolean HasCharacters(System.String text, out System.Collections.Generic.List`1<System.Char> missingCharacters)
    // Offset: 0xF5A91C
    bool HasCharacters(::Il2CppString* text, System::Collections::Generic::List_1<::Il2CppChar>*& missingCharacters);
    // public System.Boolean HasCharacters(System.String text)
    // Offset: 0xF5AA70
    bool HasCharacters(::Il2CppString* text);
    // static public System.String GetCharacters(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xF5AB34
    static ::Il2CppString* GetCharacters(TMPro::TMP_FontAsset* fontAsset);
    // static public System.Int32[] GetCharactersArray(TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xF5AC14
    static ::Array<int>* GetCharactersArray(TMPro::TMP_FontAsset* fontAsset);
    // public System.Boolean TryAddCharacters(System.UInt32[] unicodes)
    // Offset: 0xF5ACFC
    bool TryAddCharacters(::Array<uint>* unicodes);
    // public System.Boolean TryAddCharacters(System.UInt32[] unicodes, out System.UInt32[] missingUnicodes)
    // Offset: 0xF5AD24
    bool TryAddCharacters(::Array<uint>* unicodes, ::Array<uint>*& missingUnicodes);
    // public System.Boolean TryAddCharacters(System.String characters)
    // Offset: 0xF5B498
    bool TryAddCharacters(::Il2CppString* characters);
    // public System.Boolean TryAddCharacters(System.String characters, out System.String missingCharacters)
    // Offset: 0xF5B4C0
    bool TryAddCharacters(::Il2CppString* characters, ::Il2CppString*& missingCharacters);
    // System.Boolean TryAddCharacter_Internal(System.UInt32 unicode)
    // Offset: 0xF5BB4C
    bool TryAddCharacter_Internal(uint unicode);
    // TMPro.TMP_Character AddCharacter_Internal(System.UInt32 unicode, UnityEngine.TextCore.Glyph glyph)
    // Offset: 0xF5BE64
    TMPro::TMP_Character* AddCharacter_Internal(uint unicode, UnityEngine::TextCore::Glyph* glyph);
    // System.Boolean TryAddCharacterInternal(System.UInt32 unicode, out TMPro.TMP_Character character)
    // Offset: 0xF5A184
    bool TryAddCharacterInternal(uint unicode, TMPro::TMP_Character*& character);
    // System.UInt32 GetGlyphIndex(System.UInt32 unicode)
    // Offset: 0xF5C854
    uint GetGlyphIndex(uint unicode);
    // System.Void UpdateAtlasTexture()
    // Offset: 0xF5C17C
    void UpdateAtlasTexture();
    // System.Void UpdateGlyphAdjustmentRecords(System.UInt32 unicode, System.UInt32 glyphIndex)
    // Offset: 0xF5C43C
    void UpdateGlyphAdjustmentRecords(uint unicode, uint glyphIndex);
    // public System.Void ClearFontAssetData(System.Boolean setAtlasSizeToZero)
    // Offset: 0xF5CA88
    void ClearFontAssetData(bool setAtlasSizeToZero);
    // private System.Void UpgradeFontAsset()
    // Offset: 0xF589A4
    void UpgradeFontAsset();
    // private System.Void UpgradeGlyphAdjustmentTableToFontFeatureTable()
    // Offset: 0xF5977C
    void UpgradeGlyphAdjustmentTableToFontFeatureTable();
    // public System.Void .ctor()
    // Offset: 0xF5D05C
    // Implemented from: TMPro.TMP_Asset
    // Base method: System.Void TMP_Asset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_FontAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_FontAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_FontAsset*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xF5D268
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // TMPro.TMP_FontAsset
  static check_size<sizeof(TMP_FontAsset), 472 + sizeof(System::Collections::Generic::List_1<TMPro::TMP_Character*>*)> __TMPro_TMP_FontAssetSizeCheck;
  static_assert(sizeof(TMP_FontAsset) == 0x1E0);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontAsset*, "TMPro", "TMP_FontAsset");
#pragma pack(pop)
