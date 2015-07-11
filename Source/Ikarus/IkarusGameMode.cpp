// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Ikarus.h"
#include "IkarusGameMode.h"
#include "IkarusPawn.h"

AIkarusGameMode::AIkarusGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AIkarusPawn::StaticClass();
}
