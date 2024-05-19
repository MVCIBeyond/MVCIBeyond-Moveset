#include "DuckModule.h"
#include "UIMenuItemDataAsset.h"

UUIMenuItemDataAsset::UUIMenuItemDataAsset() {
    this->ItemID = EUIMenuItemID::None;
    this->SubID = EUIMenuItemID_SubID::Default;
    this->ItemType = EUIMenuItemType::None;
    this->ItemName = FText::FromString(TEXT("NewItem"));
    this->DefaultValue = 0;
    this->MaxValue = 0;
}


