// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SluaTestCase.generated.h"

/**
 * 
 */
UCLASS()
class CLIFFGAME_API USluaTestCase : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		static void StaticFunc();


	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		TArray<int> GetArray();

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		TArray<FString> GetArrayStr();

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		void SetArrayStr(const TArray<FString>& array);



	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		UUserWidget* GetWidget(FString name);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		void TwoArgs(FString a, int b, float c, FString d, UObject* widget);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		void SetButton(UUserWidget* widget);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		FVector TestStruct(FVector v, ESlateVisibility e, FVector& v2, int i, int& i2, FString str);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		int TestInt_int(int i);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		FString TestIntStr_Str(int i, FString s);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		ESlateVisibility TestIntStrEnum_Enum(int i, FString s, ESlateVisibility e);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		TArray<int> TestIntStrEnum_Arr(int i, FString s, ESlateVisibility e);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		void TestOIntOStrOEnum(int i, int& oi, FString s, FString& os, ESlateVisibility e, ESlateVisibility& oe);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		FSlateBrush GetBrush();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, meta = (DisplayName = "Brush"))
		FSlateBrush Brush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance, meta = (DisplayName = "Value"))
		int Value;


	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetClassLoaded, int, P);

	UFUNCTION(BlueprintCallable, Category = "Lua|TestCase")
		static void LoadAssetClass(FOnAssetClassLoaded OnLoaded);

	static void callback();
	
	
	
};
