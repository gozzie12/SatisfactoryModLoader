// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSplineComponent.h"

UFGSplineComponent::UFGSplineComponent() : Super() {
	this->mSplineMesh = nullptr;
	this->mSplineMeshLength = 100.0;
	this->mGenerateCollisions = false;
	this->mCollisionSpacing = 100.0;
	this->mCollisionExtent = FVector::OneVector;
	this->mCollisionOffset = FVector::ZeroVector;
	this->mOverrideMaterial = nullptr;
}
void UFGSplineComponent::SetOverrideMaterial( UMaterialInterface* material){ }
void UFGSplineComponent::UpdateSplineMeshes(){ }
void UFGSplineComponent::DrawDebugSpline(const FColor& color1, const FColor& color2, float thickness) const{ }
int32 UFGSplineComponent::GetNumberOfMeshes() const{ return int32(); }
USplineMeshComponent* UFGSplineComponent::GetMesh(int32 index) const{ return nullptr; }
void UFGSplineComponent::SetAdditionalCustomDepthPass(bool enable){ }
void UFGSplineComponent::GenerateCollisionIdx(int32 idx, float splineLength, int32 numCollisions){ }
void UFGSplineComponent::GenerateSplineCollisions(){ }
USplineMeshComponent* UFGSplineComponent::CreateSplineMeshComponent(){ return nullptr; }
