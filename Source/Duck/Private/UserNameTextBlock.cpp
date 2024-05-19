#include "DuckModule.h"
#include "UserNameTextBlock.h"

UUserNameTextBlock::UUserNameTextBlock() {
    this->IsUseMaxXSize = false;
    this->MaxXSize = 120.00f;
    this->OverrideJustification = EForceJustification::UseDefault;
}

void UUserNameTextBlock::SetUserNameTrimSuffix(const FText& UserName) {
}


