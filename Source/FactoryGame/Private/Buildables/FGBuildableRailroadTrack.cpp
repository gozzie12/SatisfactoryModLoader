// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRailroadTrack.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "FGRailroadTrackConnectionComponent.h"
#include "Hologram/FGRailroadTrackHologram.h"
#include "Net/UnrealNetwork.h"

bool FRailroadTrackPosition::Serialize(FArchive& ar) {
	if (ar.ArIsSaveGame) {
		ar << Offset;
		ar << Forward;
	}

	return true;
}

FRailroadTrackPosition::FRailroadTrackPosition(){ }
FRailroadTrackPosition::FRailroadTrackPosition( AFGBuildableRailroadTrack* track, float offset, float forward){ }
FRailroadTrackPosition::FRailroadTrackPosition(const FRailroadTrackPosition& position){ }
FRailroadTrackPosition::~FRailroadTrackPosition(){ }
bool FRailroadTrackPosition::NetSerialize(FArchive& ar, UPackageMap* map, bool& out_success){ return bool(); }
void FRailroadTrackPosition::GetWorldLocationAndDirection(FVector& out_location, FVector& out_direction) const{ }
float FRailroadTrackPosition::GetForwardOffset() const{ return float(); }
float FRailroadTrackPosition::GetReverseOffset() const{ return float(); }
UFGRailroadTrackConnectionComponent* FRailroadTrackPosition::GetForwardConnection() const{ return nullptr; }
UFGRailroadTrackConnectionComponent* FRailroadTrackPosition::GetReverseConnection() const{ return nullptr; }
AFGBuildableRailroadTrack* FRailroadTrackPosition::GetForwardTrack() const{ return nullptr; }
AFGBuildableRailroadTrack* FRailroadTrackPosition::GetReverseTrack() const{ return nullptr; }
const FRailroadTrackPosition FRailroadTrackPosition::InvalidTrackPosition = FRailroadTrackPosition();
AFGBuildableRailroadTrack::AFGBuildableRailroadTrack() : Super() {
	this->mMesh = nullptr;
	this->mMeshLength = 0.0;
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	this->mConnections.Add(CreateDefaultSubobject<UFGRailroadTrackConnectionComponent>(TEXT("TrackConnection0")));
	this->mConnections.Add(CreateDefaultSubobject<UFGRailroadTrackConnectionComponent>(TEXT("TrackConnection1")));
	this->mIsOwnedByPlatform = false;
	this->mTrackGraphID = -1;
	this->mBlockVisualizationMesh = nullptr;
	this->mHologramClass = AFGRailroadTrackHologram::StaticClass();
	this->mSplineComponent->SetupAttachment(RootComponent);
	this->mConnections[0]->SetupAttachment(RootComponent);
	this->mConnections[1]->SetupAttachment(RootComponent);
}
void AFGBuildableRailroadTrack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableRailroadTrack, mSplineData);
	DOREPLIFETIME(AFGBuildableRailroadTrack, mSignalBlockID);
}
void AFGBuildableRailroadTrack::BeginPlay(){ }
void AFGBuildableRailroadTrack::Destroyed(){ }
void AFGBuildableRailroadTrack::Dismantle_Implementation(){ }
bool AFGBuildableRailroadTrack::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildableRailroadTrack::GetDismantleDependencies_Implementation(TArray<AActor*>& out_dismantleDependencies) const{ }
void AFGBuildableRailroadTrack::GetDismantleDisqualifiers_Implementation(TArray<TSubclassOf<UFGConstructDisqualifier>>& out_dismantleDisqualifiers, const TArray<AActor*>& allSelectedActors) const{ }
void AFGBuildableRailroadTrack::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
int32 AFGBuildableRailroadTrack::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableRailroadTrack::GetClearanceData_Implementation(TArray< FFGClearanceData >& out_data) const{ }
bool AFGBuildableRailroadTrack::ShouldBlockGuidelinePathForHologram(const  AFGHologram* hologram) const{ return bool(); }
TArray<FInstanceData> AFGBuildableRailroadTrack::GetActorLightweightInstanceData_Implementation(){ return TArray<FInstanceData>(); }
void AFGBuildableRailroadTrack::ShowBlockVisualization(){ }
void AFGBuildableRailroadTrack::StopBlockVisualization(){ }
FRailroadTrackPosition AFGBuildableRailroadTrack::FindTrackPositionClosestToWorldLocation(const FVector& worldLocation){ return FRailroadTrackPosition(); }
void AFGBuildableRailroadTrack::GetWorldLocationAndDirectionAtPosition(const  FRailroadTrackPosition& position, FVector& out_location, FVector& out_direction) const{ }
void AFGBuildableRailroadTrack::GetWorldLocationAndDirectionAtDistance(float distance, FVector& out_location, FVector& out_direction) const{ }
TArray< AFGBuildableRailroadTrack* > AFGBuildableRailroadTrack::Split(AFGBuildableRailroadTrack* track, float offset, bool connectNewTracks){ return TArray<AFGBuildableRailroadTrack*>(); }
UFGPowerConnectionComponent* AFGBuildableRailroadTrack::GetThirdRail() const{ return nullptr; }
void AFGBuildableRailroadTrack::OnVehicleEntered( AFGRailroadVehicle* vehicle){ }
void AFGBuildableRailroadTrack::OnVehicleExited( AFGRailroadVehicle* vehicle){ }
bool AFGBuildableRailroadTrack::IsConnectionOccupied(const  UFGRailroadTrackConnectionComponent* connection, float distance) const{ return bool(); }
bool AFGBuildableRailroadTrack::UpdateOverlappingTracks(){ return bool(); }
TArray< AFGBuildableRailroadTrack* > AFGBuildableRailroadTrack::GetOverlappingTracks(){ return TArray<AFGBuildableRailroadTrack*>(); }
void AFGBuildableRailroadTrack::AddOverlappingTrack(AFGBuildableRailroadTrack* track){ }
UFGConnectionComponent* AFGBuildableRailroadTrack::GetSplineConnection0() const{ return nullptr; }
UFGConnectionComponent* AFGBuildableRailroadTrack::GetSplineConnection1() const{ return nullptr; }
void AFGBuildableRailroadTrack::PostSerializedFromBlueprint(bool isBlueprintWorld){ }
void AFGBuildableRailroadTrack::UnrotateForBlueprintPlaced(){ }
void AFGBuildableRailroadTrack::CreateClearanceData( USplineComponent* splineComponent, const TArray< FSplinePointData >& splineData, const FTransform& trackTransform, TArray< FFGClearanceData >& out_clearanceData, float maxDistance){ }
void AFGBuildableRailroadTrack::SetTrackGraphID(int32 trackGraphID){ }
void AFGBuildableRailroadTrack::SetSignalBlock(TWeakPtr< FFGRailroadSignalBlock > block){ }
void AFGBuildableRailroadTrack::SetupConnections(){ }
void AFGBuildableRailroadTrack::OnRep_SignalBlockID(){ }
