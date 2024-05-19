#include "DuckModule.h"
#include "MoviePlayBase.h"

#include "ManaComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=ManaComponent -FallbackName=ManaComponent

AMoviePlayBase::AMoviePlayBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mpManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("ManaComponent"));
}

void AMoviePlayBase::UpdateManualTimerSyncSound() {
}



void AMoviePlayBase::SetLoop(bool IsLoop) {
}










int32 AMoviePlayBase::GetMovieLastFrame() const {
    return 0;
}



