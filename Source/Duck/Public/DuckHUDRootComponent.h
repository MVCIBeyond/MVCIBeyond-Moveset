#pragma once
#include "Engine.h"
#include "Components/SceneComponent.h"
#include "DuckHUDRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DUCK_API UDuckHUDRootComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UDuckHUDRootComponent(const FObjectInitializer& ObjectInitializer);

};

