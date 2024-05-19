using UnrealBuildTool;

public class DuckAnalytics : ModuleRules {
    public DuckAnalytics(TargetInfo Target) {
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Duck",
            "Engine",
        });
    }
}
