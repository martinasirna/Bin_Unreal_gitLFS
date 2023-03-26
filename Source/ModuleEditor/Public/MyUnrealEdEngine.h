// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/UnrealEdEngine.h"
#include "MyUnrealEdEngine.generated.h"

/**
 * 
 */
UCLASS()
class MODULEEDITOR_API UMyUnrealEdEngine : public UUnrealEdEngine
{
	GENERATED_BODY()
	void UMyEdEngine::Init(IEngineLoop* InEngineLoop);
};
