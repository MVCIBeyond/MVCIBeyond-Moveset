#include "OnlineSubsystemDuckModule.h"
#include "ErrorManagerDuck.h"

UErrorManagerDuck::UErrorManagerDuck() {
}

UErrorManagerDuck* UErrorManagerDuck::SetUpNetworkErrorManager() {
    return NULL;
}

bool UErrorManagerDuck::IsDispErrorDialog() {
    return false;
}

void UErrorManagerDuck::DispUGCErrorDialog() {
}


