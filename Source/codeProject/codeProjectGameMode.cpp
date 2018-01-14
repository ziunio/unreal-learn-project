// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "codeProjectGameMode.h"
#include "codeProjectHUD.h"
#include "codeProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcodeProjectGameMode::AcodeProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AcodeProjectHUD::StaticClass();
}
