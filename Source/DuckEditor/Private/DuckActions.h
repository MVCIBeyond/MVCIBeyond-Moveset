// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Developer/AssetTools/Public/AssetTypeActions_Base.h"

class FCharacterAsset_AssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterAsset_AssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	virtual UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual uint32 GetCategories() override;
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return true; };
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};
