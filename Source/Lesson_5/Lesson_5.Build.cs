// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lesson_5 : ModuleRules
{
	public Lesson_5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
