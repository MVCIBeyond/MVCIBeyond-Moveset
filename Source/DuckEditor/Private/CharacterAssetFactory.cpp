// Fill out your copyright notice in the Description page of Project Settings.

#include "DuckEditorModule.h"
#include "CharacterAssetFactory.h"

#include "CharacterAsset.h"
#include "CharacterAssetJson.h"
#include "Editor.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"

UCharacterAssetFactory::UCharacterAssetFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterAsset::StaticClass();
}

UObject* UCharacterAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterAsset>(InParent, Class, Name, Flags);
}

UCharacterAssetFactoryBinary::UCharacterAssetFactoryBinary()
{
	Formats.Add(FString(TEXT("casset;")) + NSLOCTEXT("UCharacterAssetFactoryBinary", "FormatCAsset", "CAsset").ToString());
	SupportedClass = UCharacterAsset::StaticClass();
	bCreateNew = false;
	bEditorImport = true;
}

UObject* UCharacterAssetFactoryBinary::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn,
	bool& bOutOperationCanceled)
{
	UCharacterAsset* CharacterAsset = NewObject<UCharacterAsset>(InParent, InClass, InName, Flags);
	FString JsonString;

	if (FFileHelper::LoadFileToString(JsonString, *CurrentFilename))
	{
		TSharedPtr<FJsonObject> JsonObject;
		const auto Reader = TJsonReaderFactory<>::Create(JsonString);
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{
			FCharacterAssetJson AssetJson = FCharacterAssetJson();	
			FJsonObjectConverter::JsonObjectToUStruct(JsonObject.ToSharedRef(), FCharacterAssetJson::StaticStruct(), &AssetJson, 0, 0);

			CharacterAsset->ProjectileDataList = AssetJson.ProjectileDataList;
			CharacterAsset->AttackDataList = AssetJson.AttackDataList;
			CharacterAsset->UniqueCollisionParamList = AssetJson.UniqueCollisionParamList;
			CharacterAsset->PushCollisionParamList = AssetJson.PushCollisionParamList;
			CharacterAsset->CaughtCollisionParamList = AssetJson.CaughtCollisionParamList;
			CharacterAsset->LegCollisionParamList = AssetJson.LegCollisionParamList;
			CharacterAsset->BodyCollisionParamList = AssetJson.BodyCollisionParamList;
			CharacterAsset->HeadCollisionParamList = AssetJson.HeadCollisionParamList;
			CharacterAsset->AtemiCollisionParamList = AssetJson.AtemiCollisionParamList;
			CharacterAsset->CatchCollisionParamList = AssetJson.CatchCollisionParamList;
			CharacterAsset->AttackCollisionParamList = AssetJson.AttackCollisionParamList;
			CharacterAsset->CommandGroup = AssetJson.CommandGroup;
			CharacterAsset->TriggerGroup = AssetJson.TriggerGroup;
			CharacterAsset->Trigger = AssetJson.Trigger;
			CharacterAsset->StyleList = AssetJson.StyleList;
			CharacterAsset->UniqueCollisionIndexList = AssetJson.UniqueCollisionIndexList;
			CharacterAsset->PushCollisionIndexList = AssetJson.PushCollisionIndexList;
			CharacterAsset->DamageCollisionIndexList = AssetJson.DamageCollisionIndexList;
			CharacterAsset->AttackCollisionIndexList = AssetJson.AttackCollisionIndexList;
			CharacterAsset->BattleVersion = AssetJson.BattleVersion;
			CharacterAsset->VersionMMDDHHMM = AssetJson.VersionMMDDHHMM;
			CharacterAsset->VersionYYYY = AssetJson.VersionYYYY;
		}
	}

	bOutOperationCanceled = false;
	
	return CharacterAsset;
}