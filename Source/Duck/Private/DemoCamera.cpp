#include "DuckModule.h"
#include "DemoCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "DuckModule.h"
#include "DemoCineCameraComponent.h"

ADemoCamera::ADemoCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
    this->CameraComponent = CreateDefaultSubobject<UDemoCineCameraComponent>(TEXT("CameraComponent"));
    this->CameraComponent->SetupAttachment(RootComponent);
}


