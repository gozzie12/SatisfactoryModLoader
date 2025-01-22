// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryLegsComponent.h"
#include "Net/UnrealNetwork.h"

uint8 FFeetOffset::GetFeetIndexFromSocketName(const FName socket){ return uint8(); }
FFeetOffset::FFeetOffset(){ }
FFeetOffset::FFeetOffset(const FName socket){ }
FName FFeetOffset::GetSocket() const{ return FName(); }
UFGFactoryLegsComponent::UFGFactoryLegsComponent() : Super() {
	this->mLegMeshOverride = nullptr;
	this->mFootMeshOverride = nullptr;
	this->mLegScale = FVector::OneVector;
	this->mMaxLegLengthOverride = 0.0;
	this->mMinimumLegLength = 40.0;
	this->SetIsReplicatedByDefault(true);
}
void UFGFactoryLegsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGFactoryLegsComponent, mCachedFeetOffset);
}
void UFGFactoryLegsComponent::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGFactoryLegsComponent::NeedTransform_Implementation(){ return bool(); }
bool UFGFactoryLegsComponent::ShouldSave_Implementation() const{ return bool(); }
TArray< FFeetOffset > UFGFactoryLegsComponent::TraceFeetOffsets(const FTransform& actorTransform, AActor* ignoreActor) const{ return TArray<FFeetOffset>(); }
void UFGFactoryLegsComponent::SetFeetOffsets(const TArray< FFeetOffset >& offsets){ }
void UFGFactoryLegsComponent::ClearFeetOffsets(){ }
void UFGFactoryLegsComponent::SetFeetOffsetsToZero(){ }
float UFGFactoryLegsComponent::GetMaxLegLength() const{ return float(); }
bool UFGFactoryLegsComponent::HasValidLegs() const{ return bool(); }
void UFGFactoryLegsComponent::CreateLegInstances(TArray<FInstanceData>& out_legInstanceData){ }
FFeetOffset UFGFactoryLegsComponent::TraceFootOffset(FName socket, const FTransform& actorTransform, AActor* ignoreActor) const{ return FFeetOffset(); }
UStaticMesh* UFGFactoryLegsComponent::GetLegMesh() const{ return nullptr; }
UStaticMesh* UFGFactoryLegsComponent::GetFootMesh() const{ return nullptr; }
void UFGFactoryLegsComponent::CreateFootInstanced(const FFeetOffset& offsetData, TArray<FInstanceData>& out_legInstanceData) const{ }
