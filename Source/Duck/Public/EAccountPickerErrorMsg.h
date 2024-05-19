#pragma once
#include "Engine.h"
#include "EAccountPickerErrorMsg.generated.h"

UENUM()
enum class EAccountPickerErrorMsg : uint8 {
    ACCOUNT_PICKER_ERROR_NO_PRIMARY,
    ACCOUNT_PICKER_ERROR_SIGN_OUT,
    ACCOUNT_PICKER_ERROR_DISCONNECT,
    ACCOUNT_PICKER_ERROR_GUESTACCOUNT,
    ACCOUNT_PICKER_ERROR_CHANGE,
    ACCOUNT_PICKER_ERROR_PAD_MAP,
};

