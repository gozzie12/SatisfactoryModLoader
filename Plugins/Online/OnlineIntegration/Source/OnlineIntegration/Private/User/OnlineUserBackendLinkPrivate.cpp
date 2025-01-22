// This file has been automatically generated by the Unreal Header Implementation tool

#include "User/OnlineUserBackendLinkPrivate.h"

#include "GameplayTagContainerViewModel.h"

void UOnlineUserBackendLinkPrivate::Initialize(UOnlineIntegrationBackend* OnlineBackend){ }
void UOnlineUserBackendLinkPrivate::SetNickname(const FString& InNickname){ }
void UOnlineUserBackendLinkPrivate::SetAvatar(const FPlayerAvatar& InAvatar){ }
void UOnlineUserBackendLinkPrivate::SetAccountId(UE::Online::FAccountId InAccountId){ }
void UOnlineUserBackendLinkPrivate::SetOnlineUser(UOnlineUserInfo* InUserInfo){ }
UOnlineIntegrationBackendPrivate* UOnlineUserBackendLinkPrivate::GetOnlineBackendPrivate() const{ return nullptr; }
UGameplayTagContainerViewModel& UOnlineUserBackendLinkPrivate::GetMutableTagContainer(){ return *NewObject<UGameplayTagContainerViewModel>(); }
