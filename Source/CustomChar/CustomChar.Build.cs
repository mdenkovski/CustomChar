// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CustomChar : ModuleRules
{
	public CustomChar(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
