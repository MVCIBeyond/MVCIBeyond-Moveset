using UnrealBuildTool;

public class Duck : ModuleRules {
    public Duck(TargetInfo Target) {
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CableComponent",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "InputCore",
            "LevelSequence",
            "OnlineSubsystemDuck",
            "UMG",
        });
    }
}
