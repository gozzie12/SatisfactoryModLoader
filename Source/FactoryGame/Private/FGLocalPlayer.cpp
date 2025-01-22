// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLocalPlayer.h"
#include "UI/FGJoinableGamesViewModel.h"

UFGLocalPlayer::UFGLocalPlayer() : Super() {
	this->mJoinableGamesModel = NewObject<UFGJoinableGamesViewModel>(this, TEXT("JoinableGamesModel"));
}
void UFGLocalPlayer::PlayerAdded( UGameViewportClient* inViewportClient, FPlatformUserId inUserId){ }
void UFGLocalPlayer::PlayerRemoved(){ }
void UFGLocalPlayer::SwitchController( APlayerController* PC){ }
void UFGLocalPlayer::ReceivedPlayerController(APlayerController* NewController){ }
FString UFGLocalPlayer::GetNickname() const{ return FString(); }
void UFGLocalPlayer::CleanupViewState(FStringView MidParentRootPath){ }
bool UFGLocalPlayer::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar){ return bool(); }
void UFGLocalPlayer::SubscribeToOptionUpdates(){ }
void UFGLocalPlayer::OnMaintainYAxisFOVUpdated(FString updatedCvar){ }
void UFGLocalPlayer::GetUserWatermarkInformation(TArray<FString>& OutWatermarkData) const{ }
void UFGLocalPlayer::UpdatePresence(){ }
void UFGLocalPlayer::RefreshRecentRegisteredSocialAccountID(){ }
void UFGLocalPlayer::PopulateEnhancedInputUserSettingsWithContexts( UEnhancedInputUserSettings* inputUserSettings){ }
void UFGLocalPlayer::PopulateChildMappingContexts(const UFGInputMappingContext* mainContext, TArray<UFGInputMappingContext*>& out_childContexts){ }
void UFGLocalPlayer::ForceHideEarlyLoadingScreen(){ }
void UFGLocalPlayer::OnLoginStatusChanged(ULocalUserInfo* userInfo, TSharedRef<UE::Online::FAccountInfo> accountInfo, UOnlineIntegrationBackend* backend){ }
FString UFGLocalPlayer::GetPresenceString() const{ return FString(); }
void UFGLocalPlayer::OnAboutToTravel(ULocalUserInfo* UserInfo, TMap<FString ,FString> &ExtraOptions){ }
void UFGLocalPlayer::GetPresenceState(FPlayerPresenceState& outState) const{ }
void UFGLocalPlayer::PushErrorAndAutosave(TSubclassOf<class UFGErrorMessage> errorMessage){ }
void UFGLocalPlayer::OnMapLoadedWithWorld(UWorld* InWorld){ }
void UFGLocalPlayer::CheckEarlyLoadingScreenVisibility(){ }
void UFGLocalPlayer::RequestPublicPlayerAddress(){ }
void UFGLocalPlayer::OnPublicPlayerAddressResponse(FHttpRequestPtr request, FHttpResponsePtr response, bool wasSuccesful){ }
