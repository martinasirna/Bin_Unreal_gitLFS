// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModuleEditor : ModuleRules
{
	public ModuleEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Kraken" });

		PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd"  });

		PublicIncludePaths.AddRange(new string[]{"ModuleEditor/Public"});

        PrivateIncludePaths.AddRange(new string[]{"ModuleEditor/Private"});


        

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

