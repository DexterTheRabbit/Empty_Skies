// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Empty_Skies : ModuleRules
{
    public Empty_Skies(TargetInfo Target)
    {
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        //Uncomment if you are using online features
        PublicDependencyModuleNames.AddRange(new string[] { "OnlineSubsystem","OnlineSubsystemUtils"});
        DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");

    }
}
