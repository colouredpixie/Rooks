// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Rooks : ModuleRules
{
	public Rooks(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayTasks", "NavigationSystem" });
	}
}
