// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "Components/ActorComponent.h"
#include "Inventory.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREALRPG_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Inventory")
	FInventory Inventory;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	FItemBase GetItemById(int32 index);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool IsItemExist(int32 index);

	// network
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
