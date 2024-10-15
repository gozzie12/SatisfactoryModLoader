// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameUserSettings.h"
#include "Settings/FGUserSettingCategory.h"

FAutoConsoleVariableSink UFGGameUserSettings::mCVarSink = FConsoleCommandDelegate::CreateStatic(&UFGGameUserSettings::CVarSinkHandler);

#if WITH_EDITOR
void UFGGameUserSettings::OnBeginPIE(const bool bIsSimulating){ }
void UFGGameUserSettings::OnEndPIE(const bool bIsSimulating){ }
#endif 
UFGGameUserSettings* UFGGameUserSettings::GetFGGameUserSettings(){ return nullptr; }
void UFGGameUserSettings::LoadSettings(bool bForceReload){ }
void UFGGameUserSettings::ApplyNonResolutionSettings(){ }
void UFGGameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides){ }
void UFGGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides){ }
void UFGGameUserSettings::SaveSettings(){ }
float UFGGameUserSettings::GetEffectiveFrameRateLimit(){ return float(); }
void UFGGameUserSettings::ConfirmVideoMode(){ }
void UFGGameUserSettings::RunHardwareBenchmark(int32 WorkScale , float CPUMultiplier , float GPUMultiplier){ }
void UFGGameUserSettings::ApplyHardwareBenchmarkResults(){ }
FString UFGGameUserSettings::RunAndApplyHardwareBenchmark(int32 WorkScale , float CPUMultiplier , float GPUMultiplier){ return FString(); }
void UFGGameUserSettings::TryAutoDetectSettings(){ }
void UFGGameUserSettings::SetDefaultValuesFromHardwareBenchmark(){ }
EUpscalingMethod UFGGameUserSettings::ValidateUpscalingMethod(EUpscalingMethod upscalingMethod, bool considerVRAM) const{ return EUpscalingMethod(); }
FString UFGGameUserSettings::ValidateScalabilityValue(const FString& keyString, const FString& valueString) const{ return FString(); }
int32 UFGGameUserSettings::GetVideoQualityLevelFromHardwareBenchmark(){ return int32(); }
void UFGGameUserSettings::SetupBindings(){ }
bool UFGGameUserSettings::IsStableVideoModeDirty(){ return bool(); }
void UFGGameUserSettings::ResetVideoModeToLatestStable(){ }
void UFGGameUserSettings::ConfirmStableVideoMode(){ }
void UFGGameUserSettings::SanitizeResolution(){ }
void UFGGameUserSettings::ToggleFullscreenMode(){ }
void UFGGameUserSettings::UpdateFOVScalingForWorld(UWorld* world){ }
void UFGGameUserSettings::UpdateVideoQuality(){ }
void UFGGameUserSettings::OnVideoQualityUpdated(FString strId, FVariant value){ }
void UFGGameUserSettings::OnFOVScalingUpdated(FString strId, FVariant value){ }
void UFGGameUserSettings::InitVideoQualityValues(){ }
void UFGGameUserSettings::UpdateVideoQualityCvars(const FString& cvar){ }
void UFGGameUserSettings::OnUpScalingUpdated(FString strId, FVariant value){ }
void UFGGameUserSettings::OnFrameGenerationUpdated(FString strId, FVariant value){ }
void UFGGameUserSettings::InitFrameGeneration(){ }
void UFGGameUserSettings::InitUpScalingMethod(){ }
bool UFGGameUserSettings::IsUsingThirdPartyUpscaler() const{ return bool(); }
bool UFGGameUserSettings::IsXeSSSupported(){ return bool(); }
bool UFGGameUserSettings::IsDLSSSupported(){ return bool(); }
void UFGGameUserSettings::HandleCmdLineVideoQuality(){ }
bool UFGGameUserSettings::GetCmdLineVideoQualityLevel(int32& out_value){ return bool(); }
bool UFGGameUserSettings::HasVideoQualityCmdLineArg(){ return bool(); }
void UFGGameUserSettings::TestCmdLineVideoQuality(){ }
void UFGGameUserSettings::SetGroupQualityLevel(const TCHAR* InGroupName, int32 InQualityLevel, int32 InNumLevels){ }
UFGOptionInterface* UFGGameUserSettings::GetOptionInterface(){ return nullptr; }
void UFGGameUserSettings::UpdateAudioOption(FString updatedCvar){ }
void UFGGameUserSettings::OnArachnophobiaModeUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnFoliageQualityUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnOnlineIntegrationModeUpdated(){ }
void UFGGameUserSettings::OnMotionBlurEnabledUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnPoolLightQualityUpdated(FString updatedCvar){ }
void UFGGameUserSettings::OnCloudQualityUpdated(FString updatedCVar){ }
void UFGGameUserSettings::OnAntiAliasingMethodUpdated(FString strId, FVariant value, bool forceSet){ }
void UFGGameUserSettings::InitUpscalingPresetValue(){ }
void UFGGameUserSettings::OnUpscalingPresetUpdated(FString strId, FVariant value){ }
void UFGGameUserSettings::OnScreenPercentageUpdated(FString strId, FVariant value){ }
bool UFGGameUserSettings::IsUsingCustomScreenPercentage() const{ return bool(); }
void UFGGameUserSettings::OnFoliageLoadDistanceUpdated(FString strId, FVariant value){ }
void UFGGameUserSettings::OnNetworkQualityUpdated(FString updatedCvar){ }
int32 UFGGameUserSettings::GetDefaultPostProcessQualitySetting(FString settingName){ return int32(); }
void UFGGameUserSettings::RefreshNetworkQualityValues(){ }
bool UFGGameUserSettings::GetPlayerMappedKey(const FName& inActionName, FFGCustomInputActionMapping& out_FoundMapping) const{ return bool(); }
void UFGGameUserSettings::AddPlayerMappedKey(const FFGCustomInputActionMapping& newMapping){ }
void UFGGameUserSettings::RemoveAllPlayerMappedKeys(){ }
void UFGGameUserSettings::GetAllUserSettings(TArray<UFGUserSettingApplyType*>& OutUserSettings) const{ }
UFGUserSettingApplyType* UFGGameUserSettings::FindUserSetting(const FString& SettingId) const{ return nullptr; }
void UFGGameUserSettings::SetOptionValue(const FString& strId, const FVariant& value){ }
void UFGGameUserSettings::ApplyChanges(){ }
void UFGGameUserSettings::ResetAllSettingsToDefault(){ }
void UFGGameUserSettings::ResetAllSettingsInCategory(TSubclassOf<  UFGUserSettingCategory > category, TSubclassOf<  UFGUserSettingCategory > subCategory){ }
bool UFGGameUserSettings::IsGlobalManager() const{ return bool(); }
bool UFGGameUserSettings::IsInMainMenu() const{ return bool(); }
IFGOptionInterface* UFGGameUserSettings::GetPrimaryOptionInterface(UWorld* world) const{ return nullptr; }
void UFGGameUserSettings::InitSavedValues(){ }
void UFGGameUserSettings::SetupAudioSettingBindings(){ }
void UFGGameUserSettings::OnExitToMainMenu(){ }
void UFGGameUserSettings::OnExitToDesktop(){ }
TMap<FString, FText> UFGGameUserSettings::GetLanguageData(){ return TMap<FString,FText>(); }
void UFGGameUserSettings::SetLanguageData(TMap<FString, FText> languageData){ }
void UFGGameUserSettings::SetPrimaryLanguage(FString language){ }
void UFGGameUserSettings::SetSecondaryLanguage(FString language){ }
void UFGGameUserSettings::QuickSwitchLanguage(){ }
void UFGGameUserSettings::ResetLanguageToPrimary(){ }
EGraphicsAPI UFGGameUserSettings::GetCurrentActiveGraphicsAPI() const{ return EGraphicsAPI(); }
EGraphicsAPI UFGGameUserSettings::GetCurrentConfigGraphicsAPI() const{ return EGraphicsAPI(); }
bool UFGGameUserSettings::GetForcedGraphicsAPI(EGraphicsAPI& out_forcedGraphicsAPI) const{ return bool(); }
void UFGGameUserSettings::SetCurrentConfigGraphicsAPI(EGraphicsAPI newGraphicsAPI){ }
bool UFGGameUserSettings::IsUsingCustomVideoQualitySettings() const{ return bool(); }
void UFGGameUserSettings::SetHologramColour(FVector inColour){ }
void UFGGameUserSettings::SetDismantleHologramColour(FVector inColour){ }
void UFGGameUserSettings::SetInvalidPlacementHologramColour(FVector inColour){ }
void UFGGameUserSettings::SetSoftClearanceHologramColour(FVector inColour){ }
void UFGGameUserSettings::ApplyHologramColoursToCollectionParameterInstance(UObject* World){ }
void UFGGameUserSettings::UpdateFoliageLoadingDistance(UObject* World){ }
void UFGGameUserSettings::UpdatePaniniFOVScaling(){ }
bool UFGGameUserSettings::ShouldShowFirstLaunchPopUpScreen(){ return bool(); }
void UFGGameUserSettings::MarkFirstLaunchPopUpScreenAccepted(){ }
UMaterialParameterCollection* UFGGameUserSettings::GetHologramMaterialCollectionAsset() const{ return nullptr; }
void UFGGameUserSettings::SetPreferredOnlineIntegrationMode(EOnlineIntegrationMode preferredOnlineIntegrationMode){ }
void UFGGameUserSettings::DumpDynamicOptionsSettings(){ }
void UFGGameUserSettings::GetOptionsDebugData(TArray<FString>& out_debugData){ }
bool UFGGameUserSettings::AwaitModuleLoadIfNeeded(const FName& moduleName){ return bool(); }
void UFGGameUserSettings::OnModuleChanged(FName name, EModuleChangeReason reason){ }
void UFGGameUserSettings::TryInitUserSettings(){ }
void UFGGameUserSettings::InitUserSettings(){ }
void UFGGameUserSettings::OnPreMapLoad(const FString& MapName){ }
void UFGGameUserSettings::SetCvarValue(FString cvar, int32 value){ }
void UFGGameUserSettings::SetCvarValue(FString cvar, float value){ }
void UFGGameUserSettings::SetupAudioOption(const FString& strId){ }
void UFGGameUserSettings::CheckForCvarOverrides(){ }
void UFGGameUserSettings::CheckForVideoCvarOverrides(){ }
void UFGGameUserSettings::CVarSinkHandler(){ }
void UFGGameUserSettings::UpdateCvars(){ }
void UFGGameUserSettings::PreSetup(){ }
bool UFGGameUserSettings::ValidateCVar(const FString& cvar){ return bool(); }
void UFGGameUserSettings::TestSavedValues(){ }
UWorld* UFGGameUserSettings::GetGameWorld(){ return nullptr; }
void UFGGameUserSettings::FlushRenderingCommandsThenApplyUpscaler(EUpscalingMethod upscalingMethod){ }
void UFGGameUserSettings::SetUpscalerCVars(EUpscalingMethod upscalingMethod){ }
void UFGGameUserSettings::SetAAMethodFromUpscalingMethod(EUpscalingMethod upscalingMethod){ }
