// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUnrealEdEngine.h"

#include "ISourceControlModule.h"
#include "ISourceControlProvider.h"

void UMyEdEngine::Init(IEngineLoop* InEngineLoop)
{
	Super::Init(InEngineLoop);

	// Register state branches
	const ISourceControlModule& SourceControlModule = ISourceControlModule::Get();
	{
		ISourceControlProvider& SourceControlProvider = SourceControlModule.GetProvider();
		const TArray<FString> Branches {"origin/develop", "origin/promoted", "origin/feature/user1", "origin/feature/user2"};
		SourceControlProvider.RegisterStateBranches(Branches, TEXT("Content"));
	}
}