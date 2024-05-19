#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "DemoCamera.generated.h"

class UDemoCineCameraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DUCK_API ADemoCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDemoCineCameraComponent* CameraComponent;
    
    ADemoCamera(const FObjectInitializer& ObjectInitializer);

};

