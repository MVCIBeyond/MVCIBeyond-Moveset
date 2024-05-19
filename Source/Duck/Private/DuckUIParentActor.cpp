#include "DuckModule.h"
#include "DuckUIParentActor.h"

ADuckUIParentActor::ADuckUIParentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
}


void ADuckUIParentActor::SetCtrlFlg_DetachDisable(bool FlgOn) {
}


void ADuckUIParentActor::ChildComSetVisibility(USceneComponent* pCom, bool flgVisibleOn, bool flgPropagateChildren) {
}

void ADuckUIParentActor::ChildComReflectStockParamAll() {
}

void ADuckUIParentActor::ChildComReflectStockParam(USceneComponent* pCom) {
}

void ADuckUIParentActor::ChildComInitialize() {
}

void ADuckUIParentActor::ChildComFinalize() {
}

void ADuckUIParentActor::ChildComCaptureStockParam() {
}


