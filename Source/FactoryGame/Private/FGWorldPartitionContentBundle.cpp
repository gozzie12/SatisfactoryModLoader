// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorldPartitionContentBundle.h"
#include "WorldPartition/ContentBundle/ContentBundleDescriptor.h"

#if WITH_EDITOR
void UFGWorldPartitionContentBundle::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
#endif 
UFGWorldPartitionContentBundle::UFGWorldPartitionContentBundle() : Super() {
	this->mContentBundleDescriptor = NewObject<UContentBundleDescriptor>(this, TEXT("ContentBundleDescriptor"));
	this->mBuildAvailability = EIncludeInBuilds::IIB_PublicBuilds;
	this->mEnabledInRuntime = true;
}
void UFGWorldPartitionContentBundle::BeginDestroy(){ Super::BeginDestroy(); }
