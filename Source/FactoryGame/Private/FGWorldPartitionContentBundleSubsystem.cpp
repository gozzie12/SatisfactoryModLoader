// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorldPartitionContentBundleSubsystem.h"

void UFGWorldPartitionContentBundleSubsystem::Initialize(FSubsystemCollectionBase& Collection){ }
void UFGWorldPartitionContentBundleSubsystem::SetContentBundleEnabled(UFGWorldPartitionContentBundle* bundle, bool enabled){ }
bool UFGWorldPartitionContentBundleSubsystem::IsContentBundleEnabled(const UFGWorldPartitionContentBundle* bundle) const{ return bool(); }
void UFGWorldPartitionContentBundleSubsystem::OnAssetCreated(const FAssetData& newAssetData){ }
void UFGWorldPartitionContentBundleSubsystem::OnAssetDeleted(const FAssetData& deletedAssetData){ }
bool UFGWorldPartitionContentBundleSubsystem::ShouldLoadContentBundle(const FAssetData& assetData){ return bool(); }
bool UFGWorldPartitionContentBundleSubsystem::ShouldInjectContentBundle(const UFGWorldPartitionContentBundle* contentBundlePath, bool runtimeState){ return bool(); }
void UFGWorldPartitionContentBundleSubsystem::DiscoverContentBundles(){ }
void UFGWorldPartitionContentBundleSubsystem::InitializeContentBundle(UFGWorldPartitionContentBundle* contentBundle){ }
void UFGWorldPartitionContentBundleSubsystem::DestroyContentBundleByPath(TSoftObjectPtr<UFGWorldPartitionContentBundle> contentBundlePath){ }
void UFGWorldPartitionContentBundleSubsystem::OnContentBundleAvailabilityChanged(UFGWorldPartitionContentBundle* contentBundlePath){ }
void UFGWorldPartitionContentBundleSubsystem::RefreshBundleContentState(UFGWorldPartitionContentBundle* contentBundlePath){ }
