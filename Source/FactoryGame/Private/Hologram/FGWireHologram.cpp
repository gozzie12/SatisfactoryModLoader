// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGWireHologram.h"
#include "Net/UnrealNetwork.h"

AFGWireHologram::AFGWireHologram() : Super() {
	this->mConnections[0] = nullptr;
	this->mConnections[1] = nullptr;
	this->mPowerPole = nullptr;
	this->mPowerPoleWall = nullptr;
	this->mActivePoleHologram = nullptr;
	this->mActiveSnapConnection = nullptr;
	this->mDefaultPowerPoleRecipe = nullptr;
	this->mCircuitType = nullptr;
	this->mDefaultPowerPoleWallRecipe = nullptr;
	this->mStartLocation = FVector::ZeroVector;
	this->mUpgradeTarget = nullptr;
	this->mNeedsValidFloor = false;
	this->mUseBuildClearanceOverlapSnapp = false;
}
void AFGWireHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGWireHologram, mConnections);
	DOREPLIFETIME(AFGWireHologram, mPowerPole);
	DOREPLIFETIME(AFGWireHologram, mPowerPoleWall);
	DOREPLIFETIME(AFGWireHologram, mStartLocation);
	DOREPLIFETIME(AFGWireHologram, mCurrentConnection);
}
void AFGWireHologram::BeginPlay(){ Super::BeginPlay(); }
AActor* AFGWireHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID){ return nullptr; }
int32 AFGWireHologram::GetBaseCostMultiplier() const{ return int32(); }
bool AFGWireHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGWireHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGWireHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGWireHologram::OnInvalidHitResult(){ }
void AFGWireHologram::ScrollRotate(int32 delta, int32 step){ }
AActor* AFGWireHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGWireHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
bool AFGWireHologram::ShouldBuildGunHitWireMeshes() const { return bool(); }
void AFGWireHologram::CheckBlueprintCommingling(){ }
float AFGWireHologram::GetBuildGunRangeOverride_Implementation() const{ return float(); }
void AFGWireHologram::PostHologramPlacement(const FHitResult& hitResult){ }
bool AFGWireHologram::CanNudgeHologram() const{ return bool(); }
AFGHologram* AFGWireHologram::GetNudgeHologramTarget(){ return nullptr; }
void AFGWireHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
bool AFGWireHologram::ShouldActorBeConsideredForGuidelines( AActor* actor) const{ return bool(); }
void AFGWireHologram::SetConnection(int32 ix, UFGCircuitConnectionComponent* connection){ }
UFGCircuitConnectionComponent* AFGWireHologram::GetConnection(int32 ix) const{ return nullptr; }
bool AFGWireHologram::IsPowerTowerWire() const{ return bool(); }
void AFGWireHologram::Destroyed(){ Super::Destroyed(); }
void AFGWireHologram::CheckValidPlacement(){ }
void AFGWireHologram::CheckClearance(const FVector& locationOffset){ }
uint8 AFGWireHologram::GetStencilForHologramMaterialState(EHologramMaterialState state) const{ return uint8(); }
void AFGWireHologram::CheckValidSnap(){ }
void AFGWireHologram::CheckLength(){ }
void AFGWireHologram::SetActiveAutomaticPoleHologram( AFGBuildableHologram* poleHologram){ }
UStaticMeshComponent* AFGWireHologram::CreateNewWireMesh(){ return nullptr; }
void AFGWireHologram::UpdateWireMeshes(){ }
UFGCircuitConnectionComponent* AFGWireHologram::FindOverlappingCircuitConnectionComponent(const FVector& location,
		 AActor* actor,
		 UFGCircuitConnectionComponent* ignoredConnectionComponent,
		TSubclassOf<  UFGCircuit > compatibleCircuitType,
		EPowerConnectionType powerConnectionType){ return nullptr; }
void AFGWireHologram::StartLookAtBuilding(UFGCircuitConnectionComponent* overlappingComponent){ }
void AFGWireHologram::StopLookAtBuilding(){ }
void AFGWireHologram::StartLookAtTooManyConnectionsBuilding(UFGCircuitConnectionComponent* overlappingConnection){ }
float AFGWireHologram::GetLength() const{ return float(); }
void AFGWireHologram::SetUpgradeTarget(AFGBuildableWire* target){ }
