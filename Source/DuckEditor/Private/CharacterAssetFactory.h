// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "CharacterAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharacterAssetFactory : public UFactory
{
	GENERATED_BODY()
	
	UCharacterAssetFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
	
};

/**
 * 
 */
UCLASS()
class UCharacterAssetFactoryBinary : public UFactory
{
	GENERATED_BODY()
	
	UCharacterAssetFactoryBinary();

	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
	// End UFactory Interface
	
};
