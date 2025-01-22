// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRamp.h"

AFGBuildableRamp::AFGBuildableRamp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mIsDoubleRamp = false;
	this->mIsRoof = false;
	this->mIsInverted = false;
	this->mOcclusionShape = EFGRainOcclusionShape::ROCS_Ramp;
}
void AFGBuildableRamp::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
float AFGBuildableRamp::CalculateRampAngle() const{ return float(); }
AFGBuildableRampLightweight::AFGBuildableRampLightweight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mMeshComponentProxy = nullptr;
}
