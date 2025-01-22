// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBoomBoxPlayer.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

void UFGBoomBoxRemoteCallObject::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGBoomBoxRemoteCallObject, mForceNetField_UFGBoomBoxRemoteCallObject);
}
void UFGBoomBoxRemoteCallObject::SyncPlayerStateReqest( AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_BeginChangeTapeSequence_Implementation(AFGBoomBoxPlayer* player, TSubclassOf<  UFGTapeData > newTape){ }
void UFGBoomBoxRemoteCallObject::Server_BeginNextSongSequence_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_BeginPreviousSongSequence_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_BeginPlaySequence_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_BeginStopSequence_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_BeginTurboBassSequence_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_SetVolumeNormalized_Implementation(AFGBoomBoxPlayer* player, float volume){ }
void UFGBoomBoxRemoteCallObject::Server_PutBoomBoxDown_Implementation(AFGBoomBoxPlayer* player, const FTransform& transform){ }
void UFGBoomBoxRemoteCallObject::Server_LoadTapeNow_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_EjectTapeNow_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_PlayNow_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_StopNow_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_NextNow_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_PrevNow_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_FireTurboBassNow_Implementation(AFGBoomBoxPlayer* player){ }
void UFGBoomBoxRemoteCallObject::Server_SetRepeatMode_Implementation(AFGBoomBoxPlayer* player, EBoomBoxRepeatMode repeatMode){ }
void UFGBoomBoxRemoteCallObject::Server_SyncPlayerStateRequest_Implementation( AFGBoomBoxPlayer* player, float clientTimestamp){ }
void UFGBoomBoxRemoteCallObject::Client_SyncPlayerState_Implementation( AFGBoomBoxPlayer* player, FBoomBoxPlayerState state, float timestamp){ }
AFGBoomBoxPlayer::AFGBoomBoxPlayer() : Super() {
	this->mVolumeRtpc = nullptr;
	this->mTurboBassOutputRTPC = nullptr;
	this->mTurboBassRTPC = nullptr;
	this->mTurboBassAudioEvent = nullptr;
	this->mTurboBassBlockingThreshold = -48.0;
	this->mTapeTextureParameter = TEXT("Albedo");
	this->mAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
	this->mMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	this->mSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	this->mAkComponent->SetupAttachment(mSceneRoot);
	this->mMesh->SetupAttachment(mSceneRoot);
	this->mBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	this->mBoxCollision->SetupAttachment(mMesh);
	this->mBaseTransformEquipped = FTransform(FQuat::Identity, FVector::ZeroVector, FVector::OneVector);
	this->mBaseTransformFreeActor = FTransform(FQuat::Identity, FVector::ZeroVector, FVector::OneVector);
	this->mImpulseRadius = 3000.0;
	this->mImpulseStrength = 500.0;
	this->mVerticalImpulseStrength = 250.0;
	this->mTurboBassBaseDamage = 1.0;
	this->mImpulseDamageType = nullptr;
	this->mTurboBassNoise = nullptr;
	this->mBoostJumpMultiplier = 5.0;
	this->mBoostJumpVelocityRange = 100.0;
	this->mFirstPersonTapeMaterial = nullptr;
	this->mCachedMaterialInstance = nullptr;
	this->mCachedMaterialInstance1p = nullptr;
	this->mState.mCurrentTape = nullptr;
	this->mState.mCurrentSongIx = -1;
	this->mState.mVolume = 1.0;
	this->mMode = EBoomBoxMode::Undefined;
	this->mRepeatMode = EBoomBoxRepeatMode::RepeatTape;
	this->mOwningCharacter = nullptr;
	this->mEquipmentActor = nullptr;
	this->mNextTape = nullptr;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicates = true;
	this->RootComponent = mSceneRoot;
}
void AFGBoomBoxPlayer::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGBoomBoxPlayer::NeedTransform_Implementation(){ return bool(); }
bool AFGBoomBoxPlayer::ShouldSave_Implementation() const{ return bool(); }
void AFGBoomBoxPlayer::LoadFromItemState(const FFGDynamicStruct& itemState){ }
FFGDynamicStruct AFGBoomBoxPlayer::SaveToItemState() const{ return FFGDynamicStruct(); }
void AFGBoomBoxPlayer::FlushItemState() const{ }
void AFGBoomBoxPlayer::BeginChangeTapeSequence(TSubclassOf<  UFGTapeData > newTape, AFGCharacterPlayer* instigatorCharacter){ }
void AFGBoomBoxPlayer::BeginNextSongSequence(AFGCharacterPlayer* instigatorCharacter){ }
void AFGBoomBoxPlayer::BeginPreviousSongSequence(AFGCharacterPlayer* instigatorCharacter){ }
void AFGBoomBoxPlayer::BeginPlaySequence(AFGCharacterPlayer* instigatorCharacter){ }
void AFGBoomBoxPlayer::BeginStopSequence(AFGCharacterPlayer* instigatorCharacter){ }
void AFGBoomBoxPlayer::BeginTurboBassSequence(AFGCharacterPlayer* instigatorCharacter){ }
void AFGBoomBoxPlayer::SetVolumeNormalized(float volume, AFGCharacterPlayer* instigatorCharacter){ }
void AFGBoomBoxPlayer::PutDown(const FTransform& transform){ }
void AFGBoomBoxPlayer::SetRepeatMode(EBoomBoxRepeatMode repeatMode, AFGCharacterPlayer* instigatorCharacter){ }
EBoomBoxRepeatMode AFGBoomBoxPlayer::GetRepeatMode() const{ return EBoomBoxRepeatMode(); }
bool AFGBoomBoxPlayer::GetCharacterLookAtTransform(FTransform& out_Transform) const{ return bool(); }
bool AFGBoomBoxPlayer::GetCharacterNearbyTransform(FTransform& out_Transform) const{ return bool(); }
void AFGBoomBoxPlayer::RegisterStateListener(TScriptInterface<class IFGBoomboxListenerInterface> stateListener){ }
void AFGBoomBoxPlayer::UnregisterStateListener(TScriptInterface<IFGBoomboxListenerInterface > stateListener){ }
bool AFGBoomBoxPlayer::IsCurrentlyPlaying() const{ return bool(); }
TSubclassOf< class UFGTapeData > AFGBoomBoxPlayer::GetCurrentTape() const{ return TSubclassOf<class UFGTapeData>(); }
bool AFGBoomBoxPlayer::IsInEquipmentMode() const{ return bool(); }
bool AFGBoomBoxPlayer::CanBePickedUp( AFGCharacterPlayer* byPlayer) const{ return bool(); }
EBoomBoxPickupButtonState AFGBoomBoxPlayer::GetPickupButtonState(AFGCharacterPlayer* player){ return EBoomBoxPickupButtonState(); }
void AFGBoomBoxPlayer::Tick(float DeltaTime){ Super::Tick(DeltaTime); }
void AFGBoomBoxPlayer::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBoomBoxPlayer, mMode);
	DOREPLIFETIME(AFGBoomBoxPlayer, mRepeatMode);
	DOREPLIFETIME(AFGBoomBoxPlayer, mOwningCharacter);
}
void AFGBoomBoxPlayer::OnModeChanged_Implementation(){ }
void AFGBoomBoxPlayer::OnRep_RepeatMode(){ }
void AFGBoomBoxPlayer::Multicast_SetAudioVolume_Implementation(float normalizedVolume){ }
void AFGBoomBoxPlayer::SetPlaybackAllowedByEquipStatus(bool allowed){ }
void AFGBoomBoxPlayer::Multicast_PutDown_Implementation(const FTransform& transform){ }
void AFGBoomBoxPlayer::Multicast_ApplyState_Implementation(const FBoomBoxPlayerState& boomBoxState){ }
void AFGBoomBoxPlayer::Multicast_FireTurboBassNow_Implementation( AFGCharacterPlayer* character){ }
bool AFGBoomBoxPlayer::IsPlaybackEnabled() const{ return bool(); }
bool AFGBoomBoxPlayer::IsPlaybackAllowedByEquippedStatus() const{ return bool(); }
bool AFGBoomBoxPlayer::IsPlaybackAllowedByPossessedStatus() const{ return bool(); }
bool AFGBoomBoxPlayer::IsPlaybackEffectivelyAllowed() const{ return bool(); }
bool AFGBoomBoxPlayer::IsEffectivelyPlaying() const{ return bool(); }
FSongData AFGBoomBoxPlayer::GetCurrentSong(){ return FSongData(); }
bool AFGBoomBoxPlayer::CanFireTurboBass() const{ return bool(); }
void AFGBoomBoxPlayer::SwitchToNextTapeTexture(){ }
void AFGBoomBoxPlayer::ApplyStateLocally(const FBoomBoxPlayerState& state){ }
FBoomBoxPlayerState AFGBoomBoxPlayer::GetState(){ return FBoomBoxPlayerState(); }
void AFGBoomBoxPlayer::SetEquipmentActor( AFGEquipmentBoomBox* equipmentActor){ }
void AFGBoomBoxPlayer::SetMode(EBoomBoxMode mode){ }
void AFGBoomBoxPlayer::LoadTapeNow( AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::EjectTapeNow(AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::PlayNow(AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::StopNow(AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::NextNow(AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::PrevNow(AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::FireTurboBassNow(AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::TogglePlaybackNow(AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::UpdateMaterialsFromCameraMode(){ }
void AFGBoomBoxPlayer::SetPlaybackStateFlag(EBoomBoxPlaybackStateBitfield flag, bool set){ }
void AFGBoomBoxPlayer::ApplyTurboBassGameplayEffects( AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::SetAudioVolumeLocally(float normalizedVolume, bool notifyListeners){ }
UMaterialInterface* AFGBoomBoxPlayer::GetDefaultTapeMaterial(){ return nullptr; }
void AFGBoomBoxPlayer::BeginPlay(){ Super::BeginPlay(); }
void AFGBoomBoxPlayer::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGBoomBoxPlayer::OnPawnPossessed( APawn* pawn,  AController* controller){ }
void AFGBoomBoxPlayer::OnceClientSubsystemsAreReady(){ }
void AFGBoomBoxPlayer::SongFinished(EAkCallbackType cbType, UAkCallbackInfo* cbInfo){ }
void AFGBoomBoxPlayer::TapeTextureLoadedAsync(UTexture2D *texture){ }
void AFGBoomBoxPlayer::SetOwningCharacter( AFGCharacterPlayer* character){ }
void AFGBoomBoxPlayer::Multicast_BeginPlaySequence_Implementation(AFGCharacterPlayer* instigatorPlayer){ }
void AFGBoomBoxPlayer::Multicast_BeginStopSequence_Implementation(AFGCharacterPlayer* instigatorPlayer){ }
void AFGBoomBoxPlayer::Multicast_BeginLoadTapeSequence_Implementation(TSubclassOf< UFGTapeData > newTape, AFGCharacterPlayer* instigatorPlayer){ }
void AFGBoomBoxPlayer::Multicast_BeginSwitchTapeSequence_Implementation(TSubclassOf< UFGTapeData > newTape, AFGCharacterPlayer* instigatorPlayer){ }
void AFGBoomBoxPlayer::Multicast_BeginNextSongSequence_Implementation(AFGCharacterPlayer* instigatorPlayer){ }
void AFGBoomBoxPlayer::Multicast_BeginPreviousSongSequence_Implementation(AFGCharacterPlayer* instigatorPlayer){ }
void AFGBoomBoxPlayer::Multicast_BeginTurboBassSequence_Implementation(AFGCharacterPlayer* instigatorPlayer){ }
float AFGBoomBoxPlayer::GetAudioVolume(){ return float(); }
void AFGBoomBoxPlayer::GetCurrentPlaybackPosition(float& out_currentPosition, float& out_maxDuration){ }
void AFGBoomBoxPlayer::FetchCurrentSongOffsetMS(){ }
void AFGBoomBoxPlayer::UpdateTickFunction(){ }
void AFGBoomBoxPlayer::SanitizeListeners(){ }
void AFGBoomBoxPlayer::StopPlayingNoNotify(){ }
void AFGBoomBoxPlayer::StartPlayingNoNotify(int32 song, int32 offsetMs){ }
void AFGBoomBoxPlayer::FullyNotifyListeners(){ }
void AFGBoomBoxPlayer::UpdatePlaybackAllowedByPossessedStatus(){ }
void AFGBoomBoxPlayer::SetPlaybackAllowedByPossessedStatus(bool allowed){ }
