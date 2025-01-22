// This file has been automatically generated by the Unreal Header Implementation tool

#include "Controller/FGServerSaveGameController.h"

#include "Server/FGDSSharedTypes.h"

FFGServerErrorResponse UFGServerSaveGameController::Handler_CreateNewGame(const FFGServerNewGameData& NewGameData) const { return FFGServerErrorResponse(); }
void UFGServerSaveGameController::Handler_SaveGame(const FString& SaveName, const FFGRequestHandlerContextWrapper& Context) const {}
void UFGServerSaveGameController::Handler_DeleteSaveFile(const FString& SaveName, const FFGRequestHandlerContextWrapper& Context) {}
void UFGServerSaveGameController::Handler_DeleteSaveSession(const FString& SessionName, const FFGRequestHandlerContextWrapper& Context) {}
void UFGServerSaveGameController::Handler_EnumerateSessions(const FFGRequestHandlerContextWrapper& Context) {}
FFGServerErrorResponse UFGServerSaveGameController::Handler_LoadGame(const FString& SaveName, bool bEnableAdvancedGameSettings) const {	return FFGServerErrorResponse(); }
FFGServerErrorResponse UFGServerSaveGameController::Handler_UploadSaveGame(const FString& SaveName,	const FFGMultipartDataWrapper& SaveGameFile, bool bLoadSaveGame, bool bEnableAdvancedGameSettings) const { return FFGServerErrorResponse(); }
FFGServerErrorResponse UFGServerSaveGameController::Handler_DownloadSaveGame(const FString& SaveName, FFGFileResponseWrapper& OutFileResponse) const { return FFGServerErrorResponse(); }
