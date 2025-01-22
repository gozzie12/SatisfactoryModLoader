// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLightweightBuildableSubsystem.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void FLightweightBuildablePool::PreallocPool(AActor* owner, TArray<TSubclassOf<AFGBuildable>> availableClasses){ }
AFGBuildable* FLightweightBuildablePool::GetBuildableFromPool(AActor* owner, FRuntimeBuildableInstanceData* runtimeData, int32 indexOfRuntimeData, TSubclassOf<AFGBuildable> buildableClass){ return nullptr; }
void FLightweightBuildablePool::ReturnBuildableToPool(AFGBuildable* buildable){ }
AFGBuildable* FLightweightBuildablePool::SpawnBuildableForPool(AActor* owner, TSubclassOf<AFGBuildable> buildableClass){ return nullptr; }
bool FInstanceConverterInstigator::TryAddInstigatedBuildable(FInstanceToTemporaryBuildable* instanceToTemp){ return bool(); }
void FLightweightBuildableRemovalArray::PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize){ }
void FLightweightBuildableCustomizationArray::PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize){ }
void UFGLightweightBuildableConstructionBundle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGLightweightBuildableConstructionBundle, mBuiltWithRecipe);
	DOREPLIFETIME(UFGLightweightBuildableConstructionBundle, mBuildableClass);
	DOREPLIFETIME(UFGLightweightBuildableConstructionBundle, mMaxSize);
	DOREPLIFETIME(UFGLightweightBuildableConstructionBundle, mBlueprintBuildEffectIndex);
	DOREPLIFETIME(UFGLightweightBuildableConstructionBundle, mIncomingNetConstructIds);
	DOREPLIFETIME(UFGLightweightBuildableConstructionBundle, mConstructionInstigator);
}
void UFGLightweightBuildableConstructionBundle::OnRep_IncomingConstructIds(){ }
void UFGLightweightBuildableConstructionBundle::OnRep_BuildableClass(){ }
void UFGLightweightBuildableRemovalBundle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGLightweightBuildableRemovalBundle, mLightweightBuildableRemovalArray);
	DOREPLIFETIME(UFGLightweightBuildableRemovalBundle, mBuildableClass);
	DOREPLIFETIME(UFGLightweightBuildableRemovalBundle, mFullSize);
}
void UFGLightweightBuildableRemovalBundle::PostInitProperties(){ Super::PostInitProperties(); }
void UFGLightweightBuildableRemovalBundle::OnRep_BuildableClass() { }
void UFGLightweightCustomizationBundle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGLightweightCustomizationBundle, mLightweightCustomizationArray);
	DOREPLIFETIME(UFGLightweightCustomizationBundle, mBuildableClass);
	DOREPLIFETIME(UFGLightweightCustomizationBundle, mFullSize);
}
void UFGLightweightCustomizationBundle::PostInitProperties(){ Super::PostInitProperties(); }
void UFGLightweightCustomizationBundle::OnRep_BuildableClass(){ }
AFGLightweightBuildableRepProxy::AFGLightweightBuildableRepProxy() : Super() {
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bOnlyRelevantToOwner = true;
	this->bReplicateUsingRegisteredSubObjectList = true;
	this->NetDormancy = ENetDormancy::DORM_Awake;
	this->NetCullDistanceSquared = 1000000000000.0;
	this->NetPriority = 0.1;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGLightweightBuildableRepProxy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGLightweightBuildableRepProxy, mPendingConstructionBundles);
	DOREPLIFETIME(AFGLightweightBuildableRepProxy, mPendingRemovalBundles);
	DOREPLIFETIME(AFGLightweightBuildableRepProxy, mPendingCustomizationBundle);
}
void AFGLightweightBuildableRepProxy::BeginPlay(){ Super::BeginPlay(); }
void AFGLightweightBuildableRepProxy::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGLightweightBuildableRepProxy::Tick(float DeltaTime){ Super::Tick(DeltaTime); }
void AFGLightweightBuildableRepProxy::AddConstructedRuntimeDataForIndex(TSubclassOf<  AFGBuildable > buildableClass, FRuntimeBuildableInstanceData& runtimeData, int32 index, uint16 constructId, AActor* instigator, int32
	                                       blueprintBuildIndex){ }
void AFGLightweightBuildableRepProxy::AddRemovedRuntimeDataForIndex(TSubclassOf<  AFGBuildable > buildableClass, int32 index){ }
void AFGLightweightBuildableRepProxy::AddCustomizationDataForIndex(TSubclassOf<  AFGBuildable > buildableClass, const FFactoryCustomizationData& customizationData, int32 index){ }
void AFGLightweightBuildableRepProxy::Server_NotifyBundleBunchReceived_Implementation(UFGLightweightBuildableConstructionBundle* bundle){ }
void AFGLightweightBuildableRepProxy::Server_NotifyBundleInitialRepReceived_Implementation(UFGLightweightBuildableConstructionBundle* bundle){ }
void AFGLightweightBuildableRepProxy::NotifyConstructBundleInitialRepReceived(UFGLightweightBuildableConstructionBundle* bundle){ }
void AFGLightweightBuildableRepProxy::Client_SendConstructionBundle_Implementation(UFGLightweightBuildableConstructionBundle* bundle, const TArray< FLightweightBuildableReplicationItem >& Items){ }
void AFGLightweightBuildableRepProxy::Server_NotifyRemovalBundleReplicated_Implementation(int32 clientCount, UFGLightweightBuildableRemovalBundle* removalBundle){ }
void AFGLightweightBuildableRepProxy::Server_NotifyCustomizationBundleReplicated_Implementation(int32 clientCount, UFGLightweightCustomizationBundle* customizationBundle){ }
void FLightweightBuildableInstanceRef::Initialize(AFGLightweightBuildableSubsystem* ownerSubsystem,	TSubclassOf<AFGBuildable> buildableClass, int32 buildableIndex){ }
AFGLightweightBuildableSubsystem* FLightweightBuildableInstanceRef::GetOwnerSubsystem() const{ return nullptr; }
const FRuntimeBuildableInstanceData* FLightweightBuildableInstanceRef::ResolveBuildableInstanceData() const{ return nullptr; }
bool FLightweightBuildableInstanceRef::Remove(){ return bool(); }
bool FLightweightBuildableInstanceRef::SetCustomizationData(const FFactoryCustomizationData& customizationData) const{ return bool(); }
AFGBuildable* FLightweightBuildableInstanceRef::SpawnTemporaryBuildable() const{ return nullptr; }
AFGLightweightBuildableSubsystem::AFGLightweightBuildableSubsystem() : Super() {
	this->mCachedLocalRepProxy = nullptr;
	this->mBuildEffectComponentActor = nullptr;
	this->mCachedBuildEffectTemplate = nullptr;
	this->mCachedDismantleEffectTemplate = nullptr;
	this->mTimeSinceLastStaleTemporaryCulling = 0.0;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicates = false;
}
AFGLightweightBuildableSubsystem* AFGLightweightBuildableSubsystem::Get(UWorld* world){ return nullptr; }
AFGLightweightBuildableSubsystem* AFGLightweightBuildableSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGLightweightBuildableSubsystem::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGLightweightBuildableSubsystem::Tick(float DeltaSeconds){ Super::Tick(DeltaSeconds); }
void AFGLightweightBuildableSubsystem::BeginPlay(){ Super::BeginPlay(); }
void AFGLightweightBuildableSubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGLightweightBuildableSubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGLightweightBuildableSubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGLightweightBuildableSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGLightweightBuildableSubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGLightweightBuildableSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGLightweightBuildableSubsystem::ShouldSave_Implementation() const{ return bool(); }
void AFGLightweightBuildableSubsystem::NotifyGamestateReceived(){ }
AActor* AFGLightweightBuildableSubsystem::AddInstanceConverterInstigator(float radius, AActor* instigator , FTransform transform){ return nullptr; }
void AFGLightweightBuildableSubsystem::RemoveInstanceConverterInstigator(AActor* instigator){ }
FInstanceToTemporaryBuildable* AFGLightweightBuildableSubsystem::FindOrSpawnBuildableForRuntimeData(FRuntimeBuildableInstanceData* runtimeData, int32 indexOfRunrtimeData, bool& out_DidSpawn){ return nullptr; }
int32 AFGLightweightBuildableSubsystem::AddFromBuildable( AFGBuildable* buildable, AActor* buildEffectInstigator ,  AFGBlueprintProxy* blueprintProxy){ return int32(); }
void AFGLightweightBuildableSubsystem::RemoveByBuildable( AFGBuildable* buildable){ }
void AFGLightweightBuildableSubsystem::RemoveByInstanceIndex(TSubclassOf<  AFGBuildable > buildableClass, int32 instanceIndex){ }
void AFGLightweightBuildableSubsystem::InvalidateRuntimeInstanceDataForIndex(TSubclassOf<AFGBuildable> buildableClass, int32 index){ }
int32 AFGLightweightBuildableSubsystem::AddFromBuildableInstanceData(TSubclassOf< class AFGBuildable > buildableClass, FRuntimeBuildableInstanceData& buildableInstanceData, bool fromSaveData, int32 saveDataBuildableIndex, uint16 constructId, AActor* buildEffectInstigator, int32 blueprintBuildEffectIndex){ return int32(); }
void AFGLightweightBuildableSubsystem::AddFromReplicatedData(TSubclassOf< AFGBuildable > buildableClass, TSubclassOf<  UFGRecipe > builtWithRecipe, const FLightweightBuildableReplicationItem& replicationData, int32 maxSize, AActor* buildEffectInstigator, int32 blueprintBuildIndex){ }
void AFGLightweightBuildableSubsystem::RemoveStaleTemporaryBuildables(){ }
void AFGLightweightBuildableSubsystem::RemoveTemporaryBuildableForInstanceIndex(TSubclassOf<AFGBuildable> buildableClass, int32 instanceIndex){ }
void AFGLightweightBuildableSubsystem::RemoveInstanceToTemporary(FInstanceToTemporaryBuildable* instanceToTemp){ }
void AFGLightweightBuildableSubsystem::SetInstanceInstigatorLocation(AActor* instigator, const FVector& location){ }
void AFGLightweightBuildableSubsystem::CopyCustomizationDataFromTemporaryToInstance(AFGBuildable* buildable){ }
void AFGLightweightBuildableSubsystem::SetCustomizationDataOnInstance(TSubclassOf< AFGBuildable > buildableClass, FFactoryCustomizationData customizationData, int32 index){ }
int32 AFGLightweightBuildableSubsystem::GetRuntimeDataIndexForBuildable( AFGBuildable* buildable){ return int32(); }
AFGBuildable* AFGLightweightBuildableSubsystem::FindTemporaryByBuildableClassAndIndex(TSubclassOf<  AFGBuildable > buildableClass, int32 index){ return nullptr; }
uint32 AFGLightweightBuildableSubsystem::GetSnappedGridHashLocationForInstanceLocation(TSubclassOf< AFGBuildable > buildableClass, UStaticMesh* staticMesh, const FVector& instanceLocation) const{ return uint32(); }
void AFGLightweightBuildableSubsystem::AddGridHashEntryForNewInstance(TSubclassOf< AFGBuildable > buildableClass, UStaticMesh* staticMesh, const FVector& instanceLocation, FInstanceHandle* handle, int32 runtimeIndex){ }
TSubclassOf< class UFGRecipe > AFGLightweightBuildableSubsystem::GetBuiltWithRecipeForBuildableClass(TSubclassOf< AFGBuildable > buildableClass){ return TSubclassOf<class UFGRecipe>(); }
void AFGLightweightBuildableSubsystem::BlueprintProxyHoveredForDismantle( AFGBlueprintProxy* blueprintProxy){ }
void AFGLightweightBuildableSubsystem::BlueprintProxyStopHoveredForDismantle( AFGBlueprintProxy* blueprintProxy){ }
void AFGLightweightBuildableSubsystem::NotifyInstancesOfBlueprintProxy(const TArray< FBuildableClassLightweightIndices >& lightweightInstancesAndIndices, AFGBlueprintProxy* blueprintProxy){ }
FRuntimeBuildableInstanceData* AFGLightweightBuildableSubsystem::GetRuntimeDataForBuildableClassAndIndex(TSubclassOf<  AFGBuildable > buildableClass, int32 index){ return nullptr; }
void AFGLightweightBuildableSubsystem::AddBuildEffectForRuntimeData(AFGBuildEffectActor* buildEffectActor, TSubclassOf< AFGBuildable > buildableClass, int32 index){ }
void AFGLightweightBuildableSubsystem::RemoveBuildEffectForRuntimeData(AFGBuildEffectActor* buildEffectActor){ }
bool AFGLightweightBuildableSubsystem::ResolveLightweightInstance(const FInstanceHandle& instanceHandle, FLightweightBuildableInstanceRef& out_buildableDescriptor){ return bool(); }
TSoftClassPtr< class UFGMaterialEffect_Build > AFGLightweightBuildableSubsystem::GetBuildEffectTemplate() const{ return TSoftClassPtr<class UFGMaterialEffect_Build>(); }
TSoftClassPtr< class UFGMaterialEffect_Build > AFGLightweightBuildableSubsystem::GetDismantleEffectTemplate() const{ return TSoftClassPtr<class UFGMaterialEffect_Build>(); }
void AFGLightweightBuildableSubsystem::CreateBuildEffectForRuntimeData(TSubclassOf<AFGBuildable> buildableClass, FRuntimeBuildableInstanceData& runtimeData, AActor* instigator, UAbstractInstanceDataObject* instanceData, int32 Index){ }
void AFGLightweightBuildableSubsystem::OnBuildEffectFinished( UFGMaterialEffectComponent* materialEffect){ }
void AFGLightweightBuildableSubsystem::CreateDismantleEffectForRuntimeData(FRuntimeBuildableInstanceData& runtimeData, AActor* instigator,  UAbstractInstanceDataObject* instanceData){ }
void AFGLightweightBuildableSubsystem::OnDismantleEffectFinished( UFGMaterialEffectComponent* materialEffect){ }
FRuntimeBuildableInstanceData AFGLightweightBuildableSubsystem::mStaticRuntimeInstanceDataStorage = FRuntimeBuildableInstanceData();
