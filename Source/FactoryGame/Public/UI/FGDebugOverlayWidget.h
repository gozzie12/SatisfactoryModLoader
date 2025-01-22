// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FGDebugOverlayWidget.generated.h"

UENUM( BlueprintType )
enum class EDebugOverlayType : uint8
{
	DOT_Default,
    DOT_Story,
	DOT_Options,
	DOT_Statistics,
	DOT_ShoppingList,
	DOT_AdvancedGameSettings,
	DOT_OnlineInfo
};

/**
 * 
 */
UCLASS()
class FACTORYGAME_API UFGDebugOverlayWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	// Begin UUsserwidget interface 
	void AddToViewport(int32 ZOrder);
	bool AddToPlayerScreen(int32 ZOrder);
	virtual void RemoveFromParent() override;
	// End UUserwidget interface
	
	UFUNCTION()
    void UpdateDebugOverlay();

	void SetDebugOverlayType( EDebugOverlayType type );

	UFUNCTION( BlueprintPure, Category = "Debug" )
	FORCEINLINE EDebugOverlayType GetCurrentDebugOverlayType() const { return mCurrentDebugOverlayType; }

protected:
	UFUNCTION()
    void GetDefaultOverlayData( TArray<FString>& out_debugOverlayData );

	UFUNCTION()
	void GetStoryOverlayData( TArray<FString>& out_debugOverlayData );

	UFUNCTION()
	void GetOptionsOverlayData( TArray<FString>& out_debugOverlayData );

	UFUNCTION()
	void GetStatisticsOverlayData( TArray<FString>& out_debugOverlayData );
	
	UFUNCTION()
	void GetShoppingListOverlayData( TArray<FString>& out_debugOverlayData );

	UFUNCTION()
	void GetAdvancedGameSettingsOverlayData( TArray<FString>& out_debugOverlayData );

	UFUNCTION()
	void GetOnlineInfoOverlayData( TArray<FString>& out_debugOverlayData );
	
	UFUNCTION( BlueprintImplementableEvent, Category = "Debug" )
	void UpdateDebugOverlayData( const TArray<FString>& debugOverlayData );

private:
	void KickOffUpdateTimer();

	FTimerHandle mUpdateDebugOverlayTimerHandle;

	EDebugOverlayType mCurrentDebugOverlayType;
};
