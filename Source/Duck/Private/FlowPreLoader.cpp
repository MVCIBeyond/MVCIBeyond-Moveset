#include "DuckModule.h"
#include "FlowPreLoader.h"

AFlowPreLoader::AFlowPreLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFlowPreLoader::RequestUnloadSpecifiedName(const FString& PackName) {
}

void AFlowPreLoader::RequestUnload() {
}

bool AFlowPreLoader::RequestAsyncLoad(const FString& PackName, EDuckLoadPrio Prio) {
    return false;
}

bool AFlowPreLoader::IsAsyncLoadEnd() const {
    return false;
}


