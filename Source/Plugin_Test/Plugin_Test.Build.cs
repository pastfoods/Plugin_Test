// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Plugin_Test : ModuleRules
{
	public Plugin_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","Test" });
	}
}
