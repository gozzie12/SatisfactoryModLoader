// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipeConnectionFactory.h"

UFGPipeConnectionFactory::UFGPipeConnectionFactory() : Super() {
	this->mFluidBoxVolume = 5.0;
	this->mApplyAdditionalPressure = true;
}
void UFGPipeConnectionFactory::BeginPlay(){ Super::BeginPlay(); }
void UFGPipeConnectionFactory::EndPlay(const EEndPlayReason::Type reason){ Super::EndPlay(reason); }
FFluidBox* UFGPipeConnectionFactory::GetFluidBox(){ return nullptr; }
TArray< UFGPipeConnectionComponent* > UFGPipeConnectionFactory::GetPipeConnections(){ return TArray<UFGPipeConnectionComponent*>(); }
void UFGPipeConnectionFactory::OnDisconnectedFrom(){ }
