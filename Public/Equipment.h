// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "ItemBase.h"
#include "Inventory.h"
#include "Equipment.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ESlotType : uint8
{
	ST_Head =0	UMETA(DisplayName = "Head"),
	ST_Body 	UMETA(DisplayName = "Body"),
	ST_Legs	UMETA(DisplayName = "Legs"),
	ST_Feet	UMETA(DisplayName = "Feet"),
	ST_Shoulder	UMETA(DisplayName = "Shoulder"),
	ST_LeftHand	UMETA(DisplayName = "LeftHand"),
	ST_RightHand	UMETA(DisplayName = "RightHand"),
	ST_Back	UMETA(DisplayName = "Back"),
	ST_Count UMETA(DisplayName = "Count")
};

USTRUCT(BlueprintType)
struct FEquipment : public FInventory
{
	GENERATED_USTRUCT_BODY()

	FEquipment()
	{
		Items.SetNumZeroed((int32)ESlotType::ST_Count);
	}

	// SetArm()
	// GetArm()
};

/*
* The container of items for a player
*/
// UCLASS()
// class UNREALRPG_API UEquipment : public UInventory
// {
// 	GENERATED_BODY()
// public:
// 	
// 	TArray<TSharedPtr<FItemBase>> Items;
// 
// 	UEquipment()
// 	{
// 		Items.SetNumZeroed((int32)ESlotType::ST_Count);
// 	}
// 
// 	//UFUNCTION(BlueprintCallable, Category = "EquipmentSystem")
// // 	TSharedPtr<FItemBase> GetItemAt(int32 id);
// // 
// // 	TSharedPtr<FItemBase> SwapItemAt(int32 id, TSharedPtr<FItemBase> item);
// // 
// // 	int32 GetMaxCount();
// };