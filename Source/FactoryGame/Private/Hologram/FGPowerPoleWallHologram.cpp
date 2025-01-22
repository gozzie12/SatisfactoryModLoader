// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPowerPoleWallHologram.h"
#include "Net/UnrealNetwork.h"

AFGPowerPoleWallHologram::AFGPowerPoleWallHologram() : Super() {
	this->mPowerConnectionMesh = nullptr;
	this->mSnapConnection = nullptr;
	this->mPowerTowerSnapConnection = nullptr;
	this->mUpgradeTarget = nullptr;
	this->mSnapWire = nullptr;
	this->mWireHologramIn = nullptr;
	this->mWireHologramOut = nullptr;
	this->mDefaultPowerLineRecipe = nullptr;
}
void AFGPowerPoleWallHologram::BeginPlay(){ Super::BeginPlay(); }
void AFGPowerPoleWallHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGPowerPoleWallHologram, mUpgradeTarget);
	DOREPLIFETIME(AFGPowerPoleWallHologram, mSnapWire);
	DOREPLIFETIME(AFGPowerPoleWallHologram, mWireHologramIn);
	DOREPLIFETIME(AFGPowerPoleWallHologram, mWireHologramOut);
}
void AFGPowerPoleWallHologram::Destroyed(){ Super::Destroyed(); }
USceneComponent* AFGPowerPoleWallHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName, const FName& attachSocketName){ return nullptr; }
AActor* AFGPowerPoleWallHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID constructionID){ return nullptr; }
void AFGPowerPoleWallHologram::PostHologramPlacement(const FHitResult& hitResult){ }
bool AFGPowerPoleWallHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPowerPoleWallHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
AActor* AFGPowerPoleWallHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGPowerPoleWallHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
float AFGPowerPoleWallHologram::GetBuildGunRangeOverride_Implementation() const{ return float(); }
void AFGPowerPoleWallHologram::CheckValidPlacement(){ }
void AFGPowerPoleWallHologram::OnInvalidHitResult(){ }
bool AFGPowerPoleWallHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGPowerPoleWallHologram::ShouldBuildGunHitWireMeshes() const{ return bool(); }
bool AFGPowerPoleWallHologram::AlignWithWire(const  AFGBuildableWire* wire, FVector& locationToAlign, FRotator& out_rotation) const{ return bool(); }
void AFGPowerPoleWallHologram::SpawnWireChildHolograms(TSubclassOf<class UFGRecipe> wireRecipe){ }
void AFGPowerPoleWallHologram::ResetByproductHolograms(){ }
