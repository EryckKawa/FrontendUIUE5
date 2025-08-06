
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_OptionsDetailView.generated.h"

class UCommonTextBlock;
class UCommonLazyImage;
class UCommonRichTextBlock;
class UListDataObject_Base;
/**
 * 
 */
UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class FRONTENDUI_API UWidget_OptionsDetailView : public UUserWidget
{
	GENERATED_BODY()

public:
	void UpdateDetailsViewInfo(UListDataObject_Base* InDataObject,const FString& InEntryWidgetClassName = FString());
	void ClearDetailsViewInfo();

protected:
	//~ Begin UUserWidget Interface
	virtual void NativeOnInitialized() override;
	//~ End UUserWidget Interface

private:
	//***** Bound Widgets *****//
	
	UPROPERTY(meta = (BindWidget))
	UCommonTextBlock* CommonTextBlock_Title;

	UPROPERTY(meta = (BindWidget))
	UCommonLazyImage* CommonLazyImage_DescriptionImage;

	UPROPERTY(meta = (BindWidget))
	UCommonRichTextBlock* CommonRichText_Description;

	UPROPERTY(meta = (BindWidget))
	UCommonRichTextBlock* CommonRichText_DynamicDetails;

	UPROPERTY(meta = (BindWidget))
	UCommonRichTextBlock* CommonRichText_DisabledReason;
	//***** Bound Widgets *****//

	
};
