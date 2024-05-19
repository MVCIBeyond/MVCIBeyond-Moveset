// Fill out your copyright notice in the Description page of Project Settings.

#include "DuckEditorModule.h"
#include "DuckActions.h"

#include "CharacterAsset.h"
#include "CharacterAssetJson.h"
#include "EditorDirectories.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

#define LOCTEXT_NAMESPACE "DuckAssetTypeActions"

FColor MainColor = FColor(129, 196, 115);

FCharacterAsset_AssetTypeActions::FCharacterAsset_AssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterAsset_AssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterAsset_AssetTypeActions::GetSupportedClass() const
{
	return UCharacterAsset::StaticClass();
}

FText FCharacterAsset_AssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterAsset_AssetTypeActions", "Character Asset");
}

FColor FCharacterAsset_AssetTypeActions::GetTypeColor() const
{
	return FColor::Red;
}

uint32 FCharacterAsset_AssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Basic | MyAssetCategory;
}

void FCharacterAsset_AssetTypeActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	FAssetTypeActions_Base::GetActions(InObjects, MenuBuilder);

	auto CharacterAssets = GetTypedWeakObjectPtrs<UCharacterAsset>(InObjects);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("CharacterAsset_ExportJson", "Export CAsset"),
		LOCTEXT("CharacterAsset_ExportJsonToolTip", "Exports the asset to a CAsset file that can be reimported. Saves in same location and with same base name as original asset."),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateLambda([=]{
				IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
				if (!DesktopPlatform)
				{
					return;
				}

                for (auto& CharacterAsset : CharacterAssets)
                {
                    if (CharacterAsset.IsValid())
                    {
                    	
                    	FCharacterAssetJson AssetJson = FCharacterAssetJson();
                    	AssetJson.ProjectileDataList = CharacterAsset->ProjectileDataList;
						AssetJson.AttackDataList = CharacterAsset->AttackDataList;
						AssetJson.UniqueCollisionParamList = CharacterAsset->UniqueCollisionParamList;
						AssetJson.PushCollisionParamList = CharacterAsset->PushCollisionParamList;
						AssetJson.CaughtCollisionParamList = CharacterAsset->CaughtCollisionParamList;
						AssetJson.LegCollisionParamList = CharacterAsset->LegCollisionParamList;
						AssetJson.BodyCollisionParamList = CharacterAsset->BodyCollisionParamList;
						AssetJson.HeadCollisionParamList = CharacterAsset->HeadCollisionParamList;
						AssetJson.AtemiCollisionParamList = CharacterAsset->AtemiCollisionParamList;
						AssetJson.CatchCollisionParamList = CharacterAsset->CatchCollisionParamList;
						AssetJson.AttackCollisionParamList = CharacterAsset->AttackCollisionParamList;
						AssetJson.CommandGroup = CharacterAsset->CommandGroup;
						AssetJson.TriggerGroup = CharacterAsset->TriggerGroup;
						AssetJson.Trigger = CharacterAsset->Trigger;
						AssetJson.StyleList = CharacterAsset->StyleList;
						AssetJson.UniqueCollisionIndexList = CharacterAsset->UniqueCollisionIndexList;
						AssetJson.PushCollisionIndexList = CharacterAsset->PushCollisionIndexList;
						AssetJson.DamageCollisionIndexList = CharacterAsset->DamageCollisionIndexList;
						AssetJson.AttackCollisionIndexList = CharacterAsset->AttackCollisionIndexList;
						AssetJson.BattleVersion = CharacterAsset->BattleVersion;
						AssetJson.VersionMMDDHHMM = CharacterAsset->VersionMMDDHHMM;
						AssetJson.VersionYYYY = CharacterAsset->VersionYYYY;

                    	FString OutJson;

                    	FJsonObjectConverter::UStructToJsonObjectString(AssetJson, OutJson);

                    	FText Title = FText::FromString("casset");
						FString TitleExtensions = TEXT("*.casset");

						FString path = CharacterAsset->GetPathName();
						
						FString name = CharacterAsset->GetName();

						path = FPaths::ChangeExtension(path, ".casset");
						path.RemoveFromStart("/Game");
						
						FString FullPath = FPaths::Combine(FPaths::GameContentDir(), path);

						UE_LOG(LogTemp, Display, TEXT("Saving Asset to %s"), *FullPath);
						const TCHAR* text = *FullPath;

						if (FFileHelper::SaveStringToFile(OutJson, text)) {
							FNotificationInfo Info(LOCTEXT("Saved_casset_notification", "Saved casset"));

							//Set a default expire duration
							Info.ExpireDuration = 5.0f;

							//And call Add Notification, this is pretty much it!
							FSlateNotificationManager::Get().AddNotification(Info);
						}
						else {
							FNotificationInfo Info(LOCTEXT("Saved_casset_notification", "casset failed to Save"));

							//Set a default expire duration
							Info.ExpireDuration = 5.0f;

							//And call Add Notification, this is pretty much it!
							FSlateNotificationManager::Get().AddNotification(Info);

						}

                    }
                }
            }),

            FCanExecuteAction::CreateLambda([=] {
                for (auto& CharacterAsset : CharacterAssets)
                {
                    if (CharacterAsset.IsValid())
                    {
                        return true;
                    }
                }
                return false;
            })
		)
	);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("CharacterAsset_ExportJson_As", "Export CAsset As"),
		LOCTEXT("CharacterAsset_ExportJsonAs_ToolTip", "Exports the asset to a CAsset file that can be reimported. Allows user to select destination"),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateLambda([=] {
		IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
		if (!DesktopPlatform)
		{
			return;
		}

		for (auto& CharacterAsset : CharacterAssets)
		{
			if (CharacterAsset.IsValid())
			{

				FCharacterAssetJson AssetJson = FCharacterAssetJson();
				AssetJson.ProjectileDataList = CharacterAsset->ProjectileDataList;
				AssetJson.AttackDataList = CharacterAsset->AttackDataList;
				AssetJson.UniqueCollisionParamList = CharacterAsset->UniqueCollisionParamList;
				AssetJson.PushCollisionParamList = CharacterAsset->PushCollisionParamList;
				AssetJson.CaughtCollisionParamList = CharacterAsset->CaughtCollisionParamList;
				AssetJson.LegCollisionParamList = CharacterAsset->LegCollisionParamList;
				AssetJson.BodyCollisionParamList = CharacterAsset->BodyCollisionParamList;
				AssetJson.HeadCollisionParamList = CharacterAsset->HeadCollisionParamList;
				AssetJson.AtemiCollisionParamList = CharacterAsset->AtemiCollisionParamList;
				AssetJson.CatchCollisionParamList = CharacterAsset->CatchCollisionParamList;
				AssetJson.AttackCollisionParamList = CharacterAsset->AttackCollisionParamList;
				AssetJson.CommandGroup = CharacterAsset->CommandGroup;
				AssetJson.TriggerGroup = CharacterAsset->TriggerGroup;
				AssetJson.Trigger = CharacterAsset->Trigger;
				AssetJson.StyleList = CharacterAsset->StyleList;
				AssetJson.UniqueCollisionIndexList = CharacterAsset->UniqueCollisionIndexList;
				AssetJson.PushCollisionIndexList = CharacterAsset->PushCollisionIndexList;
				AssetJson.DamageCollisionIndexList = CharacterAsset->DamageCollisionIndexList;
				AssetJson.AttackCollisionIndexList = CharacterAsset->AttackCollisionIndexList;
				AssetJson.BattleVersion = CharacterAsset->BattleVersion;
				AssetJson.VersionMMDDHHMM = CharacterAsset->VersionMMDDHHMM;
				AssetJson.VersionYYYY = CharacterAsset->VersionYYYY;

				FString OutJson;

				FJsonObjectConverter::UStructToJsonObjectString(AssetJson, OutJson);

				FText Title = FText::FromString("casset");
				FString TitleExtensions = TEXT("*.casset");

				TArray<FString> OutFiles;
				const FString Filter = FString::Printf(TEXT("%s files (%s)|%s"), *Title.ToString(), *TitleExtensions, *TitleExtensions);
				const FString DefaultPath = FEditorDirectories::Get().GetLastDirectory(ELastDirectory::GENERIC_OPEN);

				if (DesktopPlatform->SaveFileDialog(nullptr, FText::Format(LOCTEXT("CAssetPickerDialogTitle", "Choose a {0} file"), Title).ToString(), DefaultPath, TEXT(""), Filter, EFileDialogFlags::None, OutFiles))
				{
					FString SourceImagePath = FPaths::ConvertRelativePathToFull(OutFiles[0]);
					FEditorDirectories::Get().SetLastDirectory(ELastDirectory::GENERIC_OPEN, FPaths::GetPath(SourceImagePath));

					FFileHelper::SaveStringToFile(OutJson, *OutFiles[0]);
				}
			}
		}
	}),
			FCanExecuteAction::CreateLambda([=] {
		for (auto& CharacterAsset : CharacterAssets)
		{
			if (CharacterAsset.IsValid())
			{
				return true;
			}
		}
		return false;
	})
		)
	);
}

#undef LOCTEXT_NAMESPACE
