// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatisticComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SFLPROJECT_API UStatisticComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UStatisticComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = SFL)
	float CurrentStamina;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = SFL) 	
	float MaxStamina;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//VOID = NESSUN TIPO DI RITORNO

	UFUNCTION(BlueprintCallable, Category = SFL) 	
	void ModifyStamina(float additiveValue);

};
