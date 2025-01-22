// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRecipeShortcut.h"
#include "Net/UnrealNetwork.h"

void UFGRecipeShortcut::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGRecipeShortcut, mRecipeToActivate);
}
void UFGRecipeShortcut::SetRecipe(TSubclassOf<  UFGRecipe > recipe, bool silent){ }
void UFGRecipeShortcut::Execute_Implementation( AFGPlayerController* owner){ }
bool UFGRecipeShortcut::IsValidShortcut_Implementation( AFGPlayerController* owner) const{ return bool(); }
UTexture2D* UFGRecipeShortcut::GetDisplayImage_Implementation() const{ return nullptr; }
bool UFGRecipeShortcut::IsActive_Implementation( AFGPlayerController* owner) const{ return bool(); }
bool UFGRecipeShortcut::IsSame_Implementation(UFGHotbarShortcut* shortcut) const{ return bool(); }
FString UFGRecipeShortcut::DescribeShortcut_Implementation() const{ return FString(); }
void UFGRecipeShortcut::OnRep_Recipe(){ }
void UFGRecipeShortcut::OnClientSubsystemsValid(){ }
void UFGRecipeShortcut::DestroyShortcut_Implementation(){ }
void UFGRecipeShortcut::OnRecipeUnlocked(TSubclassOf<UFGRecipe> recipeClass){ }
