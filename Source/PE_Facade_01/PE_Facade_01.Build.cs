// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PE_Facade_01 : ModuleRules
{
	public PE_Facade_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
