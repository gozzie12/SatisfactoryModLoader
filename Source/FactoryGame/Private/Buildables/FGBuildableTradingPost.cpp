// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableTradingPost.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AFGBuildableTradingPost::AFGBuildableTradingPost() : Super() {
	this->mDefaultGeneratorRecipe = nullptr;
	this->mDefaultStorageRecipe = nullptr;
	this->mDefaultHubTerminalRecipe = nullptr;
	this->mDefaultWorkBenchRecipe = nullptr;
	this->mLockerBuildableClass = nullptr;
	this->mPioneerPottyClass = nullptr;
	this->mStorage = nullptr;
	this->mHubTerminal = nullptr;
	this->mWorkBench = nullptr;
	this->mLocker = nullptr;
	this->mPioneerPotty = nullptr;
	this->mCalendar = nullptr;
	this->mMiniGame = nullptr;
	this->mLockerVisibilityLevel = 3;
	this->mMiniGameAndCalendarVisibilityLevel = 4;
	this->mCompassMaterialInstance = nullptr;
	this->mSpawningGroundZOffset = 5.0;
	this->mGroundSearchZDistance = 250.0;
	this->mSchematicManager = nullptr;
	this->mGenerator1Location = CreateDefaultSubobject<USceneComponent>(TEXT("Generator1Location"));
	this->mGenerator2Location = CreateDefaultSubobject<USceneComponent>(TEXT("Generator2Location"));
	this->mStorageLocation = CreateDefaultSubobject<USceneComponent>(TEXT("StorageLocation"));
	this->mHubTerminalLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HubTerminalLocation"));
	this->mWorkBenchLocation = CreateDefaultSubobject<USceneComponent>(TEXT("WorkBenchLocation"));
	this->mCalendarLocation = CreateDefaultSubobject<USceneComponent>(TEXT("CalendarLocation"));
	this->mMiniGameLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MiniGameLocation"));
	this->mCharacterCustomizationLocation = CreateDefaultSubobject<USceneComponent>(TEXT("CharacterCustomizationLocation"));
	this->mPioneerPottyLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Potty"));
	this->mActorRepresentationTexture = nullptr;
	this->mRepresentationText = INVTEXT("");
	this->mGenerator1Location->SetupAttachment(RootComponent);
	this->mGenerator2Location->SetupAttachment(RootComponent);
	this->mStorageLocation->SetupAttachment(RootComponent);
	this->mHubTerminalLocation->SetupAttachment(RootComponent);
	this->mWorkBenchLocation->SetupAttachment(RootComponent);
	this->mCalendarLocation->SetupAttachment(RootComponent);
	this->mMiniGameLocation->SetupAttachment(RootComponent);
	this->mCharacterCustomizationLocation->SetupAttachment(RootComponent);
	this->mPioneerPottyLocation->SetupAttachment(RootComponent);
}
void AFGBuildableTradingPost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableTradingPost, mGenerators);
	DOREPLIFETIME(AFGBuildableTradingPost, mStorage);
	DOREPLIFETIME(AFGBuildableTradingPost, mHubTerminal);
	DOREPLIFETIME(AFGBuildableTradingPost, mWorkBench);
	DOREPLIFETIME(AFGBuildableTradingPost, mLocker);
	DOREPLIFETIME(AFGBuildableTradingPost, mPioneerPotty);
	DOREPLIFETIME(AFGBuildableTradingPost, mCalendar);
	DOREPLIFETIME(AFGBuildableTradingPost, mMiniGame);
}
void AFGBuildableTradingPost::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableTradingPost::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGBuildableTradingPost::GetChildDismantleActors_Implementation(TArray< AActor* >& out_ChildDismantleActors) const{ }
bool AFGBuildableTradingPost::AddAsRepresentation(){ return bool(); }
bool AFGBuildableTradingPost::UpdateRepresentation(){ return bool(); }
bool AFGBuildableTradingPost::RemoveAsRepresentation(){ return bool(); }
bool AFGBuildableTradingPost::IsActorStatic(){ return bool(); }
FVector AFGBuildableTradingPost::GetRealActorLocation(){ return FVector(); }
FRotator AFGBuildableTradingPost::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGBuildableTradingPost::GetActorRepresentationTexture(){ return nullptr; }
FText AFGBuildableTradingPost::GetActorRepresentationText(){ return FText(); }
void AFGBuildableTradingPost::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGBuildableTradingPost::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGBuildableTradingPost::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGBuildableTradingPost::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGBuildableTradingPost::GetActorShouldShowInCompass(){ return bool(); }
bool AFGBuildableTradingPost::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGBuildableTradingPost::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGBuildableTradingPost::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGBuildableTradingPost::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGBuildableTradingPost::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
UMaterialInterface* AFGBuildableTradingPost::GetActorRepresentationCompassMaterial(){ return nullptr; }
void AFGBuildableTradingPost::OnTradingPostUpgraded_Implementation(int32 level, bool suppressBuildEffects){ }
bool AFGBuildableTradingPost::IsTradingPostComplete() const{ return bool(); }
void AFGBuildableTradingPost::UpdateSubBuildingsVisibility(){ }
void AFGBuildableTradingPost::SetupSubBuildingsDismantleRedirect(){ }
bool AFGBuildableTradingPost::GetStorageVisibility() const{ return bool(); }
bool AFGBuildableTradingPost::GetLockerVisibility() const{ return bool(); }
bool AFGBuildableTradingPost::GetMiniGameAndCalendarVisibility() const{ return bool(); }
bool AFGBuildableTradingPost::GetGeneratorVisibility(int32 generatorIndex) const{ return bool(); }
bool AFGBuildableTradingPost::GetPottyVisibility() const{ return bool(); }
int32 AFGBuildableTradingPost::GetTradingPostLevel() const{ return int32(); }
void AFGBuildableTradingPost::UpdateGeneratorVisibility(){ }
void AFGBuildableTradingPost::UpdateStorageVisibility(){ }
void AFGBuildableTradingPost::UpdateTerminalAndWorkbenchVisibility(){ }
void AFGBuildableTradingPost::UpdateLockerVisibility(){ }
void AFGBuildableTradingPost::UpdateMiniGameAndCalendarVisibility(){ }
void AFGBuildableTradingPost::UpdatePottyVisibility(){ }
void AFGBuildableTradingPost::OnRep_HubTerminalOrWorkBench(){ }
void AFGBuildableTradingPost::OnRep_Storage(){ }
void AFGBuildableTradingPost::OnRep_Generators(){ }
void AFGBuildableTradingPost::OnRep_Locker(){ }
void AFGBuildableTradingPost::OnRep_Calendar(){ }
void AFGBuildableTradingPost::OnRep_MiniGame(){ }
void AFGBuildableTradingPost::OnRep_Potty(){ }
AFGSchematicManager* AFGBuildableTradingPost::GetSchematicManager(){ return nullptr; }
void AFGBuildableTradingPost::OnSubsystemsAvailable(){ }
void AFGBuildableTradingPost::TryAddEventSubBuildings(){ }
void AFGBuildableTradingPost::SpawnTransientSubBuildings(){ }
