#include "DuckModule.h"
#include "DemoBoardReflectorLight.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectionalLightComponent -FallbackName=DirectionalLightComponent

ADemoBoardReflectorLight::ADemoBoardReflectorLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLightComponent"));
    this->DirectionalLightComponent = (UDirectionalLightComponent*)RootComponent;
    this->bStageBoardReflectorLightOff = true;
}


