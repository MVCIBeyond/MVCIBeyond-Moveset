using UnrealBuildTool;

public class OnlineSubsystemDuck : ModuleRules {
    public OnlineSubsystemDuck(TargetInfo Target) {
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Duck",
            "Engine",
        });
    }
}
