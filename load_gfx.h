#ifndef ZELDA3_LOAD_GFX_H_
#define ZELDA3_LOAD_GFX_H_

enum {
  kSrmOffs_Gloves = 0x354,
  kSrmOffs_Sword = 0x359,
  kSrmOffs_Shield = 0x35a,
  kSrmOffs_Armor = 0x35b,
  kSrmOffs_DiedCounter = 0x405,
  kSrmOffs_Name = 0x3d9,
  kSrmOffs_Health = 0x36c,
};

extern uint16 kGlovesColor[2];

void ApplyPaletteFilter_bounce();
void PaletteFilter_Range(int from, int to);
void PaletteFilter_IncrCountdown();
uint8 *LoadItemAnimationGfxOne(uint8 *dst, int num, int r12, bool from_temp);
uint16 snes_divide(uint16 dividend, uint8 divisor);
void EraseTileMaps_normal();
void RecoverPegGFXFromMapping();
void LoadOverworldMapPalette();
void EraseTileMaps_triforce();
void EraseTileMaps_dungeonmap();
void EraseTileMaps(uint16 r2, uint16 r0);
void EnableForceBlank();
void LoadItemGFXIntoWRAM4BPPBuffer();
void DecompressSwordGraphics();
void DecompressShieldGraphics();
void DecompressAnimatedDungeonTiles(uint8 a);
void DecompressAnimatedOverworldTiles(uint8 a);
void LoadItemGFX_Auxiliary();
void LoadFollowerGraphics();
void WriteTo4BPPBuffer_at_7F4000(uint8 a);
void DecodeAnimatedSpriteTile_variable(uint8 a);
void Expand3To4High(uint8 *dst, const uint8 *src, const uint8 *base, int num);
void LoadTransAuxGFX();
void LoadTransAuxGFX_sprite();
void Gfx_LoadSpritesInner(uint8 *dst);
void ReloadPreviouslyLoadedSheets();
void Attract_DecompressStoryGFX();
void AnimateMirrorWarp();
void AnimateMirrorWarp_DecompressNewTileSets();
void Graphics_IncrementalVRAMUpload();
void PrepTransAuxGfx();
void Do3To4High16Bit(uint8 *dst, const uint8 *src, int num);
void Do3To4Low16Bit(uint8 *dst, const uint8 *src, int num);
void LoadNewSpriteGFXSet();
void InitializeTilesets();
void LoadDefaultGraphics();
void Attract_LoadBG3GFX();
void Graphics_LoadChrHalfSlot();
void TransferFontToVRAM();
void Do3To4High(uint16 *vram_ptr, const uint8 *decomp_addr);
void Do3To4Low(uint16 *vram_ptr, const uint8 *decomp_addr);
void LoadSpriteGraphics(uint16 *vram_ptr, int gfx_pack, uint8 *decomp_addr);
void LoadBackgroundGraphics(uint16 *vram_ptr, int gfx_pack, int slot, uint8 *decomp_addr);
void LoadCommonSprites();
int Decomp_spr(uint8 *dst, int gfx);
int Decomp_bg(uint8 *dst, int gfx);
int Decompress(uint8 *dst, const uint8 *src);
void ResetHUDPalettes4and5();
void PaletteFilterHistory();
void PaletteFilter_WishPonds();
void PaletteFilter_Crystal();
void PaletteFilter_WishPonds_Inner();
void PaletteFilter_RestoreSP5F();
void PaletteFilter_SP5F();
void KholdstareShell_PaletteFiltering();
void AgahnimWarpShadowFilter(int k);
void Palette_FadeIntroOneStep();
void Palette_FadeIntro2();
void PaletteFilter_RestoreAdditive(int from, int to);
void PaletteFilter_RestoreSubtractive(uint16 from, uint16 to);
void PaletteFilter_InitializeWhiteFilter();
void MirrorWarp_RunAnimationSubmodules();
void PaletteFilter_BlindingWhite();
void PaletteFilter_StartBlindingWhite();
void PaletteFilter_BlindingWhiteTriforce();
void PaletteFilter_WhirlpoolBlue();
void PaletteFilter_IsolateWhirlpoolBlue();
void PaletteFilter_WhirlpoolRestoreBlue();
void PaletteFilter_WhirlpoolRestoreRedGreen();
void PaletteFilter_RestoreBGSubstractiveStrict();
void PaletteFilter_RestoreBGAdditiveStrict();
void Trinexx_FlashShellPalette_Red();
void Trinexx_UnflashShellPalette_Red();
void Trinexx_FlashShellPalette_Blue();
void Trinexx_UnflashShellPalette_Blue();
void IrisSpotlight_close();
void Spotlight_open();
void SpotlightInternal(uint8 x, uint8 y);
void IrisSpotlight_ConfigureTable();
void IrisSpotlight_ResetTable();
uint16 IrisSpotlight_CalculateCircleValue(uint8 a);
void AdjustWaterHDMAWindow();
void AdjustWaterHDMAWindow_X(uint16 r10);
void FloodDam_PrepFloodHDMA();
void ResetStarTileGraphics();
void Dungeon_RestoreStarTileChr();
void LinkZap_HandleMosaic();
void Player_SetCustomMosaicLevel(uint8 a);
void Module07_16_UpdatePegs_Step1();
void Module07_16_UpdatePegs_Step2();
void Dungeon_UpdatePegGFXBuffer(int x, int y);
void Dungeon_HandleTranslucencyAndPalette();
void Overworld_LoadAllPalettes();
void Dungeon_LoadPalettes();
void Overworld_LoadPalettesInner();
void OverworldLoadScreensPaletteSet();
void Overworld_LoadAreaPalettesEx(uint8 x);
void SpecialOverworld_CopyPalettesToCache();
void Overworld_CopyPalettesToCache();
void Overworld_LoadPalettes(uint8 bg, uint8 spr);
void Palette_BgAndFixedColor_Black();
void Palette_SetBgAndFixedColor(uint16 color);
void SetBackdropcolorBlack();
void Palette_SetOwBgColor();
void Palette_SpecialOw();
uint16 Palette_GetOwBgColor();
void Palette_AssertTranslucencySwap();
void Palette_SetTranslucencySwap(bool v);
void Palette_RevertTranslucencySwap();
void LoadActualGearPalettes();
void Palette_ElectroThemedGear();
void LoadGearPalettes_bunny();
void LoadGearPalettes(uint8 sword, uint8 shield, uint8 armor);
void LoadGearPalette(int dst, const uint16 *src, int n);
void Filter_Majorly_Whiten_Bg();
uint16 Filter_Majorly_Whiten_Color(uint16 c);
void Palette_Restore_BG_From_Flash();
void Palette_Restore_Coldata();
void Palette_Restore_BG_And_HUD();
void Palette_Load_SpritePal0Left();
void Palette_Load_SpriteMain();
void Palette_Load_SpriteAux1();
void Palette_Load_SpriteAux2();
void Palette_Load_Sword();
void Palette_Load_Shield();
void Palette_Load_SpriteEnvironment();
void Palette_Load_SpriteEnvironment_Dungeon();
void Palette_MiscSprite_Outdoors();
void Palette_Load_DungeonMapSprite();
void Palette_Load_LinkArmorAndGloves();
void Palette_UpdateGlovesColor();
void Palette_Load_DungeonMapBG();
void Palette_Load_HUD();
void Palette_Load_DungeonSet();
void Palette_Load_OWBG3();
void Palette_Load_OWBGMain();
void Palette_Load_OWBG1();
void Palette_Load_OWBG2();
void Palette_LoadSingle(const uint16 *src, int dst, int x_ents);
void Palette_LoadMultiple(const uint16 *src, int dst, int x_ents, int y_pals);
void Palette_LoadMultiple_Arbitrary(const uint16 *src, int dst, int x_ents);
void Palette_LoadForFileSelect();
void Palette_LoadForFileSelect_Armor(int k, uint8 armor, uint8 gloves);
void Palette_LoadForFileSelect_Sword(int k, uint8 sword);
void Palette_LoadForFileSelect_Shield(int k, uint8 shield);
void Palette_LoadAgahnim();
void HandleScreenFlash();

#endif // ZELDA3_LOAD_GFX_H_
