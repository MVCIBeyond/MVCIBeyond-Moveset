#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "DuckMobCharacter.generated.h"

class UDuckSkeletalMeshComponent;

UCLASS(Blueprintable)
class DUCK_API ADuckMobCharacter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDuckSkeletalMeshComponent* SkeletalMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldTickViewPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendAlphaMotion;
    
public:
    ADuckMobCharacter(const FObjectInitializer& ObjectInitializer);

};

