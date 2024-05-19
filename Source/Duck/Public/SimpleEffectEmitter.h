#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "SimpleEffectEmitter.generated.h"

class UDuckParticleSystemComponent;

UCLASS(Blueprintable)
class DUCK_API ASimpleEffectEmitter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDuckParticleSystemComponent* ParticleComponent;
    
    ASimpleEffectEmitter(const FObjectInitializer& ObjectInitializer);

};

