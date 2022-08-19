// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lesson_5GameMode.h"
#include "Lesson_5Character.h"
#include "UObject/ConstructorHelpers.h"

ALesson_5GameMode::ALesson_5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
