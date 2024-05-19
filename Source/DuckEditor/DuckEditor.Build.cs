using UnrealBuildTool;

public class DuckEditor : ModuleRules {
	public DuckEditor(TargetInfo Target)
    {
        PrivateIncludePaths.Add("DuckEditor/Private");
        
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Slate",
            "SlateCore",
            "Json",
            "JsonUtilities",
            "UnrealEd",
            "Duck",
        });
        
        PrivateIncludePathModuleNames.AddRange(
            new string[] {
                "AssetTools"
            }
        );
    }
}
